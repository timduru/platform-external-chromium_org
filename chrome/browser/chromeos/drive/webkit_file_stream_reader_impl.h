// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_CHROMEOS_DRIVE_WEBKIT_FILE_STREAM_READER_IMPL_H_
#define CHROME_BROWSER_CHROMEOS_DRIVE_WEBKIT_FILE_STREAM_READER_IMPL_H_

#include "base/basictypes.h"
#include "base/files/file_path.h"
#include "base/memory/ref_counted.h"
#include "base/memory/scoped_ptr.h"
#include "base/memory/weak_ptr.h"
#include "base/time/time.h"
#include "chrome/browser/chromeos/drive/drive_file_stream_reader.h"
#include "net/base/completion_callback.h"
#include "webkit/browser/blob/file_stream_reader.h"

namespace base {
class SequencedTaskRunner;
}  // namespace base

namespace drive {

class ResourceEntry;

namespace internal {

// The implementation of webkit_blob::FileStreamReader for drive file system.
// webkit_blob::FileStreamReader does not provide a way for explicit
// initialization, hence the initialization of this class will be done lazily.
// Note that when crbug.com/225339 is resolved, this class will be also
// initialized explicitly.
class WebkitFileStreamReaderImpl : public webkit_blob::FileStreamReader {
 public:
  WebkitFileStreamReaderImpl(
      const DriveFileStreamReader::FileSystemGetter& file_system_getter,
      base::SequencedTaskRunner* file_task_runner,
      const base::FilePath& drive_file_path,
      int64 offset,
      const base::Time& expected_modification_time);
  virtual ~WebkitFileStreamReaderImpl();

  // webkit_blob::FileStreamReader override.
  virtual int Read(net::IOBuffer* buffer,
                   int buffer_length,
                   const net::CompletionCallback& callback) OVERRIDE;
  virtual int64 GetLength(const net::Int64CompletionCallback& callback)
      OVERRIDE;

 private:
  // Called upon the initialization completion of |stream_reader_|.
  // Processes the result of the initialization with checking last
  // modified time, and calls |callback| with net::Error code as its result.
  void OnStreamReaderInitialized(
      const net::CompletionCallback& callback,
      int error,
      scoped_ptr<ResourceEntry> entry);

  // Part of Read(). Called after all the initialization process is completed.
  void ReadAfterStreamReaderInitialized(
      scoped_refptr<net::IOBuffer> buffer,
      int buffer_length,
      const net::CompletionCallback& callback,
      int initialization_result);

  // Part of GetLength(). Called after all the initialization process is
  // completed.
  void GetLengthAfterStreamReaderInitialized(
      const net::Int64CompletionCallback& callback,
      int initialization_result);

  scoped_ptr<DriveFileStreamReader> stream_reader_;
  const base::FilePath drive_file_path_;
  const int64 offset_;
  const base::Time expected_modification_time_;

  // This is available only after initialize is done.
  int64 file_size_;

  // This should remain the last member so it'll be destroyed first and
  // invalidate its weak pointers before other members are destroyed.
  base::WeakPtrFactory<WebkitFileStreamReaderImpl> weak_ptr_factory_;
  DISALLOW_COPY_AND_ASSIGN(WebkitFileStreamReaderImpl);
};

}  // namespace internal
}  // namespace drive

#endif  // CHROME_BROWSER_CHROMEOS_DRIVE_WEBKIT_FILE_STREAM_READER_IMPL_H_

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CORE_COMMON_FORM_DATA_H__
#define COMPONENTS_AUTOFILL_CORE_COMMON_FORM_DATA_H__

#include <vector>

#include "base/strings/string16.h"
#include "components/autofill/core/common/form_field_data.h"
#include "url/gurl.h"

namespace autofill {

// Holds information about a form to be filled and/or submitted.
struct FormData {
  FormData();
  FormData(const FormData& data);
  ~FormData();

  // Used by FormStructureTest.
  bool operator==(const FormData& form) const;
  bool operator!=(const FormData& form) const;

  // The name of the form.
  base::string16 name;
  // GET or POST.
  base::string16 method;
  // The URL (minus query parameters) containing the form.
  GURL origin;
  // The action target of the form.
  GURL action;
  // true if this form was submitted by a user gesture and not javascript.
  bool user_submitted;
  // A vector of all the input fields in the form.
  std::vector<FormFieldData> fields;
};

}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_COMMON_FORM_DATA_H__

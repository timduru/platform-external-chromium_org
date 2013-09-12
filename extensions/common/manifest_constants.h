// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MANIFEST_CONSTANTS_H_
#define EXTENSIONS_COMMON_MANIFEST_CONSTANTS_H_

// Keys used in JSON representation of extensions.
namespace extensions {
namespace manifest_keys {
  extern const char kAllFrames[];
  extern const char kAltKey[];
  extern const char kApp[];
  extern const char kBackgroundAllowJsAccess[];
  extern const char kBackgroundPage[];
  extern const char kBackgroundPageLegacy[];
  extern const char kBackgroundPersistent[];
  extern const char kBackgroundScripts[];
  extern const char kBrowserAction[];
  extern const char kBrowseURLs[];
  extern const char kChromeURLOverrides[];
  extern const char kCommands[];
  extern const char kContentPack[];
  extern const char kContentPackSites[];
  extern const char kContentScripts[];
  extern const char kContentSecurityPolicy[];
  extern const char kConvertedFromUserScript[];
  extern const char kCss[];
  extern const char kCtrlKey[];
  extern const char kCurrentLocale[];
  extern const char kDefaultLocale[];
  extern const char kDescription[];
  extern const char kDevToolsPage[];
  extern const char kDisplayInLauncher[];
  extern const char kDisplayInNewTabPage[];
  extern const char kEventName[];
  extern const char kExcludeGlobs[];
  extern const char kExcludeMatches[];
  extern const char kExport[];
  extern const char kExternallyConnectable[];
  extern const char kFileAccessList[];
  extern const char kFileHandlers[];
  extern const char kFileHandlerExtensions[];
  extern const char kFileHandlerTitle[];
  extern const char kFileHandlerTypes[];
  extern const char kFileFilters[];
  extern const char kFileBrowserHandlers[];
  extern const char kMediaGalleriesHandlers[];
  extern const char kHomepageURL[];
  extern const char kIcons[];
  extern const char kId[];
  extern const char kImport[];
  extern const char kIncognito[];
  extern const char kIncludeGlobs[];
  extern const char kInputComponents[];
  extern const char kIntentDisposition[];
  extern const char kIntentHref[];
  extern const char kIntentPath[];
  extern const char kIntents[];
  extern const char kIntentTitle[];
  extern const char kIntentType[];
  extern const char kIsolation[];
  extern const char kJs[];
  extern const char kKey[];
  extern const char kKeycode[];
  extern const char kKioskEnabled[];
  extern const char kLanguage[];
  extern const char kLaunch[];
  extern const char kLaunchContainer[];
  extern const char kLaunchHeight[];
  extern const char kLaunchLocalPath[];
  extern const char kLaunchWebURL[];
  extern const char kLaunchWidth[];
  extern const char kLayouts[];
  extern const char kManifestVersion[];
  extern const char kMatches[];
  extern const char kMIMETypes[];
  extern const char kMimeTypesHandler[];
  extern const char kMinimumChromeVersion[];
  extern const char kMinimumVersion[];
  extern const char kNaClModules[];
  extern const char kNaClModulesMIMEType[];
  extern const char kNaClModulesPath[];
  extern const char kName[];
  extern const char kOAuth2[];
  extern const char kOAuth2AutoApprove[];
  extern const char kOAuth2ClientId[];
  extern const char kOAuth2Scopes[];
  extern const char kOfflineEnabled[];
  extern const char kOmnibox[];
  extern const char kOmniboxKeyword[];
  extern const char kOptionalPermissions[];
  extern const char kOptionsPage[];
  extern const char kPageAction[];
  extern const char kPageActionDefaultIcon[];
  extern const char kPageActionDefaultPopup[];
  extern const char kPageActionDefaultTitle[];
  extern const char kPageActionIcons[];
  extern const char kPageActionId[];
  extern const char kPageActionPopup[];
  extern const char kPageActionPopupPath[];
  extern const char kPageActions[];
  extern const char kPermissions[];
  extern const char kPlatformAppBackground[];
  extern const char kPlatformAppBackgroundPage[];
  extern const char kPlatformAppBackgroundScripts[];
  extern const char kPlatformAppContentSecurityPolicy[];
  extern const char kPlugins[];
  extern const char kPluginsPath[];
  extern const char kPluginsPublic[];
  extern const char kPublicKey[];
  extern const char kResources[];
  extern const char kRequirements[];
  extern const char kRunAt[];
  extern const char kSandboxedPages[];
  extern const char kSandboxedPagesCSP[];
  extern const char kScriptBadge[];
  extern const char kShiftKey[];
  extern const char kShortcutKey[];
  extern const char kShortName[];
  extern const char kSignature[];
  extern const char kSpellcheck[];
  extern const char kSpellcheckDictionaryFormat[];
  extern const char kSpellcheckDictionaryLanguage[];
  extern const char kSpellcheckDictionaryLocale[];
  extern const char kSpellcheckDictionaryPath[];
  extern const char kStorageManagedSchema[];
  extern const char kSuggestedKey[];
  extern const char kSystemIndicator[];
  extern const char kTheme[];
  extern const char kThemeColors[];
  extern const char kThemeDisplayProperties[];
  extern const char kThemeImages[];
  extern const char kThemeTints[];
  extern const char kTtsEngine[];
  extern const char kTtsGenderFemale[];
  extern const char kTtsGenderMale[];
  extern const char kTtsVoices[];
  extern const char kTtsVoicesEventTypeEnd[];
  extern const char kTtsVoicesEventTypeError[];
  extern const char kTtsVoicesEventTypeMarker[];
  extern const char kTtsVoicesEventTypeSentence[];
  extern const char kTtsVoicesEventTypeStart[];
  extern const char kTtsVoicesEventTypeWord[];
  extern const char kTtsVoicesEventTypes[];
  extern const char kTtsVoicesGender[];
  extern const char kTtsVoicesLang[];
  extern const char kTtsVoicesVoiceName[];
  extern const char kType[];
  extern const char kUpdateURL[];
  extern const char kUrlHandlers[];
  extern const char kUrlHandlerTitle[];
  extern const char kVersion[];
  extern const char kWebAccessibleResources[];
  extern const char kWebURLs[];
}  // namespace manifest_keys

namespace manifest_errors {
extern const char kPermissionUnknownOrMalformed[];
extern const char kUnrecognizedManifestKey[];
}  // namespace manifest_errors

}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MANIFEST_CONSTANTS_H_
//
//  Generated file. Do not edit.
//

// clang-format off

#include "generated_plugin_registrant.h"

#include <camera_windows/camera_windows.h>
#include <cbl_flutter_ee/cbl_flutter_ee.h>

void RegisterPlugins(flutter::PluginRegistry* registry) {
  CameraWindowsRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("CameraWindows"));
  CblFlutterEeRegisterWithRegistrar(
      registry->GetRegistrarForPlugin("CblFlutterEe"));
}

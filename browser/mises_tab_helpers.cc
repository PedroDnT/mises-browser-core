#include "mises/browser/mises_tab_helpers.h"


#include "base/command_line.h"
#include "base/feature_list.h"
#include "build/build_config.h"
#include "content/public/browser/browser_context.h"
#include "content/public/browser/web_contents.h"
#include "extensions/buildflags/buildflags.h"
#include "net/base/features.h"
#include "third_party/widevine/cdm/buildflags.h"
#include "mises/components/ipfs/buildflags/buildflags.h"

#if BUILDFLAG(ENABLE_IPFS)
#include "mises/browser/ipfs/ipfs_service_factory.h"
#include "mises/browser/ipfs/ipfs_tab_helper.h"
#endif
#include "components/zoom/zoom_controller.h"


namespace mises {
  void AttachTabHelpers(content::WebContents* web_contents) {

  #if BUILDFLAG(ENABLE_IPFS)
    ipfs::IPFSTabHelper::MaybeCreateForWebContents(web_contents);
  #endif
  #if BUILDFLAG(IS_ANDROID)
    zoom::ZoomController::CreateForWebContents(web_contents);
  #endif
  }
}
#include <AEE.h>

/*
 * Compatibility shims for partial BREW network runtimes.
 *
 * Some prebuilt aeennet variants reference OEM hooks that are not provided
 * by this open-source tree. Provide conservative fallbacks so the native
 * linker can produce libbrewemu.so on toolchains where these OEM hooks are
 * absent.
 */

int OEMNet_CloseAllNets(void) {
    return SUCCESS;
}

int OEMSocket_Bind(void) {
    return SUCCESS;
}

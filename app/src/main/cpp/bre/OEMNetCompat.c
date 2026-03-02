#include <AEE.h>
/*
 * BREWPKMSM315SP02 compatibility shims.
 *
 * The prebuilt aeenet runtime expects OEMNet/OEMSocket hooks normally
 * provided by a device OEM adaptation layer. This open-source build does
 * not ship that layer, so we provide conservative fallbacks to satisfy
 * linking in Android Studio/NDK toolchains.
 */

static int OEMNetCompat_Unsupported(void) {
    return EUNSUPPORTED;
}

int OEMNet_CloseAllNets() {
    return SUCCESS;
}

int OEMNet_Close() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_CloseSiblingNets() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_DeRegisterFromMTPD() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_DeletePrivAddrInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GenerateIPv6PrivateAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetBearerTechnology() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetBearerTechnologyOpts() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetDefaultNetwork() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetGrantedQoSFlowSpecDuringAnyState() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetHystActTimer() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetIPv6PrefixInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetIPv6PrivAddrInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetMcastEventInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetOutageInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetPrimaryQoSGrantedFlowSpec() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetPrimaryQoSModifyEventInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetQoSEventInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetQoSFlowSpec() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetQoSStatus() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetSipServerAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetSipServerDomainNames() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetSupportedQoSProfiles() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GoNull() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_IsQoSAware() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_McastJoin() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_McastJoinEx() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_McastLeave() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_McastLeaveEx() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_McastRegisterEx() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_ModifyPrimaryQoS() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_ModifyQoS() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_MyIPAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_Open() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_PPPClose() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_PPPOpen() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_PPPState() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_QoSBundleDeactivate() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_QoSBundleGoActive() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_QoSDeactivate() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_QoSGoActive() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_RegisterToMTPD() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_ReleaseQoS() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_ReleaseQoSBundle() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_RequestQoS() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_RequestQoSBundle() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetBearerTechnologyChangeWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetDormancyTimeout() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetHystActTimer() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetIPv6PrefixUpdateWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetIPv6PrivAddrWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetMTPDWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetMcastWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetNetWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetOutageWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetPrimaryQoSModifyResultWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetPrimaryQoSModifyWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetQoSAwareUnawareWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetQoSDormancyTimeout() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetQoSProfilesChangedWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetQoSWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetSocketWaiter() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetHWAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetLastNetDownReason() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetPPPAuth() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetRLP3Cfg() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetUMTSCount() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetUMTSInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetUrgent() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_NameServers() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetDDTMPref() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetPPPAuth() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_SetRLP3Cfg() {
    return OEMNetCompat_Unsupported();
}

int OEMNet_GetAppProfileId() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Accept() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_AsyncSelect() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Bind() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Close() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Connect() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetDelayedAck() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetDisableFlowFwding() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetIPTTL() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetIPToS() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetIPv6TrafficClass() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetKeepAlive() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetLinger() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetNativeDescriptor() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetNextEvent() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetNoDelay() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetPeerName() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetRcvBuf() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetReuseAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetSACK() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetSDBAckCB() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetSDBAckInfo() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetSndBuf() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetSockName() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetTCPMaxSegmentSize() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_GetTimeStamp() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Listen() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Open() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Read() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Readv() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_RecvFrom() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SendTo() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetDelayedAck() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetDisableFlowFwding() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetIPTTL() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetIPToS() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetIPv6TrafficClass() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetKeepAlive() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetLinger() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetMembership() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetNoDelay() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetRcvBuf() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetReuseAddr() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetSACK() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetSDBAckCB() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetSndBuf() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetTCPMaxSegmentSize() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_SetTimeStamp() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Shutdown() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Write() {
    return OEMNetCompat_Unsupported();
}

int OEMSocket_Writev() {
    return OEMNetCompat_Unsupported();
}


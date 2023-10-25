//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDeviceCapabilitiesModel, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDDeviceCapabilities : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDDeviceCapabilitiesModel *_objectModel;	// 16 = 0x10
    _Bool _supportsAudioAnalysis;	// 24 = 0x18
    _Bool _supportsDropIn;	// 25 = 0x19
    _Bool _messagedHomePodSettingsFeatureEnabled;	// 26 = 0x1a
}

+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;	// IMP=0x00100000009250db
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009250d3
+ (unsigned long long)supportedPairingCapabilities;	// IMP=0x0010000000925079
+ (_Bool)supportsAudioDestinationCreation;	// IMP=0x0010000000925019
+ (_Bool)supportsAudioDestinationControllerCreation;	// IMP=0x0010000000924fb9
+ (id)logCategory;	// IMP=0x0010000000924f89
+ (id)deviceCapabilities;	// IMP=0x0010000000924f59
+ (_Bool)supportsSiriUnsecuringActionsWithWatchAuth;	// IMP=0x0010000000924f09
+ (_Bool)supportsSiriUnsecuringActionsWithNoPasscode;	// IMP=0x0010000000924f01
+ (_Bool)supportsHostingLocalTempAndHumiditySensor;	// IMP=0x0010000000924ea4
+ (_Bool)supportsStereoPairingV3;	// IMP=0x0010000000924e9c
+ (_Bool)supportsStereoPairingV2;	// IMP=0x0010000000924e94
+ (_Bool)supportsStereoPairingV1;	// IMP=0x0010000000924e8c
+ (_Bool)supportsBulletinBoard;	// IMP=0x0010000000924e35
+ (_Bool)supportsHomeKitDataStream;	// IMP=0x0010000000924dde
+ (_Bool)isCompanionCapable;	// IMP=0x0010000000924d8e
+ (_Bool)supportsBackboard;	// IMP=0x0010000000924d31
+ (_Bool)supportsSyncingToSharedUsers;	// IMP=0x0010000000924cd4
+ (_Bool)supportsAddingAccessory;	// IMP=0x0010000000924c42
+ (_Bool)supportsBidirectionalAudioForCameraStreaming;	// IMP=0x0010000000924be5
+ (_Bool)supportsReceivingRemoteCameraStream;	// IMP=0x0010000000924b88
+ (_Bool)supportsDismissUserNotificationAndDialog;	// IMP=0x0010000000924b2b
+ (_Bool)supportsUserNotifications;	// IMP=0x0010000000924ace
+ (_Bool)supportsCameraSnapshotRequestViaRelay;	// IMP=0x0010000000924a71
+ (_Bool)supportsTargetControllerAutoConfigure;	// IMP=0x001000000092495f
+ (_Bool)supportsRemoteAccess;	// IMP=0x0010000000924902
+ (_Bool)requiresHomePod2ndGenPairing;	// IMP=0x00100000009248e8
+ (_Bool)requiresHomePodMiniPairing;	// IMP=0x00100000009248ce
+ (unsigned long long)appleMediaAccessoryVariant;	// IMP=0x00100000009248c6
+ (_Bool)isAppleMediaAccessory;	// IMP=0x00100000009247c5
+ (_Bool)supportsCustomerReset;	// IMP=0x0010000000924773
+ (_Bool)supportsDeviceLock;	// IMP=0x0010000000924716
+ (_Bool)supportsSymptomsHandler;	// IMP=0x00100000009246b9
+ (_Bool)supportsIntentDonation;	// IMP=0x001000000092465c
+ (_Bool)supportsHomeApp;	// IMP=0x00100000009245ff
+ (_Bool)supportsLocalization;	// IMP=0x00100000009245af
- (void).cxx_destruct;	// IMP=0x000000000091f225
@property(nonatomic, getter=isMessagedHomePodSettingsFeatureEnabled) _Bool messagedHomePodSettingsFeatureEnabled; // @synthesize messagedHomePodSettingsFeatureEnabled=_messagedHomePodSettingsFeatureEnabled;
@property(readonly, nonatomic) _Bool supportsDropIn; // @synthesize supportsDropIn=_supportsDropIn;
@property(readonly, nonatomic) _Bool supportsAudioAnalysis; // @synthesize supportsAudioAnalysis=_supportsAudioAnalysis;
- (id)modelBackedObjects;	// IMP=0x000000000091f195
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000091f0fd
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000091f09f
@property(copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000091e781
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000091e60b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000091e4ba
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000091e33a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000091e2b2
@property(readonly, nonatomic) _Bool supportsEventLog;
@property(readonly) _Bool supportsJustSiri;
@property(readonly) _Bool supportsRMVonAppleTV;
@property(readonly, nonatomic) _Bool supportsCustomMediaApplicationDestination;
@property(readonly, nonatomic) _Bool supportsMessagedHomePodSettings;
@property(readonly, nonatomic) _Bool supportsResidentFirstAccessoryCommunication;
@property(readonly, nonatomic) _Bool supportsModernTransport;
@property(readonly, nonatomic) _Bool supportsCaptiveNetworks;
@property(readonly, nonatomic) _Bool supportsUnifiedMediaNotifications;
@property(readonly, nonatomic) _Bool supportsCHIP;
@property(readonly, nonatomic) _Bool supportsCameraPackageDetection;
@property(readonly, nonatomic) _Bool supportsLockNotificationContext;
@property(readonly, nonatomic) _Bool supportsMatterSharedAdminPairing;
@property(readonly, nonatomic) _Bool supportsThreadNetworkCredentialSharing;
@property(readonly, nonatomic) _Bool supportsWakeOnLAN;
@property(readonly, nonatomic) _Bool supportsThreadBorderRouter;
@property(readonly) _Bool supportsPreferredMediaUser;
@property(readonly) _Bool supportsThirdPartyMusic;
@property(readonly) _Bool supportsHomeHub;
@property(readonly) _Bool supportsSiriEndpointSetup;
@property(readonly) _Bool supportsDoorbellChime;
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsCameraRecordingReachabilityNotifications;
@property(readonly, nonatomic) _Bool supportsIDSActivityMonitorPresence;
@property(readonly, nonatomic) _Bool supportsAccessCodes;
@property(readonly, nonatomic) _Bool supportsWalletKey;
@property(readonly, nonatomic) _Bool supportsNaturalLighting;
@property(readonly, nonatomic) _Bool supportsManagedConfigurationProfile;
@property(readonly, nonatomic) _Bool supportsFaceClassification;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
@property(readonly, nonatomic) _Bool supportsCameraActivityZones;
@property(readonly, nonatomic) _Bool supportsResidentFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
@property(readonly, nonatomic) _Bool supportsCameraSignificantEventNotifications;
@property(readonly, nonatomic) _Bool supportsMediaActions;
@property(readonly, nonatomic) _Bool supportsShortcutActions;
@property(readonly, nonatomic) _Bool supportsRouterManagement;
@property(readonly, nonatomic) _Bool supportsCameraRecording;
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsAudioReturnChannel;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsHomeInvitation;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) _Bool remoteGatewayCapable;
@property(readonly, nonatomic) _Bool isResidentCapable;
@property(readonly, nonatomic) _Bool supportsAssistantAccessControl;
@property(readonly, nonatomic) _Bool supportsWholeHouseAudio;
@property(readonly, nonatomic) _Bool supportsCloudDataSync;
@property(readonly, nonatomic) _Bool supportsStandaloneMode;
@property(readonly, nonatomic) _Bool supportsKeyTransferServer;
@property(readonly, nonatomic) _Bool supportsKeyTransferClient;
@property(readonly, nonatomic) _Bool supportsDeviceSetup;
@property(readonly, nonatomic) _Bool supportsKeychainSync;
- (id)attributeDescriptions;	// IMP=0x000000000091b95d
- (id)shortDescription;	// IMP=0x000000000091b062
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000091a6db
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;	// IMP=0x000000000091a2f4
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2 homekitVersion:(id)arg3;	// IMP=0x0000000000919383
- (id)initWithProductInfo:(id)arg1 mobileGestaltClient:(id)arg2;	// IMP=0x000000000091936e
- (id)initWithProductInfo:(id)arg1;	// IMP=0x0000000000919357

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isResidentCapable) _Bool residentCapable;
@property(readonly) Class superclass;

@end

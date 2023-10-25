//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDiOSDeviceController
{
}

+ (id)_stringFromSubscriptionSlot:(long long)arg1;	// IMP=0x004000000003fb98
- (id)_skippedSetupPanes;	// IMP=0x0040000000041a84
- (id)_isPersonalHotspotEnabled;	// IMP=0x0010000000041a69
- (id)_isCloudBackupEnabled;	// IMP=0x00100000000419c1
- (id)isActivationLockEnabledWithError:(id *)arg1;	// IMP=0x00100000000416df
- (id)deviceLocatorServiceEnabledWithError:(id *)arg1;	// IMP=0x00100000000413d0
- (id)_esimIdentifierFromEquipmentInfoArray:(id)arg1;	// IMP=0x0010000000041139
- (id)serviceSubscriptions;	// IMP=0x00100000000407cd
- (_Bool)_equipmentInfoHasEsimIdentifier:(id)arg1;	// IMP=0x001000000004074c
- (id)_deviceInformationForEquipmentInfo:(id)arg1 subscription:(id)arg2 esimIdentifier:(id)arg3 withClient:(id)arg4;	// IMP=0x001000000003fbd5
- (id)isVoiceRoamingEnabled;	// IMP=0x001000000003fb5c
- (id)subscriberMNC;	// IMP=0x001000000003fb43
- (id)subscriberMCC;	// IMP=0x001000000003fb2a
- (id)subscriberCarrierNetwork;	// IMP=0x001000000003fb11
- (id)skippedSetupPanes;	// IMP=0x001000000003faff
- (id)phoneNumber;	// IMP=0x001000000003fae6
- (id)modemFirmwareVersion;	// IMP=0x001000000003facd
- (id)MEID;	// IMP=0x001000000003fab4
- (id)maximumResidentUsers;	// IMP=0x001000000003fa3d
- (id)isRoaming;	// IMP=0x001000000003fa01
- (id)isPersonalHotspotEnabled;	// IMP=0x001000000003f9ef
- (id)isNetworkTethered;	// IMP=0x001000000003f9b3
- (id)isEphemeralMultiUser;	// IMP=0x001000000003f917
- (id)isActivationLockEnabled;	// IMP=0x001000000003f903
- (id)IMEI;	// IMP=0x001000000003f8ea
- (id)ICCID;	// IMP=0x001000000003f8d1
- (id)enforcedSoftwareUpdateDelay;	// IMP=0x001000000003f85a
- (id)EASIdentifier;	// IMP=0x001000000003f803
- (id)isDataRoamingEnabled;	// IMP=0x001000000003f7c7
- (id)currentMNC;	// IMP=0x001000000003f7ae
- (id)currentMCC;	// IMP=0x001000000003f795
- (id)currentCarrierNetwork;	// IMP=0x001000000003f77c
- (id)cellularTechnology;	// IMP=0x001000000003f72a
- (id)carrierSettingsVersion;	// IMP=0x001000000003f711
- (id)isCloudBackupEnabled;	// IMP=0x001000000003f6ff
- (id)isAppAnalyticsEnabled;	// IMP=0x001000000003f688
- (id)isDiagnosticSubmissionEnabled;	// IMP=0x001000000003f611
- (id)isLostModeEnabled;	// IMP=0x001000000003f59a
- (id)isDoNotDisturbInEffect;	// IMP=0x001000000003f58d
- (id)isDeviceLocatorServiceEnabled;	// IMP=0x001000000003f579
- (id)capacity;	// IMP=0x001000000003f560
- (id)batteryLevel;	// IMP=0x001000000003f4db
- (id)availableCapacity;	// IMP=0x001000000003f4c2

@end

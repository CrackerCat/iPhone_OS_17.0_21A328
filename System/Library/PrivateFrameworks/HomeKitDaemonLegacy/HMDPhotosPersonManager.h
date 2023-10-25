//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, HMIExternalPersonManager, HMPhotosPersonManagerSettings, NSString;

__attribute__((visibility("hidden")))
@interface HMDPhotosPersonManager
{
    HMPhotosPersonManagerSettings *_dataUnavailableExternalSettings;	// 8 = 0x8
    HMDUser *_user;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000001a3c34
+ (id)zoneNameForZoneUUID:(id)arg1;	// IMP=0x00100000001a3bda
- (void).cxx_destruct;	// IMP=0x00000000001a3b51
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings; // @synthesize dataUnavailableExternalSettings=_dataUnavailableExternalSettings;
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000001a3a77
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000001a3a06
- (void)handleUpdatedSettings:(id)arg1;	// IMP=0x00000000001a37ba
@property(readonly, copy) HMPhotosPersonManagerSettings *settings;
@property(readonly) HMIExternalPersonManager *hmiPersonManager;
- (_Bool)sharesFaceClassifications;	// IMP=0x00000000001a36a5
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 dataInterfaces:(id)arg3 workQueue:(id)arg4 user:(id)arg5;	// IMP=0x00000000001a35f6
- (id)initWithUser:(id)arg1 zoneUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000001a3199

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMIExternalPersonManager, NSString;

__attribute__((visibility("hidden")))
@interface HMDHomeAIPhotosPersonDataInterface
{
    HMIExternalPersonManager *_photosPersonManager;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x001000000043aa95
- (void).cxx_destruct;	// IMP=0x000000000043a862
@property(readonly) HMIExternalPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
- (void)handleUpdatedSettings:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000043a6ca
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000043a612
- (id)logIdentifier;	// IMP=0x000000000043a598
- (id)initWithPhotosPersonManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x000000000043a51d
- (id)initWithPersonManagerUUID:(id)arg1 homeUUID:(id)arg2 workQueue:(id)arg3;	// IMP=0x000000000043a46b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

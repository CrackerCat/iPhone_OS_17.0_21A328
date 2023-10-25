//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BridgePreferences/BPSWelcomeOptinViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, NSString;

@interface COSOptinViewController : BPSWelcomeOptinViewController
{
    HKHealthStore *_healthStore;	// 8 = 0x8
    HKHeartRhythmAvailability *_heartRhythmAvailability;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001096a1
@property(retain, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (id)defaultImageResource;	// IMP=0x0010000000109426
- (_Bool)wantsDefaultImageResource;	// IMP=0x001000000010941e
- (id)imageResource;	// IMP=0x00100000001093da
- (void)finishedActivating;	// IMP=0x00100000001092be
- (void)didEstablishHold;	// IMP=0x00100000001091e9
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000109022
- (id)holdActivityIdentifier;	// IMP=0x0010000000109015
- (_Bool)requiresActivationCheck;	// IMP=0x001000000010900d
- (id)init;	// IMP=0x0010000000108f72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

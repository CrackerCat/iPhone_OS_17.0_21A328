//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDAssertionManager, PDDatabaseManager, PKPaymentWebService;
@protocol OS_dispatch_queue;

@interface PDDevicePasscodeManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PKPaymentWebService *_paymentWebService;	// 16 = 0x10
    PDAssertionManager *_assertionManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_replyQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_restrictionsQueue;	// 48 = 0x30
    _Bool _hasActivePasscodeUpgradeFlow;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000004248a8
- (id)_strongPasscodeRestrictions;	// IMP=0x00100000004247ef
- (_Bool)_requiresUpgradedPasscode;	// IMP=0x00100000004246e0
- (_Bool)_currentPasscodeMeetsUpgradedPasscodePolicy:(id *)arg1 isPasscodeCompliant:(_Bool *)arg2;	// IMP=0x00100000004245b4
- (_Bool)currentPasscodeMeetsUpgradedPasscodePolicy:(id *)arg1;	// IMP=0x00100000004245a0
- (void)_enforceUpgradedPasscodePolicy:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000424310
- (void)_updateUpgradedPasscodePolicyEnforcementWithRemovalOnly:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004240d9
- (void)_updateUpgradedPasscodePolicyEnforcementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004240c2
- (void)assertionManager:(id)arg1 didInvalidateAssertion:(id)arg2;	// IMP=0x0010000000424052
- (void)assertionManager:(id)arg1 didAcquireAssertion:(id)arg2;	// IMP=0x0010000000424028
- (_Bool)allowAcquisitionOfAssertionOfType:(unsigned long long)arg1;	// IMP=0x0010000000424009
- (_Bool)interestedInAssertionOfType:(unsigned long long)arg1;	// IMP=0x0010000000423ff8
- (void)performUpgradedPasscodeEnforcementUpdateAfterBoot;	// IMP=0x0010000000423e10
- (void)requiresUpgradedPasscodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000423ccd
- (void)updateUpgradedPasscodePolicyEnforcementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000423b2d
- (void)enforceUpgradedPasscodePolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000042386a
- (void)dealloc;	// IMP=0x0010000000423825
- (id)initWithPaymentWebService:(id)arg1 databaseManager:(id)arg2 assertionManager:(id)arg3;	// IMP=0x00100000004236fd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

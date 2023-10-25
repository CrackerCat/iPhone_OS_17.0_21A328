//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SBSRemoteAlertHandle;
@protocol OS_dispatch_queue;

@interface SDBroadwayAgent : NSObject
{
    SBSRemoteAlertHandle *_alertHandle;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
}

+ (id)sharedAgent;	// IMP=0x0020000000119f88
- (void).cxx_destruct;	// IMP=0x002000000011b7f3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x001000000011b651
- (void)remoteAlertHandleDidDeactivate:(id)arg1;	// IMP=0x001000000011b50a
- (void)remoteAlertHandleDidActivate:(id)arg1;	// IMP=0x001000000011b3c3
- (void)_startUIWithPhysicalCard:(id)arg1 activationCode:(id)arg2 testInfo:(id)arg3;	// IMP=0x001000000011af4d
- (void)lookupPhysicalCardWithBroadwayActivationCode:(id)arg1 testInfo:(id)arg2;	// IMP=0x001000000011a818
- (void)lookUpValidAccountWithBroadwayActivationCode:(id)arg1 testInfo:(id)arg2;	// IMP=0x001000000011a527
- (void)_preparePresentationWithBroadwayActivationCode:(id)arg1 testInfo:(id)arg2;	// IMP=0x001000000011a42b
- (void)preparePresentationWithBroadwayActivationCode:(id)arg1 testInfo:(id)arg2;	// IMP=0x001000000011a353
- (void)_applePayCardDectected:(id)arg1;	// IMP=0x001000000011a2c0
- (_Bool)_uiShowing;	// IMP=0x001000000011a2b2
- (void)_invalidate;	// IMP=0x001000000011a20e
- (void)invalidate;	// IMP=0x001000000011a1ad
- (void)activate;	// IMP=0x001000000011a0ad
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000119fdd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryReachabilityChangedLogEventManager : HMFObject
{
    NSMutableDictionary *_transportReachabilityChangeDatesByUUID;	// 8 = 0x8
    _Bool _enabled;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000002e1d82
- (void).cxx_destruct;	// IMP=0x00000000002e188e
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)logIdentifier;	// IMP=0x00000000002e17e5
- (void)runDailyTask;	// IMP=0x00000000002e1774
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x00000000002e1703
- (void)_disable;	// IMP=0x00000000002e16d4
- (void)_enable;	// IMP=0x00000000002e16a5
- (void)_submit;	// IMP=0x00000000002e15f0
- (void)_reset;	// IMP=0x00000000002e14a5
- (void)_submitForAccessory:(id)arg1;	// IMP=0x00000000002e13e0
- (void)_submitDailyUpdateForAccessory:(id)arg1 withTransportReport:(id)arg2;	// IMP=0x00000000002e135f
- (void)_submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(_Bool)arg3 changed:(_Bool)arg4;	// IMP=0x00000000002e105a
- (void)submitForAccessory:(id)arg1 withTransportReport:(id)arg2 reachable:(_Bool)arg3;	// IMP=0x00000000002e0f72
- (void)configure;	// IMP=0x00000000002e0eb4
- (id)initWithHome:(id)arg1;	// IMP=0x00000000002e0dd2
- (id)logEventDispatcher;	// IMP=0x00000000002e0db9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

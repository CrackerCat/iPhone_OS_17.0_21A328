//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDAccessoryDiagnosticsMetric, HMDAccessorySessionMetric, HMFTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryMetric : HMFObject
{
    HMDAccessorySessionMetric *_sessionMetric;	// 8 = 0x8
    HMDAccessoryDiagnosticsMetric *_diagnosticsMetric;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
    HMFTimer *_accessoryMetricTimer;	// 32 = 0x20
    double _timerInterval;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000005b0cf9
- (void).cxx_destruct;	// IMP=0x00000000005ada78
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) double timerInterval; // @synthesize timerInterval=_timerInterval;
@property(retain, nonatomic) HMFTimer *accessoryMetricTimer; // @synthesize accessoryMetricTimer=_accessoryMetricTimer;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) HMDAccessoryDiagnosticsMetric *diagnosticsMetric; // @synthesize diagnosticsMetric=_diagnosticsMetric;
@property(readonly, nonatomic) HMDAccessorySessionMetric *sessionMetric; // @synthesize sessionMetric=_sessionMetric;
- (id)logIdentifier;	// IMP=0x00000000005ad93e
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005ad702
- (void)submitMetricAndStop;	// IMP=0x00000000005ad689
- (id)initWithAccessory:(id)arg1;	// IMP=0x00000000005ad394

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

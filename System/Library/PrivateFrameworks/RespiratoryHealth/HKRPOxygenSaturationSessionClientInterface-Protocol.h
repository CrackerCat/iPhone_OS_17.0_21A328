//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RespiratoryHealth/NSObject-Protocol.h>

@class HKQuantity, NSError, NSUUID;

@protocol HKRPOxygenSaturationSessionClientInterface <NSObject>
- (void)clientRemote_didEndWithReason:(long long)arg1 saturation:(HKQuantity *)arg2 barometricPressure:(HKQuantity *)arg3 averageHeartRate:(HKQuantity *)arg4 averageHeartRateUUID:(NSUUID *)arg5 error:(NSError *)arg6;
- (void)clientRemote_didStartWithStartTime:(double)arg1 expectedDuration:(double)arg2;
- (void)clientRemote_didSendFeedback:(unsigned long long)arg1;
@end

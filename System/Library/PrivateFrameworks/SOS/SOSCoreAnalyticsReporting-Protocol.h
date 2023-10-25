//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SOS/NSObject-Protocol.h>

@class SOSStatus;

@protocol SOSCoreAnalyticsReporting <NSObject>
+ (_Bool)isSensitiveTrigger:(long long)arg1;
+ (void)reportSOSNumberOfVoiceLoops:(long long)arg1;
+ (void)reportSOSAutomaticNewtonEnabled:(_Bool)arg1;
+ (void)reportSOSLongPressTriggersEmergencySOS:(_Bool)arg1;
+ (void)reportSOSAutomaticCallCountdownEnabled:(_Bool)arg1;
+ (void)reportSOSShouldPlayAudioDuringCountdown:(_Bool)arg1;
+ (id)sharedInstance;
- (void)reportSOSEvent:(SOSStatus *)arg1 callDuration:(long long)arg2 isHandoffTrigger:(_Bool)arg3 onWristState:(long long)arg4;
- (void)reportSOSCancelationTimeout:(long long)arg1;
- (void)reportSOSRestingResponse:(long long)arg1 restingResponse:(long long)arg2 hasMedicalID:(_Bool)arg3;
- (void)reportSOSRejectedWithTrigger:(long long)arg1 currentTriggerMechanism:(long long)arg2;
- (void)reportSOSTriggerHandoff:(long long)arg1 source:(long long)arg2 destination:(long long)arg3 result:(long long)arg4;
- (void)reportSOSUserCancelled:(long long)arg1 lastFlowState:(long long)arg2 countdownValue:(long long)arg3;
- (void)reportSOSTriggered:(long long)arg1;
@end

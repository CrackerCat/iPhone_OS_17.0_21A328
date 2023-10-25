//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBFLockScreenDateView;
@protocol SBFScreenWakeAnimationTarget;

@protocol SBFScreenWakeAnimationControlling <NSObject>
- (void)setScreenWakeTemporarilyDisabled:(_Bool)arg1 forReason:(NSString *)arg2;
- (void)sleepForSource:(long long)arg1 target:(id <SBFScreenWakeAnimationTarget>)arg2 completion:(void (^)(void))arg3;
- (void)prepareToWakeForSource:(long long)arg1 timeAlpha:(double)arg2 statusBarAlpha:(double)arg3 target:(id <SBFScreenWakeAnimationTarget>)arg4 dateView:(SBFLockScreenDateView *)arg5 completion:(void (^)(void))arg6;
- (_Bool)interruptSleepAnimationIfNeeded;
- (_Bool)isSleepAnimationInProgress;
- (_Bool)isWakeAnimationInProgressForSource:(long long)arg1;
- (_Bool)isWakeAnimationInProgress;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSInvocation, NSTimer;
@protocol UIRepeatedActionDelegate;

__attribute__((visibility("hidden")))
@interface UIRepeatedAction : NSObject
{
    _Bool _didCompletePreInvocationDelay;	// 8 = 0x8
    _Bool _didCompleteInvocationDelay;	// 9 = 0x9
    _Bool _disableRepeat;	// 10 = 0xa
    _Bool _skipInitialFire;	// 11 = 0xb
    double _preInvocationDelay;	// 16 = 0x10
    double _invocationDelay;	// 24 = 0x18
    double _repeatedDelay;	// 32 = 0x20
    NSInvocation *_invocation;	// 40 = 0x28
    id _invocationArgument;	// 48 = 0x30
    NSTimer *_timer;	// 56 = 0x38
    NSObject<UIRepeatedActionDelegate> *_delegate;	// 64 = 0x40
}

+ (id)actionWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x00600000014e97cc
+ (id)_invocationForTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x00600000014e9677
- (void).cxx_destruct;	// IMP=0x00000000014ea377
@property(nonatomic) __weak NSObject<UIRepeatedActionDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id invocationArgument; // @synthesize invocationArgument=_invocationArgument;
@property(retain, nonatomic) NSInvocation *invocation; // @synthesize invocation=_invocation;
@property(nonatomic) _Bool skipInitialFire; // @synthesize skipInitialFire=_skipInitialFire;
@property(nonatomic) _Bool disableRepeat; // @synthesize disableRepeat=_disableRepeat;
@property(nonatomic) double repeatedDelay; // @synthesize repeatedDelay=_repeatedDelay;
@property(nonatomic) double invocationDelay; // @synthesize invocationDelay=_invocationDelay;
@property(nonatomic) double preInvocationDelay; // @synthesize preInvocationDelay=_preInvocationDelay;
- (void)dealloc;	// IMP=0x00000000014ea27c
- (void)reset;	// IMP=0x00000000014ea150
- (void)_resetInternalState;	// IMP=0x00000000014ea12d
- (void)invalidate;	// IMP=0x00000000014ea0b5
- (void)schedule;	// IMP=0x00000000014e9eee
- (void)_repeatedTimerFire;	// IMP=0x00000000014e9e8b
- (void)_invocationTimerFire;	// IMP=0x00000000014e9e20
- (void)_preInvocationTimerFire;	// IMP=0x00000000014e9db5
- (_Bool)_shouldInvokeRepeatedActionForPhase:(unsigned long long)arg1;	// IMP=0x00000000014e9d53
- (void)_adjustInvocationForPhase:(unsigned long long)arg1;	// IMP=0x00000000014e9b9c
- (_Bool)invoke;	// IMP=0x00000000014e9a70
- (void)scheduleWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x00000000014e99a1
- (id)initWithInvocation:(id)arg1;	// IMP=0x00000000014e9919
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;	// IMP=0x00000000014e9849

@end

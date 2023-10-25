//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FROnboardingSubscribableItem, NSString, TUAnimationFloatFunction;

@interface FROnboardingFadeAndScaleAppearanceAnimator : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    FROnboardingSubscribableItem *_item;	// 16 = 0x10
    double _delay;	// 24 = 0x18
    double _duration;	// 32 = 0x20
    double _currentAlpha;	// 40 = 0x28
    double _startingTime;	// 48 = 0x30
    TUAnimationFloatFunction *_floatCurveFunction;	// 56 = 0x38
    struct CGAffineTransform _currentTransform;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000bfc90
@property(retain, nonatomic) TUAnimationFloatFunction *floatCurveFunction; // @synthesize floatCurveFunction=_floatCurveFunction;
@property(nonatomic) double startingTime; // @synthesize startingTime=_startingTime;
@property(nonatomic) struct CGAffineTransform currentTransform; // @synthesize currentTransform=_currentTransform;
@property(nonatomic) double currentAlpha; // @synthesize currentAlpha=_currentAlpha;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(retain, nonatomic) FROnboardingSubscribableItem *item; // @synthesize item=_item;
- (void)_updateValuesWithPercentComplete:(double)arg1;	// IMP=0x00100000000bfad5
- (void)updateTickWithAnimationEngine:(id)arg1 sessionTimeAtLastTick:(double)arg2 currentSessionTime:(double)arg3;	// IMP=0x00100000000bfa2b
- (void)updateCellWithCurrentStateOfItem:(id)arg1;	// IMP=0x00100000000bf8f4
- (void)addedToAnimationEngine:(id)arg1;	// IMP=0x00100000000bf87d
- (id)init;	// IMP=0x00100000000bf7ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

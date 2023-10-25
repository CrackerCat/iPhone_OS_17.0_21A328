//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewAnimationState.h"

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationState : UIViewAnimationState
{
    double _mass;	// 280 = 0x118
    double _stiffness;	// 288 = 0x120
    double _damping;	// 296 = 0x128
    double _velocity;	// 304 = 0x130
    _Bool _allowsOverdamping;	// 312 = 0x138
}

+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5 allowsOverdamping:(_Bool)arg6;	// IMP=0x00600000016b2dac
+ (id)defaultSpringAnimationForKey:(id)arg1 mass:(double)arg2 stiffness:(double)arg3 damping:(double)arg4 velocity:(double)arg5;	// IMP=0x00600000016b2d95
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7 debugging:(id *)arg8;	// IMP=0x00600000016b2ae7
+ (void)computeDerivedSpringParameters:(double)arg1 zeta:(double)arg2 mass:(double)arg3 velocity:(double)arg4 epsilon:(double)arg5 stiffness:(double *)arg6 damping:(double *)arg7;	// IMP=0x00600000016b2acf
- (id)_defaultAnimationForKey:(id)arg1;	// IMP=0x00000000016b2ef0
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000016b2eab
- (id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;	// IMP=0x00000000016b2bfa
- (void)generateSpringPropertiesForPerceptualDuration:(double)arg1 bounce:(double)arg2 velocity:(double)arg3;	// IMP=0x00000000016b2b4b
- (void)generateSpringPropertiesForDuration:(double)arg1 damping:(double)arg2 velocity:(double)arg3;	// IMP=0x00000000016b2afa

@end

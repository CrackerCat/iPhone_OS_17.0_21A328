//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNSharedProfileAnimationGenerator : NSObject
{
}

+ (id)log;	// IMP=0x00800000002c004e
- (void)applyBlurFilterToLayer:(id)arg1 inputRadius:(double)arg2;	// IMP=0x00000000002c1d8c
- (id)springAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3 stiffness:(double)arg4 damping:(double)arg5 mass:(double)arg6;	// IMP=0x00000000002c1c55
- (id)peekABooFinalSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x00000000002c1c28
- (id)peekABooIntermediateSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x00000000002c1bfb
- (id)coinFlipSpringAnimationWithKeyPath:(id)arg1 fromValue:(double)arg2 toValue:(double)arg3;	// IMP=0x00000000002c1bce
- (void)performPeekABooAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c0ed4
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toAvatarImage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002c045d
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 pendingNickname:(id)arg2 contact:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002c02a7
- (void)performCoinFlipAnimationForAnimatingAvatarView:(id)arg1 toContact:(id)arg2 rightToLeft:(_Bool)arg3 avatarSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000002c00aa

@end

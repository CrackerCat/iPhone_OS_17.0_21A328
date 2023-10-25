//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBBannerCustomTransitionAnimatorContext;

@protocol SBBannerCustomTransitionAnimating <NSObject>

@optional
+ (void)performAnimationsForTransition:(void (^)(void))arg1 completion:(void (^)(_Bool, _Bool))arg2;
- (void)performActionsForTransition:(SBBannerCustomTransitionAnimatorContext *)arg1;
- (void)prepareForTransition:(SBBannerCustomTransitionAnimatorContext *)arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPop
{
    struct CGRect _endingNewTitleViewFrame;	// 176 = 0xb0
    struct CGRect _endingNewBackButtonFrame;	// 208 = 0xd0
    struct CGSize _titleTransitionDistance;	// 240 = 0xf0
    double _titleTransitionAdjustment;	// 256 = 0x100
}

- (void)complete;	// IMP=0x000000000026eb0d
- (void)cancel;	// IMP=0x000000000026eab1
- (void)_finishWithFinalLayout:(id)arg1 invalidLayout:(id)arg2;	// IMP=0x000000000026e423
- (void)animate;	// IMP=0x000000000026e3a1
- (void)_animateSearchBar;	// IMP=0x000000000026de5c
- (void)_animateBackgroundView;	// IMP=0x000000000026dbab
- (void)_animateLargeTitleView;	// IMP=0x000000000026da6a
- (void)_animateContentView;	// IMP=0x000000000026d57e
- (void)_animateScaleTransition;	// IMP=0x000000000026cf50
- (void)prepare;	// IMP=0x000000000026cdfb
- (void)_prepareSearchBar;	// IMP=0x000000000026cadd
- (void)_prepareBackgroundView;	// IMP=0x000000000026c8a3
- (void)_prepareLargeTitleView;	// IMP=0x000000000026c627
- (void)_prepareContentView;	// IMP=0x000000000026c0a1
- (void)_prepareScaleTransition;	// IMP=0x000000000026be8a
- (id)viewUsingEaseInCurve;	// IMP=0x000000000026be45
- (int)transition;	// IMP=0x000000000026be3a

@end

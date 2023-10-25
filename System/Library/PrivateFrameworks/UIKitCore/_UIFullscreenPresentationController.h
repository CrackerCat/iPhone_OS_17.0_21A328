//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UICurrentContextPresentationController.h"

@class UIView, _UIForcedOrientationTransactionToken;

__attribute__((visibility("hidden")))
@interface _UIFullscreenPresentationController : _UICurrentContextPresentationController
{
    UIView *_counterRotatedView;	// 8 = 0x8
    double _counterRotatedAngle;	// 16 = 0x10
    struct CGRect _counterRotatedOriginalBounds;	// 24 = 0x18
    long long _originalOrientation;	// 56 = 0x38
    _Bool _presentingViewControllerHandledCounterRotation;	// 64 = 0x40
    CDUnknownBlockType _finalRotationBlock;	// 72 = 0x48
    _UIForcedOrientationTransactionToken *_forcedOrientationToken;	// 80 = 0x50
    _Bool _disableAnimatedReenablingOfAutorotation;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000004e08cf
- (_Bool)_shouldAnimateReenablingOfAutorotation;	// IMP=0x00000000004e08bb
- (_Bool)_inheritsPresentingViewControllerThemeLevel;	// IMP=0x00000000004e08b3
- (void)_setPresentedViewController:(id)arg1;	// IMP=0x00000000004e07fd
- (void)_transitionDidEnd:(_Bool)arg1 isDismissal:(_Bool)arg2;	// IMP=0x00000000004e05f2
- (void)dismissalTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000004e05a7
- (void)presentationTransitionDidEnd:(_Bool)arg1;	// IMP=0x00000000004e055f
- (void)_removeCounterRotationIfApplied;	// IMP=0x00000000004e0416
- (void)_applyCounterRotationToView:(id)arg1 fromOrientation:(long long)arg2 toOrientation:(long long)arg3 withBounds:(struct CGRect)arg4;	// IMP=0x00000000004e0254
- (void)_placeCounterRotationViewWithView:(id)arg1 inWindow:(id)arg2 fromOrientation:(long long)arg3 toOrientation:(long long)arg4 force:(_Bool)arg5;	// IMP=0x00000000004dffa9
- (void)_prepareForMixedOrientationTransitionIfNecessaryInWindow:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;	// IMP=0x00000000004dfbe4
- (void)_adjustOrientationIfNecessaryInWindow:(id)arg1 forViewController:(id)arg2 preservingViewController:(id)arg3;	// IMP=0x00000000004df6c6
- (_Bool)_invokesDelegatesOnOrientationChange;	// IMP=0x00000000004df6b2
- (struct CGRect)frameOfPresentedViewInContainerView;	// IMP=0x00000000004df656
- (_Bool)_shouldRespectDefinesPresentationContext;	// IMP=0x00000000004df64e
- (_Bool)shouldPresentInFullscreen;	// IMP=0x00000000004df646
- (void)dealloc;	// IMP=0x00000000004df608
- (long long)presentationStyle;	// IMP=0x00000000004df600

@end

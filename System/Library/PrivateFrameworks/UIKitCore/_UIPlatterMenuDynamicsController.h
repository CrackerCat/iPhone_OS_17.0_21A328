//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIAttachmentBehavior, UICollisionBehavior, UIDynamicAnimator, UIDynamicItemBehavior, UIView, _UIDynamicItemObservingBehavior, _UIPlatterMenuPanningTransformer, _UIPlatterMenuSnapBehavior, _UIStatesFeedbackGenerator;
@protocol UIDynamicItem, _UIPlatterMenuDynamicsControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuDynamicsController : NSObject
{
    _Bool _leadingSwipeActionViewSelected;	// 8 = 0x8
    _Bool _trailingSwipeActionViewSelected;	// 9 = 0x9
    _Bool _isCurrentlyUnderDirectManipulation;	// 10 = 0xa
    id <_UIPlatterMenuDynamicsControllerDelegate> _delegate;	// 16 = 0x10
    UIView *_containerView;	// 24 = 0x18
    UIView *_platterView;	// 32 = 0x20
    UIView *_menuView;	// 40 = 0x28
    id <UIDynamicItem> _platterItem;	// 48 = 0x30
    _UIPlatterMenuPanningTransformer *_panningLockTransformer;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    double _leadingSwipeEdgeMultiplier;	// 72 = 0x48
    double _trailingSwipeEdgeMultiplier;	// 80 = 0x50
    UIDynamicAnimator *_animator;	// 88 = 0x58
    UIDynamicItemBehavior *_menuItemBehavior;	// 96 = 0x60
    UIDynamicItemBehavior *_platterItemBehavior;	// 104 = 0x68
    UIAttachmentBehavior *_platterMenuSlidingAttachmentBehavior;	// 112 = 0x70
    UIAttachmentBehavior *_platterMenuAttachmentBehavior;	// 120 = 0x78
    UIAttachmentBehavior *_gestureAttachmentBehavior;	// 128 = 0x80
    _UIPlatterMenuSnapBehavior *_platterSnapBehavior;	// 136 = 0x88
    _UIPlatterMenuSnapBehavior *_menuPresentedSnapBehavior;	// 144 = 0x90
    _UIPlatterMenuSnapBehavior *_menuDismissedSnapBehavior;	// 152 = 0x98
    UIDynamicItemBehavior *_noRotationBehavior;	// 160 = 0xa0
    UIAttachmentBehavior *_menuVerticalLockAttachment;	// 168 = 0xa8
    UICollisionBehavior *_platterMenuCollisionBounds;	// 176 = 0xb0
    _UIDynamicItemObservingBehavior *_observingBehavior;	// 184 = 0xb8
    long long _didPresentCount;	// 192 = 0xc0
    _UIStatesFeedbackGenerator *_swipeFeedbackGenerator;	// 200 = 0xc8
    struct CGPoint _initialTouchPoint;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000f10fdc
@property(retain, nonatomic) _UIStatesFeedbackGenerator *swipeFeedbackGenerator; // @synthesize swipeFeedbackGenerator=_swipeFeedbackGenerator;
@property(nonatomic) long long didPresentCount; // @synthesize didPresentCount=_didPresentCount;
@property(retain, nonatomic) _UIDynamicItemObservingBehavior *observingBehavior; // @synthesize observingBehavior=_observingBehavior;
@property(retain, nonatomic) UICollisionBehavior *platterMenuCollisionBounds; // @synthesize platterMenuCollisionBounds=_platterMenuCollisionBounds;
@property(retain, nonatomic) UIAttachmentBehavior *menuVerticalLockAttachment; // @synthesize menuVerticalLockAttachment=_menuVerticalLockAttachment;
@property(retain, nonatomic) UIDynamicItemBehavior *noRotationBehavior; // @synthesize noRotationBehavior=_noRotationBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *menuDismissedSnapBehavior; // @synthesize menuDismissedSnapBehavior=_menuDismissedSnapBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *menuPresentedSnapBehavior; // @synthesize menuPresentedSnapBehavior=_menuPresentedSnapBehavior;
@property(retain, nonatomic) _UIPlatterMenuSnapBehavior *platterSnapBehavior; // @synthesize platterSnapBehavior=_platterSnapBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *gestureAttachmentBehavior; // @synthesize gestureAttachmentBehavior=_gestureAttachmentBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *platterMenuAttachmentBehavior; // @synthesize platterMenuAttachmentBehavior=_platterMenuAttachmentBehavior;
@property(retain, nonatomic) UIAttachmentBehavior *platterMenuSlidingAttachmentBehavior; // @synthesize platterMenuSlidingAttachmentBehavior=_platterMenuSlidingAttachmentBehavior;
@property(retain, nonatomic) UIDynamicItemBehavior *platterItemBehavior; // @synthesize platterItemBehavior=_platterItemBehavior;
@property(retain, nonatomic) UIDynamicItemBehavior *menuItemBehavior; // @synthesize menuItemBehavior=_menuItemBehavior;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) _Bool isCurrentlyUnderDirectManipulation; // @synthesize isCurrentlyUnderDirectManipulation=_isCurrentlyUnderDirectManipulation;
@property(nonatomic) double trailingSwipeEdgeMultiplier; // @synthesize trailingSwipeEdgeMultiplier=_trailingSwipeEdgeMultiplier;
@property(nonatomic) double leadingSwipeEdgeMultiplier; // @synthesize leadingSwipeEdgeMultiplier=_leadingSwipeEdgeMultiplier;
@property(nonatomic) struct CGPoint initialTouchPoint; // @synthesize initialTouchPoint=_initialTouchPoint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) _UIPlatterMenuPanningTransformer *panningLockTransformer; // @synthesize panningLockTransformer=_panningLockTransformer;
@property(nonatomic) __weak id <UIDynamicItem> platterItem; // @synthesize platterItem=_platterItem;
@property(nonatomic) __weak UIView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) __weak UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <_UIPlatterMenuDynamicsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool trailingSwipeActionViewSelected; // @synthesize trailingSwipeActionViewSelected=_trailingSwipeActionViewSelected;
@property(nonatomic) _Bool leadingSwipeActionViewSelected; // @synthesize leadingSwipeActionViewSelected=_leadingSwipeActionViewSelected;
- (void)_fireConfirmFeedbackIfNeededForInitialSelectionState:(_Bool)arg1 finalSelectionState:(_Bool)arg2;	// IMP=0x0000000000f10b65
- (void)_deactivateFeedbackIfNeeded;	// IMP=0x0000000000f10ad0
- (void)_activateFeedbackIfNeeded;	// IMP=0x0000000000f10a39
- (void)_configureFeedbackGenerator;	// IMP=0x0000000000f10959
- (_Bool)_isPlatterInYLockedPosition;	// IMP=0x0000000000f10860
- (void)_updateSwipeEdgeMultipliersIfNeededForTouchPosition:(struct CGPoint)arg1;	// IMP=0x0000000000f10606
- (void)_positionSwipeActionViewsForCurrentPlatterViewPosition;	// IMP=0x0000000000f10359
- (_Bool)isDefaultAnimatorBehavior:(id)arg1;	// IMP=0x0000000000f10197
- (void)addBehaviorIfNotPresent:(id)arg1;	// IMP=0x0000000000f100c4
- (void)resetAnimatorToDefaultBehaviors;	// IMP=0x0000000000f0fed7
- (struct CGPoint)menuCenter;	// IMP=0x0000000000f0fdd9
- (struct CGPoint)platterCenter;	// IMP=0x0000000000f0fcdb
- (struct CGPoint)centerForCurrentPlatterPosition;	// IMP=0x0000000000f0fbdb
- (struct CGPoint)centerForMenuPresentedRelativeToCurrentPlatter;	// IMP=0x0000000000f0f9f3
- (struct CGVector)modifiedOffsetForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 touchPosition:(struct CGPoint)arg3 axisLock:(unsigned long long)arg4;	// IMP=0x0000000000f0f6ff
- (void)beginTransitionWithAnimatorUsingBehaviors:(id)arg1 observedItems:(id)arg2 stateIfCompleted:(long long)arg3;	// IMP=0x0000000000f0f364
- (void)performActionsAndEnterState:(long long)arg1 velocity:(struct CGVector)arg2 underDirectManipulation:(_Bool)arg3;	// IMP=0x0000000000f0e496
- (void)performActionsAndEnterState:(long long)arg1;	// IMP=0x0000000000f0e479
- (long long)_stateForPosition:(struct CGPoint)arg1 offset:(struct CGVector)arg2 velocity:(struct CGVector)arg3;	// IMP=0x0000000000f0e26f
- (void)stopObservingBehavior;	// IMP=0x0000000000f0e215
- (void)_configureAnimator;	// IMP=0x0000000000f0d7e9
- (void)panningTransformer:(id)arg1 didEnterTransitionNotchForTransformedPosition:(struct CGPoint)arg2;	// IMP=0x0000000000f0d7e3
- (void)panningTransformer:(id)arg1 didEndPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 velocity:(struct CGVector)arg4;	// IMP=0x0000000000f0d699
- (void)panningTransformer:(id)arg1 didPanToTransformedPosition:(struct CGPoint)arg2 offsetFromPrevious:(struct CGVector)arg3 touchPosition:(struct CGPoint)arg4 velocity:(struct CGVector)arg5 didChangeAxis:(_Bool)arg6 axisLock:(unsigned long long)arg7;	// IMP=0x0000000000f0d2b5
- (void)panningTransformer:(id)arg1 didBeginPanToTransformedPosition:(struct CGPoint)arg2;	// IMP=0x0000000000f0d1a4
- (_Bool)hasBeenPresented;	// IMP=0x0000000000f0d18b
- (void)_animateToPlatterDismissedWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000f0cf31
- (void)_animateToPlatterPresentedWithVelocity:(struct CGVector)arg1;	// IMP=0x0000000000f0cebb
- (void)_beginInYLockedStatePresented;	// IMP=0x0000000000f0ce69
- (void)lockIntoYAxis;	// IMP=0x0000000000f0ce2c
- (_Bool)platterPanned;	// IMP=0x0000000000f0cd52
- (_Bool)isSelectingSwipeAction;	// IMP=0x0000000000f0cc52
- (_Bool)isMenuPresenting;	// IMP=0x0000000000f0cc38
- (_Bool)isMenuPresented;	// IMP=0x0000000000f0cc1e
- (void)resetAnimator;	// IMP=0x0000000000f0cbe1
- (void)dealloc;	// IMP=0x0000000000f0cb69
- (void)toggleAnimatorDebugState;	// IMP=0x0000000000f0cadd
- (void)didEndPanningWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f0ca2a
- (void)didPanWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f0c993
- (void)didBeginPanningWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000000f0c8af
@property(readonly, nonatomic) struct CGVector currentVelocity;
@property(readonly, nonatomic) struct CGVector currentTranslation;
- (id)initWithContainerView:(id)arg1 platterView:(id)arg2 menuView:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000f0c6ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

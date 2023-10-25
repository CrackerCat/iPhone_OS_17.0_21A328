//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UINavigationController, UISpringTimingParameters, UIViewPropertyAnimator;
@protocol _TtP8Freeform37CRLiOSPopoverCoordinatedResizeContext_;

@interface CRLiOSInspectorNavigationAnimator : NSObject
{
    _Bool _isSimultaneouslyHidingNavigationBar;	// 8 = 0x8
    _Bool _isSimultaneouslyShowingNavigationBar;	// 9 = 0x9
    id <_TtP8Freeform37CRLiOSPopoverCoordinatedResizeContext_> _popoverResizeContext;	// 16 = 0x10
    UISpringTimingParameters *_springTiming;	// 24 = 0x18
    double _animationDuration;	// 32 = 0x20
    UIViewPropertyAnimator *_currentAnimator;	// 40 = 0x28
    double _navigationBarHeight;	// 48 = 0x30
    UINavigationController *_navigationController;	// 56 = 0x38
    CDUnknownBlockType _updateSizeInPlace;	// 64 = 0x40
    long long _operation;	// 72 = 0x48
}

+ (void)p_setCurrentAnimator:(id)arg1 forNavigationController:(id)arg2;	// IMP=0x0020000000397b9e
+ (id)currentAnimatorForNavigationController:(id)arg1;	// IMP=0x0010000000397b8a
+ (id)animationTimingCurveProviderAndDuration:(double *)arg1;	// IMP=0x0010000000396024
- (void).cxx_destruct;	// IMP=0x0020000000397cb5
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isSimultaneouslyShowingNavigationBar; // @synthesize isSimultaneouslyShowingNavigationBar=_isSimultaneouslyShowingNavigationBar;
@property(nonatomic) _Bool isSimultaneouslyHidingNavigationBar; // @synthesize isSimultaneouslyHidingNavigationBar=_isSimultaneouslyHidingNavigationBar;
@property(copy, nonatomic) CDUnknownBlockType updateSizeInPlace; // @synthesize updateSizeInPlace=_updateSizeInPlace;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) double navigationBarHeight; // @synthesize navigationBarHeight=_navigationBarHeight;
@property(retain, nonatomic) UIViewPropertyAnimator *currentAnimator; // @synthesize currentAnimator=_currentAnimator;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) UISpringTimingParameters *springTiming; // @synthesize springTiming=_springTiming;
@property(nonatomic) __weak id <_TtP8Freeform37CRLiOSPopoverCoordinatedResizeContext_> popoverResizeContext; // @synthesize popoverResizeContext=_popoverResizeContext;
- (void)i_preferredContentSizeDidChangeDuringAnimation:(struct CGSize)arg1;	// IMP=0x0010000000397b02
@property(readonly, nonatomic) long long animationState;
- (struct CGRect)p_adjustMaskForNavigationBarChangeIfNecessary:(struct CGRect)arg1;	// IMP=0x0010000000397a0c
- (struct CGRect)p_adjustFrameForNavigationBarChangeIfNecessary:(struct CGRect)arg1;	// IMP=0x0010000000397969
- (struct CGRect)p_finalMaskViewFrameWithSize:(struct CGSize)arg1;	// IMP=0x00100000003978e9
- (struct CGRect)p_initialMaskViewFrameWithSize:(struct CGSize)arg1;	// IMP=0x0010000000397869
- (struct CGRect)p_offsetMaskViewFrameWithSize:(struct CGSize)arg1;	// IMP=0x00100000003977fe
- (struct CGRect)p_homeMaskViewFrameWithSize:(struct CGSize)arg1;	// IMP=0x00100000003977e5
- (struct CGRect)p_finalToViewFrameWithHomeFrame:(struct CGRect)arg1 expectedContentSize:(struct CGSize)arg2;	// IMP=0x001000000039775f
- (struct CGRect)p_initialToViewFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x00100000003976ae
- (struct CGRect)p_finalFromViewFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x0010000000397616
- (struct CGRect)p_initialFromViewFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x00100000003975fe
- (struct CGRect)p_rtlTopViewOffsetFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x00100000003975af
- (struct CGRect)p_ltrTopViewOffsetFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x0010000000397567
- (struct CGRect)p_rtlBottomViewOffsetFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x0010000000397511
- (struct CGRect)p_ltrBottomViewOffsetFrameWithHomeFrame:(struct CGRect)arg1;	// IMP=0x00100000003974b4
- (double)p_bottomViewOffsetForHomeFrame:(struct CGRect)arg1;	// IMP=0x0010000000397486
- (id)p_createOrReturnPropertyAnimatorForTransition:(id)arg1;	// IMP=0x001000000039616e
- (id)interruptibleAnimatorForTransition:(id)arg1;	// IMP=0x001000000039615c
- (void)animateTransition:(id)arg1;	// IMP=0x001000000039611f
- (double)transitionDuration:(id)arg1;	// IMP=0x0010000000396114
- (void)dealloc;	// IMP=0x0010000000395f62
- (id)initWithNavigationController:(id)arg1 operation:(long long)arg2 popoverResizeContext:(id)arg3;	// IMP=0x0010000000395e0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

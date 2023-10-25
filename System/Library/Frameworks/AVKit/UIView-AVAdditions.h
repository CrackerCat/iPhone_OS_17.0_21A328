//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSString;

@interface UIView (AVAdditions)
- (void)avkit_setFrame:(struct CGRect)arg1 inLayoutDirection:(long long)arg2;	// IMP=0x002000000006ad19
- (struct CGRect)avkit_portionOfFrameUnobscuredBySuperviews;	// IMP=0x002000000006aabc
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)arg1;	// IMP=0x002000000006aa53
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;	// IMP=0x002000000006a9ea
- (struct CGRect)avkit_largestInscribedRectInBoundingPathWithCenter:(struct CGPoint)arg1 aspectRatio:(double)arg2;	// IMP=0x002000000006a9c1
- (_Bool)avkit_hasFullScreenLayoutClass;	// IMP=0x002000000006a97d
- (void)avkit_makeSubtreeDisallowGroupBlending;	// IMP=0x002000000006a81b
- (_Bool)avkit_isDescendantOfNonPagingScrollView;	// IMP=0x002000000006a7d7
- (_Bool)avkit_wantsAnimatedViewTransitions;	// IMP=0x002000000006a7a0
- (_Bool)avkit_isInAScrollView;	// IMP=0x002000000006a75c
- (_Bool)avkit_isBeingScrolledQuickly;	// IMP=0x002000000006a718
- (_Bool)avkit_isBeingScrolled;	// IMP=0x002000000006a6d4
- (_Bool)avkit_isBeingScrollTested;	// IMP=0x002000000006a690
- (id)avkit_backdropGroupLeader;	// IMP=0x002000000006a640
- (void)avkit_needsUpdateBackdropCaptureViewHidden;	// IMP=0x002000000006a603
- (_Bool)avkit_isBeingPresented;	// IMP=0x002000000006a5bf
- (_Bool)avkit_isBeingDismissed;	// IMP=0x002000000006a57b
- (_Bool)avkit_isCounterRotatedForTransition;	// IMP=0x002000000006a537
- (_Bool)avkit_isVideoGravityFrozen;	// IMP=0x002000000006a4f3
- (struct UIEdgeInsets)avkit_overrideLayoutMarginsForCounterRotation;	// IMP=0x002000000006a450
- (_Bool)avkit_isCompletelyTransparent;	// IMP=0x002000000006a39b
- (_Bool)avkit_isInAWindowAndVisible;	// IMP=0x002000000006a234
- (void)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2 bestSoFar:(inout id *)arg3 shortestDistanceSoFar:(inout double *)arg4;	// IMP=0x0020000000069cb5
- (id)avkit_hitTestControlForPoint:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0020000000069c69
- (_Bool)avkit_isDescendantOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000069bee
- (_Bool)avkit_isAncestorOfViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0020000000069a71
- (id)avkit_ancestorViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00200000000699e0
- (id)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id)arg1;	// IMP=0x0020000000153909
- (id)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id)arg1;	// IMP=0x00200000001538ea
- (id)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id)arg1;	// IMP=0x0020000000153789
- (id)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;	// IMP=0x0020000000153674

// Remaining properties
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIInterfaceActionConcreteVisualStyle, UIInterfaceActionGroupViewState, UIInterfaceActionOverrideVisualStyle;
@protocol UIInterfaceActionConcreteVisualStyleImpl;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionVisualStyle : NSObject
{
    UIInterfaceActionGroupViewState *_groupViewState;	// 8 = 0x8
    UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *_concreteVisualStyle;	// 16 = 0x10
    CDUnknownBlockType _fontForViewStateBlock;	// 24 = 0x18
    UIInterfaceActionOverrideVisualStyle *_visualStyleOverride;	// 32 = 0x20
}

+ (id)idiomSpecificStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2;	// IMP=0x00100000000d613f
- (void).cxx_destruct;	// IMP=0x00000000000d7d72
@property(retain, nonatomic) UIInterfaceActionOverrideVisualStyle *visualStyleOverride; // @synthesize visualStyleOverride=_visualStyleOverride;
@property(copy, nonatomic) CDUnknownBlockType fontForViewStateBlock; // @synthesize fontForViewStateBlock=_fontForViewStateBlock;
@property(retain, nonatomic) UIInterfaceActionConcreteVisualStyle<UIInterfaceActionConcreteVisualStyleImpl> *concreteVisualStyle; // @synthesize concreteVisualStyle=_concreteVisualStyle;
@property(readonly, nonatomic) UIInterfaceActionGroupViewState *groupViewState; // @synthesize groupViewState=_groupViewState;
- (void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000d7cb0
- (id)actionPropertiesAffectingActionRepresentationViewStyling;	// IMP=0x00000000000d7c3b
- (void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d7b88
- (id)actionPropertiesAffectingImageViewStyling;	// IMP=0x00000000000d7abc
- (void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d7a09
- (id)actionPropertiesAffectingLabelStyling;	// IMP=0x00000000000d793d
- (void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2;	// IMP=0x00000000000d78b2
- (id)actionGroupPropertiesAffectingActionsScrollViewStyling;	// IMP=0x00000000000d783d
- (void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d77b2
- (void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2;	// IMP=0x00000000000d7727
- (double)actionSpacingForGroupViewState:(id)arg1;	// IMP=0x00000000000d76ad
- (id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2;	// IMP=0x00000000000d7611
- (id)actionClassificationLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d7597
- (id)actionClassificationLabelFontForViewState:(id)arg1;	// IMP=0x00000000000d74c7
- (id)actionTitleLabelCompositingFilterForViewState:(id)arg1;	// IMP=0x00000000000d744d
- (id)actionTitleLabelColorForViewState:(id)arg1;	// IMP=0x00000000000d73d3
- (id)actionTitleLabelFontForViewState:(id)arg1;	// IMP=0x00000000000d7303
- (id)newActionBackgroundViewForViewState:(id)arg1;	// IMP=0x00000000000d7295
- (id)newSectionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000d7150
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;	// IMP=0x00000000000d70e2
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;	// IMP=0x00000000000d7074
- (id)actionViewStateForAttachingToActionRepresentationView:(id)arg1;	// IMP=0x00000000000d6ffa
- (double)actionTitleLabelMinimumScaleFactor;	// IMP=0x00000000000d6faa
- (_Bool)selectByIndirectPointerTouchRequired;	// IMP=0x00000000000d6f66
- (_Bool)selectionFeedbackEnabled;	// IMP=0x00000000000d6f22
- (_Bool)selectByPressGestureRequired;	// IMP=0x00000000000d6ede
- (struct UIEdgeInsets)contentMargin;	// IMP=0x00000000000d6e82
- (double)contentCornerRadius;	// IMP=0x00000000000d6e32
- (struct UIEdgeInsets)actionSequenceEdgeInsets;	// IMP=0x00000000000d6dd6
- (double)actionSectionSpacing;	// IMP=0x00000000000d6d86
- (_Bool)allowsZeroSizedSectionSeparators;	// IMP=0x00000000000d6d42
- (double)verticalImageContentSpacing;	// IMP=0x00000000000d6cf2
- (double)horizontalImageContentSpacing;	// IMP=0x00000000000d6ca2
- (struct CGSize)minimumActionContentSize;	// IMP=0x00000000000d6c48
- (struct CGSize)maximumActionGroupContentSize;	// IMP=0x00000000000d6bee
- (id)defaultScreen;	// IMP=0x00000000000d6b9e
- (id)_styleForVisualProperties;	// IMP=0x00000000000d6b84
- (void)_base_configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d68bc
- (id)_base_actionPropertiesAffectingImageViewStyling;	// IMP=0x00000000000d6855
- (void)_base_configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3;	// IMP=0x00000000000d6442
- (id)_base_actionPropertiesAffectingLabelStyling;	// IMP=0x00000000000d63af
- (id)copyWithGroupViewState:(id)arg1;	// IMP=0x00000000000d5fb4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d5f2d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d5def
@property(readonly, copy) NSString *description;
- (id)initWithConcreteVisualStyle:(id)arg1;	// IMP=0x00000000000d5c7c
- (id)init;	// IMP=0x00000000000d5c3c
- (id)defaultConcreteActionTitleLabelPreferredFont;	// IMP=0x00000000000d7e17
- (id)defaultConcreteActionTitleLabelRegularFont;	// IMP=0x00000000000d7db0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

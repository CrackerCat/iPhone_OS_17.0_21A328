//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString, UIBezierPath, UIDescriptionBuilder, _UITraitStorageList;

@interface NSObject (UIAccessibility)
+ (void)__accessibilityRequestGuidedAccessSession:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00200000000b631f
+ (long long)__accessibilityGuidedAccessRestrictionStateForIdentifier:(id)arg1;	// IMP=0x00200000000b6317
+ (_Bool)__accessibilityGuidedAccessStateEnabled;	// IMP=0x00200000000b630f
+ (void)_installAppearanceSwizzlesForSetter:(id)arg1;	// IMP=0x00200000009a2d08
@property(copy, nonatomic) CDUnknownBlockType accessibilityCustomActionsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityMagicTapBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityPerformEscapeBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityDecrementBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityIncrementBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityActivateBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityPathBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityNavigationStyleBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityFrameBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityActivationPointBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityContainerTypeBlock;
@property(copy, nonatomic) CDUnknownBlockType automationElementsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityElementsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityShouldGroupAccessibilityChildrenBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityViewIsModalBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityRespondsToUserInteractionBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityElementsHiddenBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityAttributedValueBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityAttributedUserInputLabelsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityUserInputLabelsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityTextualContextBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityLanguageBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityAttributedHintBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityAttributedLabelBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityHeaderElementsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityIdentifierBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityTraitsBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityHintBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityValueBlock;
@property(copy, nonatomic) CDUnknownBlockType accessibilityLabelBlock;
@property(copy, nonatomic) CDUnknownBlockType isAccessibilityElementBlock;
- (void *)_accessibilityGetBlockForAttribute:(long long)arg1;	// IMP=0x00100000000b5eb2
- (void)_accessibilitySetReturnBlock:(void *)arg1 forAttribute:(long long)arg2;	// IMP=0x00100000000b5d52
@property(copy, nonatomic) NSArray *accessibilityHeaderElements;
@property(nonatomic) unsigned long long accessibilityDirectTouchOptions;
@property(retain, nonatomic) NSString *accessibilityTextualContext;
@property(copy, nonatomic) NSArray *accessibilityAttributedUserInputLabels;
@property(retain, nonatomic) NSArray *accessibilityUserInputLabels;
- (void)_internalSetAccessibilityAttributedUserInputLabels:(id)arg1;	// IMP=0x00100000000b5935
@property(nonatomic) _Bool accessibilityRespondsToUserInteraction;
@property(nonatomic) long long accessibilityNavigationStyle;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren; // @dynamic shouldGroupAccessibilityChildren;
@property(retain, nonatomic) NSString *accessibilityLanguage; // @dynamic accessibilityLanguage;
- (void)setAccessibilityContainer:(id)arg1;	// IMP=0x00100000000b57d9
@property(nonatomic) _Bool isAccessibilityElement; // @dynamic isAccessibilityElement;
@property(nonatomic) unsigned long long accessibilityTraits; // @dynamic accessibilityTraits;
@property(nonatomic) struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(copy, nonatomic) UIBezierPath *accessibilityPath;
@property(nonatomic) struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedHint;
@property(copy, nonatomic) NSString *accessibilityHint; // @dynamic accessibilityHint;
- (void)_internalSetAccessibilityAttributedHint:(id)arg1;	// IMP=0x00100000000b562c
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedValue;
@property(copy, nonatomic) NSString *accessibilityValue; // @dynamic accessibilityValue;
- (void)_internalSetAccessibilityAttributedValue:(id)arg1;	// IMP=0x00100000000b5591
@property(copy, nonatomic) NSAttributedString *accessibilityAttributedLabel;
@property(copy, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (void)_internalSetAccessibilityAttributedLabel:(id)arg1;	// IMP=0x00100000000b54f6
@property(nonatomic) _Bool accessibilityViewIsModal; // @dynamic accessibilityViewIsModal;
@property(nonatomic) _Bool accessibilityElementsHidden; // @dynamic accessibilityElementsHidden;
- (id)storedAccessibilityDirectTouchOptions;	// IMP=0x00100000000b5421
- (id)storedAccessibilityRespondsToUserInteraction;	// IMP=0x00100000000b5410
- (id)storedAccessibilityActivationPoint;	// IMP=0x00100000000b53ff
- (id)storedAccessibilityFrame;	// IMP=0x00100000000b53ee
- (id)storedIsAccessibilityElement;	// IMP=0x00100000000b53dd
- (id)storedAccessibilityTraits;	// IMP=0x00100000000b53cc
- (id)storedAccessibilityViewIsModal;	// IMP=0x00100000000b53bb
- (id)storedAccessibilityElementsHidden;	// IMP=0x00100000000b53aa
- (id)storedAccessibilityNavigationStyle;	// IMP=0x00100000000b5399
- (id)storedShouldGroupAccessibilityChildren;	// IMP=0x00100000000b5388
- (id)storedAccessibilityIdentifier;	// IMP=0x00100000000b5377
- (id)_internalAccessibilityAttributedUserInputLabels;	// IMP=0x00100000000b51e4
- (id)accessibilityContainer;	// IMP=0x00100000000b50ca
- (id)_internalAccessibilityAttributedHint;	// IMP=0x00100000000b4f51
- (id)_internalAccessibilityAttributedValue;	// IMP=0x00100000000b4f03
- (id)_internalAccessibilityAttributedLabel;	// IMP=0x00100000000b4eb5
- (id)accessibilityAssistiveTechnologyFocusedIdentifiers;	// IMP=0x00100000000b620e
- (_Bool)accessibilityElementIsFocused;	// IMP=0x00100000000b6206
- (void)accessibilityElementDidLoseFocus;	// IMP=0x00100000000b6200
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x00100000000b61fa
@property(retain, nonatomic) NSArray *accessibilityCustomActions;
- (_Bool)accessibilityActivate;	// IMP=0x00100000000b626e
- (_Bool)accessibilityPerformMagicTap;	// IMP=0x00100000000b6266
- (_Bool)accessibilityPerformEscape;	// IMP=0x00100000000b625e
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x00100000000b6256
- (_Bool)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000b624e
- (_Bool)accessibilityZoomInAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000b6246
- (void)accessibilityDecrement;	// IMP=0x00100000000b6240
- (void)accessibilityIncrement;	// IMP=0x00100000000b623a
- (void)_accessibilityFinalize;	// IMP=0x00100000000b6309
- (void)accessibilitySetIdentification:(id)arg1;	// IMP=0x00100000000b62f3
- (id)accessibilityIdentification;	// IMP=0x00100000000b62e2
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;	// IMP=0x00100000000b63ea
- (_Bool)isAccessibilityElementByDefault;	// IMP=0x00100000000b63e2
- (unsigned long long)defaultAccessibilityTraits;	// IMP=0x00100000000b63d2
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) NSString *accessibilityLocalizedStringKey;
- (unsigned int)_accessibilityGetContextID;	// IMP=0x00100000000b7290
- (struct __IOHIDEvent *)_keyboardActivateEventDown:(_Bool)arg1;	// IMP=0x00100000000b7142
- (void)_keyboardActivate;	// IMP=0x00100000000b705b
- (id)accessibilityDropPointDescriptors;	// IMP=0x00100000000b7758
- (void)setAccessibilityDropPointDescriptors:(id)arg1;	// IMP=0x00100000000b7742
- (id)accessibilityDragSourceDescriptors;	// IMP=0x00100000000b7731
- (void)setAccessibilityDragSourceDescriptors:(id)arg1;	// IMP=0x00100000000b771b
@property(nonatomic) long long accessibilityContainerType;
- (id)storedAccessibilityContainerType;	// IMP=0x00100000000b8865
@property(retain, nonatomic) NSArray *automationElements;
@property(retain, nonatomic) NSArray *accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;	// IMP=0x00100000000b8807
- (id)accessibilityElementAtIndex:(long long)arg1;	// IMP=0x00100000000b87ff
- (long long)accessibilityElementCount;	// IMP=0x00100000000b87f7
@property(copy, nonatomic) CDUnknownBlockType accessibilityCustomRotorsBlock;
@property(retain, nonatomic) NSArray *accessibilityCustomRotors;
- (_Bool)__isKindOfUICollectionView;	// IMP=0x00100000003e7466
- (_Bool)__isKindOfUIViewController;	// IMP=0x0010000000604840
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSDataValue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000076db71
- (id)_NSItemProviderTypeCoercion_coercedUIImageValueFromNSURLValue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000076da0e
- (id)uiPresentationManager;	// IMP=0x00100000008df160
- (id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2;	// IMP=0x001000000091d5c5
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x0010000000968f38
- (_Bool)conformsToProtocolCached:(id)arg1;	// IMP=0x0010000000a55ed0
- (void)prepareForInterfaceBuilder;	// IMP=0x0010000000a6a0bd
- (void)awakeFromNib;	// IMP=0x0010000000a6a0b7
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;	// IMP=0x0010000000a6e249
- (void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x0010000000a7a653
- (id)_uikit_valueForTraitCollection:(id)arg1;	// IMP=0x0010000000a7a66d
- (_Bool)_uikit_variesByTraitCollections;	// IMP=0x0010000000a7a665
- (void)_applyTraitStorageRecordsForTraitCollection:(id)arg1;	// IMP=0x0010000000a7ad64
@property(retain, getter=_traitStorageList, setter=_setTraitStorageList:) _UITraitStorageList *traitStorageList;
- (_Bool)_ui_isKindOfTextSelectionRect;	// IMP=0x0010000000f25463
- (_Bool)__isKindOfUIResponder;	// IMP=0x00100000010115fe
- (id)_shortMethodDescription;	// IMP=0x00100000014dcfcd
- (id)_methodDescription;	// IMP=0x00100000014dcf05
- (id)__methodDescriptionForClass:(Class)arg1;	// IMP=0x00100000014dc9f5
- (id)_propertyDescription;	// IMP=0x00100000014dc92d
- (id)__propertyDescriptionForClass:(Class)arg1;	// IMP=0x00100000014dc4c6
- (id)_ivarDescription;	// IMP=0x00100000014dc3e9
- (id)__ivarDescriptionForClass:(Class)arg1;	// IMP=0x00100000014dc241
@property(readonly, nonatomic) UIDescriptionBuilder *_ui_descriptionBuilder;
- (_Bool)__isKindOfUIRemoteViewController;	// IMP=0x0010000001512fdf
- (id)className;	// IMP=0x0010000001580453
- (_Bool)__isKindOfUIScrollView;	// IMP=0x00100000015f5b00
- (_Bool)__isKindOfUIWindow;	// IMP=0x00100000016b33da
- (_Bool)__isKindOfUIView;	// IMP=0x00100000016b33d2
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class CNGeminiBadge, CNGeminiResult, NSArray, NSDictionary, UIColor, UIImageView, UILabel, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface CNContactGeminiView : UIButton
{
    _Bool _allowsPickerActions;	// 8 = 0x8
    _Bool _didCalculateLayout;	// 9 = 0x9
    _Bool _isUsingTwoLineLayout;	// 10 = 0xa
    CNGeminiResult *_geminiResult;	// 16 = 0x10
    UIColor *_highlightedColor;	// 24 = 0x18
    UIColor *_backgroundColor;	// 32 = 0x20
    NSDictionary *_ab_textAttributes;	// 40 = 0x28
    UILayoutGuide *_layoutGuide;	// 48 = 0x30
    UILayoutGuide *_geminiLabelLayoutGuide;	// 56 = 0x38
    CNGeminiBadge *_geminiBadge;	// 64 = 0x40
    UILabel *_typeLabel;	// 72 = 0x48
    UILabel *_geminiLabel;	// 80 = 0x50
    UIImageView *_chevronView;	// 88 = 0x58
    NSArray *_activatedConstraints;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x006000000023cd3c
- (void).cxx_destruct;	// IMP=0x000000000023cc72
@property(nonatomic) _Bool isUsingTwoLineLayout; // @synthesize isUsingTwoLineLayout=_isUsingTwoLineLayout;
@property(nonatomic) _Bool didCalculateLayout; // @synthesize didCalculateLayout=_didCalculateLayout;
@property(retain, nonatomic) NSArray *activatedConstraints; // @synthesize activatedConstraints=_activatedConstraints;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *geminiLabel; // @synthesize geminiLabel=_geminiLabel;
@property(retain, nonatomic) UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(retain, nonatomic) CNGeminiBadge *geminiBadge; // @synthesize geminiBadge=_geminiBadge;
@property(retain, nonatomic) UILayoutGuide *geminiLabelLayoutGuide; // @synthesize geminiLabelLayoutGuide=_geminiLabelLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *layoutGuide; // @synthesize layoutGuide=_layoutGuide;
@property(copy, nonatomic) NSDictionary *ab_textAttributes; // @synthesize ab_textAttributes=_ab_textAttributes;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) CNGeminiResult *geminiResult; // @synthesize geminiResult=_geminiResult;
@property(nonatomic) _Bool allowsPickerActions; // @synthesize allowsPickerActions=_allowsPickerActions;
- (id)viewForLastBaselineLayout;	// IMP=0x000000000023cab9
- (id)viewForFirstBaselineLayout;	// IMP=0x000000000023caa7
- (_Bool)_hasBaseline;	// IMP=0x000000000023ca5e
- (id)geminiViewChevronImage;	// IMP=0x000000000023c9ac
- (id)localizedLabelFromGeminiResult:(id)arg1;	// IMP=0x000000000023c43e
- (id)localizedChannelUsageFromGeminiResult:(id)arg1;	// IMP=0x000000000023c360
- (id)twoLineLayoutConstraints;	// IMP=0x000000000023b2fb
- (id)singleLineLayoutConstraints;	// IMP=0x000000000023a9cb
- (void)updateConstraints;	// IMP=0x000000000023a8e8
- (_Bool)doesLayoutRequireTwoLines;	// IMP=0x000000000023a701
- (void)layoutSubviews;	// IMP=0x000000000023a6c3
- (void)calculateLayoutIfNeeded;	// IMP=0x000000000023a5c1
- (void)setNeedsCalculateLayout;	// IMP=0x000000000023a5ad
- (_Bool)shouldDisplayChevron;	// IMP=0x000000000023a4e9
- (_Bool)shouldDisplayBadge;	// IMP=0x000000000023a47b
- (struct CGSize)sizeForTwoLineLayoutFittingSize:(struct CGSize)arg1;	// IMP=0x000000000023a273
- (struct CGSize)sizeForSingleLineLayoutFittingSize:(struct CGSize)arg1;	// IMP=0x000000000023a07c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000023a022
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000239d08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002399a3

@end

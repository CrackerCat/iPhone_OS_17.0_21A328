//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UILabel;

@interface CarTwoPartLabel : UIView
{
    UILabel *_topLabel;	// 8 = 0x8
    UILabel *_bottomLabel;	// 16 = 0x10
    NSLayoutConstraint *_topToBottomConstraint;	// 24 = 0x18
    NSString *_primaryText;	// 32 = 0x20
    NSAttributedString *_primaryAttributedText;	// 40 = 0x28
    NSString *_secondaryText;	// 48 = 0x30
    NSString *_secondaryAccessibilityText;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000078d4ce
@property(retain, nonatomic) NSString *secondaryAccessibilityText; // @synthesize secondaryAccessibilityText=_secondaryAccessibilityText;
@property(retain, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(retain, nonatomic) NSAttributedString *primaryAttributedText; // @synthesize primaryAttributedText=_primaryAttributedText;
@property(retain, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000078d395
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000078d326
- (id)viewForLastBaselineLayout;	// IMP=0x001000000078d311
- (id)viewForFirstBaselineLayout;	// IMP=0x001000000078d2fc
- (void)_setupConstraints;	// IMP=0x001000000078cb23
- (double)_topToBottomBaselineConstant;	// IMP=0x001000000078ca1d
- (void)layoutIfNeeded;	// IMP=0x001000000078c418
- (id)initWithTopLabelHorizontalCompressionResistancePriority:(float)arg1 bottomLabelHorizontalCompressionResistancePriority:(float)arg2;	// IMP=0x001000000078bf78

@end

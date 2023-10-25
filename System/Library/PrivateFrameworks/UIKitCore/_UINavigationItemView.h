//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UILabel, UINavigationItem;

__attribute__((visibility("hidden")))
@interface _UINavigationItemView : UIView
{
    UINavigationItem *_item;	// 128 = 0x80
    struct CGSize _titleSize;	// 136 = 0x88
    UIView *_topCrossView;	// 152 = 0x98
    UIView *_bottomCrossView;	// 160 = 0xa0
    _Bool _isCrossFading;	// 168 = 0xa8
    _Bool _customFontSet;	// 169 = 0xa9
    UILabel *_label;	// 176 = 0xb0
    _Bool __isFadingInFromCustomAlpha;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000024253a
@property(nonatomic, setter=_setFadingInFromCustomAlpha:) _Bool _isFadingInFromCustomAlpha; // @synthesize _isFadingInFromCustomAlpha=__isFadingInFromCustomAlpha;
- (void)_cleanUpCrossView;	// IMP=0x0000000000242490
- (void)_crossFadeHiddingButton:(_Bool)arg1;	// IMP=0x00000000002423b8
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg1;	// IMP=0x00000000002420ba
- (id)description;	// IMP=0x0000000000241fb2
- (void)_setLineBreakMode:(long long)arg1;	// IMP=0x0000000000241f95
- (id)font;	// IMP=0x0000000000241f78
- (void)setFont:(id)arg1;	// IMP=0x0000000000241ee2
- (void)_setFont:(id)arg1;	// IMP=0x0000000000241db3
- (_Bool)titleAutoresizesToFit;	// IMP=0x0000000000241d96
- (void)setTitleAutoresizesToFit:(_Bool)arg1;	// IMP=0x0000000000241d5d
- (id)title;	// IMP=0x0000000000241d17
- (struct CGSize)_titleSize;	// IMP=0x0000000000241c99
- (void)_resetTitleSize;	// IMP=0x0000000000241c72
- (void)layoutSubviews;	// IMP=0x0000000000241c60
- (void)_updateLabel;	// IMP=0x0000000000241bc0
- (struct CGRect)_labelFrame;	// IMP=0x00000000002419f4
- (double)_titleYAdjustmentCustomization;	// IMP=0x0000000000241952
- (void)_updateLabelContents;	// IMP=0x00000000002417ea
- (void)_updateLabelColor;	// IMP=0x000000000024173c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000002416d8
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x00000000002415d2
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x00000000002414b2
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x00000000002413bb
- (id)_defaultFont;	// IMP=0x000000000024133a
- (id)navigationItem;	// IMP=0x0000000000241321
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x00000000002410e8

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel, UINavigationItem;

__attribute__((visibility("hidden")))
@interface CNFRegNavigationBarTitleView : UIView
{
    UINavigationItem *_item;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIActivityIndicatorView *_activityIndicator;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000813f4
@property(nonatomic) UINavigationItem *item; // @synthesize item=_item;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000081071
- (void)layoutSubviews;	// IMP=0x0000000000080f01
- (void)_updateTitleLabel;	// IMP=0x0000000000080cd5
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000080c42
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x0000000000080c16
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x0000000000080b45
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x0000000000080a86
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x00000000000809be
- (id)_defaultFont;	// IMP=0x0000000000080944
- (id)_titleTextColorForBarStyle:(long long)arg1;	// IMP=0x0000000000080906
- (void)dealloc;	// IMP=0x00000000000808bd
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000807b1
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x0000000000080685

@end

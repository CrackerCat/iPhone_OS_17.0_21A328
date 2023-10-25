//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, OverflowView, UIStackView;

@interface TopBannerView
{
    UIStackView *_stackView;	// 8 = 0x8
    OverflowView *_overflowView;	// 16 = 0x10
    NSLayoutConstraint *_maximumHeightConstraint;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000002fb7c2
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) double maximumHeight;
- (void)_updateItemViews;	// IMP=0x00100000002fb1e4
- (id)_initialConstraints;	// IMP=0x00100000002faf13
- (void)_createSubviews;	// IMP=0x00100000002fadde
- (void)_commonInit;	// IMP=0x00100000002fad09
- (id)initAllowingBlurredForButton:(_Bool)arg1;	// IMP=0x00100000002facbd

@end

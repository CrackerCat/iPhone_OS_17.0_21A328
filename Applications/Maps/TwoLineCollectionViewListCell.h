//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, TwoLinesContentView;
@protocol PersonalizedItem, TwoLinesContentViewModel;

@interface TwoLineCollectionViewListCell
{
    id <TwoLinesContentViewModel> _viewModel;	// 8 = 0x8
    TwoLinesContentView *_twoLinesContentView;	// 16 = 0x10
    NSLayoutConstraint *_leadingContraint;	// 24 = 0x18
    double _leadingSpace;	// 32 = 0x20
}

+ (_Bool)hasClearBackground;	// IMP=0x002000000044936d
+ (id)identifier;	// IMP=0x001000000044935b
+ (double)estimatedCellHeight;	// IMP=0x001000000044933a
+ (double)cellHeight;	// IMP=0x0010000000449329
- (void).cxx_destruct;	// IMP=0x0010000000449e36
@property(nonatomic) double leadingSpace; // @synthesize leadingSpace=_leadingSpace;
@property(retain, nonatomic) NSLayoutConstraint *leadingContraint; // @synthesize leadingContraint=_leadingContraint;
@property(retain, nonatomic) TwoLinesContentView *twoLinesContentView; // @synthesize twoLinesContentView=_twoLinesContentView;
@property(retain, nonatomic) id <TwoLinesContentViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateAccessories;	// IMP=0x0010000000449bcd
- (void)twoLinesTableViewCellModelDidUpdate:(id)arg1;	// IMP=0x0010000000449bbb
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0010000000449a69
- (void)updateLeadingSpace:(double)arg1;	// IMP=0x00100000004498fa
- (double)leadingPadding;	// IMP=0x00100000004498bc
- (void)setSelected:(_Bool)arg1;	// IMP=0x001000000044986b
- (_Bool)canBecomeFirstResponder;	// IMP=0x0010000000449859
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000449375
@property(nonatomic, readonly) id <PersonalizedItem> personalizedItemForQuickActionMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, SKUITracklistColumnData, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistHeaderCollectionViewCell
{
    UIView *_bottomSeparatorView;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    NSMutableDictionary *_columnViews;	// 24 = 0x18
    UIView *_topSeparatorView;	// 32 = 0x20
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000036dad8
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000036cfa7
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x001000000036cd8f
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x001000000036cd36
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000036cceb
+ (struct CGSize)sizeForHeaderTitleLabel:(id)arg1;	// IMP=0x001000000036cc29
- (void).cxx_destruct;	// IMP=0x000000000036dca3
- (void)layoutSubviews;	// IMP=0x000000000036d5d2
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000036d5ca
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000036d5c2
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000036d5ba
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000036d5b4
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000036d208
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036ca20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSString, SUUIOfferView;

__attribute__((visibility("hidden")))
@interface SUUIOfferCollectionViewCell : SUUICollectionViewCell
{
    SUUIOfferView *_offerView;	// 8 = 0x8
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000089a94
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000089a5e
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000089a45
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000089a2c
- (void).cxx_destruct;	// IMP=0x0000000000089c3d
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000089bcb
- (void)layoutSubviews;	// IMP=0x0000000000089b21
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x0000000000089b04
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000089ae7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000089aca
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000089aad
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0000000000089a77
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x000000000008998c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000089888

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

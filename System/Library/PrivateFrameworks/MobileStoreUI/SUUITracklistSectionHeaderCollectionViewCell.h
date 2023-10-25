//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString, SUUIButtonViewElement, SUUIBuyButtonDescriptor, SUUITracklistColumnData, UIControl, UIView;

__attribute__((visibility("hidden")))
@interface SUUITracklistSectionHeaderCollectionViewCell
{
    UIControl *_button;	// 8 = 0x8
    SUUIButtonViewElement *_buttonViewElement;	// 16 = 0x10
    SUUIBuyButtonDescriptor *_buyButtonDescriptor;	// 24 = 0x18
    SUUITracklistColumnData *_columnData;	// 32 = 0x20
    NSMutableArray *_labels;	// 40 = 0x28
    UIView *_separatorView;	// 48 = 0x30
}

+ (double)_titlesWidthForWidth:(double)arg1 columnData:(id)arg2;	// IMP=0x001000000032b3fb
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x001000000032a14f
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000329e15
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000329dff
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000329c18
- (void).cxx_destruct;	// IMP=0x000000000032b49b
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000032b37e
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000032b362
- (void)_buttonAction:(id)arg1;	// IMP=0x000000000032b274
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x000000000032b1a6
- (void)layoutSubviews;	// IMP=0x000000000032aa97
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000032aa8f
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000032a9b5
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000032a9ad
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x000000000032a38a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000329b18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

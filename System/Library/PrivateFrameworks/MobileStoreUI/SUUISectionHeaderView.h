//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable, NSString, SUUIHeaderViewElement;

__attribute__((visibility("hidden")))
@interface SUUISectionHeaderView
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    struct CGSize _lastFitSize;	// 40 = 0x28
    NSArray *_lines;	// 56 = 0x38
    SUUIHeaderViewElement *_header;	// 64 = 0x40
    NSMapTable *_views;	// 72 = 0x48
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000002142f3
+ (id)_linesForViewElement:(id)arg1 width:(double)arg2 buttonSize:(struct CGSize)arg3 context:(id)arg4;	// IMP=0x0010000000214178
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x0010000000213e8c
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000213c8e
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000211cbf
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000211906
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x0010000000211873
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x001000000021186b
- (void).cxx_destruct;	// IMP=0x0000000000214308
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000002139a8
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000213990
- (void)layoutSubviews;	// IMP=0x00000000002128e7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002128df
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002128d7
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002128cf
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000212877
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002121e7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002117e3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICellLayout.h"

@class NSString, SUUIEditorialLinkView, SUUITextBoxView;

__attribute__((visibility("hidden")))
@interface SUUIEditorialCellLayout : SUUICellLayout
{
    struct UIEdgeInsets _contentInset;	// 8 = 0x8
    double _linkSpacing;	// 40 = 0x28
    SUUIEditorialLinkView *_linkView;	// 48 = 0x30
    SUUITextBoxView *_textBoxView;	// 56 = 0x38
    double _totalHeight;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000037c8ec
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (id)_textBoxView;	// IMP=0x000000000037c735
- (id)_linkView;	// IMP=0x000000000037c62c
- (void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2;	// IMP=0x000000000037c56b
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x000000000037c4cb
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000037c43d
- (void)layoutSubviews;	// IMP=0x000000000037c1e3
@property(readonly, nonatomic) SUUITextBoxView *textBoxView;
- (void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(_Bool)arg3;	// IMP=0x000000000037beea
- (void)resetContentInset;	// IMP=0x000000000037bed8
- (void)dealloc;	// IMP=0x000000000037be8d
- (id)initWithParentView:(id)arg1;	// IMP=0x000000000037be41
- (id)initWithCollectionViewCell:(id)arg1;	// IMP=0x000000000037bdf5
- (void)_initContentInset;	// IMP=0x000000000037bdd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

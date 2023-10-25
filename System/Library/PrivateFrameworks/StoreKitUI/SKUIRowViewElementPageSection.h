//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKUIStorePageSection.h"

@class NSString, SKUIRowComponent, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIRowViewElementPageSection : SKUIStorePageSection
{
    SKUIViewElementLayoutContext *_cellLayoutContext;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002a50c2
- (double)_singleColumnWidth;	// IMP=0x00000000002a4e7c
- (id)_reuseIdentifierForViewElement:(id)arg1;	// IMP=0x00000000002a4d72
- (id)_reuseIdentifierForLockupViewElement:(id)arg1;	// IMP=0x00000000002a4d3b
- (id)_reuseIdentifierForCardViewElement:(id)arg1;	// IMP=0x00000000002a4d08
- (void)_requestLayoutForCells;	// IMP=0x00000000002a4c41
- (double)_interiorColumnSpacing;	// IMP=0x00000000002a4aef
- (id)_firstChildForColumn:(id)arg1;	// IMP=0x00000000002a49b6
- (void)_enumerateViewElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a47a0
- (struct UIEdgeInsets)_contentInsetForIndexPath:(id)arg1;	// IMP=0x00000000002a463b
- (Class)_cellClassForViewElement:(id)arg1;	// IMP=0x00000000002a4536
- (Class)_cellClassForLockupViewElement:(id)arg1;	// IMP=0x00000000002a44f8
- (Class)_cellClassForCardViewElement:(id)arg1;	// IMP=0x00000000002a44b5
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002a42e1
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002a4240
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002a3f39
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002a3d04
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000002a3c12
- (long long)numberOfCells;	// IMP=0x00000000002a3b7d
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000002a3af4
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a3974
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a37d1
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a37c9
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a37c1
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002a34d9
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002a32f8
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002a303e
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002a2e8f
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000002a2d35
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000002a2bab
- (void)dealloc;	// IMP=0x00000000002a2b60
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000002a2aca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SKUIRowComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

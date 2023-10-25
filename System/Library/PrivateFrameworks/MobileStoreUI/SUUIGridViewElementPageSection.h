//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class IKColor, NSArray, NSString, SUUIGridComponent, SUUIGridViewElementPageSectionConfiguration, SUUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SUUIGridViewElementPageSection : SUUIStorePageSection
{
    IKColor *_backgroundColor;	// 8 = 0x8
    SUUIViewElementLayoutContext *_cellLayoutContext;	// 16 = 0x10
    double _cellPaddingInteriorHorizontal;	// 24 = 0x18
    double _cellPaddingLeftEdgeHorizontal;	// 32 = 0x20
    double _cellPaddingRightEdgeHorizontal;	// 40 = 0x28
    SUUIGridViewElementPageSectionConfiguration *_configuration;	// 48 = 0x30
    _Bool _editing;	// 56 = 0x38
    NSArray *_indexPathsForBackgroundItems;	// 64 = 0x40
    long long _lastNeedsMoreCount;	// 72 = 0x48
    NSArray *_viewElements;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000002c6c5b
- (void)_resetLayoutProperties;	// IMP=0x00000000002c6be5
- (void)_requestLayoutForCells;	// IMP=0x00000000002c6a9a
- (void)_reloadViewElementProperties;	// IMP=0x00000000002c6965
- (void)_enumerateVisibleViewElementsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002c67a9
- (_Bool)_containsOnlyShelfElements;	// IMP=0x00000000002c662e
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;	// IMP=0x00000000002c65bf
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000002c63e8
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002c63d3
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
- (void)_setContext:(id)arg1;	// IMP=0x00000000002c634d
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000002c6294
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000002c5eb4
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002c5d53
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;	// IMP=0x00000000002c5bc9
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x00000000002c5af6
- (_Bool)requestLayoutWithReloadReason:(long long)arg1;	// IMP=0x00000000002c5acc
- (void)reloadVisibleCellsWithReason:(long long)arg1;	// IMP=0x00000000002c5a26
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x00000000002c598c
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x00000000002c5801
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x00000000002c53a7
- (long long)numberOfCells;	// IMP=0x00000000002c538a
- (id)indexPathsForBackgroundItems;	// IMP=0x00000000002c5375
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002c5062
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000002c4f64
- (void)deselectItemsAnimated:(_Bool)arg1;	// IMP=0x00000000002c4d38
- (void)collectionViewWillScrollToOffset:(struct CGPoint)arg1 visibleRange:(struct SUUIIndexPathRange)arg2;	// IMP=0x00000000002c4c04
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x00000000002c4b92
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c4a2a
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c48d4
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c48cc
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c48c4
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c45c4
- (void)collectionViewDidLongPressItemAtIndexPath:(id)arg1;	// IMP=0x00000000002c4532
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x00000000002c4484
- (id)cellForIndexPath:(id)arg1;	// IMP=0x00000000002c43db
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x00000000002c4167
- (id)backgroundColorForSection;	// IMP=0x00000000002c4152
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x00000000002c404b
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000002c3f3e
- (void)dealloc;	// IMP=0x00000000002c3ef3
- (id)initWithPageComponent:(id)arg1;	// IMP=0x00000000002c3e6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SUUIGridComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIStorePageSection.h"

@class NSString, SUUICollectionViewCell, SUUIViewElementLayoutContext;
@protocol SUUIViewElementView;

__attribute__((visibility("hidden")))
@interface SUUIViewElementPageSection : SUUIStorePageSection
{
    Class _cellClass;	// 8 = 0x8
    struct UIEdgeInsets _cellContentInset;	// 16 = 0x10
    SUUIViewElementLayoutContext *_cellLayoutContext;	// 48 = 0x30
    double _firstSectionTopInset;	// 56 = 0x38
    SUUICollectionViewCell<SUUIViewElementView> *_lastCell;	// 64 = 0x40
    _Bool _rendersWithPerspective;	// 72 = 0x48
    NSString *_reuseIdentifier;	// 80 = 0x50
    double _sectionBottomInset;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000369d51
- (_Bool)_stretchesToFitCollectionViewBounds;	// IMP=0x0000000000369cbb
- (_Bool)_showsImageReflection;	// IMP=0x0000000000369cb3
- (void)_requestCellLayout;	// IMP=0x0000000000369be0
- (void)_reloadViewElementProperties;	// IMP=0x00000000003694d2
@property(readonly, nonatomic) double defaultVerticalInset;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x0000000000369388
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003692dc
- (void)willAppearInContext:(id)arg1;	// IMP=0x00000000003691b4
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000369121
- (struct UIEdgeInsets)sectionContentInset;	// IMP=0x000000000036900a
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;	// IMP=0x0000000000368ee8
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x0000000000368e23
- (void)prefetchResourcesWithReason:(long long)arg1;	// IMP=0x0000000000368d68
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000368c9d
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000368b2a
- (long long)numberOfCells;	// IMP=0x0000000000368b1f
- (void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000368934
- (void)expandEditorialForLabelElement:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000000368836
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;	// IMP=0x00000000003687ad
- (long long)defaultItemPinningStyle;	// IMP=0x00000000003686e0
- (double)contentInsetAdjustmentForCollectionView:(id)arg1;	// IMP=0x00000000003685da
- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000003684e3
- (void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1;	// IMP=0x00000000003683ec
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;	// IMP=0x0000000000368145
- (_Bool)collectionViewShouldSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000003680d7
- (_Bool)collectionViewShouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x0000000000368069
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x0000000000367e62
- (struct CGSize)cellSizeForIndexPath:(id)arg1;	// IMP=0x0000000000367d4c
- (id)cellForIndexPath:(id)arg1;	// IMP=0x0000000000367a17
- (id)backgroundColorForIndexPath:(id)arg1;	// IMP=0x000000000036787c
- (long long)applyUpdateType:(long long)arg1;	// IMP=0x000000000036782b
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;	// IMP=0x00000000003677a4
- (id)initWithPageComponent:(id)arg1;	// IMP=0x0000000000367758

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

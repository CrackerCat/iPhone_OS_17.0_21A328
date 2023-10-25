//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMapTable, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIScrollView, UITapGestureRecognizer, UIView, UIVisualEffectView, WBSStartPageSection, _UIVisualEffectBackdropView;
@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate><WBSStartPagePreviewProviding, SFStartPageVisualStyleProviding;

__attribute__((visibility("hidden")))
@interface SFStartPageCollectionViewController : UIViewController
{
    WBSStartPageSection *_cachedCustomizationSection;	// 8 = 0x8
    _UIVisualEffectBackdropView *_cellBackdropCaptureView;	// 16 = 0x10
    UICollectionViewDiffableDataSource *_collectionDataSource;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    _Bool _hasActiveDrag;	// 40 = 0x28
    _Bool _hasAppliedInitialSnapshot;	// 41 = 0x29
    _Bool _hasDeferredUpdates;	// 42 = 0x2a
    _Bool _hasMadeFirstCommit;	// 43 = 0x2b
    _Bool _isPresentingContextMenu;	// 44 = 0x2c
    double _keyboardBottomInset;	// 48 = 0x30
    long long _lastLayoutOrientation;	// 56 = 0x38
    double _lastLayoutWidth;	// 64 = 0x40
    UIVisualEffectView *_navigationBarBackdrop;	// 72 = 0x48
    UIView *_navigationBarSeparator;	// 80 = 0x50
    UIVisualEffectView *_statusBarBackdrop;	// 88 = 0x58
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;	// 96 = 0x60
    id <SFStartPageVisualStyleProviding> _visualStyleProvider;	// 104 = 0x68
    NSMapTable *_contextMenuToItemIdentifierMap;	// 112 = 0x70
    _Bool _displaysSectionHeaders;	// 120 = 0x78
    _Bool _hidesEmptyNavigationBar;	// 121 = 0x79
    _Bool _wantsWallpaperHiddenForCurrentBackgroundStyle;	// 122 = 0x7a
    id <SFStartPageCollectionDataSource> _dataSource;	// 128 = 0x80
    id <SFStartPageCollectionDataSource> _strongDataSource;	// 136 = 0x88
    id <SFStartPageCollectionDelegate><WBSStartPagePreviewProviding> _delegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000000e513c
@property(readonly, nonatomic) _Bool wantsWallpaperHiddenForCurrentBackgroundStyle; // @synthesize wantsWallpaperHiddenForCurrentBackgroundStyle=_wantsWallpaperHiddenForCurrentBackgroundStyle;
@property(nonatomic) _Bool hidesEmptyNavigationBar; // @synthesize hidesEmptyNavigationBar=_hidesEmptyNavigationBar;
@property(nonatomic) _Bool displaysSectionHeaders; // @synthesize displaysSectionHeaders=_displaysSectionHeaders;
@property(nonatomic) __weak id <SFStartPageCollectionDelegate><WBSStartPagePreviewProviding> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SFStartPageCollectionDataSource> strongDataSource; // @synthesize strongDataSource=_strongDataSource;
@property(nonatomic) __weak id <SFStartPageCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000e4fe4
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000e4fd9
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x00000000000e4f78
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x00000000000e4f17
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x00000000000e4f05
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e4ef3
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000000e4ded
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000e4a64
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000000e4a52
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e4a47
- (void)_updateInteractionEnabledForView:(id)arg1;	// IMP=0x00000000000e4997
- (void)_updateInteractionEnabled;	// IMP=0x00000000000e4702
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000000e4696
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x00000000000e45d8
- (_Bool)_canDrop;	// IMP=0x00000000000e4557
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000000e4545
- (id)_dragPreviewParametersForSourceView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000e4398
- (id)_previewForCellAtIndexPath:(id)arg1;	// IMP=0x00000000000e4324
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e429e
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000000e428c
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e3f6c
- (id)_makeCollectionViewLayout;	// IMP=0x00000000000e3df8
- (id)_layoutForSectionAtIndex:(long long)arg1 inEnvironment:(id)arg2;	// IMP=0x00000000000e3c12
- (id)_siteRowSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000e37ea
- (id)_richLinkSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000e33c2
- (id)_siteCardSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000e2f9a
- (id)_siteIconSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000e2c48
- (CDStruct_4eba780f)_siteIconLayoutForEnvironment:(id)arg1 sectionInsets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x00000000000e2ad9
- (id)_bannerSectionLayoutForEnvironment:(id)arg1 includingHeader:(_Bool)arg2;	// IMP=0x00000000000e261f
- (double)_effectiveLayoutWidth;	// IMP=0x00000000000e25a1
- (struct NSDirectionalEdgeInsets)_sectionContentInsets;	// IMP=0x00000000000e245e
- (id)_toggleExpandedActionForSectionIdentifier:(id)arg1;	// IMP=0x00000000000e216c
- (unsigned long long)_collapsedCapacityForSection:(id)arg1;	// IMP=0x00000000000e203a
- (unsigned long long)_itemLimitForSection:(id)arg1;	// IMP=0x00000000000e1f98
- (id)_customizationSection;	// IMP=0x00000000000e1de9
- (void)cancelGestures;	// IMP=0x00000000000e1dbf
- (id)_currentSnapshot;	// IMP=0x00000000000e1afb
- (void)_applyCurrentSnapshotAnimatingDifferences:(_Bool)arg1;	// IMP=0x00000000000e13cc
- (void)_configureHeader:(id)arg1 forSection:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000e11d2
- (id)_collectionView:(id)arg1 supplementaryViewWithKind:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x00000000000e105c
- (void)_configureCell:(id)arg1 forIdentifier:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000e0a2c
- (id)_reuseIdentifierForCellWithIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000e08a6
- (void)_setUpDataSource:(id)arg1;	// IMP=0x00000000000e0409
- (id)_sectionForIdentifier:(id)arg1;	// IMP=0x00000000000e02e1
- (id)sections;	// IMP=0x00000000000e0286
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000e022e
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e021c
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000e002c
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000dff3b
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000dfea1
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000dfe90
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000dfd1e
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000dfbbf
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000df95e
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000df7ad
- (_Bool)_shouldShowContextMenuForCellAtIndexPath:(id)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x00000000000df70a
- (void)_updateCustomTopBackdrops;	// IMP=0x00000000000df313
- (void)reloadNavigationItemAnimated:(_Bool)arg1;	// IMP=0x00000000000df227
- (void)reloadSection:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000ded8c
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;	// IMP=0x00000000000decc3
- (void)updateCollectionViewContentInset;	// IMP=0x00000000000dea1e
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000000de8ea
- (void)keyboardDidChangeFrame:(id)arg1;	// IMP=0x00000000000de83f
- (void)_receivedTapToDismissGesture;	// IMP=0x00000000000de803
- (void)updateBackgroundStyle;	// IMP=0x00000000000de599
@property(readonly, nonatomic, getter=isTrackingDropSession) _Bool trackingDropSession;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;	// IMP=0x00000000000de474
- (void)navigationBarPositionDidChange;	// IMP=0x00000000000de462
- (void)scrollToTop;	// IMP=0x00000000000de1cd
- (void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2;	// IMP=0x00000000000ddf12
- (void)configureModelWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000dddee
- (double)scrollDistance;	// IMP=0x00000000000ddd06
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000dda49
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000dda08
- (void)viewLayoutMarginsDidChange;	// IMP=0x00000000000dd996
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000dd809
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000dd7c0
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000000dd73a
- (void)viewDidLoad;	// IMP=0x00000000000dca21
- (id)initWithVisualStyleProvider:(id)arg1;	// IMP=0x00000000000dc984

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

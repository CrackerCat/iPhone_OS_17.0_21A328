//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s8VideosUI17VUIViewControllerCN.h"

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI19StackViewController : _$s8VideosUI17VUIViewControllerCN
{
    MISSING_TYPE *peekingEnabled;	// 8 = 0x8
    MISSING_TYPE *collectionImpressioner;	// 16 = 0x10
    MISSING_TYPE *stackType;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 64 = 0x40
    MISSING_TYPE *supplementaryHeaderTypeToKindMap;	// 72 = 0x48
    MISSING_TYPE *supplementaryFooterTypeToKindMap;	// 80 = 0x50
    MISSING_TYPE *supplementaryKindToReuseIdentifierMap;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 96 = 0x60
    MISSING_TYPE *templateViewModel;	// 104 = 0x68
    MISSING_TYPE *collectionViewModel;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_prototypeCells;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_supplementaryCells;	// 128 = 0x80
    MISSING_TYPE *sectionViewModels;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_hostingCellViewControllers;	// 144 = 0x90
    MISSING_TYPE *cellConfigurator;	// 152 = 0x98
    MISSING_TYPE *cellActionInterceptor;	// 168 = 0xa8
    MISSING_TYPE *shouldOverrideScrollToTopBehavior;	// 184 = 0xb8
    MISSING_TYPE *isDragAndDropEnabled;	// 185 = 0xb9
    MISSING_TYPE *sectionMetrics;	// 192 = 0xc0
    MISSING_TYPE *_showcasePercentage;	// 2303459532 = 0x894c00cc
    MISSING_TYPE *showcasePercentageContentTopAdjustment;	// 0 = 0x0
    MISSING_TYPE *_showcaseHeight;	// 1208008469 = 0x4800bf15
    MISSING_TYPE *verticalPaginationMonitor;	// 1224775976 = 0x49009928
    MISSING_TYPE *contextMenuInteractor;	// 4178968519 = 0xf915ffc7
}

- (void).cxx_destruct;	// IMP=0x000000000099d385
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000099d1cf
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000099bfbe
- (void)vui_viewDidLayoutSubviews;	// IMP=0x000000000099bbef
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x000000000099bb4c
- (void)vui_viewDidLoad;	// IMP=0x000000000099b8ec
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000099b4c5
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000004d364a
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000004d35b9
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000004d2a7f
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000004d2a6e
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000004d2703
- (_Bool)collectionView:(id)arg1 dragSessionIsRestrictedToDraggingApplication:(id)arg2;	// IMP=0x00000000004d25bc
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000004d24d2

@end

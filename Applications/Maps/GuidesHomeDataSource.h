//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOGuidesHomeResult, GuidesHomeAPIController, GuidesHomeHeaderCell, GuidesHomeLogicController, NSDiffableDataSourceSnapshot, NSString, UICollectionViewDiffableDataSource;
@protocol GuidesHomeAnalytics, GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate;

@interface GuidesHomeDataSource
{
    long long _currentState;	// 8 = 0x8
    GuidesHomeLogicController *_logicController;	// 16 = 0x10
    GEOGuidesHomeResult *_result;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_dataSource;	// 32 = 0x20
    NSDiffableDataSourceSnapshot *_snapshot;	// 40 = 0x28
    id <GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate> _routingDelegate;	// 48 = 0x30
    GuidesHomeAPIController *_apiController;	// 56 = 0x38
    id <GuidesHomeAnalytics> _analyticsManager;	// 64 = 0x40
    GuidesHomeHeaderCell *_headerCell;	// 72 = 0x48
    struct UIEdgeInsets _actualContentInsets;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000003e7f83
@property(nonatomic) struct UIEdgeInsets actualContentInsets; // @synthesize actualContentInsets=_actualContentInsets;
@property(retain, nonatomic) GuidesHomeHeaderCell *headerCell; // @synthesize headerCell=_headerCell;
@property(nonatomic) __weak id <GuidesHomeAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(retain, nonatomic) GuidesHomeAPIController *apiController; // @synthesize apiController=_apiController;
@property(nonatomic) __weak id <GuidesHomeRoutingDelegate><GuideHomeHeaderViewActionDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) GEOGuidesHomeResult *result; // @synthesize result=_result;
@property(retain, nonatomic) GuidesHomeLogicController *logicController; // @synthesize logicController=_logicController;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
- (void)didStartFetchingBatch;	// IMP=0x00100000003e7df6
- (void)shouldConsumeBatch:(_Bool)arg1 fetchedBatch:(id)arg2;	// IMP=0x00100000003e7aa4
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x00100000003e7a9e
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x00100000003e786d
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00100000003e7804
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000003e731c
- (void)didRouteToConceptFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000003e70c2
- (unsigned long long)publishersListCountAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003e704e
- (unsigned long long)guidesListCountAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003e6fda
- (id)featuredGuideViewModel;	// IMP=0x00100000003e6f5e
- (id)filterViewModels;	// IMP=0x00100000003e6d2f
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x00100000003e6cd0
- (void)cleanupGuidesHomeData;	// IMP=0x00100000003e6c12
- (void)routeToCuratedCollectionAtIndex:(id)arg1 inSection:(id)arg2;	// IMP=0x00100000003e66e3
- (long long)filterSectionIndex;	// IMP=0x00100000003e655c
- (void)updateContentInset;	// IMP=0x00100000003e61b0
- (void)filterDataFetchFinished;	// IMP=0x00100000003e5f3a
- (void)filterDataFetchStarted;	// IMP=0x00100000003e5eff
- (_Bool)isFetchingData;	// IMP=0x00100000003e5eb6
- (void)prepareSnapshot;	// IMP=0x00100000003e5d13
- (void)initializeSupplementaryViewProvider;	// IMP=0x00100000003e56d0
- (void)initializeDataSource;	// IMP=0x00100000003e4ec1
- (void)didChangeContentYOffset:(double)arg1;	// IMP=0x00100000003e4e3b
- (void)displayGuidesHomeData;	// IMP=0x00100000003e4d40
- (void)refreshedGuideLocation;	// IMP=0x00100000003e4d2e
- (void)displayGuidesHomeByReloadingData;	// IMP=0x00100000003e4be0
- (void)dealloc;	// IMP=0x00100000003e4ba2
- (id)initWithCollectionView:(id)arg1 result:(id)arg2 routingDelegate:(id)arg3 apiController:(id)arg4 analyticsManager:(id)arg5;	// IMP=0x00100000003e459c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

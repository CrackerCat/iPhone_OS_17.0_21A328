//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionEditSession, ContainerHeaderView, CuratedCollectionHeaderView, CuratedCollectionProvider, CuratedCollectionViewAnalyticsController, ErrorModeView, GEOPlaceCollection, LoadingModeView, MapsThemeTableView, NSArray, NSString, UIScrollView;

@interface CuratedCollectionViewController
{
    MapsThemeTableView *_tableView;	// 8 = 0x8
    CollectionEditSession *_collectionEditSession;	// 16 = 0x10
    unsigned long long _layout;	// 24 = 0x18
    _Bool _isChangingLayout;	// 32 = 0x20
    _Bool _hasFinishedResolving;	// 33 = 0x21
    _Bool _didInsertInHistory;	// 34 = 0x22
    _Bool _wantsInsertInHistoryOnDismiss;	// 35 = 0x23
    id _lastItemTapped;	// 40 = 0x28
    _Bool _hasBeenInFullLayout;	// 48 = 0x30
    CDUnknownBlockType _updateContentInjection;	// 56 = 0x38
    GEOPlaceCollection *_curatedCollection;	// 64 = 0x40
    CuratedCollectionProvider *_collectionProvider;	// 72 = 0x48
    ContainerHeaderView *_fakeHeaderView;	// 80 = 0x50
    CuratedCollectionHeaderView *_cardHeaderView;	// 88 = 0x58
    CuratedCollectionViewAnalyticsController *_analyticsController;	// 96 = 0x60
    ErrorModeView *_errorView;	// 104 = 0x68
    LoadingModeView *_loadingView;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000004d07b4
@property(retain, nonatomic) LoadingModeView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) ErrorModeView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) CuratedCollectionViewAnalyticsController *analyticsController; // @synthesize analyticsController=_analyticsController;
@property(retain, nonatomic) CuratedCollectionHeaderView *cardHeaderView; // @synthesize cardHeaderView=_cardHeaderView;
@property(retain, nonatomic) ContainerHeaderView *fakeHeaderView; // @synthesize fakeHeaderView=_fakeHeaderView;
@property(retain, nonatomic) CuratedCollectionProvider *collectionProvider; // @synthesize collectionProvider=_collectionProvider;
@property(retain, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(copy, nonatomic) CDUnknownBlockType updateContentInjection; // @synthesize updateContentInjection=_updateContentInjection;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
- (void)didSelectOpenHomePage;	// IMP=0x00100000004d05e0
- (void)didSelectShareFromView:(id)arg1;	// IMP=0x00100000004d04ac
@property(readonly, nonatomic) NSArray *mapItems;
- (void)didSelectRemoveFromSavedCollection;	// IMP=0x00100000004d0225
- (void)didSelectSaveCollection;	// IMP=0x00100000004d0185
- (void)dataSource:(id)arg1 openAppClip:(id)arg2;	// IMP=0x00100000004cff00
- (void)showPublisherView:(id)arg1;	// IMP=0x00100000004cfe63
- (void)presentRAPWithSourceView:(id)arg1;	// IMP=0x00100000004cfcea
- (void)dataSource:(id)arg1 didExpandCellAnimated:(_Bool)arg2;	// IMP=0x00100000004cfc31
- (void)dataSource:(id)arg1 willPunchOuToPublisherWebpageForPlaceCollectionItem:(id)arg2;	// IMP=0x00100000004cfb67
- (void)dataSource:(id)arg1 didFailWithErrorState:(unsigned long long)arg2;	// IMP=0x00100000004cf02f
- (void)dataSource:(id)arg1 addToUserCollection:(id)arg2 forMapItem:(id)arg3 sourceView:(id)arg4 onSaveCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000004ce8bb
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000004ce71a
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000004ce5be
- (void)_didFinishResolving;	// IMP=0x00100000004cdb60
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000004cdb3b
- (_Bool)shouldClearSearchPins;	// IMP=0x00100000004cda7b
- (void)removeContentFromMapView;	// IMP=0x00100000004cd9ef
- (void)addContentToMapView;	// IMP=0x00100000004cd829
- (id)_searchResults;	// IMP=0x00100000004cd5d1
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00100000004cd465
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000004cd3df
- (void)reportAnIssueMenuButtonTapped;	// IMP=0x00100000004cd3c2
- (void)seeAllGuidesMenuButtonTapped;	// IMP=0x00100000004cd385
- (void)websiteMenuButtonTapped;	// IMP=0x00100000004cd2f9
- (void)headerViewPublisherLogoTapped;	// IMP=0x00100000004cd238
- (void)headerViewBrickTapped;	// IMP=0x00100000004cd1fb
- (void)headerViewTapped:(id)arg1;	// IMP=0x00100000004cd1e9
- (void)addToMyGuidesMenuButtonTapped;	// IMP=0x00100000004cd1d7
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000004cd1c5
- (id)_websiteURL;	// IMP=0x00100000004cd0b1
- (id)menuForQuickActionButton;	// IMP=0x00100000004cc79b
- (void)_insertInHistory;	// IMP=0x00100000004cc66a
- (void)_setWantsInsertInHistory;	// IMP=0x00100000004cc62e
- (void)_updateHeaderTransition;	// IMP=0x00100000004cc330
- (void)handleDismissAction:(id)arg1;	// IMP=0x00100000004cc1a2
- (void)viewDidLayoutSubviews;	// IMP=0x00100000004cc042
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00100000004cc001
- (void)_updateHeaderAndTableViewValues;	// IMP=0x00100000004cbd33
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x00100000004cbb86
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000004cba90
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000004cb9bd
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000004cb981
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000004cb786
- (void)didBecomeCurrent;	// IMP=0x00100000004cb6f8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000004cb688
- (void)_attachLoadingView;	// IMP=0x00100000004cb240
- (void)viewDidLoad;	// IMP=0x00100000004cab84
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000004caa88
- (id)keyCommands;	// IMP=0x00100000004ca97f
- (void)_commonInitWithCuratedCollectionProvider:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000004ca71a
- (id)initWithFullyClientizedPlaceCollection:(id)arg1;	// IMP=0x00100000004ca5a6
- (id)initWithCuratedCollectionIdentifier:(id)arg1;	// IMP=0x00100000004ca49c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

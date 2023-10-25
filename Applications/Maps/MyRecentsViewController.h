//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, MapsThemeTableView, MyRecentsDataSource, NSString, UIScrollView;

@interface MyRecentsViewController
{
    ContainerHeaderView *_titleHeaderView;	// 8 = 0x8
    MapsThemeTableView *_tableView;	// 16 = 0x10
    MyRecentsDataSource *_recentsDataSource;	// 24 = 0x18
    _Bool _includeRecentSearches;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000038f7e3
- (id);	// IMP=0x001000000038f7ce
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x001000000038ebfe
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x001000000038ebf8
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x001000000038ebab
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000038eb99
- (void)loadDataSource;	// IMP=0x001000000038ea87
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x001000000038ea41
- (void)_updateHeaderHairlineAnimated:(_Bool)arg1;	// IMP=0x001000000038e91b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000038e8c9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000038e871
- (void)viewDidLoad;	// IMP=0x001000000038e12e
- (id)preferredFocusEnvironments;	// IMP=0x001000000038e0c3
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x001000000038dffc
- (id)keyCommands;	// IMP=0x001000000038df0a
- (id)initIncludingRecentSearches:(_Bool)arg1;	// IMP=0x001000000038de3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
@property(readonly) Class superclass;

@end

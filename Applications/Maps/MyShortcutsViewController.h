//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, MapsThemeTableView, MyShortcutsDataSource, NSString, ShortcutFooterToolBarView, UIView;

@interface MyShortcutsViewController
{
    UIView *_hideableFooterView;	// 8 = 0x8
    ContainerHeaderView *_titleHeaderView;	// 16 = 0x10
    ShortcutFooterToolBarView *_footerContentView;	// 24 = 0x18
    MapsThemeTableView *_tableView;	// 32 = 0x20
    MyShortcutsDataSource *_myShortcutsDataSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000002d06cc
- (void)_addShortcutAction;	// IMP=0x00100000002d063a
- (void)view:(id)arg1 requestsShortcutAction:(unsigned long long)arg2;	// IMP=0x00100000002d0551
- (void)dataSource:(id)arg1 itemTapped:(id)arg2;	// IMP=0x00100000002d022b
- (void)dataSource:(id)arg1 itemFocused:(id)arg2;	// IMP=0x00100000002d0225
- (void)dataSourceUpdated:(id)arg1;	// IMP=0x00100000002d01d8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00100000002d0192
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x00100000002d0180
- (void)loadDataSource;	// IMP=0x00100000002d007a
- (void)_updateHeaderHairlineAnimated:(_Bool)arg1;	// IMP=0x00100000002cff8f
- (void)_updateFooterInset;	// IMP=0x00100000002cfe9e
- (void)didChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000002cfe5d
- (void)viewDidLayoutSubviews;	// IMP=0x00100000002cfe1c
- (void)willResignCurrent:(_Bool)arg1;	// IMP=0x00100000002cfdd1
- (void)willBecomeCurrent:(_Bool)arg1;	// IMP=0x00100000002cfd5b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000002cfd1a
- (void)viewDidLoad;	// IMP=0x00100000002cf02d
- (id)preferredFocusEnvironments;	// IMP=0x00100000002cefc2
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000002ceefb
- (id)keyCommands;	// IMP=0x00100000002ced5a
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000002cec9d
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000002cec95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

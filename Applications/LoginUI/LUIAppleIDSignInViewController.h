//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LUIPaneFooterView, LUIPaneHeaderView, LUIPrivacyView, NSArray, NSString, UITableView, UITableViewCell, UITextField_CustomEditMenu;
@protocol LUILoginDelegate;

@interface LUIAppleIDSignInViewController
{
    _Bool _isUIUpdateAllowed;	// 8 = 0x8
    id <LUILoginDelegate> _delegate;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    LUIPaneHeaderView *_headerView;	// 32 = 0x20
    LUIPrivacyView *_privacyView;	// 40 = 0x28
    UITableViewCell *_usernameCell;	// 48 = 0x30
    UITextField_CustomEditMenu *_usernameField;	// 56 = 0x38
    LUIPaneFooterView *_progressView;	// 64 = 0x40
    NSArray *_defaultDomains;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000017640
- (void)setDefaultDomains:(id)arg1;	// IMP=0x001000000001762c
- (id)defaultDomains;	// IMP=0x001000000001761b
@property(nonatomic) _Bool isUIUpdateAllowed; // @synthesize isUIUpdateAllowed=_isUIUpdateAllowed;
@property(retain, nonatomic) LUIPaneFooterView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UITextField_CustomEditMenu *usernameField; // @synthesize usernameField=_usernameField;
@property(retain, nonatomic) UITableViewCell *usernameCell; // @synthesize usernameCell=_usernameCell;
@property(retain, nonatomic) LUIPrivacyView *privacyView; // @synthesize privacyView=_privacyView;
@property(retain, nonatomic) LUIPaneHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak id <LUILoginDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentPasscodeViewControllerForUser:(id)arg1 passcodeViewDidAppearAction:(CDUnknownBlockType)arg2 passcodeCanceledAction:(CDUnknownBlockType)arg3 passcodeEnteredAction:(CDUnknownBlockType)arg4;	// IMP=0x001000000001746f
- (void)authenticationCanceled;	// IMP=0x00100000000173ab
- (void)_updateDefaultDomainSetting;	// IMP=0x001000000001730c
- (_Bool)_validateUsername:(id)arg1;	// IMP=0x0010000000017276
- (void)_clearTextFields;	// IMP=0x0010000000017237
@property(readonly, nonatomic) long long viewType;
- (void)textFieldDidChange:(id)arg1;	// IMP=0x0010000000016d1b
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x0010000000016cb0
- (double)_maxLabelWidth;	// IMP=0x0010000000016b79
- (id)_username;	// IMP=0x00100000000167b6
- (void)setUsername:(id)arg1;	// IMP=0x001000000001674d
- (id)_subtitleAttributedString;	// IMP=0x0010000000016052
- (void)setHeaderTitle;	// IMP=0x0010000000015f5f
- (double)heightForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015d94
- (id)viewForHeaderInTableView:(id)arg1;	// IMP=0x0010000000015d82
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000015d04
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000015cf9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000015cee
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000015cdc
- (void)bottomLeftVibrantButtonTapped:(id)arg1;	// IMP=0x0010000000015c3e
- (id)titleForBottomRightVibrantButton;	// IMP=0x0010000000015bd6
- (id)titleForBottomLeftVibrantButton;	// IMP=0x0010000000015ba5
- (long long)imageTypeForBottomRightVibrantButton;	// IMP=0x0010000000015b9a
- (long long)imageTypeForBottomLeftVibrantButton;	// IMP=0x0010000000015b8f
- (_Bool)shouldShowBottomRightVibrantButton;	// IMP=0x0010000000015b44
- (_Bool)shouldShowBottomLeftVibrantButton;	// IMP=0x0010000000015b2b
- (id)_bottomLeftButtonTitleForViewType:(long long)arg1;	// IMP=0x0010000000015a77
- (double)heightForFooterInTableView:(id)arg1;	// IMP=0x00100000000159c5
- (id)viewForFooterInTableView:(id)arg1;	// IMP=0x00100000000159b3
- (void)signInButtonPressed:(id)arg1;	// IMP=0x00100000000158b2
- (void)_fetchAuthMode;	// IMP=0x0010000000015534
- (id)_tableViewConstraints;	// IMP=0x00100000000151a4
- (void)_activateLayoutConstraints;	// IMP=0x00100000000150c5
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000014e2f
- (void)viewDidLoad;	// IMP=0x0010000000014ba9
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000014b63
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000014ae1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

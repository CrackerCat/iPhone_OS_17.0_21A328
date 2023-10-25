//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSSet, PSSpecifier, STAlwaysAllowList;
@protocol STAlwaysAllowListControllerDelegate;

__attribute__((visibility("hidden")))
@interface STAlwaysAllowListController
{
    id <STAlwaysAllowListControllerDelegate> _delegate;	// 192 = 0xc0
    STAlwaysAllowList *_alwaysAllowList;	// 200 = 0xc8
    NSArray *_chooseBundleIDs;	// 208 = 0xd0
    NSSet *_installedBundleIDs;	// 216 = 0xd8
    PSSpecifier *_allowedContactsSpecifier;	// 224 = 0xe0
    PSSpecifier *_allowedAppsGroupSpecifier;	// 232 = 0xe8
    NSArray *_allowedAppsSpecifiers;	// 240 = 0xf0
    PSSpecifier *_chooseAppsGroupSpecifier;	// 248 = 0xf8
    NSArray *_chooseAppsSpecifiers;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000000215d6
@property(retain, nonatomic) NSArray *chooseAppsSpecifiers; // @synthesize chooseAppsSpecifiers=_chooseAppsSpecifiers;
@property(retain, nonatomic) PSSpecifier *chooseAppsGroupSpecifier; // @synthesize chooseAppsGroupSpecifier=_chooseAppsGroupSpecifier;
@property(retain, nonatomic) NSArray *allowedAppsSpecifiers; // @synthesize allowedAppsSpecifiers=_allowedAppsSpecifiers;
@property(retain, nonatomic) PSSpecifier *allowedAppsGroupSpecifier; // @synthesize allowedAppsGroupSpecifier=_allowedAppsGroupSpecifier;
@property(retain) PSSpecifier *allowedContactsSpecifier; // @synthesize allowedContactsSpecifier=_allowedContactsSpecifier;
@property(copy, nonatomic) NSSet *installedBundleIDs; // @synthesize installedBundleIDs=_installedBundleIDs;
@property(copy, nonatomic) NSArray *chooseBundleIDs; // @synthesize chooseBundleIDs=_chooseBundleIDs;
@property(copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // @synthesize alwaysAllowList=_alwaysAllowList;
@property(nonatomic) __weak id <STAlwaysAllowListControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)appSpecifiersForBundleIDs:(id)arg1;	// IMP=0x0000000000020edc
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000020e74
- (void)removeAllowedIdentifier:(id)arg1 withSpecifier:(id)arg2;	// IMP=0x000000000002099c
- (void)_removeAllowedAppSpecifier:(id)arg1;	// IMP=0x0000000000020647
- (void)_insertAllowedAppSpecifier:(id)arg1;	// IMP=0x000000000002018c
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000001ffb8
- (id)removeMessagesConfirmationPrompt;	// IMP=0x000000000001fdc8
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001fceb
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000001fc68
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000001fbe5
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001fac5
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x000000000001fa2b
- (_Bool)shouldReloadSpecifiersOnResume;	// IMP=0x000000000001fa23
- (id)createChooseAppsSpecifiers;	// IMP=0x000000000001f98e
- (id)createAllowedAppsSpecifiers;	// IMP=0x000000000001f68c
- (id)_allowedContactsDuringDowntimeText:(id)arg1;	// IMP=0x000000000001f4bb
- (id)specifiers;	// IMP=0x000000000001eaec
- (void)willResignActive;	// IMP=0x000000000001ea3d
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001e948
- (_Bool)canBeShownFromSuspendedState;	// IMP=0x000000000001e940
- (void)viewDidLoad;	// IMP=0x000000000001e892
- (void)_communicationLimitsDidChangeFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000001e7ee
- (void)_alwaysAllowListDidChange:(id)arg1;	// IMP=0x000000000001e326
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001e0b5
- (void)setCoordinator:(id)arg1;	// IMP=0x000000000001dec2
- (void)dealloc;	// IMP=0x000000000001de22
- (id)init;	// IMP=0x000000000001dce8

@end

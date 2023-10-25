//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class KCSharingGroup, NSString, PMDeviceSharingAvailability, WBSAutoFillQuirksManager, WBSPasswordWarningManager;

__attribute__((visibility("hidden")))
@interface SFSharedAccountsGroupInvitationAcceptanceFlowNavigationController : UINavigationController
{
    KCSharingGroup *_group;	// 8 = 0x8
    WBSAutoFillQuirksManager *_autoFillQuirksManager;	// 16 = 0x10
    WBSPasswordWarningManager *_passwordWarningManager;	// 24 = 0x18
    PMDeviceSharingAvailability *_deviceSharingAvailability;	// 32 = 0x20
    _Bool _isWaitingOnDeviceListToContinueFlow;	// 40 = 0x28
    _Bool _hasFetchedDeviceList;	// 41 = 0x29
}

- (void).cxx_destruct;	// IMP=0x00000000000bbc8c
- (void)removeDuplicateCredentialsViewController:(id)arg1 didPickSavedAccounts:(id)arg2;	// IMP=0x00000000000bba57
- (void)removeDuplicateCredentialsViewControllerDidSelectNotNow:(id)arg1;	// IMP=0x00000000000bba3e
- (void)moveAccountsToGroupPickerTableViewController:(id)arg1 didPickSavedAccounts:(id)arg2;	// IMP=0x00000000000bb81d
- (void)moveAccountsToGroupPickerTableViewControllerDidCancel:(id)arg1;	// IMP=0x00000000000bb7d0
- (void)accountSharingGroupOnBoardingViewControllerDidSelectNotNow:(id)arg1;	// IMP=0x00000000000bb75d
- (void)accountSharingGroupOnBoardingViewControllerDidSelectContinue:(id)arg1;	// IMP=0x00000000000bb6a7
- (void)_presentMoveAccountViewsIfNecessary;	// IMP=0x00000000000bb63d
- (void)_presentDeviceListViewIfNecessary;	// IMP=0x00000000000bb45b
- (void)_fetchDeviceLists;	// IMP=0x00000000000bb251
- (_Bool)_shouldAskUserToDeleteDuplicateCredentials;	// IMP=0x00000000000bb1a3
- (_Bool)_shouldAskUserToMoveAccounts;	// IMP=0x00000000000bb12a
- (void)_presentRemoveDuplicateCredentialsViewController;	// IMP=0x00000000000bb09a
- (void)_presentRemoveDuplicateCredentialsOnboardingViewController;	// IMP=0x00000000000bb010
- (void)_presentMoveAccountsViewController;	// IMP=0x00000000000baf73
- (void)_presentMoveAccountsOnboardingViewController;	// IMP=0x00000000000baee9
- (id)initWithGroup:(id)arg1 autoFillQuirksManager:(id)arg2 passwordWarningManager:(id)arg3;	// IMP=0x00000000000badb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

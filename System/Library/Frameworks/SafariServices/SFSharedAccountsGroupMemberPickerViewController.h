//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNAutocompleteResultsTableViewController, CNAutocompleteSearchManager, CNComposeRecipientTextView, NSLayoutConstraint, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol SFSharedAccountsGroupMemberPickerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFSharedAccountsGroupMemberPickerViewController : UIViewController
{
    CNAutocompleteResultsTableViewController *_contactsResultsTableViewController;	// 8 = 0x8
    CNComposeRecipientTextView *_recipientTextView;	// 16 = 0x10
    CNAutocompleteSearchManager *_contactsSearchManager;	// 24 = 0x18
    NSNumber *_currentSearchTaskID;	// 32 = 0x20
    NSMutableDictionary *_addressToEligibility;	// 40 = 0x28
    NSMutableDictionary *_recipientGroupToEligibility;	// 48 = 0x30
    NSSet *_alreadyAddedAddresses;	// 56 = 0x38
    NSLayoutConstraint *_recipientTextViewHeightConstraint;	// 64 = 0x40
    _Bool _shouldConfirmAddingRecipients;	// 72 = 0x48
    id <SFSharedAccountsGroupMemberPickerViewControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000f9eab
@property(nonatomic) __weak id <SFSharedAccountsGroupMemberPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldConfirmAddingRecipients; // @synthesize shouldConfirmAddingRecipients=_shouldConfirmAddingRecipients;
- (void)finishedSearchingForAutocompleteResults;	// IMP=0x00000000000f9e3d
- (id)_recipientsWithEligibleAddressesAsDefaultAddressesIfPossible:(id)arg1;	// IMP=0x00000000000f9aa6
- (void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2;	// IMP=0x00000000000f981b
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;	// IMP=0x00000000000f9754
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000000f96d1
- (void)autocompleteResultsController:(id)arg1 didRequestInfoAboutRecipient:(id)arg2;	// IMP=0x00000000000f94ae
- (void)autocompleteResultsController:(id)arg1 didSelectRecipient:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000f9445
- (void)autocompleteResultsController:(id)arg1 tintColorForRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f921f
- (void)_resetSearchQuery;	// IMP=0x00000000000f91b1
- (void)_updateRecipientTextViewHeight;	// IMP=0x00000000000f9060
- (void)_addRecipient:(id)arg1;	// IMP=0x00000000000f8fb4
- (void)_handleSelectionForMultipleRecipientsInGroup:(id)arg1;	// IMP=0x00000000000f8774
- (void)_handleSelectionForSingleRecipient:(id)arg1;	// IMP=0x00000000000f8453
- (void)_fetchEligibilityForRecipients:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f7dc2
- (_Bool)_hasEligibilityCachedForAllRecipients:(id)arg1;	// IMP=0x00000000000f7a6f
- (_Bool)_isAddressAlreadyPartOfGroupOrInvitedAddresses:(id)arg1;	// IMP=0x00000000000f79d2
- (_Bool)_isEveryMemberInContactsGroupAlreadyInSharingGroup:(id)arg1;	// IMP=0x00000000000f78f5
- (_Bool)_doesGroupOnlyContainKnownContacts:(id)arg1;	// IMP=0x00000000000f7871
- (void)_cancelButtonPressed;	// IMP=0x00000000000f7833
- (void)_addMembersButtonPressed;	// IMP=0x00000000000f77bd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000f7774
- (void)viewDidLoad;	// IMP=0x00000000000f6f9f
- (id)initWithAlreadyAddedAddresses:(id)arg1;	// IMP=0x00000000000f6cd7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class CNComposeRecipientTextView, CNContactPickerViewController, CNContactStore, NSArray, NSAttributedString, NSString, SUUIGiftContactSearchController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SUUIGiftRecipientTableViewCell : UITableViewCell
{
    CNContactStore *_contactStore;	// 8 = 0x8
    CNContactPickerViewController *_contactPickerController;	// 16 = 0x10
    UILabel *_placeholderLabel;	// 24 = 0x18
    CNComposeRecipientTextView *_recipientView;	// 32 = 0x20
    SUUIGiftContactSearchController *_searchController;	// 40 = 0x28
    UIView *_topBorderView;	// 48 = 0x30
    _Bool _didLayoutSubviews;	// 56 = 0x38
    _Bool _leftToRight;	// 57 = 0x39
}

- (void).cxx_destruct;	// IMP=0x00000000000fcd72
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
- (void)_sendDismissContactPicker;	// IMP=0x00000000000fcc47
- (void)_sendDidUpdateSearchController;	// IMP=0x00000000000fcb5c
- (void)_sendDidChangeRecipients;	// IMP=0x00000000000fca7c
- (void)_resetSearchController;	// IMP=0x00000000000fca39
- (id)_contactStore;	// IMP=0x00000000000fc9e8
- (void)searchControllerDidFinishSearch:(id)arg1;	// IMP=0x00000000000fc9d6
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;	// IMP=0x00000000000fc976
- (void)recipientViewDidResignFirstResponder:(id)arg1;	// IMP=0x00000000000fc919
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;	// IMP=0x00000000000fc728
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;	// IMP=0x00000000000fc6fa
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x00000000000fc6a9
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000000fc5d6
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;	// IMP=0x00000000000fc53c
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;	// IMP=0x00000000000fc4e7
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;	// IMP=0x00000000000fc488
- (void)composeHeaderView:(id)arg1 didChangeSize:(struct CGSize)arg2;	// IMP=0x00000000000fc2fe
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;	// IMP=0x00000000000fc218
- (void)contactPickerDidCancel:(id)arg1;	// IMP=0x00000000000fc206
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000fc1bf
- (void)layoutSubviews;	// IMP=0x00000000000fbe58
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void)presentSearchResultsPopover:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fb96d
- (void)presentPeoplePickerPopover:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000fb8c8
- (void)dealloc;	// IMP=0x00000000000fb7d0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000fb244

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

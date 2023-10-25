//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>

@class NSExtension, NSString, UIBarButtonItem, UINavigationController;
@protocol CNContactPickerContentDelegate, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactPickerHostViewController : _UIRemoteViewController <CNContactPickerHostProtocol>
{
    id <CNContactPickerContentDelegate> _delegate;	// 8 = 0x8
    id <NSCopying> _currentRequestIdentifier;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
}

+ (_Bool)getViewController:(CDUnknownBlockType)arg1;	// IMP=0x001000000025c5c4
+ (id)contextForIdentifier:(id)arg1;	// IMP=0x001000000025c54a
+ (id)contactPickerExtension;	// IMP=0x001000000025c51a
- (void).cxx_destruct;	// IMP=0x000000000025ce42
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(nonatomic) __weak id <CNContactPickerContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void)pickerDidCancel;	// IMP=0x000000000025cd8e
- (void)pickerDidCompleteWithNewContact:(id)arg1;	// IMP=0x000000000025cd25
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x000000000025cc9a
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x000000000025cc0f
- (void)pickerDidSelectAddNewContact;	// IMP=0x000000000025cbd2
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x000000000025cb91
- (void)invalidate;	// IMP=0x000000000025cab2
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x000000000025ca2b
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000025c974
@property(readonly, nonatomic) UIBarButtonItem *addContactBarButtonItem;
@property(readonly, nonatomic) UINavigationController *navigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

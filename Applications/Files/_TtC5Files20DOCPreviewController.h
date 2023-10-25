//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray;
@protocol QLPreviewControllerDelegate;

@interface _TtC5Files20DOCPreviewController
{
    MISSING_TYPE *editingDelegate;	// 16 = 0x10
    MISSING_TYPE *visibilityDelegate;	// 32 = 0x20
    MISSING_TYPE *actionManager;	// 48 = 0x30
    MISSING_TYPE *configuration;	// 56 = 0x38
    MISSING_TYPE *duplicatedNodeObserver;	// 64 = 0x40
    MISSING_TYPE *duplicatedNodeSubscriber;	// 72 = 0x48
    MISSING_TYPE *itemBeingRenamed;	// 80 = 0x50
    MISSING_TYPE *source;	// 88 = 0x58
    MISSING_TYPE *importedURL;	// 0 = 0x0
    MISSING_TYPE *transitioningProvider;	// 0 = 0x0
    MISSING_TYPE *observation;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *linkNavigateInteraction;	// 0 = 0x0
    MISSING_TYPE *publishesUserActivity;	// 1936941407 = 0x7373615f
    MISSING_TYPE *currentUserActivity;	// 1163157343 = 0x45545f5f
}

+ (void)clearSharedControllerFor:(id)arg1;	// IMP=0x00400000003f9d70
+ (id)sharedControllerFor:(id)arg1;	// IMP=0x00100000003f9d30
- (void).cxx_destruct;	// IMP=0x00200000003fca60
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000003fc8f0
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x00100000003fc870
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2;	// IMP=0x00100000003fc7f0
- (void)previewControllerWillDismiss:(id)arg1;	// IMP=0x00100000003fc0b0
- (void)previewController:(id)arg1 didSaveEditedCopyOfPreviewItem:(id)arg2 atURL:(id)arg3;	// IMP=0x00100000003fbff0
- (void)previewController:(id)arg1 willSaveEditedItem:(id)arg2;	// IMP=0x00100000003fb760
- (_Bool)previewController:(id)arg1 shouldAllowKeyCommandWithIdentifier:(unsigned long long)arg2;	// IMP=0x00100000003fb740
- (_Bool)shouldAppendDefaultDismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000003fb730
- (id)dismissActionsForPreviewController:(id)arg1;	// IMP=0x00100000003fb6f0
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x00100000003fb680
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;	// IMP=0x00100000003fb590
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;	// IMP=0x00100000003fb4c0
- (void)reallyBecomeCurrent:(id)arg1;	// IMP=0x00100000003fb110
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000003fab70
@property(nonatomic) long long modalPresentationStyle;
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000003fa320
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003fa2e0
- (void)dismissViaKeyCommand;	// IMP=0x00100000003fa000
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000003f9fd0
- (void)move:(id)arg1;	// IMP=0x00100000003f9c70
- (void)duplicate:(id)arg1;	// IMP=0x00100000003f9bf0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000003f99b0
@property(nonatomic, readonly) NSArray *keyCommands;
@property(nonatomic, retain) id <QLPreviewControllerDelegate> delegate;
- (void)documentPickerDidCancel:(id)arg1;	// IMP=0x0010000000370ff0
- (void)documentPicker:(id)arg1 didConfirmDocumentsAt:(id)arg2;	// IMP=0x0010000000370f70

@end

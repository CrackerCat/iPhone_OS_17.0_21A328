//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class CNCardPropertyGroup, CNMutableContact, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CNPostalAddressEditorViewController : UITableViewController
{
    NSMutableArray *_propertyItems;	// 8 = 0x8
    NSString *_propertyKey;	// 16 = 0x10
    CNMutableContact *_contact;	// 24 = 0x18
    CNCardPropertyGroup *_propertyGroup;	// 32 = 0x20
    _Bool _editNames;	// 40 = 0x28
    _Bool _editingExistingContact;	// 41 = 0x29
}

+ (id)cellIdentifierForClass:(Class)arg1;	// IMP=0x00100000001da753
+ (id)cellIdentifierForEditingProperty:(id)arg1;	// IMP=0x00100000001da677
- (void).cxx_destruct;	// IMP=0x00000000001da611
- (id)contactViewCache;	// IMP=0x00000000001da609
- (void)propertyCellDidChangeLayout:(id)arg1;	// IMP=0x00000000001da552
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(long long)arg3;	// IMP=0x00000000001da54c
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;	// IMP=0x00000000001da4b0
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;	// IMP=0x00000000001da437
@property(readonly) _Bool isPresentingModalViewController;
- (void)sender:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001da392
- (void)sender:(id)arg1 dismissViewController:(id)arg2;	// IMP=0x00000000001da376
- (void)sender:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000001da205
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000001da1f0
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001d9dfe
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001d9de1
- (void)registerContactCellClass:(Class)arg1;	// IMP=0x00000000001d9d62
- (void)_startEditingFirstCell;	// IMP=0x00000000001d9ca9
- (void)validateContents;	// IMP=0x00000000001d97cf
- (void)done:(id)arg1;	// IMP=0x00000000001d9625
- (void)cancel:(id)arg1;	// IMP=0x00000000001d95a3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001d9562
- (void)viewDidLoad;	// IMP=0x00000000001d93f3
- (void)_rebuildPropertyGroupItems:(_Bool)arg1;	// IMP=0x00000000001d8d22
- (double)tableViewSpacingForExtraSeparators:(id)arg1;	// IMP=0x00000000001d8d14
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001d8c52
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(_Bool)arg3;	// IMP=0x00000000001d8b0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

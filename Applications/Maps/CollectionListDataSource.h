//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionSaveSession, MapsThemeButton, NSArray, NSMutableArray, NSString;
@protocol SelectionCollectionDataSourceDelegate;

@interface CollectionListDataSource
{
    NSArray *_content;	// 8 = 0x8
    CollectionSaveSession *_editSession;	// 16 = 0x10
    NSMutableArray *_selected;	// 24 = 0x18
    MapsThemeButton *_footerButton;	// 32 = 0x20
    _Bool _showsAddCollection;	// 40 = 0x28
    _Bool _editing;	// 41 = 0x29
    NSArray *_keyCommands;	// 48 = 0x30
    unsigned long long _cellsSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000d24040
@property(readonly, nonatomic) NSArray *selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long cellsSize; // @synthesize cellsSize=_cellsSize;
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
- (id)keyCommands;	// IMP=0x0010000000d23fec
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23f64
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23edc
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23df6
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23c3b
- (void)tableView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0010000000d23acf
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d2397f
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23910
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d23772
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d236e2
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0010000000d236da
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x0010000000d236d1
- (id)_cellForCollection:(id)arg1 inTableView:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000d23558
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d2344e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000d2340a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000d233ff
- (id)shareContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000d23212
- (id)deleteContextualActionAtIndexPath:(id)arg1;	// IMP=0x0010000000d2307f
- (void)_shareAtIndexPath:(id)arg1;	// IMP=0x0010000000d22f7c
- (void)_captureCuratedCuratedCollectionAction:(int)arg1 indexPath:(id)arg2;	// IMP=0x0010000000d22dd5
- (void)_deleteAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d22a09
- (void)_updateKeyCommandsAtIndexPath:(id)arg1;	// IMP=0x0010000000d2285f
- (void)shareRow:(id)arg1;	// IMP=0x0010000000d22815
- (void)deleteRow:(id)arg1;	// IMP=0x0010000000d227c9
- (int)targetForDragAnalytics;	// IMP=0x0010000000d227be
- (id)objectsForAnalytics;	// IMP=0x0010000000d22776
@property(readonly, nonatomic) unsigned long long entriesCount;
- (id)objectAtIndexPath:(id)arg1;	// IMP=0x0010000000d225ad
- (long long)indexForObject:(id)arg1;	// IMP=0x0010000000d22524
- (id)currentContent;	// IMP=0x0010000000d224ff
- (void)collectionManager:(id)arg1 contentDidChange:(id)arg2;	// IMP=0x0010000000d224a6
- (void)_loadData;	// IMP=0x0010000000d22415
- (id)initWithTableView:(id)arg1 editSession:(id)arg2 showsAddCollection:(_Bool)arg3;	// IMP=0x0010000000d222ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SelectionCollectionDataSourceDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSArray, NSMutableArray, NSString, RoutePlanningAddStopCell, RoutePlanningWaypointCell, RoutePlanningWaypointTableView, UILayoutGuide;
@protocol RoutePlanningWaypointListViewDelegate, RoutePlanningWaypointPillViewEVInfoProviding;

@interface RoutePlanningWaypointListView : UIView
{
    id <RoutePlanningWaypointPillViewEVInfoProviding> _waypointInfoProvider;	// 8 = 0x8
    RoutePlanningWaypointTableView *_tableView;	// 16 = 0x10
    unsigned long long _selectedIndex;	// 24 = 0x18
    _Bool _activelyEditingSelectedField;	// 32 = 0x20
    _Bool _expandedStops;	// 33 = 0x21
    _Bool _hasCollapsedStops;	// 34 = 0x22
    NSMutableArray *_waypoints;	// 40 = 0x28
    NSMutableArray *_rows;	// 48 = 0x30
    NSArray *_layoutGuideConstraints;	// 56 = 0x38
    RoutePlanningWaypointCell *_lastEmptyWaypointCell;	// 64 = 0x40
    RoutePlanningAddStopCell *_addStopCell;	// 72 = 0x48
    NSMutableArray *_dottedLines;	// 80 = 0x50
    _Bool _mprEnabled;	// 88 = 0x58
    unsigned long long _editingMode;	// 96 = 0x60
    id <RoutePlanningWaypointListViewDelegate> _delegate;	// 104 = 0x68
    UILayoutGuide *_layoutGuideForCurrentlyEditingField;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00200000008bb61a
@property(readonly, nonatomic) UILayoutGuide *layoutGuideForCurrentlyEditingField; // @synthesize layoutGuideForCurrentlyEditingField=_layoutGuideForCurrentlyEditingField;
@property(readonly, nonatomic) __weak id <RoutePlanningWaypointListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool mprEnabled; // @synthesize mprEnabled=_mprEnabled;
@property(readonly, nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008bb5bd
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000008bb582
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x00100000008bb57a
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008bb3fb
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x00100000008bb3e2
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000008bb20b
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;	// IMP=0x00100000008baf2b
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;	// IMP=0x00100000008badf1
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;	// IMP=0x00100000008bad05
- (void)performDeleteAtIndex:(unsigned long long)arg1;	// IMP=0x00100000008ba54d
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008ba2da
- (_Bool)canDeleteWaypointForCellAtIndex:(unsigned long long)arg1;	// IMP=0x00100000008ba159
- (_Bool)_canDeleteWaypoints;	// IMP=0x00100000008ba076
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b95ff
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b944c
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000008b9410
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000008b93f3
- (MISSING_TYPE *)contextMenuForCell: /* Error: Ran out of types for this method. */;	// IMP=0x00100000008b917d
- (void)cellDidClearInputText:(id)arg1;	// IMP=0x00100000008b90bb
- (void)cellDidRequestSearch:(id)arg1;	// IMP=0x00100000008b8f4f
- (void)cell:(id)arg1 didReceiveMapItem:(id)arg2;	// IMP=0x00100000008b8da1
- (void)cell:(id)arg1 didChangeInputText:(id)arg2;	// IMP=0x00100000008b8bb9
- (void)cellDidStopEditing:(id)arg1;	// IMP=0x00100000008b8ac6
- (void)cellDidStartEditing:(id)arg1 withUserInteraction:(_Bool)arg2;	// IMP=0x00100000008b88a9
- (_Bool)_supportsCollapsingStops;	// IMP=0x00100000008b8859
- (void)collapseStopsIfNeeded;	// IMP=0x00100000008b87db
- (void)expandStopsIfNeeded;	// IMP=0x00100000008b87a9
@property(readonly, nonatomic) _Bool hasExpandedStops;
- (void)_refreshAddStopCellEnabled;	// IMP=0x00100000008b8702
- (id)_findLastEmptyWaypointCell:(id)arg1;	// IMP=0x00100000008b8517
- (_Bool)_shouldEnableAddStopCell;	// IMP=0x00100000008b849c
- (_Bool)addStop;	// IMP=0x00100000008b8254
- (void)_layoutDottedLineForCell:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000008b7b91
- (void)_layoutDottedLines;	// IMP=0x00100000008b7700
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000008b762a
- (unsigned long long)numberOfRows;	// IMP=0x00100000008b760d
- (id)cellForIndex:(unsigned long long)arg1;	// IMP=0x00100000008b75ae
- (unsigned long long)indexForLastWaypointCell;	// IMP=0x00100000008b7543
- (unsigned long long)searchFieldIndexForWaypoints:(id)arg1;	// IMP=0x00100000008b7279
- (void)scrollWaypointCellToVisible:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000008b71dc
- (void)deselectAllRows;	// IMP=0x00100000008b7068
- (void)selectNextSearchField;	// IMP=0x00100000008b6ffc
- (void)selectRowIndex:(unsigned long long)arg1;	// IMP=0x00100000008b6cd1
- (unsigned long long)selectedIndex;	// IMP=0x00100000008b6cc0
- (double)_contentHeight;	// IMP=0x00100000008b6c60
- (double)_rowHeight;	// IMP=0x00100000008b6ab3
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000008b698b
- (_Bool)replaceWaypointAtIndex:(unsigned long long)arg1 withWaypoint:(id)arg2;	// IMP=0x00100000008b6686
- (void)_reloadAllRows;	// IMP=0x00100000008b5ca6
- (void)refreshWaypointDisplay;	// IMP=0x00100000008b5c84
- (unsigned long long)userAddedWaypointCount;	// IMP=0x00100000008b5b92
@property(copy, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
- (void)_updateLayoutGuideForCurrentlyEditingField;	// IMP=0x00100000008b5514
@property(readonly, nonatomic) NSString *focusGroupIdentifierForCurrentlyEditingField;
- (id)initWithWaypoints:(id)arg1 editingMode:(unsigned long long)arg2 delegate:(id)arg3 waypointInfoProvider:(id)arg4;	// IMP=0x00100000008b4cf2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

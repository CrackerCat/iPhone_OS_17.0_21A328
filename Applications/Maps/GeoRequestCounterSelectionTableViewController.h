//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@protocol GeoRequestCounterSelection;

@interface GeoRequestCounterSelectionTableViewController : UITableViewController
{
    id <GeoRequestCounterSelection> _selection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000027ed85
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000027eb13
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000027e9e9
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000027e9cc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000027e9c1
- (id)initWithSelection:(id)arg1;	// IMP=0x001000000027e904

@end

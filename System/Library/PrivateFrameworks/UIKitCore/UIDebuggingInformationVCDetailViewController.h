//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIDebuggingInformationVCDetailViewController : UIViewController
{
    UITableView *_tableView;	// 8 = 0x8
    NSArray *_data;	// 16 = 0x10
    UIViewController *_inspectedVC;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000014b9ce4
@property(nonatomic) __weak UIViewController *inspectedVC; // @synthesize inspectedVC=_inspectedVC;
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000014b9c3e
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x00000000014b9c1f
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000014b9b74
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000014b989e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000014b96d1
- (void)_updateDataAndReload:(_Bool)arg1;	// IMP=0x00000000014b91fa
- (void)inspectVC:(id)arg1;	// IMP=0x00000000014b91c7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000014b9181
- (void)viewDidLoad;	// IMP=0x00000000014b8ff8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000014b8f2a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

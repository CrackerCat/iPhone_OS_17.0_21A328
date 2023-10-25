//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSString, UILabel;

@interface ExtensionLabelViewController : UITableViewController
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_advertisementText;	// 16 = 0x10
    UILabel *_label;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000d0c979
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *advertisementText; // @synthesize advertisementText=_advertisementText;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)text;	// IMP=0x0010000000d0c8ba
- (void)configureLabelView;	// IMP=0x0010000000d0c7e1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d0c6bb
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000d0c6b0
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000d0c6a5
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000d0c697
- (void)configureTableView;	// IMP=0x0010000000d0c4f6
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000d0c4c7
- (void)viewDidLoad;	// IMP=0x0010000000d0c486
- (id)initWithTitle:(id)arg1 advertisementText:(id)arg2;	// IMP=0x0010000000d0c3d1

@end

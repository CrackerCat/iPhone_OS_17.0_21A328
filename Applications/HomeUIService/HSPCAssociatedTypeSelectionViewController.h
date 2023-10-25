//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProxCardKit/PRXCardContentViewController.h>

@class HMService, HSProxCardCoordinator, HSSetupStateMachineConfiguration, NSArray, NSString, UITableView, UIViewController;

@interface HSPCAssociatedTypeSelectionViewController : PRXCardContentViewController
{
    HSSetupStateMachineConfiguration *_config;	// 8 = 0x8
    HSProxCardCoordinator *_coordinator;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    HMService *_service;	// 32 = 0x20
    NSString *_defaultAssociatedServiceType;	// 40 = 0x28
    NSArray *_possibleAssociatedServiceTypes;	// 48 = 0x30
    NSString *_associatedServiceType;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004ae20
@property(retain, nonatomic) NSString *associatedServiceType; // @synthesize associatedServiceType=_associatedServiceType;
@property(readonly, nonatomic) NSArray *possibleAssociatedServiceTypes; // @synthesize possibleAssociatedServiceTypes=_possibleAssociatedServiceTypes;
@property(readonly, nonatomic) NSString *defaultAssociatedServiceType; // @synthesize defaultAssociatedServiceType=_defaultAssociatedServiceType;
@property(readonly, nonatomic) HMService *service; // @synthesize service=_service;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain) HSProxCardCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain) HSSetupStateMachineConfiguration *config; // @synthesize config=_config;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x001000000004ac0d
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x001000000004abc9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x001000000004abbe
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;	// IMP=0x001000000004ab59
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000004aaf1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000004a85f
- (void)viewDidLoad;	// IMP=0x001000000004a7f5
- (id)commitConfiguration;	// IMP=0x001000000004a39e
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0010000000049e5b

// Remaining properties
@property(retain, nonatomic) UIViewController *contentVC;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

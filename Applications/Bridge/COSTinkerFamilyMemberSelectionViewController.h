//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, UITableView;

@interface COSTinkerFamilyMemberSelectionViewController
{
    _Bool _familyAtMaximumSize;	// 8 = 0x8
    NSArray *_familyMembers;	// 16 = 0x10
    NSDictionary *_pairedTinkerDevices;	// 24 = 0x18
    NSString *_activePairingDeviceSerialNumber;	// 32 = 0x20
    UITableView *_tableView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000135020
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x0010000000134ffa
- (void)showMustUnpairFirstAlert:(id)arg1;	// IMP=0x0010000000134db5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000134b0d
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x0010000000134a49
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0010000000134986
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00100000001345e2
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00100000001342e7
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00100000001342cc
- (id)detailString;	// IMP=0x0010000000134260
- (id)titleString;	// IMP=0x00100000001341f4
- (id)familyMemberAtIndexPath:(id)arg1;	// IMP=0x0010000000133ddd
- (long long)sectionNumberFromSection:(long long)arg1;	// IMP=0x0010000000133d8b
- (long long)logicalSectionFromSectionNumber:(long long)arg1;	// IMP=0x0010000000133a79
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001339b5
- (void)viewDidLoad;	// IMP=0x0010000000132d56
- (id)init;	// IMP=0x0010000000132cf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

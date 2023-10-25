//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPropertyGroupAlertItem, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertyAlertCell
{
}

+ (_Bool)shouldIndentWhileEditing;	// IMP=0x00100000001de681
+ (_Bool)wantsChevron;	// IMP=0x00100000001de679
- (void)pickerDidCancel:(id)arg1;	// IMP=0x00000000001de60e
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x00000000001de4d7
- (void)performDefaultAction;	// IMP=0x00000000001de2e2
- (_Bool)shouldPerformDefaultAction;	// IMP=0x00000000001de2da
- (_Bool)allowsCellSelection;	// IMP=0x00000000001de296
- (void)setCardGroupItem:(id)arg1;	// IMP=0x00000000001de1fb
- (id)alertGroup;	// IMP=0x00000000001de1ab
@property(readonly, nonatomic) CNPropertyGroupAlertItem *alertItem;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001de11e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

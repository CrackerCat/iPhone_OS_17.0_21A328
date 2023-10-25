//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSString, SUUIClientContext, SUUIPinnedFooterView, UITableView;
@protocol SUUIRedeemIdManagerDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdManager : NSObject
{
    id <SUUIRedeemIdManagerDelegate> _delegate;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    NSIndexPath *_activeIndexPath;	// 24 = 0x18
    SUUIClientContext *_clientContext;	// 32 = 0x20
    SUUIPinnedFooterView *_pinnedFooterView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000034913f
@property(retain, nonatomic) SUUIPinnedFooterView *pinnedFooterView; // @synthesize pinnedFooterView=_pinnedFooterView;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) NSIndexPath *activeIndexPath; // @synthesize activeIndexPath=_activeIndexPath;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <SUUIRedeemIdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)_autoCapitalizationTypeForIndexPath:(id)arg1;	// IMP=0x000000000034909c
- (long long)_returnKeyTypeForIndexPath:(id)arg1;	// IMP=0x0000000000349071
- (long long)_keyboardTypeForIndexPath:(id)arg1;	// IMP=0x0000000000349046
- (long long)_numberOfRowsInSection:(long long)arg1;	// IMP=0x000000000034902c
- (double)_tableViewNonFooterContentHeight;	// IMP=0x0000000000348f47
- (double)_heightForDisclosureFooter;	// IMP=0x0000000000348daa
- (id)_nextIndexPath:(id)arg1;	// IMP=0x0000000000348c0f
- (id)_disclosureAttributedString;	// IMP=0x0000000000348926
- (id)_placeholderTextForIndexPath:(id)arg1;	// IMP=0x0000000000348775
- (id)_pcLinkString;	// IMP=0x00000000003486e6
- (id)_regulationsLinkString;	// IMP=0x0000000000348657
- (void)dismissActiveCell;	// IMP=0x0000000000348586
- (void)setFooterHidden:(_Bool)arg1;	// IMP=0x000000000034853c
- (void)handleNextPressed;	// IMP=0x000000000034852a
- (void)redeemIdCell:(id)arg1 didChangeToText:(id)arg2;	// IMP=0x000000000034844f
- (void)redeemIdCell:(id)arg1 didReturnWithText:(id)arg2;	// IMP=0x000000000034823a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000003480c7
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000034802d
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000347eaf
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000347e9a
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000347e8f
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x0000000000347e60
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x0000000000347dfd
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000347def
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000347c62
- (id)initWithClientContext:(id)arg1;	// IMP=0x0000000000347a51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

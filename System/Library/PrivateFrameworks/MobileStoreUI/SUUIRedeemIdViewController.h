//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, SUUIClientContext, SUUIRedeemIdManager, UIBarButtonItem, UITableView;
@protocol SUUIRedeemIdDelegate;

__attribute__((visibility("hidden")))
@interface SUUIRedeemIdViewController : UIViewController
{
    id <SUUIRedeemIdDelegate> _delegate;	// 8 = 0x8
    SUUIRedeemIdManager *_manager;	// 16 = 0x10
    SUUIClientContext *_clientContext;	// 24 = 0x18
    UITableView *_tableView;	// 32 = 0x20
    UIBarButtonItem *_nextButton;	// 40 = 0x28
    NSMutableDictionary *_fields;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001af6fd
@property(retain, nonatomic) NSMutableDictionary *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SUUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(retain, nonatomic) SUUIRedeemIdManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <SUUIRedeemIdDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_adjustInsetsForKeyboardFrameValue:(id)arg1;	// IMP=0x00000000001af34e
- (void)_keyboardDidHide:(id)arg1;	// IMP=0x00000000001af1b2
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x00000000001af137
- (void)_subscribeToKeyboardEvents;	// IMP=0x00000000001af07d
- (void)_nextPressed;	// IMP=0x00000000001aef44
- (void)_cancelPressed;	// IMP=0x00000000001aeef8
- (void)_initializeNavigationItem;	// IMP=0x00000000001aec5b
- (void)_initializeTableView;	// IMP=0x00000000001aea9f
- (void)_initializeManager;	// IMP=0x00000000001ae9ec
- (id)_finalOutputFields;	// IMP=0x00000000001ae7d7
- (struct UIEdgeInsets)_edgeInsetsFromInsets:(struct UIEdgeInsets)arg1 usingNewTopInset:(double)arg2;	// IMP=0x00000000001ae7b8
- (void)_reloadFooter;	// IMP=0x00000000001ae73d
- (_Bool)_validateForm;	// IMP=0x00000000001ae5a0
- (void)_refreshNavigationItem;	// IMP=0x00000000001ae543
- (id)_fieldForIndexPath:(id)arg1;	// IMP=0x00000000001ae4b4
- (void)_updateFieldAtIndexPath:(id)arg1 withText:(id)arg2;	// IMP=0x00000000001ae40b
- (void)redeemIdManager:(id)arg1 didChangeToText:(id)arg2 forCellAtIndexPath:(id)arg3;	// IMP=0x00000000001ae3f6
- (void)redeemIdManager:(id)arg1 movedToRowAtIndexPath:(id)arg2;	// IMP=0x00000000001ae3e4
- (void)redeemIdManager:(id)arg1 didReturnText:(id)arg2 forCellAtIndexPath:(id)arg3;	// IMP=0x00000000001ae3cf
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001ae23e
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001ae169
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000001ae090

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

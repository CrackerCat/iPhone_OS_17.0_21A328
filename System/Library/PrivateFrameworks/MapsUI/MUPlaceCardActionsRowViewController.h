//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MUPlaceCardActionsRowView, NSArray;
@protocol MKPlaceActionManagerProtocol, MUPlaceCardActionsRowViewMenuProvider;

__attribute__((visibility("hidden")))
@interface MUPlaceCardActionsRowViewController : UIViewController
{
    NSArray *_items;	// 8 = 0x8
    id <MKPlaceActionManagerProtocol> _actionManager;	// 16 = 0x10
    id <MUPlaceCardActionsRowViewMenuProvider> _menuProvider;	// 24 = 0x18
    MUPlaceCardActionsRowView *_actionsRowView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000dbb1e
@property(readonly, nonatomic) MUPlaceCardActionsRowView *actionsRowView; // @synthesize actionsRowView=_actionsRowView;
@property(nonatomic) __weak id <MUPlaceCardActionsRowViewMenuProvider> menuProvider; // @synthesize menuProvider=_menuProvider;
@property(nonatomic) __weak id <MKPlaceActionManagerProtocol> actionManager; // @synthesize actionManager=_actionManager;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)viewDidLoad;	// IMP=0x00000000000db5f4
@property(readonly, nonatomic) NSArray *actionButtons;
- (void)updateActionsRowView;	// IMP=0x00000000000db502
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x00000000000db438
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000db430

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSSet, NSString, SFCollaborationUnifiedBarItem, SFDownloadsUnifiedBarItem, SFUnifiedBar, SFUnifiedBarButton, SFUnifiedBarItem, UIButton, _SFBarManager, _SWCollaborationButtonView;

__attribute__((visibility("hidden")))
@interface SFUnifiedBarRegistration : NSObject
{
    SFUnifiedBar *_bar;	// 8 = 0x8
    _SFBarManager *_barManager;	// 16 = 0x10
    long long _persona;	// 24 = 0x18
    _Bool _needsUpdateItems;	// 32 = 0x20
    _Bool _nextUpdateShouldPinScrollPositionToTrailingEdge;	// 33 = 0x21
    NSMutableSet *_disabledBarItems;	// 40 = 0x28
    NSMutableSet *_hiddenBarItems;	// 48 = 0x30
    NSArray *_leadingBarItems;	// 56 = 0x38
    NSArray *_trailingBarItems;	// 64 = 0x40
    NSSet *_allBarItems;	// 72 = 0x48
    SFUnifiedBarButton *_bookmarksAndSidebarButton;	// 80 = 0x50
    SFUnifiedBarItem *_backButton;	// 88 = 0x58
    SFUnifiedBarItem *_forwardButton;	// 96 = 0x60
    SFUnifiedBarItem *_tabGroupButton;	// 104 = 0x68
    SFUnifiedBarItem *_shareButton;	// 112 = 0x70
    SFUnifiedBarItem *_newTabButton;	// 120 = 0x78
    SFUnifiedBarItem *_tabOverviewButton;	// 128 = 0x80
    SFDownloadsUnifiedBarItem *_downloadsButton;	// 136 = 0x88
    SFUnifiedBarItem *_cancelButton;	// 144 = 0x90
    SFCollaborationUnifiedBarItem *_collaborationButton;	// 152 = 0x98
    long long _contentMode;	// 160 = 0xa0
    long long _state;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000001c160f
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(retain, nonatomic) _SWCollaborationButtonView *collaborationButton;
- (void)setAttributedTitle:(id)arg1 forBarItem:(long long)arg2;	// IMP=0x00000000001c14d5
- (void)setImage:(id)arg1 forBarItem:(long long)arg2;	// IMP=0x00000000001c1404
- (void)setTitle:(id)arg1 forBarItem:(long long)arg2;	// IMP=0x00000000001c137b
- (void)pulseBarItem:(long long)arg1;	// IMP=0x00000000001c135a
- (void)setProgress:(double)arg1 forBarItem:(long long)arg2;	// IMP=0x00000000001c1339
- (void)setBarItem:(long long)arg1 menu:(id)arg2;	// IMP=0x00000000001c12a3
- (id)viewForBarItem:(long long)arg1;	// IMP=0x00000000001c1253
- (id)popoverSourceInfoForItem:(long long)arg1;	// IMP=0x00000000001c11d0
- (_Bool)containsBarItem:(long long)arg1;	// IMP=0x00000000001c1147
- (void)_itemReceivedTap:(id)arg1;	// IMP=0x00000000001c10cc
- (id)unifiedBarItemForSFBarItem:(long long)arg1;	// IMP=0x00000000001c1093
- (long long)_SFBarItemForUnifiedBarItem:(id)arg1;	// IMP=0x00000000001c0fe4
- (id)_unifiedBarItemsForSFBarItems:(id)arg1;	// IMP=0x00000000001c0eeb
- (void)updateBarAnimated:(_Bool)arg1;	// IMP=0x00000000001c0de6
- (void)_updateEnabledBarItems;	// IMP=0x00000000001c0cce
- (_Bool)_isBarItemHidden:(long long)arg1;	// IMP=0x00000000001c0ba4
- (void)setBarItem:(long long)arg1 hidden:(_Bool)arg2;	// IMP=0x00000000001c0afb
- (void)setBarItem:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x00000000001c09ba
- (id)_imageForBarItem:(long long)arg1;	// IMP=0x00000000001c093b
- (id)_makeBarItemForSFBarItem:(long long)arg1;	// IMP=0x00000000001c05ec
- (void)_updateItems;	// IMP=0x00000000001c0317
- (void)_updateItemsIfNeeded;	// IMP=0x00000000001c02fd
- (void)_setNeedsUpdateItems;	// IMP=0x00000000001c02f3
- (id)initWithBar:(id)arg1 barManager:(id)arg2 persona:(long long)arg3;	// IMP=0x00000000001bff9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIButton *microphoneButton;
@property(nonatomic) unsigned long long pageFormatItemState;
@property(readonly) Class superclass;

@end

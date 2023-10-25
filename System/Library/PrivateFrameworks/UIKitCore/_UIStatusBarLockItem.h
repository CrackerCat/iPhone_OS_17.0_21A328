//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIStatusBarItem.h"

@class NSString, NSTimer, _UIExpandingGlyphsView, _UIStatusBarLockView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarLockItem : _UIStatusBarItem
{
    _Bool _showsLock;	// 8 = 0x8
    _UIStatusBarLockView *_lockView;	// 16 = 0x10
    _UIExpandingGlyphsView *_stringView;	// 24 = 0x18
    NSTimer *_lockDisappearanceTimer;	// 32 = 0x20
    long long _unlockFailureCount;	// 40 = 0x28
}

+ (id)textDisplayIdentifier;	// IMP=0x00100000010fd5a2
- (void).cxx_destruct;	// IMP=0x00000000010fea22
@property(nonatomic) long long unlockFailureCount; // @synthesize unlockFailureCount=_unlockFailureCount;
@property(nonatomic) _Bool showsLock; // @synthesize showsLock=_showsLock;
@property(retain, nonatomic) NSTimer *lockDisappearanceTimer; // @synthesize lockDisappearanceTimer=_lockDisappearanceTimer;
@property(retain, nonatomic) _UIExpandingGlyphsView *stringView; // @synthesize stringView=_stringView;
@property(retain, nonatomic) _UIStatusBarLockView *lockView; // @synthesize lockView=_lockView;
- (id)viewForIdentifier:(id)arg1;	// IMP=0x00000000010fe8ab
- (void)_create_stringView;	// IMP=0x00000000010fe833
- (void)_create_lockView;	// IMP=0x00000000010fe7a2
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x00000000010fe672
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x00000000010fe587
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x00000000010fde09
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x00000000010fd685
- (_Bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;	// IMP=0x00000000010fd5de
- (id)dependentEntryKeys;	// IMP=0x00000000010fd5bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

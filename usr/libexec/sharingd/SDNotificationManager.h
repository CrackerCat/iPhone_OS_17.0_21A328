//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface SDNotificationManager : NSObject
{
    _Bool _activated;	// 8 = 0x8
    NSMutableDictionary *_autoFillRequests;	// 16 = 0x10
    UNUserNotificationCenter *_homePodNotifCenter;	// 24 = 0x18
    UNUserNotificationCenter *_homePodMiniNotificationCenter;	// 32 = 0x20
    _Bool _homePodNotifGranted;	// 40 = 0x28
    NSMutableDictionary *_homePodRequests;	// 48 = 0x30
    _Bool _invalidated;	// 56 = 0x38
    NSMutableDictionary *_tvKeyboardRequests;	// 64 = 0x40
    UNUserNotificationCenter *_tvNotifCenter;	// 72 = 0x48
    _Bool _tvNotifGranted;	// 80 = 0x50
    NSMutableDictionary *_watchKeyboardRequests;	// 88 = 0x58
    UNUserNotificationCenter *_watchNotifCenter;	// 96 = 0x60
    _Bool _watchNotifGranted;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 112 = 0x70
}

+ (id)sharedManager;	// IMP=0x0020000000181c50
- (void).cxx_destruct;	// IMP=0x0020000000189fa6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testWatchKeyboardAutoFill;	// IMP=0x0010000000189ead
- (void)testWatchKeyboard;	// IMP=0x0010000000189de1
- (void)testKeyboardUpdate;	// IMP=0x0010000000189d14
- (void)testKeyboardRemove;	// IMP=0x0010000000189c48
- (void)testKeyboardPostAutoFill;	// IMP=0x0010000000189b68
- (void)testKeyboardPost;	// IMP=0x0010000000189a9a
- (void)testHandoffPost;	// IMP=0x0010000000189909
- (void)testAutoFillRemove;	// IMP=0x001000000018983d
- (void)testAutofillPost;	// IMP=0x0010000000189771
- (void)testPostBasic;	// IMP=0x001000000018963a
- (void)testPost:(id)arg1;	// IMP=0x0010000000189467
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000188ef4
- (void)_homePodHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000188a04
- (void)_homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x00100000001884f6
- (void)homePodHandoffUpdateIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x001000000018841e
- (void)_homePodHandoffRemoveAll;	// IMP=0x001000000018836e
- (void)homePodHandoffRemoveAll;	// IMP=0x001000000018830d
- (void)_homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000018809a
- (void)homePodHandoffRemove:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000187fd9
- (void)_homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000187e03
- (void)homePodHandoffPostIfNeeded:(id)arg1 info:(id)arg2;	// IMP=0x0010000000187d2b
- (id)homePodHandoffContentForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00000000001877d7
- (void)_watchHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000018773b
- (void)_watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001870c7
- (void)watchKeyboardUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x0010000000186fef
- (void)_watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000186b69
- (void)watchKeyboardUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000186a91
- (void)_watchKeyboardRemoveAll;	// IMP=0x0010000000186a0d
- (void)watchKeyboardRemoveAll;	// IMP=0x00100000001869ac
- (void)_watchKeyboardRemove:(id)arg1;	// IMP=0x0010000000186826
- (void)watchKeyboardRemove:(id)arg1;	// IMP=0x001000000018677c
- (void)_watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x00100000001865f5
- (void)watchKeyboardPostIfNeeded:(id)arg1;	// IMP=0x001000000018654b
- (id)watchKeyboardContentForDevice:(id)arg1;	// IMP=0x0010000000186209
- (void)_tvAutoFillRemoveAll;	// IMP=0x0010000000186179
- (void)tvAutoFillRemoveAll;	// IMP=0x0010000000186118
- (void)_tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000185f92
- (void)tvAutoFillRemove:(id)arg1;	// IMP=0x0010000000185ee8
- (void)_tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000185ba8
- (void)tvAutoFillPostIfNeeded:(id)arg1;	// IMP=0x0010000000185afe
@property(readonly, copy, nonatomic) NSSet *activeTVAutoFillPrompts;
- (void)_riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000001853f3
- (void)riServerUpdate:(id)arg1 rtiData:(id)arg2;	// IMP=0x001000000018531b
- (void)_riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000184e95
- (void)riServerUpdate:(id)arg1 info:(id)arg2;	// IMP=0x0010000000184dbd
- (void)_riServerRemoveAll;	// IMP=0x0010000000184d39
- (void)riServerRemoveAll;	// IMP=0x0010000000184cd8
- (void)_riServerRemove:(id)arg1;	// IMP=0x0010000000184b52
- (void)riServerRemove:(id)arg1;	// IMP=0x0010000000184aa8
- (void)_riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x00100000001848f7
- (void)riServerPostIfNeeded:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x0010000000184837
- (id)riServerContentForDevice:(id)arg1 backgroundAction:(_Bool)arg2;	// IMP=0x001000000018451b
- (void)_tvHandleResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000183ebd
- (id)attachmentFromURL:(id)arg1;	// IMP=0x0010000000183cb8
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3 isHomePodMini:(_Bool)arg4;	// IMP=0x00100000001833cf
- (void)_addRequestWithID:(id)arg1 content:(id)arg2 type:(unsigned int)arg3;	// IMP=0x00100000001833ba
- (void)_homePodEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000182c49
- (void)_watchEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000182892
- (void)_riServerEnsureStarted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001824ce
- (void)_update;	// IMP=0x0010000000182470
- (void)prefsChanged;	// IMP=0x001000000018245e
- (void)_invalidate;	// IMP=0x0010000000182411
- (void)invalidate;	// IMP=0x00100000001823b0
- (void)_activate;	// IMP=0x001000000018232f
- (void)activate;	// IMP=0x00100000001822cc
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x0010000000181ca5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

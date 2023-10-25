//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, PDNotificationStreamManager, PKDAManager;

@interface PDPrivacyKeyMonitor : NSObject
{
    PDNotificationStreamManager *_notificationStreamManager;	// 8 = 0x8
    PKDAManager *_daManager;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSMutableArray *_entries;	// 32 = 0x20
    _Bool _isRegisteredForNotifications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000042bdd1
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x001000000042bd43
- (id)createCurrentNotificationRegistrationState;	// IMP=0x001000000042bcd3
- (void)_entryDidTimeout:(id)arg1;	// IMP=0x001000000042bb91
- (void)_checkEntriesForNewKeys;	// IMP=0x001000000042b76a
- (id)_keysForEntry:(id)arg1;	// IMP=0x001000000042b762
- (void)_updateNotificationMonitoring;	// IMP=0x001000000042b6e2
- (void)_waitForKeyWithGroupIdentifier:(id)arg1 keyIdentifier:(id)arg2 timeout:(double)arg3 newKey:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000042b3d0
- (void)waitForKeyWithKeyIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000042b3b0
- (void)waitForKeyWithGroupIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000042b393
- (void)waitForNewKeyWithKeyIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000042b370
- (void)waitForNewKeyWithGroupIdentifier:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000042b350
- (_Bool)isMonitoring;	// IMP=0x001000000042b314
- (void)dealloc;	// IMP=0x001000000042b2c9
- (id)initWithNotificationStreamManager:(id)arg1;	// IMP=0x001000000042b221
- (id)init;	// IMP=0x001000000042b213

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

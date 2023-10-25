//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SoftwareUpdateListener
{
}

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x002000000021e03d
- (void)shouldUseModernUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021dee0
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000021dc07
- (void)updateAllWithJobResults:(CDUnknownBlockType)arg1;	// IMP=0x001000000021d94a
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021d787
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021d5c7
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021d2a1
- (void)removeUpdateBulletins;	// IMP=0x001000000021d1ad
- (void)showApplicationBadgeForPendingUpdates;	// IMP=0x001000000021d07f
- (void)showApplicationUpdatesBulletin;	// IMP=0x001000000021cf8b
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000021ce6c
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021cbc4
- (void)migrateUpdatesStoreWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021cb35
- (void)hideApplicationBadgeForPendingUpdates;	// IMP=0x001000000021ca07
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c847
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c687
- (void)getUpdatesMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c5d7
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c417
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000021c2f8
- (id)init;	// IMP=0x001000000021c2c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

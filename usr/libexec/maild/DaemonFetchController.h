//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDFetchController.h>

@class FavoritesPersistence, FetchXPCActivityScheduler, NSObject, NSSet, NSString;
@protocol EFScheduler, OS_dispatch_source;

@interface DaemonFetchController : EDFetchController
{
    NSObject<OS_dispatch_source> *_throttleTimer;	// 8 = 0x8
    _Bool _schedulePeriodicFetches;	// 16 = 0x10
    int _pcPollInterval;	// 20 = 0x14
    struct os_unfair_lock_s _fetchSchedulerLock;	// 24 = 0x18
    FavoritesPersistence *_favoritesPersistence;	// 32 = 0x20
    NSSet *_currentAlertContexts;	// 40 = 0x28
    NSSet *_currentAlertSuppresionContexts;	// 48 = 0x30
    FetchXPCActivityScheduler *_powerNapScheduler;	// 56 = 0x38
    FetchXPCActivityScheduler *_periodicScheduler;	// 64 = 0x40
    FetchXPCActivityScheduler *_compactScheduler;	// 72 = 0x48
    NSObject *_backFillScheduler;	// 80 = 0x50
    id <EFScheduler> _pendingFetchOTCScheduler;	// 88 = 0x58
}

+ (id)log;	// IMP=0x00200000000102da
- (void).cxx_destruct;	// IMP=0x0020000000012d02
@property(retain, nonatomic) id <EFScheduler> pendingFetchOTCScheduler; // @synthesize pendingFetchOTCScheduler=_pendingFetchOTCScheduler;
@property(readonly, nonatomic) NSObject *backFillScheduler; // @synthesize backFillScheduler=_backFillScheduler;
@property(retain, nonatomic) FetchXPCActivityScheduler *compactScheduler; // @synthesize compactScheduler=_compactScheduler;
@property(retain, nonatomic) FetchXPCActivityScheduler *periodicScheduler; // @synthesize periodicScheduler=_periodicScheduler;
@property(retain, nonatomic) FetchXPCActivityScheduler *powerNapScheduler; // @synthesize powerNapScheduler=_powerNapScheduler;
@property(retain, nonatomic) NSSet *currentAlertSuppresionContexts; // @synthesize currentAlertSuppresionContexts=_currentAlertSuppresionContexts;
@property(retain, nonatomic) NSSet *currentAlertContexts; // @synthesize currentAlertContexts=_currentAlertContexts;
@property(retain, nonatomic) FavoritesPersistence *favoritesPersistence; // @synthesize favoritesPersistence=_favoritesPersistence;
- (id)visibleMailboxes;	// IMP=0x0010000000012a9d
- (id)diagnosticInformation;	// IMP=0x0010000000012a32
- (void)setSuppressedContexts:(id)arg1;	// IMP=0x00100000000129a9
- (void)resetPushStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012920
- (void)downloadMessageBodiesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001282e
- (void)performFetchOfType:(int)arg1 mailboxName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001203e
- (id)_findMailboxWithName:(id)arg1 inAccounts:(id)arg2;	// IMP=0x0010000000011e2a
- (id)_mailboxWithName:(id)arg1 forAccount:(id)arg2;	// IMP=0x0010000000011d47
- (void)performFetchOfType:(int)arg1 mailboxObjectIds:(id)arg2;	// IMP=0x0010000000011b7c
- (void)performFetchOfType:(int)arg1 accountIds:(id)arg2;	// IMP=0x0010000000011aaa
- (double)_delayFetchOTCInterval;	// IMP=0x0010000000011a33
- (void)performFetchForOTC;	// IMP=0x00100000000118c1
- (void)performFetchOfType:(int)arg1;	// IMP=0x001000000001185a
- (void)_cancelThrottleTimer;	// IMP=0x0010000000011820
- (void)_updatePushState;	// IMP=0x001000000001150e
- (void)_updatePushStateThrottled;	// IMP=0x0010000000011420
- (void)_autoFetchProcessFinished:(id)arg1;	// IMP=0x001000000001114a
- (int)_fetchTypeForSchedulerType:(int)arg1;	// IMP=0x0010000000011034
- (void)fetchSchedulerDidTrigger:(id)arg1;	// IMP=0x0010000000010fc9
- (void)_schedulePeriodicFetches;	// IMP=0x0010000000010dfe
- (double)_periodicFetchInterval;	// IMP=0x0010000000010d75
- (void)_cancelPeriodicFetches;	// IMP=0x0010000000010c4e
- (void)_schedulePowernapFetches;	// IMP=0x0010000000010a83
- (double)_powernapFetchInterval;	// IMP=0x00100000000109bc
- (void)_init;	// IMP=0x00100000000105b9
- (id)initWithAccountsProvider:(id)arg1 favoritesPersistence:(id)arg2;	// IMP=0x00100000000103b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

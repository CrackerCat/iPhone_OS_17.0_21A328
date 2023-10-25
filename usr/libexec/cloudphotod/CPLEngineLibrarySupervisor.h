//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCloudKitSendSharedLibraryExitStatusFeedbackTask, CPLEngineForceProcessingStagedScopesTask, CPLEngineLibrary, CPLEngineStore, CPLExitSharedLibrarySupervisor, NSDate, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLEngineLibrarySupervisor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    CPLExitSharedLibrarySupervisor *_exitSupervisor;	// 16 = 0x10
    _Bool _closed;	// 24 = 0x18
    unsigned long long _pauseCount;	// 32 = 0x20
    CPLEngineForceProcessingStagedScopesTask *_forceProcessingStagedScopesTask;	// 40 = 0x28
    CPLCloudKitSendSharedLibraryExitStatusFeedbackTask *_sendExitStatusFeedback;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_retryTimer;	// 56 = 0x38
    NSDate *_nextRetryDate;	// 64 = 0x40
    CPLEngineLibrary *_engineLibrary;	// 72 = 0x48
    CPLEngineStore *_store;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000001fb84
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CPLEngineStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) __weak CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property(readonly, nonatomic) NSString *status;
- (void)ping;	// IMP=0x001000000001f919
- (void)resume;	// IMP=0x001000000001f820
- (void)pause;	// IMP=0x001000000001f70f
- (void)_launchForcedExitForSupervisor:(id)arg1;	// IMP=0x001000000001ec17
- (void)_sendExitFeedbackForSupervisor:(id)arg1 cloudKitScope:(id)arg2 exitState:(long long)arg3;	// IMP=0x001000000001e2ca
- (void)transportNotedServerHasChanges:(id)arg1;	// IMP=0x001000000001de61
- (void)scopeUpdateTaskDidFinishSuccessfully:(id)arg1;	// IMP=0x001000000001de4f
- (void)scopeStorage:(id)arg1 didStoreSharingScopeIdentifier:(id)arg2;	// IMP=0x001000000001de3d
- (void)scopeStorage:(id)arg1 didDropSharingScopeIdentifier:(id)arg2;	// IMP=0x001000000001de2b
- (void)scopeStorage:(id)arg1 didUpdateScopeChange:(id)arg2 forScope:(id)arg3;	// IMP=0x001000000001da86
- (void)_storeSupervisorInfoInTransaction:(id)arg1;	// IMP=0x001000000001d6ef
- (void)_checkExitSupervisor;	// IMP=0x001000000001d646
- (void)_checkExitSupervisorInTransaction:(id)arg1;	// IMP=0x001000000001cef2
- (long long)_supervisorExitStateForScopeChange:(id)arg1;	// IMP=0x001000000001ce3a
- (_Bool)schedulerShouldStartSyncSessionMovingToForeground:(id)arg1 currentSession:(id)arg2;	// IMP=0x001000000001cbe3
- (void)engineWillClose:(id)arg1;	// IMP=0x001000000001cafb
- (void)engineDidOpen:(id)arg1;	// IMP=0x001000000001c77d
- (void)_scheduleOrLaunchIfNecessary;	// IMP=0x001000000001c6a1
- (void)_scheduleOrLaunchIfNecessaryInQueue;	// IMP=0x001000000001c2fa
- (void)_unscheduleInQueue;	// IMP=0x001000000001c29f
- (id)initWithEngineLibrary:(id)arg1 queue:(id)arg2;	// IMP=0x001000000001c1c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

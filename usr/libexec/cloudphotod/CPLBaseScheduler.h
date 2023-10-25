//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLSyncSession, NSObject, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CPLBaseScheduler : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sequenceNumberQueue;	// 24 = 0x18
    unsigned long long _sequenceNumber;	// 32 = 0x20
    CPLSyncSession *_currentSession;	// 40 = 0x28
    CPLSyncSession *_scheduledSession;	// 48 = 0x30
    _Bool _lookingForPersistedSyncSession;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000081fef
- (id)componentName;	// IMP=0x0010000000081fe2
- (void)unscheduleSyncSession:(id)arg1;	// IMP=0x0010000000081e56
- (id)scheduleNextSyncSessionAtDate:(id)arg1;	// IMP=0x0010000000081a01
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000081846
- (void)unschedulePersistedSyncSession;	// IMP=0x001000000008169d
- (void)schedulePersistedSyncSessionIfAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000081155
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000080f15
- (void)noteSyncSession:(id)arg1 failedWithError:(id)arg2;	// IMP=0x0010000000080b48
- (void)noteSyncSessionSucceeded:(id)arg1;	// IMP=0x00100000000809fc
- (void)noteServerHasChanges;	// IMP=0x00100000000809f6
- (void)noteClientNeedsToPull;	// IMP=0x00100000000809f0
- (void)noteScopeNeedsToPushToTransport;	// IMP=0x00100000000809ea
- (_Bool)shouldCoalesceServerChangesNotification;	// IMP=0x00100000000809e2
- (_Bool)shouldStartSyncSessionFromState:(unsigned long long)arg1;	// IMP=0x00100000000809da
- (unsigned long long)_nextSequenceNumber;	// IMP=0x001000000008091e
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000807a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

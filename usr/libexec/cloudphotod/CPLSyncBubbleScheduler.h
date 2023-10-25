//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLSyncSession, NSString;

@interface CPLSyncBubbleScheduler : CPLPlatformObject
{
    CPLSyncSession *_dummySession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000026da
- (void)unschedulePersistedSyncSession;	// IMP=0x00100000000026d4
- (void)schedulePersistedSyncSessionIfAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000026c4
- (id)componentName;	// IMP=0x00100000000026b7
- (void)noteSyncSessionSucceeded:(id)arg1;	// IMP=0x00100000000026a2
- (void)noteSyncSession:(id)arg1 failedWithError:(id)arg2;	// IMP=0x001000000000268d
- (void)unscheduleSyncSession:(id)arg1;	// IMP=0x0010000000002687
- (id)scheduleNextSyncSessionAtDate:(id)arg1;	// IMP=0x00100000000025f2
- (void)closeAndDeactivate:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000025e2
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000025d2
- (void)noteServerHasChanges;	// IMP=0x00100000000025cc
- (void)noteClientNeedsToPull;	// IMP=0x00100000000025c6
- (void)noteScopeNeedsToPushToTransport;	// IMP=0x00100000000025c0
- (_Bool)shouldCoalesceServerChangesNotification;	// IMP=0x00100000000025b8
- (_Bool)shouldStartSyncSessionFromState:(unsigned long long)arg1;	// IMP=0x00100000000025b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSUUID, SHMediaLibraryClient, SHMediaLibraryController;
@protocol SHMediaLibrarySyncDelegate, SHWorkerDelegate;

@interface SHMediaLibrarySyncManager : NSObject
{
    id <SHMediaLibrarySyncDelegate> _delegate;	// 8 = 0x8
    id <SHWorkerDelegate> _workerDelegate;	// 16 = 0x10
    NSUUID *_workerID;	// 24 = 0x18
    NSUUID *_taskID;	// 32 = 0x20
    SHMediaLibraryClient *_client;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    NSLock *_syncCompletionLock;	// 56 = 0x38
    SHMediaLibraryController *_controller;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000006314
@property(retain, nonatomic) SHMediaLibraryController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) NSLock *syncCompletionLock; // @synthesize syncCompletionLock=_syncCompletionLock;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) SHMediaLibraryClient *client; // @synthesize client=_client;
@property(nonatomic) __weak id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
@property(nonatomic) __weak id <SHMediaLibrarySyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long executionScope;
@property(readonly, nonatomic) NSUUID *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) NSUUID *workerID; // @synthesize workerID=_workerID;
- (void)updateSnapshotWithAttribution:(id)arg1;	// IMP=0x0010000000005da9
- (void)stop;	// IMP=0x0010000000005d39
- (void)finishSyncing;	// IMP=0x0010000000005c62
- (void)_libraryDidCompleteSync:(id)arg1;	// IMP=0x0010000000005b03
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;	// IMP=0x00100000000059e5
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;	// IMP=0x0010000000005810
- (void)_libraryWillBeginSync:(id)arg1;	// IMP=0x00100000000057c4
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2 controller:(id)arg3;	// IMP=0x00100000000056ce
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000005186
- (id)initWithClient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000050e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

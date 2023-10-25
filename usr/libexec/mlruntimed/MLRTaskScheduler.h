//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DESRecordStoreManager, MLRPluginFactory, MLRTrialManager, NSHashTable, NSMutableArray, NSString, NSURL;
@protocol DESBundleRegistryManaging, OS_dispatch_queue;

@interface MLRTaskScheduler : NSObject
{
    NSURL *_baseURL;	// 8 = 0x8
    id <DESBundleRegistryManaging> _bundleRegistry;	// 16 = 0x10
    MLRPluginFactory *factory;	// 24 = 0x18
    DESRecordStoreManager *_recordStoreManager;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_taskWorkerQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_taskStopQueue;	// 48 = 0x30
    _Bool _alwaysRun;	// 56 = 0x38
    NSString *_localeIdentifier;	// 64 = 0x40
    NSHashTable *_workers;	// 72 = 0x48
    NSMutableArray *_tasks;	// 80 = 0x50
    CDUnknownBlockType _completionAfterTaskRun;	// 88 = 0x58
    _Bool _busy;	// 96 = 0x60
    unsigned long long _numOfCompletedTasks;	// 104 = 0x68
    unsigned long long _numOfExpectedTasks;	// 112 = 0x70
    _Bool _requestedToStop;	// 120 = 0x78
    MLRTrialManager *_trialManager;	// 128 = 0x80
    MLRPluginFactory *_pluginFactory;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000019faf
- (_Bool)taskIsDeferred;	// IMP=0x0010000000019fa6
- (void)stop;	// IMP=0x0010000000019d63
- (void)startTasksForPluginIDs:(id)arg1 iSBMLTTask:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019c9a
- (id)filterPluginIDs:(id)arg1;	// IMP=0x0000000000019934
- (id)tasksForPlugindIDs:(id)arg1 iSBMLTTask:(_Bool)arg2;	// IMP=0x0010000000019902
- (id)BMLTTasksForPlugindIDs:(id)arg1;	// IMP=0x0010000000019737
- (id)nonBMLTTasksForPluginIDs:(id)arg1;	// IMP=0x0010000000019338
- (void)startTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001922c
- (void)_startTasks:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018fb8
- (void)addPFLSchedulingTaskToTasks:(id)arg1 withBundleID:(id)arg2;	// IMP=0x0010000000018d9b
- (_Bool)allowBypassDiagnosticsUsage:(id)arg1;	// IMP=0x0010000000018cfd
- (_Bool)diagnosticsUsageAllowed;	// IMP=0x0010000000018cf3
- (double)_maxTimeLimitForBundle:(id)arg1;	// IMP=0x0010000000018cc2
- (void)updateInterval;	// IMP=0x0010000000018c8e
- (void)_completeTaskRunWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0010000000018beb
- (void)createTaskWorkerForTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018b61
- (void)createTaskWorkerBMLTTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018971
- (void)createTaskWorkerForLocalDebugTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001885f
- (void)createTaskWorkerForShadowEvaluationTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000185c9
- (void)createTaskWorkerForTrialPFLTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000181f7
- (void)createTaskWorkerForDodMLTask:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017ed1
- (void)_scheduleNextTask;	// IMP=0x0010000000017425
- (id)_requestedToStopError;	// IMP=0x001000000001735a
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 fromDesTool:(_Bool)arg3 bundleRegistry:(id)arg4 recordStoreManager:(id)arg5;	// IMP=0x0010000000017112
- (id)initWithBaseURL:(id)arg1 localeIdentifier:(id)arg2 fromDesTool:(_Bool)arg3;	// IMP=0x00100000000170ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

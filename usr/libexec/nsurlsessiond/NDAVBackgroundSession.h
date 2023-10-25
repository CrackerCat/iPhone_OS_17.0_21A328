//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURLSessionConfiguration;
@protocol OS_dispatch_source;

@interface NDAVBackgroundSession
{
    NSMutableDictionary *_identifiersToAVWrappers;	// 256 = 0x100
    NSMutableDictionary *_identifiersToThroughputMonitors;	// 264 = 0x108
    NSMutableDictionary *_identifiersToTCPConnections;	// 272 = 0x110
    NSMutableDictionary *_identifiersToDASActivities;	// 280 = 0x118
    NSMapTable *_assetDownloadTokensToAssets;	// 288 = 0x120
    NSURLSessionConfiguration *_clientConfig;	// 296 = 0x128
    NSObject<OS_dispatch_source> *_delayedWakeTimer;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x002000000007b85f
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000007b5be
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didResolveMediaSelectionPropertyList:(id)arg2;	// IMP=0x001000000007b3b0
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didFinishDownloadForMediaSelectionPropertyList:(id)arg2;	// IMP=0x001000000007b321
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 forMediaSelectionPropertyList:(id)arg5;	// IMP=0x001000000007b21c
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 willDownloadVariants:(id)arg2;	// IMP=0x001000000007b0e3
- (void)NDAVAssetDownloadSessionWrapper:(id)arg1 didUpdateProgressWithLastBytesWritten:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;	// IMP=0x001000000007afb6
- (void)taskWithIdentifier:(unsigned long long)arg1 didCompleteWithError:(id)arg2;	// IMP=0x001000000007a83e
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x001000000007a611
- (void)cancelTCPConnectionForTask:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x001000000007a45b
- (void)clientAcknowledgedTerminalCallbackForTask:(unsigned long long)arg1;	// IMP=0x001000000007a341
- (void)resetStorageWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a336
- (void)stopAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000007a248
- (void)startAVAssetDownloadSessionWithTaskIdentifier:(unsigned long long)arg1;	// IMP=0x001000000007a059
- (_Bool)ensureAVAssetDownloadSessionWrapperForTaskIdentifier:(unsigned long long)arg1;	// IMP=0x0010000000079d14
- (id)newAVAssetDownloadSessionWrapperForTaskInfo:(id)arg1;	// IMP=0x001000000007993f
- (long long)adjustedTCPConnectionPriorityForTaskPriority:(long long)arg1;	// IMP=0x0010000000079832
- (void)taskShouldResume:(unsigned long long)arg1;	// IMP=0x0010000000079596
- (void)taskShouldSuspend:(unsigned long long)arg1;	// IMP=0x001000000007934f
- (_Bool)retryTask:(id)arg1 originalError:(id)arg2;	// IMP=0x001000000007892b
- (void)setPriority:(long long)arg1 forTCPConnectionWithTaskIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000078925
- (void)cancelAVDownloadAndFailTaskWithIdentifier:(unsigned long long)arg1 withError:(id)arg2;	// IMP=0x0010000000078739
- (void)setLoadingPoolPriority:(double)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000078733
- (void)setPriority:(long long)arg1 forTaskWithIdentifier:(unsigned long long)arg2;	// IMP=0x0010000000078653
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1 byProducingResumeData:(CDUnknownBlockType)arg2;	// IMP=0x00100000000785f5
- (void)cancelTaskWithIdentifier:(unsigned long long)arg1;	// IMP=0x001000000007842f
- (void)avAggregateAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 serializedMediaSelections:(id)arg2 assetTitle:(id)arg3 assetArtworkData:(id)arg4 options:(id)arg5 assetOptions:(id)arg6 childDownloadSessionIdentifier:(id)arg7 identifier:(unsigned long long)arg8 uniqueIdentifier:(id)arg9 reply:(CDUnknownBlockType)arg10;	// IMP=0x0010000000077c99
- (void)avAssetDownloadTaskWithDownloadToken:(unsigned long long)arg1 URL:(id)arg2 destinationURL:(id)arg3 temporaryDestinationURL:(id)arg4 assetTitle:(id)arg5 assetArtworkData:(id)arg6 options:(id)arg7 assetOptions:(id)arg8 identifier:(unsigned long long)arg9 uniqueIdentifier:(id)arg10 taskKind:(unsigned long long)arg11 enableSPIDelegateCallbacks:(_Bool)arg12 reply:(CDUnknownBlockType)arg13;	// IMP=0x0010000000076db9
- (_Bool)doesAVAssetDownloadSessionSupportMultipleDownloads;	// IMP=0x0010000000076d9e
- (id)avAssetForURL:(id)arg1 downloadToken:(unsigned long long)arg2;	// IMP=0x0010000000076b60
- (_Bool)hasEntitlementToSpecifyDownloadDestinationURL;	// IMP=0x0010000000076b03
- (void)dataTaskWithRequest:(id)arg1 originalRequest:(id)arg2 pipeHandle:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000076af2
- (void)uploadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 fromFile:(id)arg3 identifier:(unsigned long long)arg4 uniqueIdentifier:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000076ae1
- (void)downloadTaskWithRequest:(id)arg1 originalRequest:(id)arg2 identifier:(unsigned long long)arg3 uniqueIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000076ad0
- (void)applicationEndedTransitionalDiscretionaryBackgroundPeriod:(id)arg1;	// IMP=0x0010000000076a40
- (void)backgroundUpdatesDisabledForApplication:(id)arg1;	// IMP=0x0010000000076a3a
- (void)applicationWasQuitFromAppSwitcher:(id)arg1;	// IMP=0x00100000000769aa
- (void)applicationEnteredForeground:(id)arg1;	// IMP=0x001000000007691a
- (void)applicationNoLongerInForeground:(id)arg1;	// IMP=0x001000000007688a
- (id)destinationURLToUseForTask:(id)arg1;	// IMP=0x0010000000076369
- (id)downloadDirectoryToUse:(id)arg1;	// IMP=0x00100000000762ee
- (id)avAssetDownloadsDirectory;	// IMP=0x0010000000075dc6
- (void)updatePriorityForTaskID:(id)arg1;	// IMP=0x0010000000075dc0
- (void)fillInByteCountsForTaskInfo:(id)arg1 withTaskID:(id)arg2;	// IMP=0x0010000000075cd3
- (id)restoreTasksFromArchivedInfo:(id)arg1;	// IMP=0x0010000000075be0
- (id)restoreTasksFromSqliteDB:(id)arg1;	// IMP=0x0010000000074dfa
- (void)cancelThroughputMonitorForWrapper:(unsigned long long)arg1;	// IMP=0x0010000000074cf7
- (void)setupThroughputMonitorForWrapper:(id)arg1 taskInfo:(id)arg2 identifier:(unsigned long long)arg3;	// IMP=0x0010000000074b69
- (void)cancelDelayedCompletionWakeTimer;	// IMP=0x0010000000074a28
- (void)setupDelayedCompletionWakeTimer;	// IMP=0x0010000000074869
- (id)initWithConfiguration:(id)arg1 bundleID:(id)arg2 isSpringBoardApp:(_Bool)arg3 downloadDirectory:(id)arg4 options:(id)arg5 clientProxy:(id)arg6 delegate:(id)arg7 workQueue:(id)arg8 db:(id)arg9;	// IMP=0x00100000000745a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

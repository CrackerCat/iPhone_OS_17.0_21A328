//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSession, BRCDeadlineSource, BRCFetchRecentAndFavoriteDocumentsOperation, BRCItemID, BRCPQLConnection, BRCServerZone, BRCSyncBudgetThrottle, BRCSyncDownOperation, BRCSyncOperationBackoffRatio, BRCSyncOperationThrottle, BRCSyncUpOperation, BRCThrottle, BRCThrottleBase, BRCZoneRowID, BRMangledID, CKOperationGroup, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSSet, NSString, brc_task_tracker;
@protocol BRCClientZoneDelegate, NSObject, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCClientZone : NSObject
{
    BRCAccountSession *_session;	// 8 = 0x8
    BRCServerZone *_serverZone;	// 16 = 0x10
    id <BRCClientZoneDelegate> _delegate;	// 24 = 0x18
    BRCZoneRowID *_dbRowID;	// 32 = 0x20
    NSString *_zoneName;	// 40 = 0x28
    NSString *_ownerName;	// 48 = 0x30
    BRMangledID *_mangledID;	// 56 = 0x38
    BRCPQLConnection *_db;	// 64 = 0x40
    unsigned int _state;	// 72 = 0x48
    _Bool _activated;	// 76 = 0x4c
    _Bool _isInitialCreation;	// 77 = 0x4d
    BRCThrottleBase *_readerThrottle;	// 80 = 0x50
    long long _syncUpRetryAfter;	// 88 = 0x58
    _Atomic unsigned int _syncState;	// 96 = 0x60
    BRCSyncUpOperation *_syncUpOperation;	// 104 = 0x68
    NSError *_lastSyncUpError;	// 112 = 0x70
    _Bool _lastSyncUpErrorWasOnChainedItem;	// 120 = 0x78
    BRCSyncDownOperation *_syncDownOperation;	// 128 = 0x80
    id _syncDeadlineSourceResumer;	// 136 = 0x88
    NSError *_lastSyncDownError;	// 144 = 0x90
    BRCSyncOperationThrottle *_syncUpThrottle;	// 152 = 0x98
    BRCSyncBudgetThrottle *_syncUpBudget;	// 160 = 0xa0
    BRCSyncOperationBackoffRatio *_syncUpBackoffRatio;	// 168 = 0xa8
    BRCSyncOperationThrottle *_syncDownThrottle;	// 176 = 0xb0
    BRCDeadlineSource *_syncDeadlineSource;	// 184 = 0xb8
    NSMutableArray *_blockedOperationsOnInitialSync;	// 192 = 0xc0
    NSMutableDictionary *_runningListOperations;	// 200 = 0xc8
    NSMutableDictionary *_recursiveListOperations;	// 208 = 0xd0
    NSMutableDictionary *_fetchParentOperations;	// 216 = 0xd8
    NSMutableDictionary *_locateRecordOperations;	// 224 = 0xe0
    BRCFetchRecentAndFavoriteDocumentsOperation *_fetchRecentsOperation;	// 232 = 0xe8
    _Bool _invokeFetchRecentsOperation;	// 240 = 0xf0
    BRCThrottle *_serverStitchingOperationThrottle;	// 248 = 0xf8
    NSMutableIndexSet *_appliedTombstoneRanks;	// 256 = 0x100
    long long _lastInsertedRank;	// 264 = 0x108
    NSDate *_lastSyncDownDate;	// 272 = 0x110
    NSDate *_lastAttemptedSyncDownDate;	// 280 = 0x118
    NSObject<OS_dispatch_source> *_resetTimer;	// 288 = 0x120
    NSMutableDictionary *_syncDownBlockToPerformForBookmarkData;	// 296 = 0x128
    _Bool _shouldShowiCloudDriveAppInstallationNotification;	// 304 = 0x130
    NSMutableSet *_itemIDsBlockedFromSyncForCZMProcessing;	// 312 = 0x138
    NSMutableDictionary *_itemsBlockedByAssociationForCZMProcessing;	// 320 = 0x140
    NSMutableArray *_blocksWaitingOnCrossZoneMoveProcessing;	// 328 = 0x148
    NSMutableDictionary *_parentsOfCZMFaults;	// 336 = 0x150
    NSMutableDictionary *_onDiskBlockToPerformForItemID;	// 344 = 0x158
    NSMutableDictionary *_downloadedBlockToPerformForItemID;	// 352 = 0x160
    NSMutableDictionary *_syncDownBlockToPerformForItemID;	// 360 = 0x168
    NSMutableDictionary *_locateBlocksToPerformForRecordID;	// 368 = 0x170
    NSMutableArray *_nextSyncDownBarriers;	// 376 = 0x178
    NSMutableArray *_currentSyncDownBarriers;	// 384 = 0x180
    id <NSObject> _hasWorkDidUpdateObserver;	// 392 = 0x188
    NSMutableArray *_nextIdleHandlers;	// 400 = 0x190
    NSMutableArray *_directoriesCreatedLastSyncUp;	// 408 = 0x198
    CKOperationGroup *_syncDownGroup;	// 416 = 0x1a0
    NSMutableArray *_syncDownDependencies;	// 424 = 0x1a8
    NSMutableArray *_allItemsDidUploadTrackers;	// 432 = 0x1b0
    float _syncUpBatchSizeMultiplier;	// 440 = 0x1b8
    brc_task_tracker *_taskTracker;	// 448 = 0x1c0
    _Bool _needsSave;	// 456 = 0x1c8
    unsigned long long _requestID;	// 464 = 0x1d0
    NSArray *_syncThrottles;	// 472 = 0x1d8
    NSString *_osNameRequiredToSync;	// 480 = 0x1e0
}

- (void).cxx_destruct;	// IMP=0x00000000001798a2
@property(readonly, nonatomic) NSDictionary *parentsOfCZMFaults; // @synthesize parentsOfCZMFaults=_parentsOfCZMFaults;
@property(readonly, nonatomic) NSSet *itemIDsBlockedFromSyncForCZMProcessing; // @synthesize itemIDsBlockedFromSyncForCZMProcessing=_itemIDsBlockedFromSyncForCZMProcessing;
@property(retain, nonatomic) NSDate *lastAttemptedSyncDownDate; // @synthesize lastAttemptedSyncDownDate=_lastAttemptedSyncDownDate;
@property(readonly, nonatomic) brc_task_tracker *taskTracker; // @synthesize taskTracker=_taskTracker;
@property(readonly, nonatomic) NSString *osNameRequiredToSync; // @synthesize osNameRequiredToSync=_osNameRequiredToSync;
@property(retain, nonatomic) BRCServerZone *serverZone; // @synthesize serverZone=_serverZone;
@property(readonly, nonatomic) BRCDeadlineSource *syncDeadlineSource; // @synthesize syncDeadlineSource=_syncDeadlineSource;
@property(retain, nonatomic) BRCAccountSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) long long lastInsertedRank; // @synthesize lastInsertedRank=_lastInsertedRank;
@property(readonly, nonatomic) unsigned long long currentRequestID; // @synthesize currentRequestID=_requestID;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
@property(retain, nonatomic) BRCZoneRowID *dbRowID; // @synthesize dbRowID=_dbRowID;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(readonly, nonatomic) BRCPQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) id <BRCClientZoneDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool activated; // @synthesize activated=_activated;
- (void)resetSyncUpBackoffRatio;	// IMP=0x000000000017976f
- (float)syncUpBackoffRatio;	// IMP=0x0000000000179756
- (float)syncUpBackoffDelay;	// IMP=0x0000000000179738
- (_Bool)shouldSyncMangledID:(id)arg1;	// IMP=0x0000000000179528
- (_Bool)dumpActivityToContext:(id)arg1 includeExpensiveActivity:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000177cf9
- (_Bool)_dumpItemsToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000001769f0
- (void)_dumpRecursivePropertiesOfItemByRowID:(unsigned long long)arg1 context:(id)arg2 depth:(int)arg3;	// IMP=0x000000000017663e
- (void)_appendToString:(id)arg1 descriptionOfFieldNamed:(id)arg2 inResultSet:(id)arg3 pos:(int *)arg4 containsSize:(_Bool)arg5 context:(id)arg6;	// IMP=0x000000000017644c
- (long long)throttleHashWithItemID:(id)arg1;	// IMP=0x00000000001763c6
- (void)networkReachabilityChanged:(_Bool)arg1;	// IMP=0x000000000017625c
- (id)syncUpAnalyticsError;	// IMP=0x000000000017616a
- (id)syncDownAnalyticsError;	// IMP=0x0000000000176076
- (_Bool)removeSyncDownForItemIDBlock:(id)arg1;	// IMP=0x0000000000175ee1
- (_Bool)removeItemIsDownloadedBlock:(id)arg1;	// IMP=0x0000000000175d71
- (_Bool)removeItemOnDiskBlock:(id)arg1;	// IMP=0x0000000000175c01
@property(readonly, nonatomic) _Bool hasHighPriorityWatchers;
- (void)performBlock:(CDUnknownBlockType)arg1 whenLocatingCompletesForItemWithRecordID:(id)arg2;	// IMP=0x0000000000174a1c
- (void)_enumerateAndClearLocateBlocksForRecordID:(id)arg1 exists:(_Bool)arg2;	// IMP=0x00000000001748a8
- (void)performBlock:(CDUnknownBlockType)arg1 whenSyncDownCompletesLookingForItemID:(id)arg2;	// IMP=0x0000000000173ea5
- (_Bool)_shouldFailSyncDownWaitImmediately;	// IMP=0x0000000000173d2a
- (void)_prepareForForegroundSyncDown;	// IMP=0x0000000000173b79
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithIDIsDownloaded:(id)arg2;	// IMP=0x000000000017331e
- (void)performBlock:(CDUnknownBlockType)arg1 whenItemWithRecordIDIsOnDisk:(id)arg2;	// IMP=0x0000000000172549
- (CDUnknownBlockType)popDownloadedBlockForItemID:(id)arg1;	// IMP=0x00000000001724a5
- (CDUnknownBlockType)popOnDiskBlockForItemID:(id)arg1;	// IMP=0x0000000000172351
- (void)_removeDownloadedBlockToPerformForItemID:(id)arg1;	// IMP=0x00000000001722b1
- (void)_removeOnDiskBlockToPerformForItemID:(id)arg1;	// IMP=0x0000000000172211
- (void)_removeAllShareAcceptanceBlocks;	// IMP=0x0000000000171a60
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;	// IMP=0x0000000000171929
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;	// IMP=0x00000000001717f2
- (BOOL)itemTypeByItemID:(id)arg1 db:(id)arg2;	// IMP=0x0000000000171796
- (_Bool)existsByItemID:(id)arg1 db:(id)arg2;	// IMP=0x000000000017177e
- (_Bool)existsByItemID:(id)arg1;	// IMP=0x0000000000171768
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1 db:(id)arg2;	// IMP=0x0000000000171738
- (id)directoryOrRootItemIDByFileID:(unsigned long long)arg1;	// IMP=0x0000000000171722
- (id)itemByRowID:(unsigned long long)arg1 db:(id)arg2;	// IMP=0x00000000001715e4
- (id)itemByRowID:(unsigned long long)arg1;	// IMP=0x00000000001715ce
- (id)documentItemByItemID:(id)arg1 db:(id)arg2;	// IMP=0x0000000000171565
- (id)documentItemByItemID:(id)arg1;	// IMP=0x000000000017154f
- (id)itemByItemID:(id)arg1 db:(id)arg2;	// IMP=0x00000000001714a5
- (id)itemByItemID:(id)arg1;	// IMP=0x000000000017148f
- (id)serverHiddenChildCountWithParentID:(id)arg1 db:(id)arg2;	// IMP=0x000000000017145f
- (id)serverQuotaUsageWithParentID:(id)arg1 db:(id)arg2;	// IMP=0x000000000017142f
- (_Bool)containsNonRejectedChildWithParentID:(id)arg1 db:(id)arg2;	// IMP=0x00000000001713dd
- (id)clientChildCountWithParentID:(id)arg1 db:(id)arg2;	// IMP=0x00000000001713ad
- (id)serverChildCountWithParentID:(id)arg1 db:(id)arg2;	// IMP=0x000000000017137d
- (id)serverItemByRowID:(unsigned long long)arg1 db:(id)arg2;	// IMP=0x0000000000171296
- (id)serverItemByRowID:(unsigned long long)arg1;	// IMP=0x0000000000171280
- (id)serverItemByItemID:(id)arg1 db:(id)arg2;	// IMP=0x0000000000171195
- (id)serverItemByItemID:(id)arg1;	// IMP=0x000000000017117f
- (long long)serverRankByItemID:(id)arg1 db:(id)arg2;	// IMP=0x0000000000171102
- (id)serverItemByRank:(long long)arg1;	// IMP=0x0000000000171016
- (long long)serverRankByItemID:(id)arg1;	// IMP=0x0000000000171000
- (id)itemsParentedToThisZoneButLivingInAnOtherZone;	// IMP=0x0000000000170ea1
- (id)allItemsSortedByDepthDescending:(_Bool)arg1;	// IMP=0x0000000000170c54
- (id)allItems;	// IMP=0x0000000000170af5
- (_Bool)_resetItemsTable;	// IMP=0x00000000001709c7
- (_Bool)dumpTablesToContext:(id)arg1 includeAllItems:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000017030d
- (_Bool)dumpStatusToContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016f2c4
- (void)fetchRecentAndFavoriteDocuments:(_Bool)arg1;	// IMP=0x000000000016e6e0
- (void)fetchRecentAndFavoriteDocuments;	// IMP=0x000000000016e6cc
- (void)clearAndRefetchRecentAndFavoriteDocuments;	// IMP=0x000000000016e57a
- (id)locateRecordIfNecessaryForRecordID:(id)arg1 isUserWaiting:(_Bool)arg2;	// IMP=0x000000000016e168
- (id)fetchParentChainIfNecessaryWithParentItemID:(id)arg1 isUserWaiting:(_Bool)arg2;	// IMP=0x000000000016dd5e
- (id)fetchRecursiveDirectoryContentsIfNecessary:(id)arg1 isUserWaiting:(_Bool)arg2 rescheduleApply:(_Bool)arg3;	// IMP=0x000000000016d29c
- (id)fetchDirectoryContentsIfNecessary:(id)arg1 isUserWaiting:(_Bool)arg2 rescheduleApplyScheduler:(_Bool)arg3;	// IMP=0x000000000016c675
- (_Bool)_isSideSyncOperationBlockedWithName:(id)arg1 isListDirectoryOp:(_Bool)arg2;	// IMP=0x000000000016c427
- (_Bool)_isSideSyncOperationBlockedWithName:(id)arg1;	// IMP=0x000000000016c413
- (id)cancelLocateRecordOperationAndReschedule:(id)arg1;	// IMP=0x000000000016c34b
- (void)_registerLocateRecordOperation:(id)arg1;	// IMP=0x000000000016c235
- (id)cancelFetchParentChainOperationAndReschedule:(id)arg1;	// IMP=0x000000000016c16d
- (void)_registerFetchParentChainOperation:(id)arg1;	// IMP=0x000000000016c057
- (void)_blockLowPriorityStitchingOperationsForOperation:(id)arg1;	// IMP=0x000000000016b477
- (id)cancelListOperationAndReschedule:(id)arg1;	// IMP=0x000000000016b370
- (void)_registerListOperation:(id)arg1;	// IMP=0x000000000016b0b3
- (void)_registerServerStitchingOperation:(id)arg1;	// IMP=0x000000000016a9b4
- (_Bool)_hasNonDiscretionaryServerStitchingOperation;	// IMP=0x000000000016a899
- (_Bool)_checkIfEnumeratorContainsNonDiscretionaryOp:(id)arg1;	// IMP=0x000000000016a74c
- (_Bool)hasCompletedInitialSyncDownOnce;	// IMP=0x000000000016a73b
- (void)flushAppliedTombstones;	// IMP=0x000000000016a67f
- (void)didApplyTombstoneForRank:(long long)arg1;	// IMP=0x000000000016a591
- (void)didGCTombstoneRanks:(id)arg1;	// IMP=0x000000000016a3d0
- (void)handleRootRecordDeletion;	// IMP=0x000000000016a25c
- (void)recomputeAllItemsDidUploadState;	// IMP=0x000000000016a065
- (void)_allItemsDidUploadWithError:(id)arg1;	// IMP=0x0000000000169d60
- (_Bool)_hasAllItemsDidUploadHandlers;	// IMP=0x0000000000169d34
- (_Bool)_crossZoneMoveDocumentsToZone:(id)arg1;	// IMP=0x0000000000167df0
- (void)didSyncDownRequestID:(unsigned long long)arg1 maxApplyRank:(long long)arg2 caughtUpWithServer:(_Bool)arg3 syncDownDate:(id)arg4;	// IMP=0x0000000000165aef
- (void)listedUpToRank:(long long)arg1;	// IMP=0x0000000000165ad1
- (void)_fixupMissingCrossMovedItems;	// IMP=0x0000000000165970
- (void)syncDownOperation:(id)arg1 didFinishWithError:(id)arg2 status:(long long)arg3;	// IMP=0x0000000000164a3a
- (void)notifyClient:(id)arg1 whenIdle:(CDUnknownBlockType)arg2;	// IMP=0x0000000000163b3e
- (void)notifyClient:(id)arg1 afterNextSyncDown:(CDUnknownBlockType)arg2;	// IMP=0x00000000001638ed
- (void)_flushIdleBlocksIfNeeded;	// IMP=0x00000000001636b7
- (_Bool)_isIdle;	// IMP=0x00000000001630e1
@property(readonly, nonatomic) NSArray *syncThrottles; // @synthesize syncThrottles=_syncThrottles;
- (void)_syncUpOfRecords:(id)arg1 createdAppLibraryNames:(id)arg2 didFinishWithError:(id)arg3 errorWasOnPCSChainedItem:(_Bool)arg4;	// IMP=0x0000000000162203
- (void)learnCKInfosFromSavedRecords:(id)arg1 isOutOfBandModifyRecords:(_Bool)arg2;	// IMP=0x0000000000160cc2
- (unsigned long long)allocateSyncUpRequestID;	// IMP=0x0000000000160c5e
- (void)_markRequestIDAcked;	// IMP=0x0000000000160c21
- (void)_markLatestSyncRequestFailed;	// IMP=0x0000000000160a56
- (id)directoryItemIDsCreatedLastSyncUp;	// IMP=0x00000000001609b0
- (void)prepareDirectoryForSyncUp:(id)arg1;	// IMP=0x000000000016080b
- (void)clearSyncUpError;	// IMP=0x00000000001607f1
- (void)resetSyncBudgetAndThrottle;	// IMP=0x0000000000160752
- (void)scheduleSyncDownForOOBModifyRecordsAck;	// IMP=0x000000000016071b
- (void)scheduleSyncDownFirst;	// IMP=0x00000000001606e4
- (void)scheduleSyncDown;	// IMP=0x00000000001606d0
- (void)scheduleSyncDownWithGroup:(id)arg1;	// IMP=0x0000000000160662
- (void)scheduleSyncUp;	// IMP=0x0000000000160624
- (void)_startSync;	// IMP=0x000000000015efaf
- (id)syncDownImmediately;	// IMP=0x000000000015e905
- (void)_blockSyncDownOnStitchingOperations;	// IMP=0x000000000015dea5
- (_Bool)_blockExistingOperationIfNecessary:(id)arg1 onNewOperation:(id)arg2;	// IMP=0x000000000015dc95
- (void)removeSyncDownDependency:(id)arg1;	// IMP=0x000000000015dabc
- (void)addSyncDownDependency:(id)arg1;	// IMP=0x000000000015d7ce
- (void)clearSyncStateBits:(unsigned int)arg1;	// IMP=0x000000000015d5c5
- (void)setSyncStateBits:(unsigned int)arg1;	// IMP=0x000000000015d23b
@property(readonly) unsigned int syncState;
- (void)didClearOutOfQuota;	// IMP=0x000000000015d170
- (id)_faultsEnumeratorFromRow:(unsigned long long)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x000000000015cfe2
- (void)_enumerateFaultsWithBlock:(CDUnknownBlockType)arg1 rowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;	// IMP=0x000000000015ccf4
- (void)enumerateFaultsAsyncWithBlock:(CDUnknownBlockType)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x000000000015cbc0
- (id)documentsNotIdleEnumeratorWithDB:(id)arg1 startingRowID:(unsigned long long)arg2 batchSize:(unsigned long long)arg3;	// IMP=0x000000000015ca59
- (_Bool)hasItemsWithInFlightDiffs;	// IMP=0x000000000015ca0c
- (id)itemsWithInFlightDiffsEnumerator;	// IMP=0x000000000015c8ad
- (_Bool)hasItems;	// IMP=0x000000000015c860
- (id)itemsEnumeratorWithDB:(id)arg1;	// IMP=0x000000000015c700
- (BOOL)serverItemTypeByItemID:(id)arg1 db:(id)arg2;	// IMP=0x000000000015c512
- (_Bool)existsByParentID:(id)arg1 andCaseInsensitiveLogicalName:(id)arg2;	// IMP=0x000000000015c4b2
- (_Bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2 excludingItemID:(id)arg3 db:(id)arg4;	// IMP=0x000000000015c380
- (_Bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;	// IMP=0x000000000015c368
- (_Bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2 excludingItemID:(id)arg3;	// IMP=0x000000000015c352
- (_Bool)existsByParentID:(id)arg1 andLogicalName:(id)arg2;	// IMP=0x000000000015c33c
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2;	// IMP=0x000000000015c326
- (id)itemByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;	// IMP=0x000000000015bfde
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;	// IMP=0x000000000015bc96
- (id)itemByParentID:(id)arg1 andLogicalName:(id)arg2;	// IMP=0x000000000015bc80
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;	// IMP=0x000000000015bb8e
- (id)serverItemByParentID:(id)arg1 andLogicalName:(id)arg2;	// IMP=0x000000000015bb78
- (id)itemByFileID:(unsigned long long)arg1 db:(id)arg2;	// IMP=0x000000000015ba38
- (id)itemByFileID:(unsigned long long)arg1;	// IMP=0x000000000015ba22
- (id)itemByDocumentID:(unsigned int)arg1 db:(id)arg2;	// IMP=0x000000000015b8e2
- (id)itemByDocumentID:(unsigned int)arg1;	// IMP=0x000000000015b8cc
- (id)descriptionWithContext:(id)arg1;	// IMP=0x000000000015b6f5
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015b67a
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToClientZone:(id)arg1;	// IMP=0x000000000015b5ee
- (_Bool)isSyncBlockedBecauseOSNeedsUpgrade;	// IMP=0x000000000015b5d5
- (_Bool)isSyncBlockedBecauseAppNotInstalled;	// IMP=0x000000000015b5bc
- (_Bool)isSyncBlocked;	// IMP=0x000000000015b57f
- (void)clearStateBits:(unsigned int)arg1;	// IMP=0x000000000015b566
- (_Bool)setStateBits:(unsigned int)arg1;	// IMP=0x000000000015b53c
- (unsigned int)_activateState:(unsigned int)arg1 origState:(unsigned int)arg2;	// IMP=0x000000000015b2e3
- (void)_forDBUpgrade_setStateBits:(unsigned int)arg1 clearStateBits:(unsigned int)arg2;	// IMP=0x000000000015b2af
@property(readonly, nonatomic) _Bool isForeground;
- (void)disconnectNSMDQListenerAsync;	// IMP=0x000000000015af94
@property(readonly, nonatomic) _Bool isCloudDocsZone;
- (void)unregisterAllItemsDidUploadTracker:(id)arg1;	// IMP=0x000000000015aeb0
- (void)registerAllItemsDidUploadTracker:(id)arg1;	// IMP=0x000000000015adc4
- (id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(id *)arg1;	// IMP=0x000000000015abce
- (id)itemCountPendingUploadOrSyncUpAndReturnError:(id *)arg1;	// IMP=0x000000000015a938
- (_Bool)handleZoneLevelErrorIfNeeded:(id)arg1 forItemCreation:(_Bool)arg2;	// IMP=0x000000000015a565
- (void)scheduleResetServerAndClientTruthsForReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000015a289
- (void)scheduleResetServerAndClientTruthsForReason:(id)arg1;	// IMP=0x000000000015a275
- (void)close;	// IMP=0x0000000000158ae2
- (void)resume;	// IMP=0x0000000000158506
- (void)associateWithServerZone:(id)arg1 offline:(_Bool)arg2;	// IMP=0x00000000001583cd
- (void)associateWithServerZone:(id)arg1;	// IMP=0x00000000001583b9
- (void)updateWithPlist:(id)arg1;	// IMP=0x00000000001580ac
- (void)_recreateSyncBudgetsAndThrottlesIfNeeded;	// IMP=0x0000000000157f6c
@property(readonly, nonatomic) NSMutableDictionary *plist;
- (void)dealloc;	// IMP=0x0000000000157ce2
- (id)initWithMangledID:(id)arg1 dbRowID:(id)arg2 db:(id)arg3 plist:(id)arg4 session:(id)arg5 initialCreation:(_Bool)arg6;	// IMP=0x0000000000157972
- (id)init;	// IMP=0x00000000001578e6
- (void)_increaseSyncUpBatchSizeAfterSuccess;	// IMP=0x0000000000157783
- (void)_decreaseSyncUpBatchSizeAfterError;	// IMP=0x00000000001576ec
@property(readonly, nonatomic) unsigned int syncUpBatchSize;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(readonly, nonatomic) _Bool isPrivateZone;
@property(readonly, nonatomic) BRMangledID *mangledID; // @synthesize mangledID=_mangledID;
@property(readonly, nonatomic) BRCItemID *rootItemID;
- (id)asSharedClientZone;	// IMP=0x000000000015752b
- (id)asPrivateClientZone;	// IMP=0x00000000001574b5
- (id)ownerName;	// IMP=0x00000000001574a1
- (void)_finishedReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d90d6
- (void)_mkdirAppLibraryIfNeeded:(id)arg1;	// IMP=0x00000000000d9037
- (id)_cancelAllOperationsForReset;	// IMP=0x00000000000d7db2
- (void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7a6a
- (void)_performAfterResetServerAndClientTruthsAndUnlinkData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7a08
- (void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d7941
- (void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d6a6d
- (void)_performResetAndWantsUnlink:(_Bool)arg1 clientTruthBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d64b6
- (_Bool)_postHardResetHandlingWithDB:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000d5d58
- (_Bool)_performHardResetOnClientItemsAndWantsUnlink:(_Bool)arg1 db:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d590c
- (_Bool)_deleteRelevantPackageItemsWithDB:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d5697
- (void)_postSoftResetHandlingAndWantsUnlink:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d55ac
- (void)_performSoftResetOnItems:(id)arg1 wantsUnlink:(_Bool)arg2;	// IMP=0x00000000000d5390
- (void)_handleSoftResetOfLocalItem:(id)arg1 wantsUnlink:(_Bool)arg2;	// IMP=0x00000000000d5180
- (id)_getRelevantClientTruthItemEnumerator;	// IMP=0x00000000000d516e
- (void)_deleteJobsMatchingServerZone;	// IMP=0x00000000000d5032
- (void)_resetAndDeleteServerTruthData;	// IMP=0x00000000000d4e63
- (_Bool)supportsKeepingClientItemsDuringReset;	// IMP=0x00000000000d4e51
- (void)_removeTargetedAliasesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d3eab
- (void)_reset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d3acb
- (void)scheduleReset:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d2483
- (void)scheduleReset:(unsigned long long)arg1;	// IMP=0x00000000000d246f
- (void)cancelReset;	// IMP=0x00000000000d239a
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2 db:(id)arg3;	// IMP=0x0000000000181add
- (id)faultByParentID:(id)arg1 andPhysicalName:(id)arg2;	// IMP=0x0000000000181abd
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;	// IMP=0x00000000001816fa
- (id)faultByParentID:(id)arg1 andLogicalName:(id)arg2;	// IMP=0x00000000001816da
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2 db:(id)arg3;	// IMP=0x0000000000181322
- (id)reservedItemByParentID:(id)arg1 andLogicalName:(id)arg2;	// IMP=0x0000000000181302
- (void)waitForCrossZoneMoveProcessingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018123b
- (void)itemMovedIntoShareInThisZone:(id)arg1 associatedItemID:(id)arg2;	// IMP=0x0000000000180e2b
- (void)itemCrossZoneMoved:(id)arg1 withLookup:(id)arg2;	// IMP=0x0000000000180ac3
- (void)_startDownloadingItemForCrossZoneMoveIfNecessary:(id)arg1;	// IMP=0x000000000017fe51
- (void)_removeItemAndProcessForCrossZoneMove:(id)arg1;	// IMP=0x000000000017f654
- (void)_finishedProcessingItemThatMovedToThisZone:(id)arg1;	// IMP=0x000000000017f3af
- (void)_removeItemFromCZMProcessingIfNotAssociated:(id)arg1;	// IMP=0x000000000017f294
- (id)_refreshItemFromDB:(id)arg1;	// IMP=0x000000000017f0a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKOperationGroup, CKRecordID, CloudBookmarkStore, CloudTabGroupAccountPropertiesStore, CloudTabGroupExpiredChangeTokenHandler, MISSING_TYPE, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSTimer, SWHighlightCenter, WBCollectionConfiguration;
@protocol CloudTabGroupSyncCoordinatorDelegate, OS_dispatch_queue;

@interface CloudTabGroupSyncCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_assetSavingQueue;	// 16 = 0x10
    CKOperationGroup *_currentOperationGroup;	// 24 = 0x18
    NSDate *_currentOperationBeginTime;	// 32 = 0x20
    NSMutableArray *_pendingOperationGroups;	// 40 = 0x28
    CloudTabGroupAccountPropertiesStore *_accountPropertiesStore;	// 48 = 0x30
    CloudTabGroupExpiredChangeTokenHandler *_expiredChangeTokenHandler;	// 56 = 0x38
    MISSING_TYPE *_observers;	// 64 = 0x40
    long long _syncPhase;	// 72 = 0x48
    NSTimer *_preSyncUpTimeoutTimer;	// 80 = 0x50
    _Bool _isSyncOperationPending;	// 88 = 0x58
    NSMutableDictionary *_recordZoneIDsToPendingServerChangeTokens;	// 96 = 0x60
    unsigned long long _numberOfMigrationRetryAttempts;	// 104 = 0x68
    NSMutableSet *_auxiliaryRecordIDsToDelete;	// 112 = 0x70
    NSMutableDictionary *_unknownRecordIDsToPendingAuxiliaryRecordSets;	// 120 = 0x78
    NSMutableSet *_recordIDsToRefresh;	// 128 = 0x80
    NSMutableSet *_sourceRecordIDsForRecordsMovedBetweenZones;	// 136 = 0x88
    NSDictionary *_recordZoneIDsToHashGenerators;	// 144 = 0x90
    NSDictionary *_secondaryZoneNamesToRecordZoneIDs;	// 152 = 0x98
    SWHighlightCenter *_highlightCenter;	// 160 = 0xa0
    NSMutableSet *_tabGroupRecordNamesWithPendingPresenceUpdate;	// 168 = 0xa8
    NSMutableSet *_tabRecordNamesWithPendingPresenceUpdate;	// 176 = 0xb0
    CKRecordID *_acceptedTabGroupParentProfileRecordID;	// 184 = 0xb8
    NSMutableSet *_idsOfRecordZonesToRefresh;	// 192 = 0xc0
    NSMutableDictionary *_recordZoneIDsToMetadatas;	// 200 = 0xc8
    NSMutableDictionary *_recordZoneNamesToMetadatas;	// 208 = 0xd0
    _Bool _didLastKnownCacheVersionCheck;	// 216 = 0xd8
    NSDate *_lastKnownMinimumVersionsCachedDate;	// 224 = 0xe0
    _Bool _isUpdatingMinimumVersionsCache;	// 232 = 0xe8
    _Bool _lastKnownMinimumOSVersionInCircleRequiresLegacyPlaceholderForSharedTabGroup;	// 233 = 0xe9
    _Bool _shouldCreateLegacyPreProfileRecordsForSharedTabGroups;	// 234 = 0xea
    id <CloudTabGroupSyncCoordinatorDelegate> _delegate;	// 240 = 0xf0
    CloudBookmarkStore *_bookmarkStore;	// 248 = 0xf8
    WBCollectionConfiguration *_collectionConfiguration;	// 256 = 0x100
    ACAccountStore *_accountStore;	// 264 = 0x108
    CKOperationGroup *_defaultOperationGroup;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000d7698
@property(retain, nonatomic) CKOperationGroup *defaultOperationGroup; // @synthesize defaultOperationGroup=_defaultOperationGroup;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, copy, nonatomic) WBCollectionConfiguration *collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) CloudBookmarkStore *bookmarkStore; // @synthesize bookmarkStore=_bookmarkStore;
@property(nonatomic) __weak id <CloudTabGroupSyncCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_log;	// IMP=0x00100000000d75c9
- (id)_tabGroupsLog;	// IMP=0x00100000000d75bf
- (id)_bookmarksLog;	// IMP=0x00100000000d75b5
- (void)unregisterSyncObserver:(id)arg1;	// IMP=0x00100000000d759f
- (void)registerSyncObserver:(id)arg1;	// IMP=0x00100000000d7535
- (id)bookmarksRecordZoneID;	// IMP=0x00100000000d751c
- (id)itemConfigurations;	// IMP=0x00100000000d7503
- (id)deviceIdentifier;	// IMP=0x00100000000d7466
- (void)_postHighlightWithBookmark:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000d7261
- (void)_postCollaborationDeleteEventWithBookmark:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000d718f
- (void)_postCollaborationRenameEventWithBookmark:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000d70bd
- (void)_postCollaborationChangeEventWithBookmark:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000d6feb
- (void)_processSavedRecord:(id)arg1 forBookmark:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000d67a8
- (void)_notifyDelegateAboutIgnoredRecordZoneIDsIfNeeded:(id)arg1 operationGroup:(id)arg2;	// IMP=0x00100000000d658f
- (void)_deleteSharedTabGroupZonesInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d5f5a
- (void)_deletePrivateTabGroupZonesInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d5aa1
- (void)_deleteTabGroupZonesInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d57e0
- (void)_handleICloudKeychainResetInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d5586
- (void)_resetSyncDataInCollection:(id)arg1 operationGroup:(id)arg2;	// IMP=0x00100000000d547e
- (id)_createBookmarkWithConfiguration:(id)arg1 record:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000d4eed
- (void)_removeBookmarkWithServerID:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000d4c28
- (id)_mergedRecordWithLocalRecord:(id)arg1 remoteRecord:(id)arg2 saveError:(long long)arg3 collection:(id)arg4 operationGroup:(id)arg5;	// IMP=0x00100000000d4806
- (void)_updateBookmarkCollectionBookmark:(id)arg1 inCollection:(id)arg2 withRecord:(id)arg3 configuration:(id)arg4;	// IMP=0x00100000000d43ba
- (void)_updateTabCollectionBookmark:(id)arg1 inCollection:(id)arg2 withRecord:(id)arg3 configuration:(id)arg4;	// IMP=0x00100000000d3ea5
- (void)_updateBookmarkCollectionFolder:(id)arg1 inCollection:(id)arg2 withRecord:(id)arg3 configuration:(id)arg4;	// IMP=0x00100000000d3cee
- (void)_updateTabCollectionFolder:(id)arg1 inCollection:(id)arg2 withRecord:(id)arg3 configuration:(id)arg4;	// IMP=0x00100000000d3b63
- (void)_updateBookmark:(id)arg1 inCollection:(id)arg2 withRecord:(id)arg3 configuration:(id)arg4;	// IMP=0x00100000000d31d8
- (id)_readStatusRecordForBookmark:(id)arg1 syncData:(id)arg2 configuration:(id)arg3 changeType:(int)arg4 inCollection:(id)arg5;	// IMP=0x00100000000d2e6d
- (id)_tabGroupParticipantPositionRecordForBookmark:(id)arg1 syncData:(id)arg2 configuration:(id)arg3 modifiedAttributes:(unsigned long long)arg4 attributes:(id)arg5 inCollection:(id)arg6;	// IMP=0x00100000000d29fb
- (id)_tabGroupParticipantPositionRecordForBookmark:(id)arg1 syncData:(id)arg2 configuration:(id)arg3 changeType:(int)arg4 inCollection:(id)arg5;	// IMP=0x00100000000d2844
- (id)_tabGroupParticipantExtrasRecordForBookmark:(id)arg1 syncData:(id)arg2 configuration:(id)arg3 changeType:(int)arg4 inCollection:(id)arg5;	// IMP=0x00100000000d215f
- (unsigned long long)_computeMinimumSyncAPIVersionForRecord:(id)arg1 withBookmark:(id)arg2 inCollection:(id)arg3;	// IMP=0x00100000000d1f24
- (id)_knownKeysToSaveForRecord:(id)arg1 withConfiguration:(id)arg2;	// IMP=0x00100000000d1e3e
- (id)_recordForBookmark:(id)arg1 syncData:(id)arg2 configuration:(id)arg3 changeType:(int)arg4 inCollection:(id)arg5;	// IMP=0x00100000000d1064
- (id)_batchItemForDeleteChange:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000d0434
- (id)_createSettingCKRecordFromFieldRecord:(id)arg1;	// IMP=0x00100000000cff20
- (id)_nextBatchItemAfterChangeToken:(long long)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000ceb55
- (id)_recordForBookmark:(id)arg1 inCollection:(id)arg2 changeType:(int)arg3;	// IMP=0x00100000000ce91d
- (id)_valueForKey:(id)arg1 ofTypes:(id)arg2 fromRecord:(id)arg3 withTransformer:(id)arg4;	// IMP=0x00100000000ce66a
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2 fromRecord:(id)arg3 withTransformer:(id)arg4;	// IMP=0x00100000000ce581
- (id)_valueForKey:(id)arg1 ofType:(Class)arg2 fromRecord:(id)arg3 withConfiguration:(id)arg4;	// IMP=0x00100000000ce4d8
- (id)_serverIDForBookmarkCreateIfNeeded:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000ce3c9
- (_Bool)_saveRecord:(id)arg1 forBookmark:(id)arg2 inCollection:(id)arg3;	// IMP=0x00100000000ce2f5
- (id)_databaseForRecord:(id)arg1;	// IMP=0x00100000000ce271
- (id)_recordZoneIDForBookmark:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000ce159
- (id)_makeRootRecordID;	// IMP=0x00100000000ce0e4
- (id)_hashGeneratorForRecord:(id)arg1;	// IMP=0x00100000000ce05d
- (id)_configurationForBookmark:(id)arg1;	// IMP=0x00100000000cdf71
- (id)_configurationForRecord:(id)arg1;	// IMP=0x00100000000cde85
- (id)_createCollectionWithConfiguration:(id)arg1;	// IMP=0x00100000000cde14
- (void)_didFailToSyncWithError:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cdc52
- (long long)_syncResultForError:(id)arg1;	// IMP=0x00100000000cdb8c
- (void)_didFinishSyncingWithResult:(long long)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000cdabf
- (void)_saveAssetAtURL:(id)arg1 toURL:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000cd748
- (void)_saveAssetsForBookmarkIfPresent:(id)arg1 onRecord:(id)arg2 withConfiguration:(id)arg3 inCollection:(id)arg4 operationGroup:(id)arg5;	// IMP=0x00100000000cd136
- (void)_didCompleteSyncDownAfterExpiredChangeTokenErrorWithCollection:(id)arg1 operationGroup:(id)arg2;	// IMP=0x00100000000cce3d
- (void)_handleExpiredChangeTokenError:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ccb71
- (void)_performSyncDownForRecordZoneIDs:(id)arg1 perRecordZoneConfigurations:(id)arg2 inDatabase:(id)arg3 collection:(id)arg4 operationGroup:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cb8fa
- (void)_deleteRecordZoneWithIDs:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000cb44c
- (void)_handleDeletedRecordZoneIDs:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000cb238
- (void)_fetchChangedRecordZonesSinceServerChangeToken:(id)arg1 inDatabase:(id)arg2 collection:(id)arg3 operationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ca30d
- (void)_performSyncDownInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9a33
- (void)_continuePostSyncDownHousekeepingInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9899
- (void)_performSyncDownAfterProcessingChangesInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c9491
- (void)_saveRecordZoneServerChangeTokensInCollection:(id)arg1 operationGroup:(id)arg2 ifSuccessful:(_Bool)arg3;	// IMP=0x00100000000c9184
- (void)_setUpRecordZoneIDsToPendingServerChangeTokens;	// IMP=0x00100000000c914b
- (void)_didFinishSyncDownInCollection:(id)arg1 operationGroup:(id)arg2 isSuccessful:(_Bool)arg3;	// IMP=0x00100000000c8fd9
- (void)_prepareForSyncDownInOperationGroup:(id)arg1;	// IMP=0x00100000000c8eda
- (_Bool)_isExpiredChangeTokenError:(id)arg1;	// IMP=0x00100000000c8ba1
- (void)_handleDeletedSettingRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c8a8e
- (id)_settingsTransformerForKey:(id)arg1;	// IMP=0x00100000000c8832
- (id)_fieldFromSettingsRecord:(id)arg1;	// IMP=0x00100000000c8620
- (id)_handleUpdatedSettingRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c815d
- (void)_handleDeletedTabParticipantStatusRecord:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000c7ff9
- (id)_handleUpdatedTabParticipantStatusRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c7c33
- (void)_handleDeletedTabGroupParticipantPositionRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c7a17
- (id)_handleUpdatedTabGroupParticipantPositionRecord:(id)arg1 inCollection:(id)arg2 shouldGenerateUpdatedRecord:(_Bool)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000c6d59
- (_Bool)_handleMinimumAPIVersionChangeForTabGroupParticipantExtrasRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c664a
- (void)_handleDeletedTabGroupParticipantExtrasRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c6267
- (id)_handleUpdatedTabGroupParticipantExtrasRecord:(id)arg1 inCollection:(id)arg2 shouldGenerateUpdatedRecord:(_Bool)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000c5222
- (void)_removeUserSpecificKeysInTabGroupRecordIfNeeded:(id)arg1 forBookmark:(id)arg2 configuration:(id)arg3 inCollection:(id)arg4;	// IMP=0x00100000000c4abc
- (void)_updateDatabaseContainsCKShareRecordIfNeededInCollection:(id)arg1;	// IMP=0x00100000000c4a1b
- (void)_dispatchPresenceUpdatesIfNeededForTabsWithRecordNames:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000c4776
- (void)_dispatchPresenceUpdatesIfNeededForTabGroupsWithRecordNames:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000c44d1
- (void)_deletePresenceForParticipantID:(id)arg1 inTabGroupWithRecordName:(id)arg2 collection:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000c435e
- (void)_handleDeletedTabPresenceRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c412c
- (void)_handleUpdatedTabPresenceRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c3bbc
- (_Bool)_handleMinimumAPIVersionChangeForCKShareRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c360c
- (void)_handleDeletedShareRecordWithID:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c315b
- (void)_handleUpdatedShareRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c22b2
- (void)_handleDeletedSyncRequirementRecordWithID:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c1fd9
- (void)_handleUpdatedSyncRequirementRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c1af2
- (void)_handlePendingAuxiliaryRecordsIfNeededForMainRecordID:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c166a
- (void)_addAuxiliaryRecord:(id)arg1 forUnknownRecordWithID:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000c1413
- (id)_auxiliaryRecordKeyForRecordType:(id)arg1;	// IMP=0x00100000000c12f8
- (void)_clearUnknownRecordIDsToPendingAuxiliaryRecordSetsInOperationGroup:(id)arg1;	// IMP=0x00100000000c0fab
- (void)_setUpUnknownRecordIDsToPendingAuxiliaryRecordSetsInOperationGroup:(id)arg1;	// IMP=0x00100000000c0e37
- (void)_handleDeletedRecordWithID:(id)arg1 type:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000c0a4e
- (_Bool)_setPositionDictionaryRepresentation:(id)arg1 inParentWithRecordID:(id)arg2 forBookmark:(id)arg3 inCollection:(id)arg4 operationGroup:(id)arg5;	// IMP=0x00100000000c052f
- (_Bool)_shouldOverrideLocalBookmark:(id)arg1 localSyncData:(id)arg2 withRecord:(id)arg3 inCollection:(id)arg4 operationGroup:(id)arg5;	// IMP=0x00100000000bfc3e
- (id)_didFetchBookmarkRecord:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000bdd06
- (id)_didFetchRecord:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 shouldGenerateUpdatedRecord:(_Bool)arg4;	// IMP=0x00100000000bd4a8
- (_Bool)_canHandleRecordInZoneWithID:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000bd319
- (id)_filteredUpdatedRecordZoneIDs:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000bcd9f
- (id)_metadataForRecordZoneID:(id)arg1 orRecordZoneName:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000bcd66
- (id)_metadataForRecordZoneName:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000bcb46
- (id)_metadataForRecordZoneID:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000bc9f8
- (void)_deleteNextBatchOfAuxiliaryRecordsInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bbe0e
- (void)_beginDeletingAuxiliaryRecordsInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bb70d
- (void)_fetchRecordsToRefreshInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ba6d5
- (void)_clearServerChangeTokensForRecordZoneIDsIfNeeded:(id)arg1 inCollection:(id)arg2;	// IMP=0x00100000000ba45f
- (void)_fetchRecordZonesToRefreshInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b9a47
- (void)_saveUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 inDatabase:(id)arg3 collection:(id)arg4 operationGroup:(id)arg5 mergeHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000b90b3
- (void)_saveUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 inDatabase:(id)arg3 collection:(id)arg4 operationGroup:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000b8f9d
- (void)_deletePrivateRecordZoneIDs:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b899b
- (id)_supportedSettingsRecordTypes;	// IMP=0x00100000000b890a
- (_Bool)_didSaveSettingRecord:(id)arg1 forBookmark:(id)arg2 withCollection:(id)arg3;	// IMP=0x00100000000b8774
- (void)_saveNextBatchInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b6152
- (void)_didRetrieveHashGenerators:(id)arg1;	// IMP=0x00100000000b606e
- (void)_createLegacyPlaceholderForSharedTabGroup:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b5c9a
- (void)_didLoadLastKnownMinimumIOSVersion:(id)arg1 minimumMacOSVersion:(id)arg2 encounteredUnknownOS:(_Bool)arg3 inOperationGroup:(id)arg4;	// IMP=0x00100000000b597a
- (void)_didLoadLastKnownMinimumSafariVersionsPerOSNames:(id)arg1 inOperationGroup:(id)arg2;	// IMP=0x00100000000b5881
- (_Bool)_shouldCreateLegacyRecordsForLastKnownMinimumSafariVersionsPerOSNames:(id)arg1;	// IMP=0x00100000000b5714
- (void)_updateLastKnownMinimumVersionsIfNeededInCollection:(id)arg1 operationGroup:(id)arg2;	// IMP=0x00100000000b45e5
- (_Bool)_shouldResetLastKnownMinimumVersionsCacheInCollection:(id)arg1 operationGroup:(id)arg2;	// IMP=0x00100000000b4424
- (id)_privateParticipantRecordsForBookmarkID:(int)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000b4060
- (void)_savePrivateParticipantRecordsForAcceptedSharedTabGroup:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b32d7
- (id)_profileRecordIDForProfileWithIdentifier:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3;	// IMP=0x00100000000b2b92
- (void)_acceptTabGroupShareForShareMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 collection:(id)arg3 operationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b0f22
- (void)_acceptTabGroupShareForShareMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b0db0
- (void)acceptTabGroupShareForShareMetadata:(id)arg1 inProfileWithIdentifier:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b0ac3
- (void)_acceptShareForURL:(id)arg1 invitationTokenData:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b06d9
- (void)acceptShareForURL:(id)arg1 invitationTokenData:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b03df
- (id)_migratedRecordsForBookmarkID:(int)arg1 inCollection:(id)arg2 destinationRecordZoneID:(id)arg3;	// IMP=0x00100000000afef9
- (id)_migrationTombstoneRecordsForBookmarkID:(int)arg1 inCollection:(id)arg2 destinationRecordZoneID:(id)arg3 operationGroup:(id)arg4;	// IMP=0x00100000000af979
- (id)_nextMigrationRecordBatchWithBookmarkIDQueue:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 recordBuilderBlock:(CDUnknownBlockType)arg4;	// IMP=0x00100000000af477
- (void)_saveNextMigrationRecordBatchWithBookmarkIDQueue:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 usingRecordBuilderBlock:(CDUnknownBlockType)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000af202
- (void)_saveNextMigrationRecordBatchWithBookmarkIDQueue:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 usingRecordBuilderBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000af0f5
- (void)_performPostZoneMigrationSyncDownForRecordZoneID:(id)arg1 shareRecord:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000aeabf
- (void)_setUpSharingInRecordZoneWithID:(id)arg1 collection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ae402
- (void)_beginSavingMigratedRecordsForRootBookmarkID:(int)arg1 destinationRecordZoneID:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000adec4
- (void)_beginSavingMigrationTombstonesForRootBookmarkID:(int)arg1 destinationRecordZoneID:(id)arg2 inCollection:(id)arg3 operationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ad868
- (void)_setUpTabGroupZoneForTabGroup:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000acd07
- (void)_setUpSharingForTabGroup:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ac75a
- (void)_beginSharingTabGroupWithUUID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aba20
- (void)beginSharingTabGroupWithUUID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab776
- (void)_scheduleMigrationRetryIfNeededInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ab55c
- (void)_handleFailureToBecomeResponsibleForMigrationDueToConflictInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab437
- (void)_tryToResumePendingRemoteMigrationFromMigrationInfo:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ab03a
- (void)_tryToBecomeResponsibleForMigrationWithRetryManager:(id)arg1 inCollection:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000aa847
- (void)_tryToBecomeResponsibleForMigrationInCollection:(id)arg1 operationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aa414
- (void);	// IMP=0x00100000000a9e52
- (void)_determineCourseOfActionFromLocalStateInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a98e7
- (void)_beginMigrationWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a98cd
- (void)beginMigrationWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a966d
- (void)_prepareForSyncingWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a8c96
- (void)_runSyncingWithCollection:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a82aa
- (void)_beginSyncingWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a7c18
- (void)beginSyncingWithOperationGroup:(id)arg1 isLocalChange:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a76f5
- (void)_logCurrentOperationsForAbortedOperationGroup:(id)arg1;	// IMP=0x00100000000a72ac
- (void)_didFinishOperationGroup:(id)arg1;	// IMP=0x00100000000a6ea1
- (void)_willBeginOperationGroup:(id)arg1;	// IMP=0x00100000000a6ad7
- (void)_enqueueOperationGroup:(id)arg1;	// IMP=0x00100000000a666f
- (id)_stringForElapsedTimeSinceDate:(id)arg1;	// IMP=0x00100000000a656b
- (id)initWithBookmarkStore:(id)arg1 collectionConfiguration:(id)arg2 accountStore:(id)arg3;	// IMP=0x00100000000a62e6
- (id)init;	// IMP=0x00100000000a62d8

@end

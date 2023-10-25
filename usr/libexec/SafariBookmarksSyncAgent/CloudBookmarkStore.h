//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKContainer, CKDatabase, CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID, NSArray, NSMutableArray, NSObject, NSOperationQueue, NSString, WBSHashGenerator;
@protocol CloudBookmarkStoreLocalStorage, OS_os_log;

@interface CloudBookmarkStore
{
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    CKDatabase *_database;	// 32 = 0x20
    CKRecordZone *_threadUnsafeBookmarksRecordZone;	// 40 = 0x28
    NSOperationQueue *_bookmarksOperationQueue;	// 48 = 0x30
    NSMutableArray *_threadUnsafePrepareRecordZoneCompletionHandlers;	// 56 = 0x38
    WBSHashGenerator *_threadUnsafeBookmarkHashGenerator;	// 64 = 0x40
    CKRecord *_threadUnsafeSyncRequirementsRecord;	// 72 = 0x48
    CKRecord *_threadUnsafeMigrationStateRecord;	// 80 = 0x50
    CKRecordID *_threadUnsafeCurrentUserRecordID;	// 88 = 0x58
    CKRecordZoneID *_bookmarksRecordZoneID;	// 96 = 0x60
    CKRecordID *_syncRequirementsRecordID;	// 104 = 0x68
    CKRecordID *_bookmarkEncryptionInfoRecordID;	// 112 = 0x70
    CKRecordID *_migrationStateRecordID;	// 120 = 0x78
    NSString *_shareType;	// 128 = 0x80
    _Bool _threadUnsafeIncludesMigrationRecordInSaveBatch;	// 136 = 0x88
    id <CloudBookmarkStoreLocalStorage> _threadUnsafeLocalStorage;	// 144 = 0x90
    long long _type;	// 152 = 0x98
    CKContainer *_container;	// 160 = 0xa0
    NSString *_recordZoneSubscriptionID;	// 168 = 0xa8
    NSString *_secondaryRecordZoneNamePrefix;	// 176 = 0xb0
    NSArray *_cloudBookmarkItemConfigurations;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0020000000062e5c
@property(readonly, copy, nonatomic) NSArray *cloudBookmarkItemConfigurations; // @synthesize cloudBookmarkItemConfigurations=_cloudBookmarkItemConfigurations;
@property(readonly, nonatomic) CKRecordZoneID *bookmarksRecordZoneID; // @synthesize bookmarksRecordZoneID=_bookmarksRecordZoneID;
@property(readonly, copy, nonatomic) NSString *secondaryRecordZoneNamePrefix; // @synthesize secondaryRecordZoneNamePrefix=_secondaryRecordZoneNamePrefix;
@property(readonly, copy, nonatomic) NSString *recordZoneSubscriptionID; // @synthesize recordZoneSubscriptionID=_recordZoneSubscriptionID;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (long long);	// IMP=0x0010000000062df6
- (id)_zoneLogName;	// IMP=0x0010000000062de9
- (id)_zoneID;	// IMP=0x0010000000062dd4
- (id)_operationQueue;	// IMP=0x0010000000062dbf
- (id)_database;	// IMP=0x0010000000062daa
- (void)fetchAllBookmarkRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000625d0
- (_Bool)_checkMigrationStateOnInternalQueueInRecord:(id)arg1 error:(id)arg2;	// IMP=0x0010000000062286
- (void)_setUpRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000061dd6
- (_Bool)_canHandleCKRecordZoneWithID:(id)arg1;	// IMP=0x0010000000061d6e
- (void)setMinimumSyncAPIVersion:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000615f0
- (void)fetchMinimumSyncAPIVersionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060f5a
- (void)setRemoteMigrationState:(long long)arg1 deviceIdentifier:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000606d2
- (void)_fetchRemoteMigrationInfoInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fdba
- (void)fetchRemoteMigrationInfoInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005fcd8
- (void)fetchCachedRemoteMigrationInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005fadb
- (void)fetchMetadataZoneRecordsInOperationGroup:(id)arg1 withRecordChangedBlock:(CDUnknownBlockType)arg2 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f445
- (void)fetchMetadataZoneRecordsWithRecordChangedBlock:(CDUnknownBlockType)arg1 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f428
- (void)fetchEncryptionInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005efa0
@property(readonly, nonatomic) WBSHashGenerator *bookmarkHashGenerator;
- (void)fetchBookmarkRecordsWithNames:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ebc0
- (void)_saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 previouslySavedRecords:(id)arg4 previouslyDeletedRecordIDs:(id)arg5 mergeHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000005ce69
- (void)deleteRecordsWithIDs:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005ca0e
- (void)deleteRecordWithID:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c85f
- (void)saveOrLoadRecord:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005be01
- (void)fetchRecordsWithIDs:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 perRecordCompletionBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005bae5
- (void)fetchRecordWithID:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005b64f
- (void)_setUpEncryptionInfoInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b3ce
- (void)_prepareBookmarksRecordZoneOnInternalQueueAfterExternalCompletionHandlersHaveBeenStashedInvalidatingCachedZone:(_Bool)arg1 createIfNeeded:(_Bool)arg2 inOperationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005abf3
- (void)_prepareBookmarksRecordZoneInvalidatingCachedZone:(_Bool)arg1 createIfNeeded:(_Bool)arg2 inOperationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005a5cb
- (void)_prepareBookmarksRecordZoneCreatingIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a5af
- (void)_prepareBookmarksRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a592
- (void)deleteBookmarksZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a15b
- (void)deleteBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059c3b
- (void)saveBookmarksRecordBatch:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059980
- (void)fetchNumberOfDevicesInSyncCircleWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059749
- (void)fetchBookmarksRecordChangesSinceServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000059107
- (void)saveBookmarksZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000058dff
- (void)fetchBookmarksZoneSubscriptionStatusCreatingZoneIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058626
- (void)deleteSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000582d9
- (void)saveSubscription:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000057f37
- (void)fetchSubscriptionWithID:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000057b38
- (void)acceptCloudKitShareWithMetadata:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005764f
- (void)removeParticipantsWithEmailAddresses:(id)arg1 fromShareInRecordZoneWithID:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000056942
- (void)addParticipantsWithEmailAddresses:(id)arg1 toShareInRecordZoneWithID:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005548a
- (void)fetchShareMetadataWithURL:(id)arg1 invitationTokenData:(id)arg2 inOperationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000054ee7
- (void)fetchShareRecordForRecordZoneWithID:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000549b7
- (void)setUpSharingForRecordZoneWithID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000543ec
- (void)_modifyRecords:(id)arg1 andDeleteRecordIDs:(id)arg2 inDatabase:(id)arg3 operationGroup:(id)arg4 previouslySavedRecords:(id)arg5 previouslyDeletedRecords:(id)arg6 mergeHandler:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0010000000052607
- (void)modifyRecords:(id)arg1 andDeleteRecordIDs:(id)arg2 inDatabase:(id)arg3 operationGroup:(id)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000005235a
- (void)modifyRecords:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000005232f
- (void)fetchRecordZoneChangesInZonesWithIDs:(id)arg1 perZoneConfigurations:(id)arg2 inDatabase:(id)arg3 operationGroup:(id)arg4 recordWasChangedBlock:(CDUnknownBlockType)arg5 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg6 recordZoneFetchCompletionBlock:(CDUnknownBlockType)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x0010000000051ee0
- (void)fetchChangesSinceServerChangeToken:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005190b
- (void)fetchEncryptionRecordsForZonesWithIDs:(id)arg1 inDatabase:(id)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005129f
- (void)deleteRecordZonesWithIDs:(id)arg1 inOperationGroup:(id)arg2 perRecordZoneDeleteBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000050fa1
- (void)_createEncryptionRecordForRecordZoneWithID:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000507fd
- (void)createRecordZoneAndEncryptionInfoWithZoneName:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005022b
- (void)setUpBookmarksRecordZoneCreatingIfNeeded:(_Bool)arg1 inOperationGroup:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050219
- (void)setUpBookmarksRecordZoneInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000501fc
- (id)operationConfiguration;	// IMP=0x001000000005017f
- (id)cloudBookmarkItemConfigurationForRecord:(id)arg1;	// IMP=0x00100000000500b6
- (void)clearCachedRecordZone;	// IMP=0x001000000004ffaf
- (void)_fetchUserIdentityInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004fa60
- (void)fetchUserIdentityInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f7e6
- (id)createSubscriptionRequestOperationGroupWithQualityOfService:(long long)arg1 xpcActivity:(id)arg2;	// IMP=0x001000000004f7b0
- (id)createMigrationFromDAVOperationGroupWithXPCActivity:(id)arg1;	// IMP=0x001000000004f78f
- (id)createMigrationStateCheckOperationGroupWithXPCActivity:(id)arg1 qualityOfService:(long long)arg2;	// IMP=0x001000000004f773
- (id)rootRecordNameForSecondaryRecordZoneID:(id)arg1;	// IMP=0x001000000004f73c
- (id)secondaryRecordZoneIDWithRootRecordName:(id)arg1;	// IMP=0x001000000004f701
- (_Bool)isSecondaryRecordZoneID:(id)arg1;	// IMP=0x001000000004f6da
- (_Bool)_isUnrecoverableCloudKitWriteError:(id)arg1;	// IMP=0x001000000004f65d
- (_Bool)handlesRecordChangesToRecordZoneWithID:(id)arg1;	// IMP=0x001000000004f5e5
- (id)initWithType:(long long)arg1 container:(id)arg2 localStorage:(id)arg3;	// IMP=0x001000000004f08e
- (id)init;	// IMP=0x001000000004f080
@property(nonatomic) _Bool includesMigrationRecordInSaveBatch; // @synthesize includesMigrationRecordInSaveBatch=_threadUnsafeIncludesMigrationRecordInSaveBatch;
@property(readonly, nonatomic) id <CloudBookmarkStoreLocalStorage> localStorage; // @synthesize localStorage=_threadUnsafeLocalStorage;

// Remaining properties
@property(readonly, nonatomic) long long type; // @synthesize type=_type;

@end

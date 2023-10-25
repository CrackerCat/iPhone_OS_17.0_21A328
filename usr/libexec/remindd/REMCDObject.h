//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class CKRecord, CKShare, MISSING_TYPE, NSData, NSString, NSUUID, RDStoreControllerManagedObjectContext, REMCDAccount, REMCKCloudState, REMObjectID, REMResolutionTokenMap;

@interface REMCDObject : NSManagedObject
{
    CKRecord *_ckServerRecord;	// 8 = 0x8
    CKShare *_ckServerShare;	// 16 = 0x10
    _Bool _mergeDataRefusedToMergeMarkedForDeletion;	// 24 = 0x18
    _Bool _mergeDataRevertedLocallyMarkedForDeletion;	// 25 = 0x19
    _Bool _shouldPerformCloudSchemaCatchUpSync;	// 26 = 0x1a
    _Bool hack_willSaveHandled;	// 27 = 0x1b
    _Bool hack_didHandleShouldSyncUpDelete;	// 28 = 0x1c
    _Bool spotlightIndexCountUpdated;	// 29 = 0x1d
    _Bool validateForInsertion_handledJournalEntries;	// 30 = 0x1e
    _Bool validateForUpdate_handledJournalEntries;	// 31 = 0x1f
    REMCDAccount *previousAccount;	// 32 = 0x20
    REMResolutionTokenMap *hack_resolutionTokenMapCopy;	// 40 = 0x28
    REMResolutionTokenMap *cached_CDResolutionMap;	// 48 = 0x30
}

+ (_Bool)conformsToREMChangeTrackingIdentifiable;	// IMP=0x002000000005d96a
+ (id)cdEntityName;	// IMP=0x001000000005d913
+ (id)objectIDWithUUID:(id)arg1;	// IMP=0x001000000005d886
+ (id)newObjectID;	// IMP=0x001000000005d824
+ (id)relationshipsEligibleForEffectiveMinimumSupportedVersionPropagationWithEntity:(id)arg1;	// IMP=0x001000000005d271
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x001000000005d057
+ (_Bool)isAbstract;	// IMP=0x0010000000059d65
+ (id)ic_resultsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 resultType:(unsigned long long)arg3 fetchBatchSize:(unsigned long long)arg4 propertiesToFetch:(id)arg5 relationshipKeyPathsForPrefetching:(id)arg6 context:(id)arg7;	// IMP=0x0010000000005cdc
+ (id)ic_objectsFromObjectIDs:(id)arg1 propertiesToFetch:(id)arg2 relationshipKeyPathsForPrefetching:(id)arg3 context:(id)arg4;	// IMP=0x00100000000057fe
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x001000000006c65d
+ (id)getResolutionTokenMapFromRecord:(id)arg1;	// IMP=0x001000000006c410
+ (id)objectCkZoneOwnerNameFromCKRecordZoneID:(id)arg1;	// IMP=0x001000000006bbd0
+ (id)shareSystemFieldsTransformer;	// IMP=0x001000000006b166
+ (id)recordSystemFieldsTransformer;	// IMP=0x001000000006b111
+ (id)versionsByRecordIDByOperation;	// IMP=0x001000000006a976
+ (id)versionsByOperationQueue;	// IMP=0x001000000006a8f5
+ (id)keyPathsForValuesAffectingServerShareCheckingParent;	// IMP=0x0010000000069f70
+ (id)keyPathsForValuesAffectingIsSharedReadOnly;	// IMP=0x0010000000069ed0
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;	// IMP=0x0010000000069c5e
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;	// IMP=0x0010000000069bc4
+ (id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;	// IMP=0x0010000000068e38
+ (void)deleteAllTemporaryAssetFilesForAllObjects;	// IMP=0x0010000000068881
+ (void)deleteTemporaryFilesForAsset:(id)arg1;	// IMP=0x00100000000686c4
+ (void)deleteTemporaryAssetFilesForOperation:(id)arg1;	// IMP=0x00100000000681e3
+ (id)temporaryAssetDirectoryURL;	// IMP=0x0010000000067ece
+ (id)assetForData:(id)arg1;	// IMP=0x0010000000067caf
+ (id)temporaryAssets;	// IMP=0x0010000000067c4a
+ (_Bool)needsToReFetchServerRecordValue:(id)arg1;	// IMP=0x001000000006649f
+ (id)keyPathsForValuesAffectingNeedsToBePushedToCloud;	// IMP=0x001000000006621b
+ (_Bool)shouldSyncToCloud;	// IMP=0x0010000000065f0f
+ (id)allDirtyCloudObjectIDsInContext:(id)arg1;	// IMP=0x0010000000064ed1
+ (id)allDirtyCloudObjectsPredicate;	// IMP=0x0010000000064eaf
+ (id)allCloudObjectIDsInContext:(id)arg1;	// IMP=0x0010000000064e32
+ (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x0010000000064d2b
+ (id)allCloudObjectsPredicate;	// IMP=0x0010000000064c1c
+ (id)newPlaceholderObjectForRecordID:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000064aae
+ (id)newObjectWithCKIdentifier:(id)arg1 context:(id)arg2 account:(id)arg3;	// IMP=0x0010000000064044
+ (id)newObjectWithCKRecordName:(id)arg1 context:(id)arg2 account:(id)arg3;	// IMP=0x0010000000063fae
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000063fa6
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000063db8
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000063db0
+ (id)numberOfPushAttemptsToWaitByCKIdentifier;	// IMP=0x00100000000629fc
+ (id)failedToSyncCountsByCKIdentifier;	// IMP=0x0010000000062626
+ (id)failureCountQueue;	// IMP=0x00100000000625a5
+ (id)objectWithRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x0010000000061e37
+ (id)ckIdentifierFromRecordName:(id)arg1;	// IMP=0x0010000000061d63
+ (id)recordTypes;	// IMP=0x0010000000061150
+ (id)ckRecordKeyForMinimumSupportedVersion;	// IMP=0x0010000000061143
+ (_Bool)conformsToICCloudObject;	// IMP=0x001000000006113b
+ (id)subclassNamesOfREMCDObjectRepresentingRootCoreDataEntities;	// IMP=0x00100000000778f3
+ (id)subclassesOfREMCDObjectRepresentingRootCoreDataEntities;	// IMP=0x00100000000777f5
+ (id)fetchRequest;	// IMP=0x00100000000776e4
+ (id)entity;	// IMP=0x0010000000077616
+ (void)mergeSystemPropertiesIntoCDObject:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x001000000055cae0
- (void).cxx_destruct;	// IMP=0x001000000005da93
@property(nonatomic) _Bool validateForUpdate_handledJournalEntries; // @synthesize validateForUpdate_handledJournalEntries;
@property(nonatomic) _Bool validateForInsertion_handledJournalEntries; // @synthesize validateForInsertion_handledJournalEntries;
@property(nonatomic) _Bool spotlightIndexCountUpdated; // @synthesize spotlightIndexCountUpdated;
@property(retain, nonatomic) REMResolutionTokenMap *cached_CDResolutionMap; // @synthesize cached_CDResolutionMap;
@property(nonatomic) _Bool hack_didHandleShouldSyncUpDelete; // @synthesize hack_didHandleShouldSyncUpDelete;
@property(nonatomic) _Bool hack_willSaveHandled; // @synthesize hack_willSaveHandled;
@property(retain, nonatomic) REMResolutionTokenMap *hack_resolutionTokenMapCopy; // @synthesize hack_resolutionTokenMapCopy;
@property(retain, nonatomic) REMCDAccount *previousAccount; // @synthesize previousAccount;
- (id)remChangedObjectID;	// IMP=0x001000000005d972
- (id)remObjectIDWithError:(id *)arg1;	// IMP=0x001000000005d7be
@property(readonly, nonatomic) REMObjectID *remObjectID;
- (_Bool)validateEffectiveMinimumSupportedVersionApplyingChange:(_Bool)arg1;	// IMP=0x001000000005d53f
- (void)_markDirtyForEffectiveMinimumSupportedVersionValidation;	// IMP=0x001000000005d0cf
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x001000000005cff8
@property(nonatomic) long long effectiveMinimumSupportedVersion;
- (void)setMinimumSupportedVersion:(long long)arg1;	// IMP=0x001000000005ccf0
@property(readonly, nonatomic) long long minimumSupportedVersion;
- (_Bool)isUnsupported;	// IMP=0x001000000005ccc4
- (_Bool)_allowsObjectSupportedVersion;	// IMP=0x001000000005cc2d
- (void)fixValueBeforeUnmarkingForDeletionForKey:(id)arg1;	// IMP=0x001000000005cb74
- (void)fixValueBeforeMarkingForDeletionForKey:(id)arg1;	// IMP=0x001000000005c9a5
- (id)allChildObjects;	// IMP=0x001000000005c89b
- (void)deleteAllChildrenFromLocalDatabase;	// IMP=0x001000000005c741
- (void)recursiveMarkForDeletion:(_Bool)arg1 usingVisitedMap:(id)arg2;	// IMP=0x001000000005c5d0
- (void)traverseObjectTreeUsingVisitedMap:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005bdcb
- (void)updateDeletedFlagAccordingToOrphanState:(id)arg1;	// IMP=0x001000000005b8d4
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x001000000005b8cc
- (_Bool)_validateZoneOwnerNamesWithLogPrefix:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005b4fe
@property(readonly, nonatomic) NSString *_parentZoneMismatchErrorDebugDescription;
- (_Bool)validateForUpdate:(id *)arg1;	// IMP=0x001000000005b0c2
- (_Bool)validateForInsert:(id *)arg1;	// IMP=0x001000000005aea7
- (void)prepareForDeletion;	// IMP=0x001000000005ae50
- (void)didSave;	// IMP=0x001000000005ada3
- (void)willSave;	// IMP=0x001000000005a9b9
@property(retain, nonatomic) REMCDAccount *account; // @dynamic account;
- (id)createResolutionTokenMapIfNecessary;	// IMP=0x001000000005a868
- (id)resolutionTokenMapFromJsonData:(id)arg1;	// IMP=0x001000000005a7c1
- (id)jsonDataFromResolutionTokenMap:(id)arg1;	// IMP=0x001000000005a760
@property(retain, nonatomic) NSData *resolutionTokenMapData;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0010000000059ff9
- (void)willChangeValueForKey:(id)arg1;	// IMP=0x0010000000059f83
- (void)didTurnIntoFault;	// IMP=0x0010000000059f42
- (void)awakeFromFetch;	// IMP=0x0010000000059ee5
- (void)awakeFromInsert;	// IMP=0x0010000000059e88
@property(readonly, nonatomic) _Bool isPlaceholder;
@property(readonly, nonatomic) _Bool isConcealed;
@property(readonly, nonatomic) RDStoreControllerManagedObjectContext *storeControllerManagedObjectContext;
@property(readonly, nonatomic) _Bool shouldPerformCloudSchemaCatchUpSync;
@property(readonly, nonatomic) _Bool mergeDataRevertedLocallyMarkedForDeletion;
@property(readonly, nonatomic) _Bool mergeDataRefusedToMergeMarkedForDeletion;
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x001000000006c746
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x001000000006c73e
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x001000000006c736
- (_Bool)isMergeableWithLocalObject;	// IMP=0x001000000006c665
- (void)generateReolutionTokenMapForTestingWithKeys:(id)arg1;	// IMP=0x001000000006c4ec
- (id)getResolutionTokenMapFromRecord:(id)arg1;	// IMP=0x001000000006c4d3
- (id)cloudKitReferenceWithRecordIDAndValidateAction:(id)arg1;	// IMP=0x001000000006c3b0
- (id)ic_loggingValues;	// IMP=0x001000000006bd16
- (id)ic_loggingIdentifier;	// IMP=0x001000000006bd04
- (id)shortLoggingDescription;	// IMP=0x001000000006bc88
- (id)loggingDescription;	// IMP=0x001000000006bc76
- (_Bool)hasAllMandatoryFields;	// IMP=0x001000000006bc2e
@property(retain, nonatomic) CKShare *ckServerShare;
- (void)updateSharedObjectOwnerName:(id)arg1;	// IMP=0x001000000006b4a5
@property(retain, nonatomic) CKRecord *ckServerRecord;
@property(nonatomic, getter=isInCloud) _Bool inCloud;
- (long long)isPushingSameOrLaterThanVersion:(long long)arg1;	// IMP=0x001000000006ad92
- (void)setVersion:(long long)arg1 forOperation:(id)arg2;	// IMP=0x001000000006abc1
- (long long)versionForOperation:(id)arg1;	// IMP=0x001000000006a9db
- (void)restoreParentReferenceAfterUnmarkingForDeletion;	// IMP=0x001000000006a8ef
- (void)didAcceptShare:(id)arg1;	// IMP=0x001000000006a6d3
- (void)setServerShareIfNewer:(id)arg1;	// IMP=0x001000000006a13c
- (void)updateObjectWithShare:(id)arg1;	// IMP=0x001000000006a0e7
- (id)currentUserShareParticipantID;	// IMP=0x001000000006a046
- (id)shareType;	// IMP=0x001000000006a034
- (id)shareTitle;	// IMP=0x001000000006a022
- (id)serverShareCheckingParent;	// IMP=0x0010000000069f90
- (_Bool)isSharedReadOnly;	// IMP=0x0010000000069ef0
- (_Bool)isSharedRootObject;	// IMP=0x0010000000069e3f
- (_Bool)isOwnedByCurrentUser;	// IMP=0x0010000000069dfb
- (_Bool)canBeRootShareObject;	// IMP=0x0010000000069df3
- (_Bool)isSharedViaICloud;	// IMP=0x0010000000069ca6
- (_Bool)canBeSharedViaICloud;	// IMP=0x0010000000069bf0
@property(readonly) _Bool needsToDeleteShare;
- (void)updateParentReferenceIfNecessary;	// IMP=0x001000000006967b
- (id)parentCloudObject;	// IMP=0x0010000000069673
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x0010000000069606
- (void)debug_markObjectDirtyAfterUnmarkedForDeletion;	// IMP=0x00100000000695f4
- (MISSING_TYPE *)debug_lowLevelUnmarkForDeletion;	// IMP=0x00100000000695e2
- (void)debug_markObjectDirtyAfterMarkedForDeletion;	// IMP=0x00100000000695d0
- (void)debug_lowLevelMarkForDeletion;	// IMP=0x00100000000695be
- (void)debug_fixValuesOfKeysWithUniqueConstraintBeforeSettingMarkedForDeletion:(_Bool)arg1;	// IMP=0x00100000000695ac
- (_Bool)supportsDeletionByTTL;	// IMP=0x00100000000695a4
@property(nonatomic) _Bool markedForDeletion; // @dynamic markedForDeletion;
- (void)__lowLevelMarkForDeletion;	// IMP=0x001000000006941a
- (void)markObjectDirtyAfterUnmarkedForDeletion;	// IMP=0x0010000000069408
- (void)lowLevelUnmarkForDeletion;	// IMP=0x00100000000693f4
- (void)unmarkForDeletion;	// IMP=0x00100000000692ea
- (void)markObjectDirtyAfterMarkedForDeletion;	// IMP=0x001000000006924c
- (void)lowLevelMarkForDeletion;	// IMP=0x0010000000069235
- (void)markForDeletion;	// IMP=0x0010000000069128
- (void)fixValuesOfKeysWithUniqueConstraintBeforeSettingMarkedForDeletion:(_Bool)arg1;	// IMP=0x0010000000068e5c
- (void)fixBrokenReferences;	// IMP=0x0010000000068e32
- (id)objectsToBeDeletedBeforeThisObject;	// IMP=0x0010000000068e25
- (void)deleteFromLocalDatabase;	// IMP=0x0010000000068d49
- (_Bool)shouldBeDeletedFromLocalDatabase;	// IMP=0x0010000000068bac
- (_Bool)isDeletable;	// IMP=0x0010000000068ba4
- (void)sortChildrenObjects;	// IMP=0x0010000000067c44
- (void)objectWasFetchedButDoesNotExistInCloud;	// IMP=0x0010000000067acd
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x001000000006746f
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;	// IMP=0x001000000006722d
- (void)objectFailedToBePushedToCloudWithOperation:(id)arg1 recordID:(id)arg2 error:(id)arg3;	// IMP=0x001000000006691e
- (void)objectWillBePushedToCloudWithOperation:(id)arg1;	// IMP=0x00100000000668a6
- (void)objectWasDeletedFromCloudByAnotherDevice;	// IMP=0x00100000000666b1
- (void)objectWasDeletedFromCloud;	// IMP=0x001000000006669d
- (_Bool)needsToFetchAfterServerRecordChanged:(id)arg1;	// IMP=0x00100000000662d4
- (_Bool)hasSuccessfullyPushedLatestVersionToCloud;	// IMP=0x0010000000066247
- (void)forcePushToCloud;	// IMP=0x00100000000660f1
@property(readonly) _Bool needsToBePushedToCloud;
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000065941
- (id)newlyCreatedRecord;	// IMP=0x00100000000652e4
- (void)recursivelyFixCrossZoneRelationshipWithVisitedMap:(id)arg1 perObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064f4e
- (_Bool)isValidObject;	// IMP=0x0010000000063caf
- (_Bool)isInICloudAccount;	// IMP=0x0010000000063bb0
- (_Bool)_isInICloudAccount;	// IMP=0x0010000000063a9b
@property(readonly) _Bool needsToBeDeletedFromCloud;
- (id)recordType;	// IMP=0x00100000000639ca
- (long long)rd_ckDatabaseScope;	// IMP=0x0010000000063986
- (id)recordID;	// IMP=0x0010000000063693
@property(copy, nonatomic) NSString *ckZoneOwnerName; // @dynamic ckZoneOwnerName;
- (id)recordZoneName;	// IMP=0x0010000000063568
- (id)recordName;	// IMP=0x001000000006344b
@property(readonly, nonatomic) _Bool shouldBeIgnoredForSync;
- (void)resetFailureCounts;	// IMP=0x0010000000063295
- (void)deleteChangeTokensAndReSync;	// IMP=0x00100000000630fa
- (void)decrementFailureCounts;	// IMP=0x0010000000062fa8
- (void)incrementFailureCounts;	// IMP=0x0010000000062dd2
- (void)setNumberOfPushAttemptsToWaitCount:(long long)arg1;	// IMP=0x0010000000062c33
- (long long)numberOfPushAttemptsToWaitCount;	// IMP=0x0010000000062a61
- (void)setFailedToSyncCount:(long long)arg1;	// IMP=0x001000000006285d
- (long long)failedToSyncCount;	// IMP=0x001000000006268b
- (id)ckIdentifierFromRecordName:(id)arg1;	// IMP=0x0010000000061de6
- (void)clearServerRecord;	// IMP=0x0010000000061d4f
- (void)clearChangeCount;	// IMP=0x0010000000061ca1
- (void)updateChangeCount;	// IMP=0x0010000000061a65
- (void)setShouldSyncUpDeleteIfNeeded;	// IMP=0x0010000000061968
- (_Bool)shouldSyncUpDelete;	// IMP=0x001000000006194f
- (void)_setCKIdentifierIfNecessary;	// IMP=0x00100000000617e3
@property(nonatomic) _Bool ckNeedsToBeFetchedFromCloud; // @dynamic ckNeedsToBeFetchedFromCloud;
@property(readonly, nonatomic) NSString *accountCKIdentifier;
- (id)cloudAccount;	// IMP=0x00100000000614e4
- (void)insertCloudStateIfNeededOnAwakeFromFetch;	// IMP=0x001000000006130c
- (void)insertCloudStateOnAwakeFromInsert;	// IMP=0x001000000006120d
- (void)clearTransformedCKServerValueCachesOnDidTurnIntoFault;	// IMP=0x00100000000611c0
- (_Bool)shouldCascadeMarkAsDeleteInto:(id)arg1 forRelationship:(id)arg2;	// IMP=0x001000000006daa8
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x001000000006d9e5

// Remaining properties
@property(retain, nonatomic) REMCKCloudState *ckCloudState; // @dynamic ckCloudState;
@property(nonatomic) short ckDirtyFlags; // @dynamic ckDirtyFlags;
@property(copy, nonatomic) NSString *ckIdentifier; // @dynamic ckIdentifier;
@property(nonatomic) _Bool ckNeedsInitialFetchFromCloud; // @dynamic ckNeedsInitialFetchFromCloud;
@property(retain, nonatomic) NSData *ckServerRecordData; // @dynamic ckServerRecordData;
@property(retain, nonatomic) NSData *ckServerShareData; // @dynamic ckServerShareData;
@property(copy, nonatomic) NSString *daPushKey; // @dynamic daPushKey;
@property(copy, nonatomic) NSString *daSyncToken; // @dynamic daSyncToken;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long effectiveMinimumSupportedAppVersion; // @dynamic effectiveMinimumSupportedAppVersion;
@property(copy, nonatomic) NSString *externalIdentifier; // @dynamic externalIdentifier;
@property(copy, nonatomic) NSString *externalModificationTag; // @dynamic externalModificationTag;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) long long minimumSupportedAppVersion; // @dynamic minimumSupportedAppVersion;
@property(retain, nonatomic) NSString *primitiveCkZoneOwnerName; // @dynamic primitiveCkZoneOwnerName;
@property(retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap_v2_JSON; // @dynamic resolutionTokenMap_v2_JSON;
@property(retain, nonatomic) NSData *resolutionTokenMap_v3_JSONData; // @dynamic resolutionTokenMap_v3_JSONData;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordID, CPLCKRecordFetchCache, CPLCKRecordRequestor, CPLCKSharePlan, CPLCKUnsharePlan, CPLCloudKitUploadMetric, CPLCloudKitUploadOperationContext, CPLCloudKitZoneIdentification, CPLRecordChange, CPLRecordTarget, CPLRecordTargetMapping, CPLSimpleCKRecordBuilder, CPLUnionCKRecordBuilder, MISSING_TYPE, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol CPLCKRecordPropertyMapping, CPLCloudKitScopeProvider;

@interface CPLCKBatchUploadPlanner : NSObject
{
    NSMutableDictionary *_ckRecordIDToScopedIdentifier;	// 8 = 0x8
    NSMutableDictionary *_ckRecordIDToRejectedScopedIdentifier;	// 16 = 0x10
    NSMutableArray *_ckRecordsToUpload;	// 24 = 0x18
    NSMutableArray *_ckRecordIDsToDelete;	// 32 = 0x20
    NSMutableSet *_scopedIdentifiersMovingToSplitState;	// 40 = 0x28
    NSMutableArray *_sharedCKRecordsToUpload;	// 48 = 0x30
    NSMutableArray *_sharedCKRecordIDsToDelete;	// 56 = 0x38
    NSMutableSet *_dontUnshareScopedIdentifier;	// 64 = 0x40
    NSMutableDictionary *_requestedSharedCKRecordIDs;	// 72 = 0x48
    NSMutableDictionary *_requestedPrivateCKRecordIDs;	// 80 = 0x50
    NSMutableSet *_mastersUploadedToPrivateZone;	// 88 = 0x58
    NSMutableDictionary *_mastersNotYetUploadedToPrivateZone;	// 96 = 0x60
    NSMutableSet *_mastersUploadedToSharedZone;	// 104 = 0x68
    NSMutableDictionary *_mastersNotYetUploadedToSharedZone;	// 112 = 0x70
    NSMutableSet *_indirectRecordsUploadedToPrivateZone;	// 120 = 0x78
    CPLRecordChange *_currentRecordChange;	// 128 = 0x80
    CPLRecordTarget *_currentRecordTarget;	// 136 = 0x88
    CKRecordID *_currentRecordID;	// 144 = 0x90
    CPLSimpleCKRecordBuilder *_simpleBuilder;	// 152 = 0x98
    CKRecord *_pendingCKRecordToUpload;	// 160 = 0xa0
    CKRecord *_ckRecordToUpload;	// 168 = 0xa8
    CKRecordID *_sharedRecordID;	// 176 = 0xb0
    CKRecord *_sharedCKRecordToUpload;	// 184 = 0xb8
    CPLSimpleCKRecordBuilder *_simpleBuilderForSharedCKRecord;	// 192 = 0xc0
    CPLUnionCKRecordBuilder *_unionBuilderForCKRecords;	// 200 = 0xc8
    NSDate *_recordModificationDate;	// 208 = 0xd0
    _Bool _checkLocationData;	// 216 = 0xd8
    unsigned long long _photosWithLocationDataCount;	// 224 = 0xe0
    unsigned long long _sharedPhotosWithLocationDataCount;	// 232 = 0xe8
    NSMutableSet *_scopedIdentifiersNeedingToCallProgressHandler;	// 240 = 0xf0
    CPLCloudKitUploadOperationContext *_uploadContext;	// 248 = 0xf8
    CPLCloudKitUploadOperationContext *_sharedUploadContext;	// 256 = 0x100
    double _uploadTotalSize;	// 264 = 0x108
    NSMutableDictionary *_sizesPerRecordID;	// 272 = 0x110
    NSMutableDictionary *_progressSizesPerRecordID;	// 280 = 0x118
    NSDate *_dateOfFirstUploadProgress;	// 288 = 0x120
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 296 = 0x128
    CPLCloudKitZoneIdentification *_destinationZoneIdentification;	// 304 = 0x130
    CPLCloudKitZoneIdentification *_sharedZoneIdentification;	// 312 = 0x138
    id <CPLCKRecordPropertyMapping> _propertyMapping;	// 320 = 0x140
    CKRecordID *_currentUserRecordID;	// 328 = 0x148
    CPLRecordTargetMapping *_targetMapping;	// 336 = 0x150
    CPLCKRecordFetchCache *_fetchCache;	// 344 = 0x158
    NSDate *_cplEnabledDate;	// 352 = 0x160
    CPLCloudKitUploadMetric *_metric;	// 360 = 0x168
    CDUnknownBlockType _progressHandler;	// 368 = 0x170
    CPLCKRecordRequestor *_recordRequestor;	// 376 = 0x178
    double _totalDurationOfUpload;	// 384 = 0x180
    CPLCKSharePlan *_sharePlan;	// 392 = 0x188
    CPLCKUnsharePlan *_unsharePlan;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x00200000000b6395
@property(readonly, nonatomic) CPLCKUnsharePlan *unsharePlan; // @synthesize unsharePlan=_unsharePlan;
@property(readonly, nonatomic) CPLCKSharePlan *sharePlan; // @synthesize sharePlan=_sharePlan;
@property(readonly, nonatomic) double totalDurationOfUpload; // @synthesize totalDurationOfUpload=_totalDurationOfUpload;
@property(readonly, nonatomic) NSArray *sharedCKRecordIDsToDelete; // @synthesize sharedCKRecordIDsToDelete=_sharedCKRecordIDsToDelete;
@property(readonly, nonatomic) NSArray *sharedCKRecordsToUpload; // @synthesize sharedCKRecordsToUpload=_sharedCKRecordsToUpload;
@property(readonly, nonatomic) NSArray *ckRecordIDsToDelete; // @synthesize ckRecordIDsToDelete=_ckRecordIDsToDelete;
@property(readonly, nonatomic) NSArray *ckRecordsToUpload; // @synthesize ckRecordsToUpload=_ckRecordsToUpload;
@property(retain, nonatomic) CPLCKRecordRequestor *recordRequestor; // @synthesize recordRequestor=_recordRequestor;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) CPLCloudKitUploadMetric *metric; // @synthesize metric=_metric;
@property(copy, nonatomic) NSDate *cplEnabledDate; // @synthesize cplEnabledDate=_cplEnabledDate;
@property(readonly, nonatomic) CPLCKRecordFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // @synthesize targetMapping=_targetMapping;
@property(readonly, nonatomic) CKRecordID *currentUserRecordID; // @synthesize currentUserRecordID=_currentUserRecordID;
@property(readonly, nonatomic) id <CPLCKRecordPropertyMapping> propertyMapping; // @synthesize propertyMapping=_propertyMapping;
@property(readonly, nonatomic) CPLCloudKitZoneIdentification *sharedZoneIdentification; // @synthesize sharedZoneIdentification=_sharedZoneIdentification;
@property(readonly, nonatomic) CPLCloudKitZoneIdentification *destinationZoneIdentification; // @synthesize destinationZoneIdentification=_destinationZoneIdentification;
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
- (MISSING_TYPE *)recordIDForResourcesOfRecordWithScopedIdentifier:cloudKitScope:error: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000b618a
- (id)_recordIDFromScopedIdentifier:(id)arg1 cloudKitScope:(id *)arg2 error:(id *)arg3;	// IMP=0x00100000000b6034
- (void)requestRecordWithID:(id)arg1 cloudKitScope:(id)arg2 forKey:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b5e97
- (id)recordBuilderForKey:(id)arg1;	// IMP=0x00100000000b5d0a
- (void)setCKReferenceWithScopedIdentifier:(id)arg1 forKey:(id)arg2 referenceAction:(unsigned long long)arg3;	// IMP=0x00100000000b5b50
- (void)setCKAsset:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b5a76
- (void)setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b59cd
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b58c2
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000b56f2
- (id)_copiedCKAsset:(id)arg1;	// IMP=0x00100000000b54ad
- (_Bool)_shouldUpdateKeyOnSharedCKRecord:(id)arg1;	// IMP=0x00100000000b4f67
- (void)_copyPrivateMasterWithScopedIdentifier:(id)arg1 masterTarget:(id)arg2 uploadIndex:(unsigned long long)arg3 reason:(id)arg4;	// IMP=0x00100000000b47b8
- (_Bool)_shouldUpdateKeyOnCKRecord:(id)arg1;	// IMP=0x00100000000b28c8
- (void)_noteMasterWillBeUploadedToSharedZone:(id)arg1;	// IMP=0x00100000000b2850
- (void)_noteMasterWillBeUploadedToPrivateZone:(id)arg1;	// IMP=0x00100000000b27d8
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000b274e
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x00100000000b26c0
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000b26a7
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000b268e
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000b2675
- (void)updateTargetMappingAfterUpload;	// IMP=0x00100000000b2428
- (void)didFinishExecutingPlanWithError:(id)arg1;	// IMP=0x00100000000b2422
- (void)didFinishUploadOfSharedRecordsWithError:(id)arg1;	// IMP=0x00100000000b2356
- (void)uploadOfSharedRecordID:(id)arg1 didProgress:(double)arg2;	// IMP=0x00100000000b2344
- (id)willUploadSharedRecords;	// IMP=0x00100000000b21f9
- (void)didFinishUploadOfRecordsWithError:(id)arg1;	// IMP=0x00100000000b2132
- (void)uploadOfRecordID:(id)arg1 didProgress:(double)arg2;	// IMP=0x00100000000b1f2b
- (id)willUploadRecords;	// IMP=0x00100000000b1dd0
@property(readonly, nonatomic) double planProgess;
@property(readonly, nonatomic) double uploadedSize;
@property(readonly, nonatomic) NSArray *requestedPrivateCKRecordIDs;
- (_Bool)didFetchPrivateCKRecord:(id)arg1 forRecordWithRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b1b1d
- (void)requestPrivateCKRecordWithRecordIDBeforeUpload:(id)arg1 fetchedBlock:(CDUnknownBlockType)arg2 reason:(id)arg3;	// IMP=0x00100000000b18e5
@property(readonly, nonatomic) NSArray *requestedSharedCKRecordIDs;
- (_Bool)didFetchSharedCKRecord:(id)arg1 forRecordWithRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b1751
- (void)requestSharedCKRecordWithRecordIDBeforeUpload:(id)arg1 fetchedBlock:(CDUnknownBlockType)arg2 reason:(id)arg3;	// IMP=0x00100000000b15d0
- (void)uploadSharedCKRecord:(id)arg1 forScopedIdentifier:(id)arg2 triggeringKey:(id)arg3;	// IMP=0x00100000000b147d
- (void)deleteSharedCKRecordWithRecordID:(id)arg1;	// IMP=0x00100000000b1393
- (void)updatePrivateRecord:(id)arg1 sharedToRecordWithID:(id)arg2;	// IMP=0x00100000000b1368
- (void)uploadCKRecord:(id)arg1 forScopedIdentifier:(id)arg2 triggeringKey:(id)arg3;	// IMP=0x00100000000b1215
- (void)deleteCKRecordWithRecordID:(id)arg1;	// IMP=0x00100000000b112b
- (void)_deleteSharedRecord;	// IMP=0x00100000000b0f13
- (void)_deleteRecord;	// IMP=0x00100000000b0d16
- (void)_addRecordWithScopedIdentifierToUnshareTodos:(id)arg1 recordClass:(Class)arg2 target:(id)arg3;	// IMP=0x00100000000b084c
- (void)_addRecordWithScopedIdentifierToShareTodos:(id)arg1 recordClass:(Class)arg2 proposedContributorUserIdentifiers:(id)arg3 target:(id)arg4 force:(_Bool)arg5;	// IMP=0x00100000000b0412
- (void)_dontUnshareRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2;	// IMP=0x00100000000b039b
- (id)_shareTodoForRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 proposedContributorUserIdentifiers:(id)arg3 target:(id)arg4;	// IMP=0x00100000000aff7a
- (void)_addCKRecordIDForResourcesUploadProgressTracking:(id)arg1 size:(double)arg2;	// IMP=0x00100000000afeb2
- (void)finalizePlan;	// IMP=0x00100000000afeac
- (_Bool)planRecordChangeUpload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000af2c5
- (void)_resetPlannerState;	// IMP=0x00100000000af1e1
- (void)_willUpdateCKRecordWithID:(id)arg1 onBehalfOfRecordWithScopedIdentifier:(id)arg2;	// IMP=0x00100000000aefeb
- (void)_noteRecordWithScopedIdentifierWillMoveToSplitState:(id)arg1;	// IMP=0x00100000000aef91
- (id)initWithScopeProvider:(id)arg1 destinationZoneIdentification:(id)arg2 sharedZoneIdentification:(id)arg3 propertyMapping:(id)arg4 currentUserRecordID:(id)arg5 targetMapping:(id)arg6 fetchCache:(id)arg7 cplEnabledDate:(id)arg8;	// IMP=0x00100000000aedf5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

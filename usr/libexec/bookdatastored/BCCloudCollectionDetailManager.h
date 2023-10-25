//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BCCloudDataManager, BCCloudDataSource, BCCloudKitController, NSString;
@protocol BCCloudDataSyncProvider;

@interface BCCloudCollectionDetailManager : NSObject
{
    _Bool _enableCloudSync;	// 8 = 0x8
    BCCloudKitController *_cloudKitController;	// 16 = 0x10
    BCCloudDataSource *_collectionDetailDataSource;	// 24 = 0x18
    id <BCCloudDataSyncProvider> _syncManager;	// 32 = 0x20
    BCCloudDataManager *_dataManager;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000088218
@property(retain, nonatomic) BCCloudDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) id <BCCloudDataSyncProvider> syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) BCCloudDataSource *collectionDetailDataSource; // @synthesize collectionDetailDataSource=_collectionDetailDataSource;
@property(nonatomic) __weak BCCloudKitController *cloudKitController; // @synthesize cloudKitController=_cloudKitController;
@property(nonatomic) _Bool enableCloudSync; // @synthesize enableCloudSync=_enableCloudSync;
- (void)getCollectionDetailChangesSince:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000880fd
- (void)fetchCollectionDetailsIncludingDeleted:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088088
- (void)collectionDetailsForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087fcc
- (void)collectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087e22
- (void)deleteCollectionDetailForCollectionIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087d66
- (void)deleteCollectionDetailForCollectionID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087caa
- (void)updateSyncGenerationFromCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087bba
- (void)removeCollectionDetailForSaltedHashedRecordIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087a41
- (void)setCollectionDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087951
- (void)setCollectionDetail:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000087868
- (void)currentCollectionDetailCloudSyncVersions:(CDUnknownBlockType)arg1;	// IMP=0x00100000000877ff
- (void)dissociateCloudDataFromSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000087796
- (void)hasSaltChangedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000008772d
- (void)setEnableCloudSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000873e0
- (id)diagnosticEntityInfos:(_Bool)arg1;	// IMP=0x00100000000872b5
- (id)entityName;	// IMP=0x00100000000872a8
- (void)syncProvider:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000087138
- (void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000087126
- (void)syncProvider:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086fb6
- (void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086fa4
- (void)syncProvider:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086d31
- (void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086d1f
- (void)_removeCloudDataForIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086abb
- (void)syncProvider:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086aa3
- (void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000086a91
- (void)signalSyncToCKForSyncManager:(id)arg1;	// IMP=0x00100000000869ce
- (void)syncManager:(id)arg1 startSyncToCKWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086922
- (void)nextBatchOfMutableCloudDataToSaveToCKWithFetchLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086887
- (id)mutableCloudDataForRecordID:(id)arg1;	// IMP=0x00100000000867cb
- (void)removedCloudRecordsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000086707
- (void)updatedCloudRecords:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000086583
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2 syncProvider:(id)arg3;	// IMP=0x00100000000863dc
- (id)initWithCloudDataSource:(id)arg1 cloudKitController:(id)arg2;	// IMP=0x00100000000862f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

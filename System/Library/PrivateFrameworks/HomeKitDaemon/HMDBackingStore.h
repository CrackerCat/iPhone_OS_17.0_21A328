//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMBLocalZone, HMCContext, HMCPartition, HMDBackingStoreLocal, HMDCoreData, HMDHome, HMDHomeManager, HMDObjectLookup, NSString, NSUUID;
@protocol HMDBackingStoreDataSource, HMDBackingStoreObjectProtocol;

__attribute__((visibility("hidden")))
@interface HMDBackingStore : HMFObject
{
    _Bool _removedLegacyArchive;	// 8 = 0x8
    CKRecordID *_root;	// 16 = 0x10
    HMDBackingStoreLocal *_local;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    HMDObjectLookup *_lookup;	// 56 = 0x38
    HMCContext *_context;	// 64 = 0x40
    id <HMDBackingStoreObjectProtocol> _delegate;	// 72 = 0x48
    id <HMDBackingStoreDataSource> _dataSource;	// 80 = 0x50
    HMBLocalZone *_localZone;	// 88 = 0x58
    NSString *_contextName;	// 96 = 0x60
    NSString *_contextTransactionAuthor;	// 104 = 0x68
}

+ (id)_saveToLocalStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4;	// IMP=0x0010000000b189dd
+ (void)saveToPersistentStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000b188bf
+ (id)currentDevice;	// IMP=0x0010000000b1878e
+ (id)logCategory;	// IMP=0x0010000000b1875e
+ (id)resetBackingStore;	// IMP=0x0010000000b18644
+ (id)flushBackingStore;	// IMP=0x0010000000b1852a
+ (id)internalAllowedTypes;	// IMP=0x0010000000b184fa
+ (id)deeplyProblematicObjectTypes;	// IMP=0x0010000000b184ca
+ (id)allowedTypes;	// IMP=0x0010000000b1849a
+ (void)start;	// IMP=0x0010000000b18382
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)arg1 ofManagedObjectType:(Class)arg2;	// IMP=0x001000000033d689
+ (id)cdlsModelIDStringsForManagedObjects:(id)arg1;	// IMP=0x001000000033d43e
+ (id)cdlsFetchObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000033d371
+ (id)cdlsFetchManagedObjectWithUUID:(id)arg1 ofManagedObjectType:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000033d070
+ (id)cdlsFetchManagedObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000033cfe1
+ (id)dependencySortTestInterface:(id)arg1;	// IMP=0x001000000033cfd4
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)arg1;	// IMP=0x001000000033cf7d
+ (id)cdlsBackingStoreWithHandle:(id)arg1 error:(id *)arg2;	// IMP=0x001000000033ceed
+ (id)cdlsActiveBackingStores;	// IMP=0x001000000033cebd
- (void).cxx_destruct;	// IMP=0x0000000000b181b7
@property(readonly, nonatomic) NSString *contextTransactionAuthor; // @synthesize contextTransactionAuthor=_contextTransactionAuthor;
@property(readonly, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMCContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(readonly) _Bool isAtomicSaveFeatureEnabled;
@property(readonly) NSString *activeControllerKeyUsername;
- (id)dataForPersistentStoreIncrementingGeneration:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000000b17f4b
- (id)createHomeObjectLookupWithHome:(id)arg1;	// IMP=0x0000000000b17efe
- (id)backingStoreOperationQueue;	// IMP=0x0000000000b17ea7
- (id)localBackingStore;	// IMP=0x0000000000b17e50
- (id)createBackingStoreOperation;	// IMP=0x0000000000b17e37
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg1;	// IMP=0x0000000000b17dea
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000b17cb9
- (void)submitBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000b17b8d
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(_Bool)arg2;	// IMP=0x0000000000b17a5e
- (id)logIdentifier;	// IMP=0x0000000000b17a0e
@property(readonly, copy) NSString *description;
- (void)submit:(id)arg1;	// IMP=0x0000000000b1789c
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000b1788a
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000b17878
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 archiveInline:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000b16d0e
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b16cec
- (id)transaction:(id)arg1 options:(id)arg2;	// IMP=0x0000000000b16c6b
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000b16bb6
- (id)initWithUUID:(id)arg1 home:(id)arg2;	// IMP=0x0000000000b16b1a
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000b16af9
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000b16906
- (void)cdlsDelete:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x000000000033976a
- (void)cdlsUpdate:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x000000000033975b
- (void)cdlsCommit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000339672
- (void)_cdlsReplayAllModelsStartingAt:(id)arg1 isInitialGraphLoad:(_Bool)arg2;	// IMP=0x0000000000339036
- (void)cdlsReplayAllModelsStartingAt:(id)arg1 isInitialGraphLoad:(_Bool)arg2;	// IMP=0x0000000000338f46
- (id)cdlsFetchObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x0000000000338d9e
- (void)dmKickClients;	// IMP=0x0000000000338ba6
- (void)handleCoreDataDidSaveNotification:(id)arg1 sourceContext:(id)arg2;	// IMP=0x0000000000337f7d
- (void)handleCoreDataDidSaveNotification:(id)arg1;	// IMP=0x0000000000337ec4
- (void)handleCoreDataWillSaveNotification:(id)arg1;	// IMP=0x0000000000337bb7
@property(readonly, nonatomic) HMDCoreData *coreData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMCPartition *partition; // @dynamic partition;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteClientCache
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00200000000680e4
- (void)fillRelatedIdentifiersInChange:(id)arg1;	// IMP=0x0010000000067e60
- (id)statusPerScopeIndex;	// IMP=0x0010000000067dfe
- (id)statusDictionary;	// IMP=0x0010000000067c9b
- (id)status;	// IMP=0x0010000000067b2d
- (_Bool)_updateRelatedIdentifier:(id)arg1 forRecordWithIdentifier:(id)arg2;	// IMP=0x0010000000067a47
- (_Bool)_deleteBadRelations;	// IMP=0x001000000006797b
- (id)_badContainerRelationsIdentifiers;	// IMP=0x0010000000067877
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x0010000000067722
- (_Bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00100000000675cd
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x00100000000670d2
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x0010000000066c0f
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000066ae6
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000066937
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000066601
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000663ae
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065fa2
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065b6c
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000658e6
- (_Bool)initializeStorage;	// IMP=0x0010000000065768
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000065739

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

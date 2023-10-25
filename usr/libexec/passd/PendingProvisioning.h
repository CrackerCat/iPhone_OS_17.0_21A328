//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PendingProvisioning
{
}

+ (id)_propertySetters;	// IMP=0x004000000036c441
+ (id)databaseTable;	// IMP=0x001000000036c434
+ (id)_predicateForStatus:(long long)arg1;	// IMP=0x001000000036c2a7
+ (id)_predicateForTypes:(id)arg1;	// IMP=0x001000000036c1f8
+ (id)_predicateForType:(id)arg1;	// IMP=0x001000000036c1d5
+ (id)_predicateForUniqueIdentifier:(id)arg1 type:(id)arg2;	// IMP=0x001000000036c0af
+ (id)_pendingProvisioningsInDatabase:(id)arg1 forQuery:(id)arg2;	// IMP=0x001000000036bd14
+ (_Bool)deletePendingProvisioningInDatabase:(id)arg1 ofType:(id)arg2 withUniqueIdentifier:(id)arg3;	// IMP=0x001000000036bb32
+ (void)markInProgressPendingProvisioningsAsAvailableInDatabase:(id)arg1;	// IMP=0x001000000036b9c8
+ (id)pendingProvisioningInDatabase:(id)arg1 ofType:(id)arg2 withUniqueIdentifier:(id)arg3;	// IMP=0x001000000036b8f0
+ (_Bool)hasPendingProvisioningsInDatabase:(id)arg1 ofTypes:(id)arg2;	// IMP=0x001000000036b870
+ (id)pendingProvisioningsInDatabase:(id)arg1 ofTypes:(id)arg2;	// IMP=0x001000000036b7ba
+ (id)pendingProvisioningsInDatabase:(id)arg1 ofType:(id)arg2;	// IMP=0x001000000036b704
+ (id)allPendingProvisioningsInDatabase:(id)arg1;	// IMP=0x001000000036b64d
+ (id)insertPendingProvisioning:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000036b30c
- (_Bool)deleteFromDatabase;	// IMP=0x004000000036c302
- (id)initWithPendingProvisioning:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000036b074

@end

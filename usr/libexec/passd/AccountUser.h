//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountUser
{
}

+ (id)_propertySettersForAccountUser;	// IMP=0x0040000000365a67
+ (id)_propertyValuesForAccountUser:(id)arg1;	// IMP=0x00100000003657bb
+ (id)_transactionSourceIdentifiersForAccountUserPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003653f0
+ (id)_accountUsersWithQuery:(id)arg1;	// IMP=0x0010000000364fe3
+ (id)_predicateForAltDSID:(id)arg1 accountPID:(id)arg2;	// IMP=0x0010000000364ece
+ (id)_predicateForAccessLevel:(unsigned long long)arg1;	// IMP=0x0010000000364e5d
+ (id)_predicateForAccountPID:(id)arg1;	// IMP=0x0010000000364e3a
+ (id)_predicateForAltDSID:(id)arg1;	// IMP=0x0010000000364e17
+ (void)deleteAccountUserWithAltDSID:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000364628
+ (void)deleteAccountUsersForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000036458f
+ (long long)countOfActivePrimaryUsersForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000003643c6
+ (id)accountUsersByAccountIdentifierInDatabase:(id)arg1;	// IMP=0x0010000000364050
+ (id)anyInDatabase:(id)arg1 withAltDSID:(id)arg2 accountPID:(long long)arg3;	// IMP=0x0010000000363ecb
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(long long)arg2;	// IMP=0x0010000000363e0a
+ (id)accountUsersForAccountPID:(id)arg1 accessLevel:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000363c99
+ (id)accountUsersForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000363be6
+ (id)insertOrUpdateAccountUsers:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003637e9
+ (id)insertOrUpdateAccountUser:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003634d4
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000003630ce
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000363085
+ (id)databaseTable;	// IMP=0x0010000000363078
- (void)updateWithAccountUser:(id)arg1;	// IMP=0x0040000000364cb7
- (_Bool)isCurrentUser;	// IMP=0x0010000000364c75
- (id)altDSID;	// IMP=0x0010000000364c5c
- (id)accountIdentifier;	// IMP=0x0010000000364c43
- (id)transactionSourceIdentifier;	// IMP=0x0010000000364b7e
- (id)accountUser;	// IMP=0x001000000036480c
- (_Bool)deleteFromDatabase;	// IMP=0x00100000003646c4
- (id)initWithAccountUser:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003631a4

@end

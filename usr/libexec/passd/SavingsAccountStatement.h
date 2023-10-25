//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SavingsAccountStatement
{
}

+ (id)_commonDictionaryForSavingsAccountStatement:(id)arg1;	// IMP=0x0040000000207f5d
+ (id)_propertySettersForSavingsAccountStatement;	// IMP=0x0010000000207792
+ (id)_predicateForNonNullStatementIdentifierForAccount:(id)arg1;	// IMP=0x001000000020768e
+ (id)_predicateForNullStatementIdentifierForAccount:(id)arg1;	// IMP=0x001000000020758a
+ (id)_predicateForAccount:(id)arg1;	// IMP=0x0010000000207567
+ (id)_predicateForStatement:(id)arg1 account:(id)arg2;	// IMP=0x001000000020743b
+ (void)deleteSavingsAccountStatementsForAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002072c9
+ (void)deleteSavingsAccountStatementsWithoutPDFForAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000207230
+ (id)anyInDatabase:(id)arg1 withStatementIdentifier:(id)arg2 accountIdentifier:(id)arg3;	// IMP=0x0010000000207212
+ (id)savingsStatementWithIdentifier:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002071c2
+ (id)_savingsAccountStatementWithIdentifier:(id)arg1 account:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000207133
+ (id)_savingsAccountStatementsFromQuery:(id)arg1;	// IMP=0x0010000000206fad
+ (id)savingsAccountStatementsForAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000206e4a
+ (id)lastSavingsAccountStatementForAccount:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000206ccb
+ (id)insertOrUpdateSavingsAccountStatement:(id)arg1 forAccount:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000206b69
+ (id)databaseTable;	// IMP=0x0010000000206b5c
- (id)closingDate;	// IMP=0x0040000000207f0f
- (id)openingDate;	// IMP=0x0010000000207ec1
- (id)savingsAccountStatement;	// IMP=0x0010000000207d52
- (_Bool)deleteFromDatabase;	// IMP=0x0010000000207362

@end

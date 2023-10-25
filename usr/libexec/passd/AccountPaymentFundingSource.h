//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPaymentFundingSource
{
}

+ (id)_propertySettersForPaymentFundingSource;	// IMP=0x004000000029316d
+ (id)_propertyValuesForPaymentFundingSource:(id)arg1;	// IMP=0x0010000000292fbe
+ (id)_fundingSourcesWithQuery:(id)arg1;	// IMP=0x0010000000292db5
+ (id)_predicateForPersistentID:(id)arg1;	// IMP=0x0010000000292ac7
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000292aa4
+ (id)_predicateForAccountPID:(id)arg1;	// IMP=0x0010000000292a81
+ (_Bool)deletePaymentFundingSourcesForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002929e5
+ (id)paymentFundingSourceForAccountPID:(id)arg1 identifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000292865
+ (id)paymentFundingSourcesForAccountPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002927b2
+ (id)insertOrUpdatePaymentFundingSources:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000292255
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x0010000000292226
+ (id)databaseTable;	// IMP=0x0010000000292219
- (id)fundingSource;	// IMP=0x0040000000292aea
- (void)updatePaymentFundingSource:(id)arg1;	// IMP=0x0010000000292738
- (id)initWitePaymentFundingSource:(id)arg1 forAccountPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000292674

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentApplication
{
}

+ (id)_propertySettersForPaymentApplication;	// IMP=0x00400000002f433b
+ (id)_predicateForPersistentID:(long long)arg1;	// IMP=0x00100000002f3331
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00100000002f32fd
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000002f328c
+ (id)_predicateForApplicationIdentifier:(id)arg1 subcredentialIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x00100000002f30d2
+ (id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifiers:(id)arg2;	// IMP=0x00100000002f2fa8
+ (id)_predicateForPassUniqueIdentifier:(id)arg1 applicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x00100000002f2e77
+ (id)_predicateForApplicationIdentifier:(id)arg1 secureElementIdentifier:(id)arg2;	// IMP=0x00100000002f2d57
+ (id)predicateForPaymentMethodTypes:(id)arg1;	// IMP=0x00100000002f2d34
+ (id)predicateForNetworks:(id)arg1;	// IMP=0x00100000002f2d11
+ (id)predicateForSupportBarcodePayment:(_Bool)arg1;	// IMP=0x00100000002f2ca0
+ (id)predicateForHasVPANID:(_Bool)arg1;	// IMP=0x00100000002f2c60
+ (id)predicateForVPANID:(id)arg1 primaryOnly:(_Bool)arg2;	// IMP=0x00100000002f2b41
+ (id)paymentApplicationsInDatabaseWithActiveVPAN:(id)arg1;	// IMP=0x00100000002f2aaf
+ (id)predicateForHasMerchantTokens:(_Bool)arg1;	// IMP=0x00100000002f2a3e
+ (id)predicateForSupportsMerchantTokens:(_Bool)arg1;	// IMP=0x00100000002f29cd
+ (id)predicateForSupportInAppPayment:(_Bool)arg1;	// IMP=0x00100000002f295c
+ (id)predicateForStates:(id)arg1;	// IMP=0x00100000002f2753
+ (id)predicateForState:(long long)arg1;	// IMP=0x00100000002f26e2
+ (id)predicateForPrimaryPaymentApplication:(_Bool)arg1;	// IMP=0x00100000002f266b
+ (id)predicateForNotificationService:(id)arg1;	// IMP=0x00100000002f25ea
+ (id)predicateForSecureElementIdentifier:(id)arg1;	// IMP=0x00100000002f25c7
+ (id)predicateForSecureElementIdentifiers:(id)arg1;	// IMP=0x00100000002f25a4
+ (id)predicateForTransactionSourceWithPID:(unsigned long long)arg1;	// IMP=0x00100000002f2533
+ (id)predicateForPassWithUniqueIdentifier:(id)arg1;	// IMP=0x00100000002f2510
+ (id)predicateForDPANIdentifier:(id)arg1;	// IMP=0x00100000002f24ed
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f231c
+ (id)_paymentApplicationForPass:(id)arg1 applicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000002f21b6
+ (void)updatePaymentApplications:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002f0ddf
+ (void)updatePaymentApplications:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002f0b62
+ (id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2 withJoinKeys:(id)arg3;	// IMP=0x00100000002f0429
+ (id)_paymentApplicationsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000002f0414
+ (id)paymentApplicationsInDatabase:(id)arg1;	// IMP=0x00100000002f0400
+ (id)paymentApplicationsInDatabase:(id)arg1 forNotificationService:(id)arg2;	// IMP=0x00100000002f0374
+ (id)paymentApplicationsInDatabase:(id)arg1 forTransitAppletStatesDirty:(id)arg2;	// IMP=0x00100000002f003a
+ (id)paymentApplicationsInDatabase:(id)arg1 forPassUniqueIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x00100000002efeb0
+ (id)primaryPaymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifiers:(id)arg2;	// IMP=0x00100000002efd6d
+ (id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifier:(id)arg2;	// IMP=0x00100000002efce1
+ (id)paymentApplicationsInDatabase:(id)arg1 forSecureElementIdentifiers:(id)arg2;	// IMP=0x00100000002efc55
+ (id)paymentApplicationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000002efbc9
+ (id)paymentApplicationsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x00100000002efb3d
+ (id)anyInDatabase:(id)arg1 withPassUniqueIdentifier:(id)arg2 secureElementIdentifier:(id)arg3 paymentApplicationIdentifier:(id)arg4;	// IMP=0x00100000002ef8dc
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 subcredentialIdentifier:(id)arg3 secureElementIdentifiers:(id)arg4;	// IMP=0x00100000002ef842
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifiers:(id)arg3;	// IMP=0x00100000002ef7b3
+ (id)anyInDatabase:(id)arg1 withApplicationIdentifier:(id)arg2 secureElementIdentifier:(id)arg3;	// IMP=0x00100000002ef724
+ (id)anyInDatabase:(id)arg1 withTransactionSourcePID:(unsigned long long)arg2;	// IMP=0x00100000002ef698
+ (id)anyInDatabase:(id)arg1 withPersistentID:(unsigned long long)arg2;	// IMP=0x00100000002ef60c
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002ef3ec
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002ef389
+ (id)databaseTable;	// IMP=0x00100000002ef37c
- (void)updateTransitNetworkIdentifiers:(id)arg1;	// IMP=0x00400000002f4211
- (void)updateAutomaticSelectionCriteria:(id)arg1;	// IMP=0x00100000002f40e7
- (void)_updateExpressModes:(id)arg1;	// IMP=0x00100000002f3fbd
- (void)updateWithPaymentApplication:(id)arg1;	// IMP=0x00100000002f37ef
- (id)paymentApplication;	// IMP=0x00100000002f33a2
- (_Bool)deleteFromDatabase;	// IMP=0x00100000002f23b5
- (id)applicationIdentifier;	// IMP=0x00100000002ef363
- (id)transactionSourceIdentifier;	// IMP=0x00100000002ef29e
- (long long)passPID;	// IMP=0x00100000002ef253
- (long long)paymentNetworkIdentifier;	// IMP=0x00100000002ef208
- (id)initWithPaymentApplication:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002ee6fd

@end

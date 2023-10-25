//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary, NSSet, NSString, PDAccountManager, PDFamilyCircleManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDPeerPaymentWebServiceCoordinator, PDSpotlightIndexer, PKPeerPaymentAccount;
@protocol PDApplePayCloudStoreContainerDelegate;

@interface PDApplePayCloudStoreContainer
{
    struct os_unfair_lock_s _fetchLock;	// 8 = 0x8
    _Bool _proactiveFetchInProgress;	// 12 = 0xc
    _Bool _ensuringZoneShareIntegrityInProgress;	// 13 = 0xd
    _Bool _isInternalBuild;	// 14 = 0xe
    id <PDApplePayCloudStoreContainerDelegate> _applePayContainerDelegate;	// 16 = 0x10
    NSMutableDictionary *_fetchingTransactionsForTransactionSourceIdentifiers;	// 24 = 0x18
    PDPaymentTransactionProcessor *_transactionProcessor;	// 32 = 0x20
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 40 = 0x28
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 48 = 0x30
    PDFamilyCircleManager *_familyCircleManager;	// 56 = 0x38
    PDAccountManager *_accountManager;	// 64 = 0x40
    PDSpotlightIndexer *_spotlightIndexer;	// 72 = 0x48
    PKPeerPaymentAccount *_peerPaymentAccount;	// 80 = 0x50
    NSSet *_accounts;	// 88 = 0x58
    NSDictionary *_sharedAccountCloudStoreByAccountIdentifier;	// 96 = 0x60
    NSDictionary *_accountUsersByAccountIdentifier;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000ccd17
- (void)_insertAccountBalanceUpdateNotificationIfNecessaryForAccount:(id)arg1 record:(id)arg2;	// IMP=0x00100000000cc82d
- (void)_parseAccountsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000cbf99
- (_Bool)_isAccountFromRecordType:(id)arg1;	// IMP=0x00100000000cbf13
- (void)_parseAccountEventsFromRecordParser:(id)arg1 databaseIdentifier:(id)arg2 shouldUpdateLocalDatabase:(_Bool)arg3 shouldReturn:(_Bool)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000cb88b
- (id)_recordsByFromAccountEvent:(id)arg1 zone:(id)arg2;	// IMP=0x00100000000cb6c6
- (void)_fetchMissingAccountEventsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 carriedOverRecordsByDatabaseIdentifier:(id)arg4 updateReasons:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000c93ff
- (void)fetchAndStoreAccountEventsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c8ac2
- (id)_recordTypeForAccountEventRecord:(id)arg1;	// IMP=0x00100000000c8a7e
- (_Bool)_isAccountEventAssociatedObjectFromRecordType:(id)arg1;	// IMP=0x00100000000c8363
- (_Bool)_isAccountEventFromRecordType:(id)arg1;	// IMP=0x00100000000c82dd
- (void)_saveTransactionFetchRetries:(id)arg1;	// IMP=0x00100000000c82a6
- (id)_transactionFetchRetries;	// IMP=0x00100000000c80de
- (void)_fetchTransactionsAttemptForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000c7fc6
- (void)_resetFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000c7f3a
- (_Bool)_shouldFetchTransactionsForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000c7e7e
- (id)_originDeviceIDForCloudStoreRecord:(id)arg1;	// IMP=0x00100000000c7ded
- (id)_transactionSourceIdentifierForTransactionCloudStoreRecord:(id)arg1 databaseIdentifier:(id)arg2;	// IMP=0x00100000000c73ab
- (id)_transactionSourceIdentifierForTransactionRecordID:(id)arg1 recordType:(id)arg2 databaseIdentifier:(id)arg3;	// IMP=0x00100000000c5b88
- (void)_fetchMissingTransactionRecordsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c4e56
- (void)_processRecurringPaymentsWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c487e
- (void)_processZoneShareLockWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c4588
- (void)_processShareWithRecordParser:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000c2456
- (_Bool)_canFormTransactionFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000c223c
- (_Bool)_canFormShareLockFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000c21cb
- (_Bool)_canFormShareFromCloudStoreRecord:(id)arg1;	// IMP=0x00100000000c215a
- (id)_parseTransactionRecords:(id)arg1 request:(id)arg2 databaseIdentifier:(id)arg3 updateReasons:(unsigned long long)arg4;	// IMP=0x00100000000bfc4c
- (_Bool)_isCloudStoreZoneThePrimaryZoneForCurrentUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000bf76a
- (void)containerResetCompletedWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x00100000000bef4d
- (_Bool);	// IMP=0x00100000000beee3
- (id)_originDeviceID;	// IMP=0x00100000000beeca
- (id)_cloudStoreSpecificKeysForItem:(id)arg1 paymentPass:(id)arg2;	// IMP=0x00100000000beb07
- (id)_paymentApplicationForPassUniqueIdentifier:(id)arg1;	// IMP=0x00100000000bea48
- (long long)_numberOfActiveTransactionSources;	// IMP=0x00100000000be5ac
- (_Bool)_queue_isRelevantTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000be05d
- (void)_queue_familyMembersByAltDSIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bdca6
- (void)_queue_familyMembersByAppleIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bd959
- (void)_handleFamilyUpdateNotification:(id)arg1;	// IMP=0x00100000000bd876
- (id)_allPossibleCloudStoreZonesForFetchingWithTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000bc57b
- (void)_queue_createOrRemoveZoneSharesIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc19d
- (void)_queue_createOrRemoveZoneSharesForAccountsIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ba892
- (void)_queue_createOrRemoveZoneSharesForPeerPaymentIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b929e
- (void)_queue_ensureZoneShareIntegrity;	// IMP=0x00100000000b90b4
- (id)_accountZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000b8d73
- (id)_accountZoneNamesForAccountUser:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000b8b92
- (id)_accountZoneNamesForAccountSet:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000b899b
- (id)_peerPaymentZoneNamesForAccount:(id)arg1 containerDatabase:(id)arg2;	// IMP=0x00100000000b888a
- (void)_queue_updateWithPossibleNewZonesToAdd:(id)arg1 orphanedZones:(id)arg2 containerDatabase:(id)arg3;	// IMP=0x00100000000b8117
- (void)_queue_processSharedAccountCloudStoreChangeWithOldSharedAccountCloudStore:(id)arg1 newSharedAccountCloudStore:(id)arg2;	// IMP=0x00100000000b7f30
- (void)_queue_processAccountChangeWithOldAccounts:(id)arg1 newAccounts:(id)arg2;	// IMP=0x00100000000b7daa
- (void)_queue_processPeerPaymentAccountChangeWithOldAccount:(id)arg1 newPeerPaymentAccount:(id)arg2;	// IMP=0x00100000000b7c24
- (id)cloudStoreZonesForItemType:(unsigned long long)arg1 configuration:(id)arg2 action:(unsigned long long)arg3 inContainerDatabase:(id)arg4;	// IMP=0x00100000000b60dc
- (id)filterCloudStoreZones:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000000b5bd4
- (id)cloudStoreZonesForItem:(id)arg1 action:(unsigned long long)arg2 inContainerDatabase:(id)arg3;	// IMP=0x00100000000b462a
- (id)zoneIDForSubscription:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00100000000b448f
- (id)subscriptionForZone:(id)arg1 inContainerDatabase:(id)arg2;	// IMP=0x00100000000b42b7
- (id)possibleDatabaseSubscriptionForContainerDatabase:(id)arg1;	// IMP=0x00100000000b417c
- (id)allPossibleZoneSubscriptionsForContainerDatabase:(id)arg1;	// IMP=0x00100000000b3f18
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1 itemType:(unsigned long long)arg2;	// IMP=0x00100000000b3c7e
- (id)allPossibleZoneNamesForContainerDatabase:(id)arg1;	// IMP=0x00100000000b39ea
- (void)accountManager:(id)arg1 accountUsersChanged:(id)arg2 oldUsers:(id)arg3 accountIdentifier:(id)arg4;	// IMP=0x00100000000b37e5
- (void)accountManager:(id)arg1 sharedAccountCloudStoreChangedForAccountIdentifier:(id)arg2;	// IMP=0x00100000000b35c0
- (void)accountManager:(id)arg1 didUpdateAccount:(id)arg2 oldAccount:(id)arg3;	// IMP=0x00100000000b338d
- (void)accountManager:(id)arg1 didRemoveAccount:(id)arg2;	// IMP=0x00100000000b318f
- (void)accountManager:(id)arg1 didAddAccount:(id)arg2;	// IMP=0x00100000000b2e59
- (void)_handlePeerPaymentAccountChanged:(id)arg1;	// IMP=0x00100000000b2cee
- (void)populateEvents:(id)arg1 forAccountIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b237d
- (void)uploadRecurringPayment:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1bae
- (void)uploadTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000b0ef2
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b0d46
- (void)bootstrapZoneWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b09e4
- (void)syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x00100000000b0998
- (void)passDidDisappear:(id)arg1;	// IMP=0x00100000000b081b
- (_Bool)_queue_canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000000b053d
- (void)canSyncTransactionToCloudKit:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b03e8
- (void)canSyncTransactionFromCloudKitForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b02d0
- (void)_addCloudStoreRecordsFromResponse:(id)arg1 toTransactionSourceRecords:(id)arg2 transactionSourceIdentifier:(id)arg3 passUniqueID:(id)arg4;	// IMP=0x00100000000afbfe
- (void)_fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 groupName:(id)arg2 groupNameSuffix:(id)arg3 returnRecords:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000add29
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000adc14
- (void)passProvisioningDidStartForPassUniqueID:(id)arg1 transactionSourceIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ad49c
- (void)backgroundRecordChangedSyncForTranasctionSourceIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ac825
- (void)backgroundModifiedRecordSyncForTranasctionSourceIdentifiers:(id)arg1 fromDate:(id)arg2 returnRecords:(_Bool)arg3 formReport:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ab858
- (void)requestUpdatesForTransactionSourceIdentifier:(id)arg1;	// IMP=0x00100000000aa8a1
- (_Bool)supportsContainerChangeEventReports;	// IMP=0x00100000000aa891
- (void)_queue_completedRecordFetchFromNewSharedZone:(id)arg1;	// IMP=0x00100000000aa1ca
- (void)_queue_aliasesForRecipientHandle:(id)arg1 zoneName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a9bd4
- (void)_queue_cloudStoreZoneInvitationDataForInvitation:(id)arg1 toRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a837b
- (id)_stripToFirstDash:(id)arg1;	// IMP=0x00100000000a82f8
- (id)recordTypeFromRecordName:(id)arg1;	// IMP=0x00100000000a7cf7
- (id)identifierFromRecord:(id)arg1;	// IMP=0x00100000000a77f8
- (id)primaryRecordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000000a76ac
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;	// IMP=0x00100000000a746d
- (void)_queue_processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000a72cd
- (void)processFetchedCloudStoreDataWithModifiedRecordsByDatabaseIdentifier:(id)arg1 deletedRecordsByDatabaseIdentifier:(id)arg2 carriedOverRecordsByDatabaseIdentifier:(id)arg3 conflictingRecordsByDatabaseIdentifier:(id)arg4 request:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000a4f26
- (void)_deleteLocalDataFromDeletedRecordsByDatabaseIdentifier:(id)arg1;	// IMP=0x00100000000a4060
- (_Bool)shouldContinueWithRequest:(id)arg1;	// IMP=0x00100000000a3dfc
- (void)coalesceApplePayRequest:(id)arg1 withNewApplePayRequest:(id)arg2;	// IMP=0x00100000000a3c10
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000000a3b7d
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;	// IMP=0x00100000000a3b65
- (void)_queue_setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a23ac
- (void)_queue_cloudStoreAccountChanged:(id)arg1;	// IMP=0x00100000000a1cea
- (id)cloudStoreSpecificKeysForItem:(id)arg1;	// IMP=0x00100000000a1907
- (_Bool)_queue_canInvalidateContainer;	// IMP=0x00100000000a16f7
- (_Bool)_queue_canInitializeContainer;	// IMP=0x00100000000a1350
- (_Bool)_queue_shouldFetchAndStoreCloudDataAtStartup;	// IMP=0x00100000000a123c
- (void)canOverrideChangeTokenForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a11a5
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;	// IMP=0x00100000000a102c
- (void)dealloc;	// IMP=0x00100000000a0fe0
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2 transactionProcessor:(id)arg3 accountManager:(id)arg4 paymentWebServiceCoordinator:(id)arg5 peerPaymentWebServiceCoordinator:(id)arg6 familyCircleManager:(id)arg7 spotlightIndexer:(id)arg8;	// IMP=0x00100000000a0964

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

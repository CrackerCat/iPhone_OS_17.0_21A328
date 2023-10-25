//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPassTileManager, PDPaymentTransactionProcessor, PDPaymentWebServiceCoordinator, PDPushNotificationManager, PDUserNotificationManager, PKSecureElement;

@interface PDNotificationServiceCoordinator : NSObject
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    PDPaymentTransactionProcessor *_paymentTransactionProcessor;	// 32 = 0x20
    PDPushNotificationManager *_pushNotificationManager;	// 40 = 0x28
    PKSecureElement *_secureElement;	// 48 = 0x30
    PDNetworkTaskManager *_taskManager;	// 56 = 0x38
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 64 = 0x40
    NSMutableDictionary *_taskToHandlerMap;	// 72 = 0x48
    NSMutableDictionary *_taskToResponseMap;	// 80 = 0x50
    NSMutableDictionary *_taskToErrorMap;	// 88 = 0x58
    PDPassTileManager *_passTileManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000945a6
@property(retain, nonatomic) PDPassTileManager *passTileManager; // @synthesize passTileManager=_passTileManager;
- (id)_partnerAccountIdentifierWithPaymentApplication:(id)arg1 passUniqueIdentifier:(id)arg2;	// IMP=0x00100000000944cd
- (id)_dictionaryKeyForTask:(id)arg1;	// IMP=0x00100000000944b4
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x0010000000094407
- (void)_recalculatePushTopics;	// IMP=0x00100000000943d5
- (void)_cancelAllTasksForPaymentApplication:(id)arg1 notificationService:(id)arg2;	// IMP=0x0010000000094040
- (_Bool)_processMessageDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4;	// IMP=0x0010000000093f7c
- (_Bool)_processTransactionDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4 isInitialUpdate:(_Bool)arg5;	// IMP=0x0010000000093bee
- (id)_updatePaymentTransaction:(id)arg1 withPassUniqueIdentifier:(id)arg2 forPaymentApplication:(id)arg3 insertionMode:(unsigned long long)arg4 performTruncation:(_Bool)arg5;	// IMP=0x0010000000093b6d
- (void)_isMerchantTokenTransaction:(id)arg1 forPass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000936c6
- (_Bool)_validatePlanResult:(id)arg1;	// IMP=0x0010000000093554
- (_Bool)_validateBalanceResult:(id)arg1;	// IMP=0x0010000000093371
- (void)removeLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x001000000009304a
- (void)updateLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x0010000000092c80
- (void)sendLowBalanceNotificationForBalance:(id)arg1 withReminder:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0010000000092a8c
- (void)sendLowBalanceNotificationIfNecessaryForUpdatedBalances:(id)arg1 startingBalances:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x001000000009244f
- (void)_transactionAuthenticationTaskSucceeded:(id)arg1 withResponse:(id)arg2;	// IMP=0x00100000000923cd
- (void)_notificationUpdatesTaskSucceeded:(id)arg1 withResult:(id)arg2;	// IMP=0x0010000000090b2b
- (void)_registrationTaskSucceeded:(id)arg1 withAuthenticationToken:(id)arg2;	// IMP=0x00100000000907fa
- (void)_clearStoredDataForPassUniqueIdentifier:(id)arg1 notificationService:(id)arg2;	// IMP=0x00100000000905f1
- (void)_performDeregistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3;	// IMP=0x001000000009042d
- (void)_performRegistrationTaskForPaymentApplication:(id)arg1 notificationService:(id)arg2 completionTask:(id)arg3;	// IMP=0x001000000008f775
- (void)_performRegistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3 isInitialRegistration:(_Bool)arg4;	// IMP=0x001000000008f473
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4 requestUpdateWhenAlreadyRegistered:(_Bool)arg5;	// IMP=0x001000000008efb7
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4;	// IMP=0x001000000008ef95
- (void)submitTransactionAuthenticationResultsData:(id)arg1 signature:(id)arg2 forPass:(id)arg3 transactionServiceIdentifier:(id)arg4 notificationService:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000008ea83
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x001000000008e5b9
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2;	// IMP=0x001000000008e5a4
- (void)taskRequestedReauthentication:(id)arg1;	// IMP=0x001000000008e304
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x001000000008e239
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x001000000008e10a
- (void)taskFailed:(id)arg1;	// IMP=0x001000000008e0f6
- (void)taskSucceeded:(id)arg1;	// IMP=0x001000000008e0df
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x001000000008e002
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x001000000008defb
- (void)handlePostBalanceTaskWithNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 accountIdentifier:(id)arg3 transactionSequenceNumber:(id)arg4 balance:(id)arg5;	// IMP=0x001000000008dad0
- (void)cancelAutoTopUpFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 accountIdentifier:(id)arg3 balance:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008d3ef
- (void)handleUpdateOfPass:(id)arg1 toPass:(id)arg2 oldNotificationService:(id)arg3 newNotificationService:(id)arg4;	// IMP=0x001000000008d133
- (void)handleDeletionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x001000000008d118
- (void)handleInsertionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x001000000008d0fd
- (void)handlePushDisabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x001000000008d0e2
- (void)handlePushEnabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x001000000008d0b7
- (id)pushNotificationTopics;	// IMP=0x001000000008ceba
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x001000000008cb12
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x001000000008c8ae
- (void)nukeTasks;	// IMP=0x001000000008c832
- (void)connect;	// IMP=0x001000000008c7cd
- (void)dealloc;	// IMP=0x001000000008c770
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 userNotificationManager:(id)arg3 paymentTransactionProcessor:(id)arg4 paymentWebServiceCoordinator:(id)arg5;	// IMP=0x001000000008c5f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperation, CATOperationQueue, DMDActivationPredicateObserverManager, DMDConfigurationDatabase, DMDEngineDatabaseInitializationOperation, DMDEventSubscriptionManager, DMDPolicyPersistence, NSError, NSMutableDictionary, NSString;
@protocol DMDConfigurationEngineDelegate, DMDDeviceStateProvider, DMDTaskOperationProvider;

@interface DMDConfigurationEngine : NSObject
{
    DMDPolicyPersistence *_policyPersistence;	// 8 = 0x8
    id <DMDConfigurationEngineDelegate> _delegate;	// 16 = 0x10
    NSObject<DMDDeviceStateProvider> *_deviceStateProvider;	// 24 = 0x18
    NSObject<DMDTaskOperationProvider> *_taskOperationProvider;	// 32 = 0x20
    DMDActivationPredicateObserverManager *_activationPredicateObserverManager;	// 40 = 0x28
    DMDConfigurationDatabase *_database;	// 48 = 0x30
    CATOperationQueue *_queue;	// 56 = 0x38
    NSError *_initializationError;	// 64 = 0x40
    DMDEngineDatabaseInitializationOperation *_databaseInitializationOperation;	// 72 = 0x48
    CATOperation *_initializationOperation;	// 80 = 0x50
    NSMutableDictionary *_organizationControllerByIdentifier;	// 88 = 0x58
    DMDEventSubscriptionManager *_eventSubscriptionManager;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000355e7
@property(retain, nonatomic) DMDEventSubscriptionManager *eventSubscriptionManager; // @synthesize eventSubscriptionManager=_eventSubscriptionManager;
@property(retain, nonatomic) NSMutableDictionary *organizationControllerByIdentifier; // @synthesize organizationControllerByIdentifier=_organizationControllerByIdentifier;
@property(retain, nonatomic) CATOperation *initializationOperation; // @synthesize initializationOperation=_initializationOperation;
@property(retain, nonatomic) DMDEngineDatabaseInitializationOperation *databaseInitializationOperation; // @synthesize databaseInitializationOperation=_databaseInitializationOperation;
@property(retain) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) CATOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) DMDConfigurationDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) DMDActivationPredicateObserverManager *activationPredicateObserverManager; // @synthesize activationPredicateObserverManager=_activationPredicateObserverManager;
@property(retain, nonatomic) NSObject<DMDTaskOperationProvider> *taskOperationProvider; // @synthesize taskOperationProvider=_taskOperationProvider;
@property(retain, nonatomic) NSObject<DMDDeviceStateProvider> *deviceStateProvider; // @synthesize deviceStateProvider=_deviceStateProvider;
@property(nonatomic) __weak id <DMDConfigurationEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) DMDPolicyPersistence *policyPersistence; // @synthesize policyPersistence=_policyPersistence;
- (void)delegateWillSuspend;	// IMP=0x001000000003544a
- (void)delegateDidResume;	// IMP=0x00100000000353ed
- (void)registerConfigurationSourceOperation:(id)arg1 didUpdateRegistrationForConfigurationSource:(id)arg2;	// IMP=0x0010000000034e9f
- (id)engineProcessingOperation:(id)arg1 assetResolverForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0010000000034dca
- (id)engineProcessingOperation:(id)arg1 enqueuedOperationsForOrganizationWithIdentifier:(id)arg2;	// IMP=0x0010000000034d7a
- (void);	// IMP=0x001000000003447f
- (void)configurationSourceController:(id)arg1 fetchStatusUpdatesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000331e8
- (void)activationPredicateObserverManager:(id)arg1 didObserveChangeForPredicateWithIdentifier:(id)arg2;	// IMP=0x00100000000331a4
- (void)_cleanupOrphanedPolicies;	// IMP=0x001000000003277b
- (void)updateEventSubscriptions;	// IMP=0x00100000000324fe
- (void)updateOrganizationControllers;	// IMP=0x0010000000031f03
- (void)_updateOrganizationControllers;	// IMP=0x0010000000031ee5
- (void)enqueueOperations:(id)arg1;	// IMP=0x0010000000031c7b
- (void)enqueueOperation:(id)arg1;	// IMP=0x0010000000031ad1
- (void)enqueueDeclarationProcessingOperationIfNeeded;	// IMP=0x00100000000314f8
- (void)declarationModificationOperationDidFinish:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000031477
- (void)enqueueDatabaseModificationOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000313ef
- (void)databaseInitializationOperationDidFinish;	// IMP=0x0010000000031173
- (void)initializationOperationDidFinish:(id)arg1;	// IMP=0x0010000000031100
- (void)sendEvents:(id)arg1 organizationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000030868
- (void)handleRemoveSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030421
- (void)handleInstallSubscriptionRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ff05
- (void)handleUpdateCommandsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fdf0
- (void)refreshStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fbd6
- (void)processStatusForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fa06
- (void)processDeclarationsForOrganizationWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f36f
- (void)handleFetchDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002f1aa
- (void)handleUpdateDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002efe8
- (void)handleSetDeclarationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ee26
- (void)handleConfigurationSourceRegistrationRequest:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002eccb
- (void)handleFetchStreamEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e7a7
- (void)handleFetchConfigurationOrganizationsRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e428
- (void)handleDeactivateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e2c6
- (void)handleCreateConfigurationOrganizationRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002e108
- (void)suspend;	// IMP=0x001000000002df0a
- (void)resume;	// IMP=0x001000000002dcf9
@property(readonly, copy) NSString *description;
- (id)initWithDatabase:(id)arg1 policyPersistence:(id)arg2 activationManager:(id)arg3;	// IMP=0x001000000002d41e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

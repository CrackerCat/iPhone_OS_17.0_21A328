//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPDDomain, FPDExtensionSession, FPDProvider, FPDServer, FPDXPCDomainServicerLifetimeExtender, NSString, NSXPCConnection;
@protocol FPProgressProtocol, OS_dispatch_queue, OS_os_log, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface FPDXPCDomainServicer : NSObject
{
    FPDServer *_server;	// 8 = 0x8
    FPDProvider *__provider;	// 16 = 0x10
    FPDDomain *_domain;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_requestQueue;	// 40 = 0x28
    id _activePresenterObservation;	// 48 = 0x30
    FPDXPCDomainServicerLifetimeExtender *_lifetimeExtender;	// 56 = 0x38
    _Bool _isALifetimerExtender;	// 64 = 0x40
    NSObject<OS_os_transaction> *_serviceTransaction;	// 72 = 0x48
    NSObject<OS_os_log> *_log;	// 80 = 0x50
    NSString *_providerDomainID;	// 88 = 0x58
    id <FPProgressProtocol> _uploadProxy;	// 96 = 0x60
    id <FPProgressProtocol> _downloadProxy;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000012818
@property(retain, nonatomic) id <FPProgressProtocol> downloadProxy; // @synthesize downloadProxy=_downloadProxy;
@property(retain, nonatomic) id <FPProgressProtocol> uploadProxy; // @synthesize uploadProxy=_uploadProxy;
@property(readonly, nonatomic) NSString *providerDomainID; // @synthesize providerDomainID=_providerDomainID;
- (void)_t_setFilePresenterObserver:(id)arg1;	// IMP=0x00000000000122bb
- (id)description;	// IMP=0x00000000000121e8
- (void)getDiagnosticAttributesForItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000011a65
- (void)startAccessingServiceWithName:(id)arg1 itemID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000010eb2
- (void)subscribeToDownloadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000108f4
- (void)subscribeToUploadProgressUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000010336
- (void)runTestingOperations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000fa7d
- (void)listAvailableTestingOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f1f9
- (void)temporaryDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000eb18
- (void)signalErrorResolved:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000e64b
- (void)waitForStabilizationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000e200
- (void)waitForChangesOnItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000dc3a
- (void)currentPendingSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d787
- (void)enumeratePendingSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d143
- (void)currentMaterializedSetSyncAnchorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000cd39
- (void)enumerateMaterializedSetFromSyncAnchor:(id)arg1 suggestedBatchSize:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c75c
- (void)materializeItemWithIdentifier:(id)arg1 requestedRange:(struct _NSRange)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c056
- (void)evictItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bb68
- (void)reimportItemsBelowItemWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b6cc
- (void)ingestFromCacheItemWithIdentifier:(id)arg1 requestedFields:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b09a
- (void)setDomainEjectable:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ac22
- (void)resolveItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a669
- (void)didChangeItemID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a1c2
- (void)deleteSearchableItemsWithSpotlightDomainIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009e82
- (void)stopExtendingLifetime;	// IMP=0x0000000000009e70
- (void)_registerLifetimeExtension;	// IMP=0x0000000000009e1e
- (void)_unregisterLifetimeExtension;	// IMP=0x0000000000009dc7
- (void)startExtendingLifetime;	// IMP=0x0000000000009ce0
- (id)newFileProviderProxy;	// IMP=0x0000000000009bc2
@property(readonly, nonatomic) FPDExtensionSession *sessionOrNil;
@property(readonly, nonatomic) FPDDomain *domainOrNil;
- (id)providerOrNil;	// IMP=0x0000000000009935
- (id)__providerIfExists;	// IMP=0x00000000000098c1
- (int)pid;	// IMP=0x00000000000098ab
- (void)dealloc;	// IMP=0x000000000000986d
- (void)invalidate;	// IMP=0x00000000000097ca
- (id)initWithServer:(id)arg1 providerDomainID:(id)arg2 domain:(id)arg3 connection:(id)arg4;	// IMP=0x000000000000955b

@end

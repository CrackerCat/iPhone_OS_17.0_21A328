//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCContentManifest, FCKeyedOperationQueue, NDContentArchiveStore, NDDownloadOperationFactory, NDDownloadRequest, NDDownloadServiceStore, NSArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;
@protocol FCContentContext, NDDownloadConsumer, OS_dispatch_group, OS_dispatch_queue;

@interface NDContentDownloadService : NSObject
{
    int _batteryStateNotificationToken;	// 8 = 0x8
    NSArray *_downloadRequests;	// 16 = 0x10
    NSXPCConnection *_currentConnection;	// 24 = 0x18
    NDDownloadServiceStore *_store;	// 32 = 0x20
    id <FCContentContext> _contentContext;	// 40 = 0x28
    NDDownloadOperationFactory *_operationFactory;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_prewarmGroup;	// 56 = 0x38
    FCKeyedOperationQueue *_downloadKeyedOperationQueue;	// 64 = 0x40
    NDContentArchiveStore *_contentArchiveStore;	// 72 = 0x48
    NDDownloadRequest *_activeDownloadRequest;	// 80 = 0x50
    FCContentManifest *_activeDownloadManifest;	// 88 = 0x58
    double _activeDownloadProgress;	// 96 = 0x60
    id <NDDownloadConsumer> _currentConsumer;	// 104 = 0x68
    NSMutableSet *_downloadedContentIDs;	// 112 = 0x70
    NSMutableDictionary *_interestTokensByContentID;	// 120 = 0x78
    NSMutableDictionary *_errorsByContentID;	// 128 = 0x80
}

+ (id)_downloadQueue;	// IMP=0x0020000000007d9d
+ (id)_cacheLookupQueue;	// IMP=0x0010000000007d0b
- (void).cxx_destruct;	// IMP=0x0020000000007f5c
@property(retain, nonatomic) NSMutableDictionary *errorsByContentID; // @synthesize errorsByContentID=_errorsByContentID;
@property(retain, nonatomic) NSMutableDictionary *interestTokensByContentID; // @synthesize interestTokensByContentID=_interestTokensByContentID;
@property(retain, nonatomic) NSMutableSet *downloadedContentIDs; // @synthesize downloadedContentIDs=_downloadedContentIDs;
@property(retain, nonatomic) id <NDDownloadConsumer> currentConsumer; // @synthesize currentConsumer=_currentConsumer;
@property(nonatomic) double activeDownloadProgress; // @synthesize activeDownloadProgress=_activeDownloadProgress;
@property(copy, nonatomic) FCContentManifest *activeDownloadManifest; // @synthesize activeDownloadManifest=_activeDownloadManifest;
@property(copy, nonatomic) NDDownloadRequest *activeDownloadRequest; // @synthesize activeDownloadRequest=_activeDownloadRequest;
@property(readonly, nonatomic) NDContentArchiveStore *contentArchiveStore; // @synthesize contentArchiveStore=_contentArchiveStore;
@property(readonly, nonatomic) int batteryStateNotificationToken; // @synthesize batteryStateNotificationToken=_batteryStateNotificationToken;
@property(readonly, nonatomic) FCKeyedOperationQueue *downloadKeyedOperationQueue; // @synthesize downloadKeyedOperationQueue=_downloadKeyedOperationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *prewarmGroup; // @synthesize prewarmGroup=_prewarmGroup;
@property(readonly, nonatomic) NDDownloadOperationFactory *operationFactory; // @synthesize operationFactory=_operationFactory;
@property(readonly, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) NDDownloadServiceStore *store; // @synthesize store=_store;
@property(nonatomic) __weak NSXPCConnection *currentConnection; // @synthesize currentConnection=_currentConnection;
@property(retain, nonatomic) NSArray *downloadRequests; // @synthesize downloadRequests=_downloadRequests;
- (void)_recordWhetherTasksAreUnfinished;	// IMP=0x0010000000007bb2
- (void)_pruneUnneededInterestTokens;	// IMP=0x00100000000078b4
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x001000000000784c
- (_Bool)_canRetryDownloadWithError:(id)arg1;	// IMP=0x00100000000077ec
- (id)_unfinishedRequests;	// IMP=0x00100000000075f4
- (id)_downloadKeyQueue;	// IMP=0x0010000000006f98
- (void)_revisitDownloadQueue;	// IMP=0x0010000000006c00
- (void)_catchUpConsumer;	// IMP=0x0010000000005feb
- (void)_prewarmFromLastKnownRequests;	// IMP=0x0010000000005851
- (void)batteryStateDidChange;	// IMP=0x00100000000057f4
- (void)powerStateDidChange;	// IMP=0x0010000000005797
- (void)networkReachabilityDidChange:(id)arg1;	// IMP=0x0010000000005785
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004793
- (void)ping;	// IMP=0x0010000000004746
- (void)flushCacheLookupsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000044d6
- (void)registerDownloadConsumer:(id)arg1;	// IMP=0x0010000000003c1a
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcMessageQueue;
- (void)dealloc;	// IMP=0x0010000000003bc2
- (void)_initMain;	// IMP=0x0010000000003a75
- (id)initWithContentContext:(id)arg1;	// IMP=0x0010000000003875

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject
{
    NSString *_listenerGUID;	// 8 = 0x8
    NSMutableDictionary *_listeners;	// 16 = 0x10
    NSMutableDictionary *_idStatusCache;	// 24 = 0x18
    NSMutableDictionary *_transactionIDToBlockMap;	// 32 = 0x20
    NSObject<OS_xpc_object> *_connection;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSString *_serviceToken;	// 64 = 0x40
    NSMapTable *_delegateToInfo;	// 72 = 0x48
    NSMutableDictionary *_listenerIDToServicesMap;	// 80 = 0x50
    id _delegateContext;	// 88 = 0x58
}

+ (id)_createXPCConnectionOnQueue:(id)arg1;	// IMP=0x00100000000dc63a
+ (void)initialize;	// IMP=0x00100000000d8c08
- (void).cxx_destruct;	// IMP=0x00000000000f0419
- (void)ktPeerVerificationResultsUpdated:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000f0166
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000efe1f
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;	// IMP=0x00000000000ef8f1
- (_Bool)_flushQueryCacheForService:(id)arg1;	// IMP=0x00000000000ef7a9
- (_Bool)_warmupQueryCacheForService:(id)arg1;	// IMP=0x00000000000ef507
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000ef4c3
- (_Bool)_hasCacheForService:(id)arg1;	// IMP=0x00000000000ef4b5
- (_Bool)idInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000eec6b
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlockWithError:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eec49
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eec27
- (_Bool)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 waitForReply:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 completionBlockWithError:(CDUnknownBlockType)arg7;	// IMP=0x00000000000ee043
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000ede8c
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000edd45
- (_Bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eda6e
- (_Bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000eda39
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ed733
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000ed6f3
- (_Bool)_sync_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ed6cd
- (_Bool)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ed586
- (_Bool)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ed552
- (_Bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 queue:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000000ed1a7
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x00000000000ec37c
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;	// IMP=0x00000000000ec1b5
- (void)_callDelegatesForService:(id)arg1 destinationToVerifierResult:(id)arg2;	// IMP=0x00000000000ebe27
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;	// IMP=0x00000000000ebd6c
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;	// IMP=0x00000000000ebb09
- (void)_purgeIDStatusCache;	// IMP=0x00000000000eba31
- (void)_purgeIDStatusCacheAfter:(double)arg1;	// IMP=0x00000000000eb8c1
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;	// IMP=0x00000000000eb684
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;	// IMP=0x00000000000eb5b3
- (id)_cacheForService:(id)arg1;	// IMP=0x00000000000eb59d
- (_Bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;	// IMP=0x00000000000eb476
- (void)dealloc;	// IMP=0x00000000000eb38e
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;	// IMP=0x00000000000eb201
- (id)init;	// IMP=0x00000000000eb145
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000421f2
- (void)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x0000000000041ea1
- (void)daemonDisconnected;	// IMP=0x0000000000041e8f
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000041675
- (void)_connect;	// IMP=0x0000000000041627
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000413b2
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000004133b
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000004122f
- (void)___oldDealloc;	// IMP=0x00000000000411cd
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(_Bool)arg5;	// IMP=0x00000000000dc074
- (void)_requestIDInfoForDestinations:(id)arg1 service:(id)arg2 infoTypes:(unsigned long long)arg3 options:(id)arg4 listenerID:(id)arg5 queue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000db4f8
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 waitForReply:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000daa1b
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 forceRefresh:(_Bool)arg4 bypassLimit:(_Bool)arg5 listenerID:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d9eb4
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 respectExpiry:(_Bool)arg4 listenerID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d9555
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d8d9a
- (void)_disconnectFromQueryService;	// IMP=0x00000000000d8c93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

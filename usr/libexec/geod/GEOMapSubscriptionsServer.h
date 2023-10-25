//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSMapTable, NSMutableDictionary, NSObject, NSString, geo_isolater;
@protocol OS_dispatch_queue;

@interface GEOMapSubscriptionsServer : GEOServer
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    geo_isolater *_stateObserversLock;	// 16 = 0x10
    NSMapTable *_stateObserverForPeer;	// 24 = 0x18
    geo_isolater *_sizeEstimationRequestsIsolation;	// 32 = 0x20
    NSMutableDictionary *_sizeEstimationPendingRequests;	// 40 = 0x28
}

+ (id)possibleXPCActivityIdentifiers;	// IMP=0x002000000001618e
+ (id)identifier;	// IMP=0x0010000000016181
- (void).cxx_destruct;	// IMP=0x001000000002758e
- (void)broadcastState:(id)arg1 forIdentifier:(id)arg2 toObservers:(id)arg3;	// IMP=0x001000000002728c
- (void)subscriptionManager:(id)arg1 didUpdateState:(id)arg2 forIdentifier:(id)arg3;	// IMP=0x00100000000270cf
- (void)_stopObservingStatesOnBehalfOfPeer:(id)arg1;	// IMP=0x0010000000026fb6
- (void)_stopObservingStateForIdentifier:(id)arg1 onBehalfOfPeer:(id)arg2;	// IMP=0x0010000000026c03
- (id)_startObservingStateForIdentifier:(id)arg1 onBehalfOfPeer:(id)arg2;	// IMP=0x001000000002688a
- (void)stopObservingStateForSubscriptionsWithRequest:(id)arg1;	// IMP=0x0010000000026632
- (void)startObservingStateForSubscriptionsWithRequest:(id)arg1;	// IMP=0x00100000000261dc
- (void)fetchSubscriptionsForSyncToWatchWithRequest:(id)arg1;	// IMP=0x001000000002609c
- (void)calculateTotalOfflineDataSizeWithRequest:(id)arg1;	// IMP=0x0010000000025ec9
- (void)cancelEstimatedSizeRequestWithRequest:(id)arg1;	// IMP=0x0010000000025b0a
- (void)determineEstimatedSizeWithRequest:(id)arg1;	// IMP=0x0010000000025596
- (void)fetchLastUpdatedDateForOfflineSubscriptionsWithRequest:(id)arg1;	// IMP=0x0010000000025420
- (void);	// IMP=0x001000000002538a
- (void)cancelDownloadForSubscriptionsWithRequest:(id)arg1;	// IMP=0x001000000002528a
- (void)startDownloadForSubscriptionsWithRequest:(id)arg1;	// IMP=0x001000000002516c
- (void)checkContainmentForRegionWithRequest:(id)arg1;	// IMP=0x0010000000024be0
- (void)fetchStateForSubscriptionWithRequest:(id)arg1;	// IMP=0x00100000000249d3
- (void)removeSubscriptionWithRequest:(id)arg1;	// IMP=0x00100000000246b8
- (void)addSubscriptionWithRequest:(id)arg1;	// IMP=0x0010000000023d3a
- (void)fetchSubscriptionsWithRequest:(id)arg1;	// IMP=0x0010000000023844
- (void)peerDidDisconnect:(id)arg1;	// IMP=0x00100000000237dd
- (void)runXPCActivity:(id)arg1;	// IMP=0x001000000002362e
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000023529
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3;	// IMP=0x001000000001619b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

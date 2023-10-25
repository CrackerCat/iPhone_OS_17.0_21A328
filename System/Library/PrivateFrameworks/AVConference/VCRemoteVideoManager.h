//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCRemoteVideoManagerDelegate, VCRemoteVideoManagerStreamOutputDelegate;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject
{
    NSMutableDictionary *_queuesForStreamTokenDict;	// 8 = 0x8
    NSMutableDictionary *_stateCacheForStreamTokenDict;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;	// 32 = 0x20
    id <VCRemoteVideoManagerDelegate> _delegate;	// 40 = 0x28
    id _streamOutputDelegate;	// 48 = 0x30
    struct tagVCRemoteVideoManagerDelegateRealtimeInstanceVTable _delegateFunctions;	// 56 = 0x38
}

@property(nonatomic) id <VCRemoteVideoManagerStreamOutputDelegate> streamOutputDelegate; // @synthesize streamOutputDelegate=_streamOutputDelegate;
@property(nonatomic) struct tagVCRemoteVideoManagerDelegateRealtimeInstanceVTable delegateFunctions; // @synthesize delegateFunctions=_delegateFunctions;
- (void)registerBlocksForService;	// IMP=0x00000000002c74d9
- (void)dispatchedNotifyCachedStateForStreamToken:(id)arg1;	// IMP=0x00000000002c70f8
- (void)notifyCachedStateForStreamToken:(id)arg1;	// IMP=0x00000000002c7069
- (id)setLayerBoundsForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c6f11
- (id)contextIdForStreamTokenWithArguments:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002c6cc1
- (void)cleanupDictionaries;	// IMP=0x00000000002c6c86
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x00000000002c6c7e
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6bde
- (void)dispatchedConnectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6a9a
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6a03
- (void)dispatchedRemoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6825
- (void)networkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6787
- (void)dispatchNetworkQualityDidDegrade:(_Bool)arg1 isLocalNetworkQualityDegraded:(_Bool)arg2 streamToken:(long long)arg3;	// IMP=0x00000000002c6635
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c659e
- (void)dispatchedRemoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c63c0
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c6329
- (void)dispatchedRemoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c614b
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c60b4
- (void)dispatchedRemoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;	// IMP=0x00000000002c5ed6
- (void)releaseQueueForStreamToken:(long long)arg1;	// IMP=0x00000000002c550e
- (_Bool)doesQueueExistForStreamToken:(id)arg1;	// IMP=0x00000000002c5422
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;	// IMP=0x00000000002c541a
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;	// IMP=0x00000000002c5405
@property(nonatomic) id <VCRemoteVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000002c534c
- (id)init;	// IMP=0x00000000002c5292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

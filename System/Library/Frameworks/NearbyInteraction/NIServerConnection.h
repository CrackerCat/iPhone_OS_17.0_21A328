//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableSet, NSUUID;
@protocol OS_dispatch_queue, OS_os_log, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NIServerConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _resumed;	// 16 = 0x10
    _Bool _invalidated;	// 17 = 0x11
    NSObject<OS_xpc_object> *_conn;	// 24 = 0x18
    NSObject<OS_os_log> *_log;	// 32 = 0x20
    NSData *_tokenData;	// 40 = 0x28
    NSMutableSet *_peerTokens;	// 48 = 0x30
    NSMutableDictionary *_simulators;	// 56 = 0x38
    _Bool _xpcActive;	// 64 = 0x40
    _Bool _shouldInvalidateSessionOnXPCError;	// 65 = 0x41
    _Bool _isInterruptionReason_ApplicationNotVisible;	// 66 = 0x42
    _Bool _isDistanceUpdateRequestScheduled;	// 67 = 0x43
    _Bool _isAllowedToSimulateDirection;	// 68 = 0x44
    CDUnknownBlockType _interruptionHandler;	// 72 = 0x48
    CDUnknownBlockType _invalidationHandler;	// 80 = 0x50
    NSUUID *_sessionID;	// 88 = 0x58
    id _exportedObject;	// 96 = 0x60
}

+ (id)createOneShotConnectionAndResume:(_Bool)arg1;	// IMP=0x00600000000268c5
- (void).cxx_destruct;	// IMP=0x000000000002c02c
@property(retain) id exportedObject; // @synthesize exportedObject=_exportedObject;
@property(readonly) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
- (double)simulateErrorWithMaximum:(double)arg1 sigma:(double)arg2 maximum:(double)arg3;	// IMP=0x000000000002bf54
- (double)randomUnivariateGaussian:(double)arg1 sigma:(double)arg2;	// IMP=0x000000000002bec8
- (double)simulateAngleError;	// IMP=0x000000000002bebf
- (double)simulateRangeError;	// IMP=0x000000000002beb6
- (void)setRangingPriorityPolicy:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002be5d
- (void)getRangingPriorityPolicy:(CDUnknownBlockType)arg1;	// IMP=0x000000000002be02
- (void)processBluetoothEventWithType:(long long)arg1 btcClockTicks:(unsigned long long)arg2 eventCounter:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000002bda9
- (void)processDCKMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bd4e
- (void)_removeObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bd3e
- (void)_addObject:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bd2e
- (void)notifySystemShutdownWithReason:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002bd1e
- (void)generateDiscoveryToken;	// IMP=0x000000000002bb79
- (void)pauseOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ba51
- (void)pause:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b9a7
- (void)runWithConfigurationOnQueue:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b436
- (void)runWithConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b2ee
- (void)activateOnQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000002aeaf
- (void)activate:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ae05
- (void)_createAndActivateXPCConnectionToSimulatorIfNeededWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a60c
- (void)queryDeviceCapabilities:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a42f
- (id)_internalDeviceCapabilities;	// IMP=0x0000000000029794
- (void)handleMessageFromSimulator:(id)arg1;	// IMP=0x000000000002949b
- (void)handleErrorMessageFromSimulator:(id)arg1;	// IMP=0x0000000000029424
- (void)handleEventFromSimulatorOnQueue:(id)arg1;	// IMP=0x00000000000291d7
- (void)handleDeviceShutdown:(id)arg1;	// IMP=0x0000000000028f4f
- (void)handleNewToken:(id)arg1;	// IMP=0x0000000000028d66
- (void)handleNewDevice:(id)arg1;	// IMP=0x0000000000028b7d
- (void)handleCancelToken:(id)arg1;	// IMP=0x0000000000028a6b
- (void)removeFromPeerTokensAndNotifyIfNecessary:(id)arg1;	// IMP=0x000000000002889d
- (id)nearbyObjectFromBase64EncodedString:(id)arg1;	// IMP=0x0000000000028810
- (id)discoveryTokenFromBase64EncodedString:(id)arg1;	// IMP=0x0000000000028780
- (void)requestDistanceUpdate;	// IMP=0x000000000002852c
- (void)handleDistanceUpdate:(id)arg1;	// IMP=0x000000000002820c
- (void)_sendDistanceUpdateForRequestedPeer:(id)arg1 forPeer:(id)arg2;	// IMP=0x000000000002798e
- (id)_findRequestedPeerDevicesInUpdates:(id)arg1;	// IMP=0x0000000000027632
- (id)_findSelfDeviceInUpdates:(id)arg1;	// IMP=0x000000000002723c
- (_Bool)areContinuousUpdatesRequired;	// IMP=0x0000000000026fb9
- (void)handleXPCConnectionInvalid;	// IMP=0x0000000000026f82
- (void)handleXPCConnectionTermination;	// IMP=0x0000000000026f68
- (void)handleXPCConnectionInterrupted;	// IMP=0x0000000000026f4e
- (void)handleXPCConnectionError;	// IMP=0x0000000000026f34
- (CDStruct_6ad76789)auditTokenForConnection;	// IMP=0x0000000000026f21
- (void)invalidate;	// IMP=0x0000000000026d36
- (void)resume;	// IMP=0x0000000000026d20
- (id)findUDIDForToken:(id)arg1;	// IMP=0x0000000000026ae6
- (void)_simXPCCancelAndInvalidateSessionOnError:(_Bool)arg1;	// IMP=0x0000000000026a8d
- (void)_simXPCActivateIfAllowed;	// IMP=0x0000000000026a35
- (void)_simXPCResumeIfAllowed;	// IMP=0x00000000000269dd
- (void)_simXPCSuspendIfAllowed;	// IMP=0x0000000000026985
- (id)synchronousRemoteObjectProxy;	// IMP=0x00000000000268bc
- (id)remoteObjectProxy;	// IMP=0x00000000000268b3
- (void)handleAppNotification:(id)arg1;	// IMP=0x000000000002651e
- (void)dealloc;	// IMP=0x00000000000264de
- (id)initWithSessionID:(id)arg1 queue:(id)arg2 exportedObject:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000000002624f

@end

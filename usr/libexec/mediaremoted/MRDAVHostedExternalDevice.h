//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVDistantEndpoint, MRAVRoutingDiscoverySession, MRDConnectionLifetimeController, MRExternalDevice, MRExternalOutputContextDataSource, MROrigin, NSArray, NSDate, NSError, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface MRDAVHostedExternalDevice : NSObject
{
    _Bool _useOutputDeviceCache;	// 8 = 0x8
    _Bool _tombstoned;	// 9 = 0x9
    NSArray *_subscribedPlayerPaths;	// 16 = 0x10
    MRExternalDevice *_externalDevice;	// 24 = 0x18
    MRAVDistantEndpoint *_endpoint;	// 32 = 0x20
    NSXPCListener *_xpcListener;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_externalDeviceCallbackQueue;	// 56 = 0x38
    NSMutableSet *_mutableExternalDeviceClients;	// 64 = 0x40
    MRExternalOutputContextDataSource *_externalOutputContext;	// 72 = 0x48
    MRAVRoutingDiscoverySession *_silentDiscoverySession;	// 80 = 0x50
    NSError *_canMigrateToLocalEndpointError;	// 88 = 0x58
    MRDConnectionLifetimeController *_lifetimeController;	// 96 = 0x60
    NSDate *_canMigrateEvaluationTimestamp;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000a6993
@property(retain, nonatomic) NSDate *canMigrateEvaluationTimestamp; // @synthesize canMigrateEvaluationTimestamp=_canMigrateEvaluationTimestamp;
@property(retain, nonatomic) MRDConnectionLifetimeController *lifetimeController; // @synthesize lifetimeController=_lifetimeController;
@property(retain, nonatomic) NSError *canMigrateToLocalEndpointError; // @synthesize canMigrateToLocalEndpointError=_canMigrateToLocalEndpointError;
@property(retain, nonatomic) MRAVRoutingDiscoverySession *silentDiscoverySession; // @synthesize silentDiscoverySession=_silentDiscoverySession;
@property(nonatomic) _Bool tombstoned; // @synthesize tombstoned=_tombstoned;
@property(nonatomic) _Bool useOutputDeviceCache; // @synthesize useOutputDeviceCache=_useOutputDeviceCache;
@property(readonly, nonatomic) MRExternalOutputContextDataSource *externalOutputContext; // @synthesize externalOutputContext=_externalOutputContext;
@property(retain, nonatomic) NSMutableSet *mutableExternalDeviceClients; // @synthesize mutableExternalDeviceClients=_mutableExternalDeviceClients;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *externalDeviceCallbackQueue; // @synthesize externalDeviceCallbackQueue=_externalDeviceCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(readonly, nonatomic) MRAVDistantEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSArray *subscribedPlayerPaths; // @synthesize subscribedPlayerPaths=_subscribedPlayerPaths;
- (_Bool)_onSerialQueue_isEndpointsDesignatedGroupLeader:(id)arg1;	// IMP=0x00100000000a6801
- (_Bool)_endpointIsSolo:(id)arg1;	// IMP=0x00100000000a67e4
- (_Bool)_endpointSupportsVolumeControl:(id)arg1;	// IMP=0x00100000000a672e
- (_Bool)_endpointShouldNotifyClientsOfTopologyChanges:(id)arg1;	// IMP=0x00100000000a6711
- (_Bool)_endpointShouldPostVolumeNotifications:(id)arg1 outputDevice:(id)arg2;	// IMP=0x00100000000a65fa
- (void)_onSerialQueue_reevaluateVolumeControlCapabilitiesForEndpoint:(id)arg1;	// IMP=0x00100000000a5fba
- (void)_maybePostEndpointDidRemoveOutputDevice:(id)arg1;	// IMP=0x00100000000a5e95
- (void)_maybePostEndpointDidChangeOutputDevice:(id)arg1;	// IMP=0x00100000000a5d70
- (void)_maybePostEndpointDidAddOutputDevice:(id)arg1;	// IMP=0x00100000000a5c4b
- (void)_maybePostVolumeIsMutedDidChange:(_Bool)arg1 outputDevice:(id)arg2;	// IMP=0x00100000000a5b11
- (void)_maybePostVolumeDidChange:(float)arg1 outputDevice:(id)arg2;	// IMP=0x00100000000a59df
- (void)_maybePostVolumeControlCapabilitiesDidChange:(unsigned int)arg1 outputDevice:(id)arg2;	// IMP=0x00100000000a58a6
- (void)_reloadHostedExternalDeviceSubscribedPlayerPaths;	// IMP=0x00100000000a55b2
- (void)_reloadHostedExternalDeviceNotifications;	// IMP=0x00100000000a5332
- (void)_reloadHostedExternalDeviceCallbacks;	// IMP=0x00100000000a4fdd
- (void)_reloadEndpoint;	// IMP=0x00100000000a4ee4
- (void)registerForOutputContextNotifications:(id)arg1;	// IMP=0x00100000000a4db4
- (void)_initializeExternalDevice:(id)arg1;	// IMP=0x00100000000a3fb2
- (id)_connectingExternalDeviceClients;	// IMP=0x00100000000a3f46
- (id)_connectedExternalDeviceClients;	// IMP=0x00100000000a3eda
- (id)_mutableExternalDeviceClientsWithRegisteredNotification:(unsigned long long)arg1;	// IMP=0x00100000000a3e20
- (id)_mutableExternalDeviceClientsWithRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x00100000000a3d63
- (id)_allExternalDeviceClients;	// IMP=0x00100000000a3c41
- (id)_externalDeviceClientForConnection:(id)arg1;	// IMP=0x00100000000a3988
- (void)_externalDeviceClientDidInvalidate:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000a3685
- (void)discoveryOutputDevicesChanged:(id)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000a367f
- (void)hostedExternalDeviceDidRemoveOutputDevice:(id)arg1;	// IMP=0x00100000000a349a
- (void)hostedExternalDeviceDidChangeOutputDevice:(id)arg1;	// IMP=0x00100000000a32b5
- (void)hostedExternalDeviceDidAddOutputDevice:(id)arg1;	// IMP=0x00100000000a30d0
- (void)hostedExternalDeviceIsMutedDidChange:(_Bool)arg1 forOutputDevice:(id)arg2;	// IMP=0x00100000000a2ef3
- (void)hostedExternalDeviceVolumeDidChange:(float)arg1 forOutputDevice:(id)arg2;	// IMP=0x00100000000a2d11
- (void)hostedExternalDeviceVolumeCapabilitiesDidChange:(unsigned int)arg1 forOutputDevice:(id)arg2;	// IMP=0x00100000000a2b1c
- (void)hostedExternalDeviceEndpointDidChange:(id)arg1;	// IMP=0x00100000000a2832
- (void)hostedExternalDeviceDidReceiveCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000a262c
- (void)hostedExternalDeviceDeviceInfoDidChange:(id)arg1;	// IMP=0x00100000000a2472
- (void)hostedExternalDeviceConnectionStateDidChange:(unsigned int)arg1 withError:(id)arg2;	// IMP=0x00100000000a220d
- (void)outputContextDataSourceDidRemoveOutputDevice:(id)arg1;	// IMP=0x00100000000a216a
- (void)outputContextDataSourceDidChangeOutputDevice:(id)arg1;	// IMP=0x00100000000a20c7
- (void)outputContextDataSourceDidAddOutputDevice:(id)arg1;	// IMP=0x00100000000a2024
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeMuted:(id)arg1;	// IMP=0x00100000000a1f28
- (void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1;	// IMP=0x00100000000a1e27
- (void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1;	// IMP=0x00100000000a1d2c
- (void)_processCanMigrateToLocalEndpointEvent:(id)arg1 timestamp:(id)arg2 error:(id)arg3;	// IMP=0x00100000000a191a
- (void)_handleDeviceInfoDidChange:(id)arg1;	// IMP=0x00100000000a16ed
- (void)_handleMaybeCanMigrateToLocalEndpointDidChange:(id)arg1;	// IMP=0x00100000000a0daf
- (void)_handleExternalDeviceConnectionDidChange:(id)arg1;	// IMP=0x00100000000a0ab6
- (void)disconnectOrigin:(id)arg1;	// IMP=0x00100000000a0a40
@property(readonly, nonatomic) MROrigin *origin;
- (void)expanseManagerTelevisionDidLeaveSession:(id)arg1;	// IMP=0x00100000000a0950
- (void)expanseManagerTelevisionDidJoinSession:(id)arg1;	// IMP=0x00100000000a08b0
- (void)getDeviceInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a0826
- (void)getExternalOutputContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a0814
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x00100000000a05fe
- (void)getPersonalOutputDevices:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a057c
- (void)sendButtonEventWithUsagePage:(unsigned int)arg1 usage:(unsigned int)arg2 down:(_Bool)arg3;	// IMP=0x00100000000a0519
- (void)pingWithTimeout:(double)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a02b7
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000a0142
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009ff2b
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterDeviceUIDs:(id)arg4 removingClusterDeviceUIDs:(id)arg5 settingClusterDeviceUIDs:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000009fc4f
- (void)setConversationDetectionEnabled:(_Bool)arg1 outputDeviceUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fbba
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009fb15
- (void)muteOutputDeviceVolume:(_Bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009f0c4
- (void)adjustOutputDeviceVolume:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009e651
- (void)outputDeviceVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e361
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009d90c
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d631
- (void)disconnect:(id)arg1;	// IMP=0x001000000009d48d
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cbca
- (void)setNotifications:(unsigned long long)arg1;	// IMP=0x001000000009c94f
- (unsigned long long)notifications;	// IMP=0x001000000009c8d4
- (void)setRegisteredCallbacks:(unsigned long long)arg1;	// IMP=0x001000000009c791
- (unsigned long long)registeredCallbacks;	// IMP=0x001000000009c716
- (void)getCustomOriginDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000009c647
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000009be51
@property(readonly, nonatomic) NSArray *personalOutputDevices;
- (void)tombstoneWithError:(id)arg1;	// IMP=0x001000000009b81f
@property(readonly, nonatomic) NSString *outputDeviceUID;
- (id)externalDeviceClients;	// IMP=0x001000000009b60c
@property(readonly, nonatomic) NSXPCListenerEndpoint *externalDeviceListenerEndpoint;
@property(readonly, nonatomic) MRExternalDevice *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000009af35
- (id)initWithEndpoint:(id)arg1 externalDevice:(id)arg2;	// IMP=0x001000000009ad44

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

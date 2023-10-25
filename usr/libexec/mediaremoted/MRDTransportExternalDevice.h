//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaRemote/MRExternalDevice.h>

@class MRDeviceInfo, MRExternalClientConnection, MRExternalDeviceTransport, MROSTransaction, MROrigin, NSArray, NSDate, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MRDTransportExternalDevice : MRExternalDevice
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    _Bool _wantsNowPlayingNotifications;	// 24 = 0x18
    _Bool _wantsNowPlayingArtworkNotifications;	// 25 = 0x19
    _Bool _wantsVolumeNotifications;	// 26 = 0x1a
    _Bool _wantsOutputDeviceNotifications;	// 27 = 0x1b
    _Bool _wantsSystemEndpointNotifications;	// 28 = 0x1c
    _Bool _wantsEndpointChangeNotifications;	// 29 = 0x1d
    _Bool _usingSystemPairing;	// 30 = 0x1e
    NSDate *_connectionStateTimestamp;	// 32 = 0x20
    unsigned int _connectionState;	// 40 = 0x28
    unsigned int _connectionOptions;	// 44 = 0x2c
    unsigned long long _reconnectionAttemptCount;	// 48 = 0x30
    _Bool _forceReconnectOnConnectionFailure;	// 56 = 0x38
    _Bool _disconnecting;	// 57 = 0x39
    _Bool _isClientSyncActive;	// 58 = 0x3a
    MROSTransaction *_transaction;	// 64 = 0x40
    NSArray *_subscribedPlayerPaths;	// 72 = 0x48
    NSDate *_originalConnectionStartDate;	// 80 = 0x50
    NSString *_connectionUID;	// 88 = 0x58
    _Bool _isCallingClientCallback;	// 96 = 0x60
    MRExternalClientConnection *_clientConnection;	// 104 = 0x68
    MROrigin *_customOrigin;	// 112 = 0x70
    MRDeviceInfo *_deviceInfo;	// 120 = 0x78
    long long _connectionRecoveryBehavior;	// 128 = 0x80
    MRExternalDeviceTransport *_transport;	// 136 = 0x88
    CDUnknownBlockType _pairingCallback;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_pairingCallbackQueue;	// 152 = 0x98
    CDUnknownBlockType _connectionStateCallback;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_connectionStateCallbackQueue;	// 168 = 0xa8
    CDUnknownBlockType _nameCallback;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_nameCallbackQueue;	// 184 = 0xb8
    CDUnknownBlockType _pairingAllowedCallback;	// 192 = 0xc0
    NSObject<OS_dispatch_queue> *_pairingAllowedCallbackQueue;	// 200 = 0xc8
    CDUnknownBlockType _customDataCallback;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_customDataCallbackQueue;	// 216 = 0xd8
    CDUnknownBlockType _outputDevicesUpdatedCallback;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_outputDevicesUpdatedCallbackQueue;	// 232 = 0xe8
    CDUnknownBlockType _outputDevicesRemovedCallback;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_outputDevicesRemovedCallbackQueue;	// 248 = 0xf8
    CDUnknownBlockType _volumeCallback;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *_volumeCallbackQueue;	// 264 = 0x108
    CDUnknownBlockType _volumeControlCapabilitiesCallback;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_volumeControlCapabilitiesCallbackQueue;	// 280 = 0x118
    CDUnknownBlockType _volumeMutedCallback;	// 288 = 0x120
    NSObject<OS_dispatch_queue> *_volumeMutedCallbackQueue;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_outputContextCallbackQueue;	// 304 = 0x130
    NSObject<OS_dispatch_queue> *_workerQueue;	// 312 = 0x138
    NSMutableArray *_pendingConnectCompletionHandlers;	// 320 = 0x140
}

- (void).cxx_destruct;	// IMP=0x00200000000812a8
@property(retain, nonatomic) NSMutableArray *pendingConnectCompletionHandlers; // @synthesize pendingConnectCompletionHandlers=_pendingConnectCompletionHandlers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputContextCallbackQueue; // @synthesize outputContextCallbackQueue=_outputContextCallbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeMutedCallbackQueue; // @synthesize volumeMutedCallbackQueue=_volumeMutedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeMutedCallback; // @synthesize volumeMutedCallback=_volumeMutedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeControlCapabilitiesCallbackQueue; // @synthesize volumeControlCapabilitiesCallbackQueue=_volumeControlCapabilitiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeControlCapabilitiesCallback; // @synthesize volumeControlCapabilitiesCallback=_volumeControlCapabilitiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeCallbackQueue; // @synthesize volumeCallbackQueue=_volumeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType volumeCallback; // @synthesize volumeCallback=_volumeCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesRemovedCallbackQueue; // @synthesize outputDevicesRemovedCallbackQueue=_outputDevicesRemovedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesRemovedCallback; // @synthesize outputDevicesRemovedCallback=_outputDevicesRemovedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *outputDevicesUpdatedCallbackQueue; // @synthesize outputDevicesUpdatedCallbackQueue=_outputDevicesUpdatedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType outputDevicesUpdatedCallback; // @synthesize outputDevicesUpdatedCallback=_outputDevicesUpdatedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *customDataCallbackQueue; // @synthesize customDataCallbackQueue=_customDataCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType customDataCallback; // @synthesize customDataCallback=_customDataCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingAllowedCallbackQueue; // @synthesize pairingAllowedCallbackQueue=_pairingAllowedCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingAllowedCallback; // @synthesize pairingAllowedCallback=_pairingAllowedCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nameCallbackQueue; // @synthesize nameCallbackQueue=_nameCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType nameCallback; // @synthesize nameCallback=_nameCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionStateCallbackQueue; // @synthesize connectionStateCallbackQueue=_connectionStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType connectionStateCallback; // @synthesize connectionStateCallback=_connectionStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pairingCallbackQueue; // @synthesize pairingCallbackQueue=_pairingCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType pairingCallback; // @synthesize pairingCallback=_pairingCallback;
@property(nonatomic) _Bool isCallingClientCallback; // @synthesize isCallingClientCallback=_isCallingClientCallback;
@property(readonly, nonatomic) MRExternalDeviceTransport *transport; // @synthesize transport=_transport;
- (void)setConnectionRecoveryBehavior:(long long)arg1;	// IMP=0x0010000000080f31
- (long long)connectionRecoveryBehavior;	// IMP=0x0010000000080f20
- (void)_sendClientMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000080de4
- (void)_handleVolumeMutedDidChangeMessage:(id)arg1;	// IMP=0x0010000000080d5d
- (void)_handleSetOriginClientPropertiesMessage:(id)arg1;	// IMP=0x0010000000080cef
- (void)_handleSetPlayerClientPropertiesMessage:(id)arg1;	// IMP=0x0010000000080c43
- (void)_handleUpdateActiveSystemEndpoint:(id)arg1;	// IMP=0x0010000000080a51
- (void)_handleSetDefaultSupportedCommandsMessage:(id)arg1;	// IMP=0x001000000008096f
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1;	// IMP=0x0010000000080873
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1;	// IMP=0x0010000000080777
- (void)_handleGenericMessage:(id)arg1;	// IMP=0x00100000000806e4
- (void)_handleSetConnectionStateMessage:(id)arg1;	// IMP=0x001000000008066c
- (void)_handleDeviceInfoChange:(id)arg1 oldDevice:(id)arg2;	// IMP=0x001000000008038f
- (void)_handleDeviceInfoUpdateMessage:(id)arg1;	// IMP=0x00100000000802e6
- (void)_handleLegacyVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x001000000008026e
- (void)_handleVolumeControlCapabilitiesDidChangeMessage:(id)arg1;	// IMP=0x00100000000801e8
- (void)_handleVolumeDidChangeMessage:(id)arg1;	// IMP=0x001000000008015f
- (void)_handleOutputDevicesRemovedMessage:(id)arg1;	// IMP=0x0010000000080110
- (void)_handleOutputDevicesUpdatedMessage:(id)arg1;	// IMP=0x00100000000800c1
- (void)_handleNotificationMessage:(id)arg1;	// IMP=0x001000000007feaf
- (void)_handleUpdateContentItemsMessage:(id)arg1;	// IMP=0x001000000007fc9c
- (void)_handleUpdatePlayerMessage:(id)arg1;	// IMP=0x001000000007fc05
- (void)_handleUpdateClientMessage:(id)arg1;	// IMP=0x001000000007fb7f
- (void)_handleRemovePlayerMessage:(id)arg1;	// IMP=0x001000000007fae8
- (void)_handleRemoveClientMessage:(id)arg1;	// IMP=0x001000000007fa62
- (void)_handleSetNowPlayingPlayerMessage:(id)arg1;	// IMP=0x001000000007f9cb
- (void)_handleSetNowPlayingClientMessage:(id)arg1;	// IMP=0x001000000007f945
- (void)_handleSetStateMessage:(id)arg1;	// IMP=0x001000000007f4c4
- (void)_handleRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 playerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007eb9f
- (void)_callIsMutedCallback:(_Bool)arg1 outputDeviceUID:(id)arg2;	// IMP=0x001000000007e9c9
- (void)_callVolumeControlCapabilitiesCallback:(unsigned int)arg1 outputDeviceUID:(id)arg2;	// IMP=0x001000000007e7ff
- (void)_callVolumeCallback:(float)arg1 outputDeviceUID:(id)arg2;	// IMP=0x001000000007e563
- (void)_callOutputDevicesRemovedCallbackWithOutputDeviceUIDs:(id)arg1;	// IMP=0x001000000007e3aa
- (void)_callOutputDevicesUpdatedCallbackWithOutputDevices:(id)arg1;	// IMP=0x001000000007e1f1
- (void)_callClientCustomDataCallback:(id)arg1 name:(id)arg2;	// IMP=0x001000000007df9a
- (void)_callClientAllowsPairingCallback;	// IMP=0x001000000007dd80
- (void)_callClientNameCallback;	// IMP=0x001000000007db4f
- (void)_callClientPairingCallback:(CDUnknownBlockType)arg1;	// IMP=0x001000000007d769
- (void)_callClientConnectionStateCallback:(unsigned int)arg1 previousConnectionState:(unsigned int)arg2 error:(id)arg3;	// IMP=0x001000000007d429
- (void)_handlePlaybackSessionMigrateEndRequest:(id)arg1 error:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007d276
- (void)_handlePlaybackSessionMigrateBeginRequest:(id)arg1 forPlayerPath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d0e7
- (void)_handlePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 forPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007cebf
- (void)_handlePlaybackSessionRequest:(void *)arg1 forPlayerPath:(void *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007ccd6
- (void)_handlePlaybackQueueRequest:(void *)arg1 forPlayer:(void *)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007c6f6
- (void)_onSerialQueue_registerOriginCallbacks;	// IMP=0x001000000007b945
- (void)_cleanUpWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x001000000007b892
- (void)_cleanUpStreamsWithReason:(long long)arg1 error:(id)arg2;	// IMP=0x001000000007b718
- (id)_onWorkerQueue_syncClientStateWithUserInfo:(id)arg1;	// IMP=0x001000000007b2af
- (id)_onWorkerQueue_reRegisterCustomOriginWithUserInfo:(id)arg1;	// IMP=0x001000000007af38
- (id)_onWorkerQueue_registerCustomOriginWithUserInfo:(id)arg1;	// IMP=0x001000000007ac00
- (id)_onWorkerQueue_loadDeviceInfoWithUserInfo:(id)arg1;	// IMP=0x001000000007a172
- (id)_onWorkerQueue_initializeConnectionWithOptions:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x0010000000079b10
- (id)_onWorkerQueue_createClientConnectionWithTransport:(id)arg1;	// IMP=0x0010000000079a4c
- (void)_activeSystemEndpointDidChangeNotification:(id)arg1;	// IMP=0x001000000007979c
- (void)_transportDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x001000000007962c
- (void)_localDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x00100000000794e8
- (void)clientDidDisconnect:(id)arg1 error:(id)arg2;	// IMP=0x00100000000794d3
- (void)_handleDiscoveryUpdateOutputDevicesMessage:(id)arg1;	// IMP=0x0010000000079440
- (void)setDiscoveryMode:(unsigned int)arg1 forConfiguration:(id)arg2;	// IMP=0x0010000000079354
- (void)clientConnection:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000078fc9
- (void)removeFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000078c1d
- (void)createHostedEndpointWithOutputDeviceUIDs:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007891e
- (void)modifyByAddingDeviceUIDs:(id)arg1 removingDeviceUIDs:(id)arg2 settingDeviceUIDs:(id)arg3 addingClusterAwareDeviceUIDs:(id)arg4 removingClusterAwareDeviceUIDs:(id)arg5 settingClusterAwareDeviceUIDs:(id)arg6 withReplyQueue:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000078596
- (void)setConversationDetectionEnabled:(_Bool)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000078257
- (void)setListeningMode:(id)arg1 outputDeviceUID:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000077f05
- (void)outputDeviceVolumeControlCapabilities:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077a21
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000077649
- (void)adjustOutputDeviceVolume:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000007730c
- (void)muteOutputDeviceVolume:(_Bool)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000076fd8
- (void)setOutputDeviceVolume:(float)arg1 outputDeviceUID:(id)arg2 details:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000076c9a
- (void)sendClientUpdatesConfigMessageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000767e6
- (void)sendClientUpdatesConfigMessage;	// IMP=0x00100000000767d2
- (id)currentClientUpdatesConfigMessage;	// IMP=0x00100000000766a0
- (id)errorForCurrentState;	// IMP=0x001000000007644b
- (void)ping:(double)arg1 callback:(CDUnknownBlockType)arg2 withQueue:(id)arg3;	// IMP=0x0010000000076074
- (void)sendCustomData:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000075f58
- (void)verifyConnectionStatusAndMaybeDisconnect:(id)arg1;	// IMP=0x0010000000075d17
- (void)disconnect:(id)arg1;	// IMP=0x0010000000075c61
- (void)_callAllPendingCompletionsWithError:(id)arg1;	// IMP=0x00100000000758a1
- (void)_onSerialQueue_prepareToDisconnect:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000748d6
- (void)_onWorkerQueue_disconnect:(id)arg1;	// IMP=0x00100000000747e7
- (void)connectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000073d8d
- (void)_onSerialQueue_prepareToConnectWithOptions:(unsigned int)arg1 userInfo:(id)arg2 connectionAttemptDetails:(id)arg3 connectionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000007376c
- (void)_onWorkerQueue_connectWithOptions:(unsigned int)arg1 isRetry:(_Bool)arg2 userInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000071bcd
- (_Bool)supportsIdleDisconnection;	// IMP=0x0010000000071bb0
- (id)personalOutputDevices;	// IMP=0x0010000000071ba8
- (void)sendButtonEvent:(struct _MRHIDButtonEvent)arg1;	// IMP=0x0010000000071b01
- (void)setVolumeMutedChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000719e8
- (void)setVolumeControlCapabilitiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000718cf
- (void)setVolumeChangedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x00100000000717b6
- (void)setOutputDevicesRemovedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x001000000007169d
- (void)setOutputDevicesUpdatedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000071584
- (void)setCustomDataCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x001000000007146b
- (void)setPairingAllowedCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000071352
- (void)setNameCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000071239
- (void)setConnectionStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000071120
- (void)setPairingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;	// IMP=0x0010000000070fc3
- (void)setConnectionState:(unsigned int)arg1 error:(id)arg2;	// IMP=0x0010000000070c65
- (unsigned int)connectionState;	// IMP=0x0010000000070b9a
- (id)supportedMessages;	// IMP=0x0010000000070b4a
@property(retain, nonatomic) MRDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain, nonatomic) MROrigin *customOrigin; // @synthesize customOrigin=_customOrigin;
@property(retain, nonatomic) MRExternalClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
- (void)setName:(id)arg1;	// IMP=0x0010000000070257
- (void)setSubscribedPlayerPaths:(id)arg1;	// IMP=0x00100000000701ab
- (id)subscribedPlayerPaths;	// IMP=0x0010000000070119
- (void)setWantsSystemEndpointNotifications:(_Bool)arg1;	// IMP=0x00100000000700f6
- (_Bool)wantsSystemEndpointNotifications;	// IMP=0x00100000000700e6
- (void)setWantsEndpointChangeNotifications:(_Bool)arg1;	// IMP=0x00100000000700c3
- (_Bool)wantsEndpointChangeNotifications;	// IMP=0x00100000000700b3
- (void)setWantsOutputDeviceNotifications:(_Bool)arg1;	// IMP=0x0010000000070090
- (_Bool)wantsOutputDeviceNotifications;	// IMP=0x0010000000070080
- (void)setWantsVolumeNotifications:(_Bool)arg1;	// IMP=0x0010000000070043
- (_Bool)wantsVolumeNotifications;	// IMP=0x0010000000070033
- (void)setWantsNowPlayingArtworkNotifications:(_Bool)arg1;	// IMP=0x0010000000070010
- (_Bool)wantsNowPlayingArtworkNotifications;	// IMP=0x0010000000070000
- (void)setWantsNowPlayingNotifications:(_Bool)arg1;	// IMP=0x001000000006ffdd
- (_Bool)wantsNowPlayingNotifications;	// IMP=0x001000000006ffcd
- (void)setUsingSystemPairing:(_Bool)arg1;	// IMP=0x001000000006ffbd
- (_Bool)isUsingSystemPairing;	// IMP=0x001000000006ffad
- (_Bool)isPaired;	// IMP=0x001000000006ffa5
- (_Bool)isValid;	// IMP=0x001000000006ff90
- (id)uid;	// IMP=0x001000000006ff73
- (long long)port;	// IMP=0x001000000006ff56
- (id)hostName;	// IMP=0x001000000006ff39
- (id)name;	// IMP=0x001000000006fece
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000006fc65
- (id)initWithTransport:(id)arg1;	// IMP=0x001000000006f9dc

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

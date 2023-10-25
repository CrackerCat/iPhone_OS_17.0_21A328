//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDDeviceInfoDataSource, MRDMediaRemoteClient, MRDNowPlayingClient, MRDNowPlayingDataSource, MRDeviceInfo, MRMutableApplicationActivity, MROSTransaction, MROrigin, MRPlayerPath, MSVPersistentTimer, NSArray, NSData, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;
@protocol MRDNowPlayingOriginClientDelegate, OS_dispatch_queue;

@interface MRDNowPlayingOriginClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_nowPlayingClients;	// 16 = 0x10
    NSArray *_activePlayerClients;	// 24 = 0x18
    unsigned int _volumeControlCapabilities;	// 32 = 0x20
    float _volume;	// 36 = 0x24
    _Bool _isMuted;	// 40 = 0x28
    MRDeviceInfo *_deviceInfo;	// 48 = 0x30
    MRDNowPlayingClient *_explicitNowPlayingClient;	// 56 = 0x38
    MRDNowPlayingClient *_activeNowPlayingClient;	// 64 = 0x40
    MROSTransaction *_activeNowPlayingClientTransaction;	// 72 = 0x48
    NSMutableDictionary *_defaultSupportedCommandsData;	// 80 = 0x50
    MSVPersistentTimer *_playbackTimer;	// 88 = 0x58
    NSDate *_lastPlayingDate;	// 96 = 0x60
    MROrigin *_origin;	// 104 = 0x68
    MRPlayerPath *_playerPath;	// 112 = 0x70
    NSData *_deviceInfoData;	// 120 = 0x78
    MRMutableApplicationActivity *_activity;	// 128 = 0x80
    MRDMediaRemoteClient *_overrideClient;	// 136 = 0x88
    MRDNowPlayingDataSource *_nowPlayingDataSource;	// 144 = 0x90
    MRDDeviceInfoDataSource *_deviceInfoDataSource;	// 152 = 0x98
    NSDate *_registrationDate;	// 160 = 0xa0
    id <MRDNowPlayingOriginClientDelegate> _delegate;	// 168 = 0xa8
    MRDNowPlayingClient *_computedNowPlayingClient;	// 176 = 0xb0
    MRDNowPlayingClient *_inferredNowPlayingClient;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x001000000008f0fd
@property(retain, nonatomic) MRDNowPlayingClient *inferredNowPlayingClient; // @synthesize inferredNowPlayingClient=_inferredNowPlayingClient;
@property(retain, nonatomic) MRDNowPlayingClient *computedNowPlayingClient; // @synthesize computedNowPlayingClient=_computedNowPlayingClient;
@property(nonatomic) __weak id <MRDNowPlayingOriginClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(retain, nonatomic) MRDDeviceInfoDataSource *deviceInfoDataSource; // @synthesize deviceInfoDataSource=_deviceInfoDataSource;
@property(retain, nonatomic) MRDNowPlayingDataSource *nowPlayingDataSource; // @synthesize nowPlayingDataSource=_nowPlayingDataSource;
@property(retain, nonatomic) MRDNowPlayingClient *explicitNowPlayingClient; // @synthesize explicitNowPlayingClient=_explicitNowPlayingClient;
@property(retain, nonatomic) MRDMediaRemoteClient *overrideClient; // @synthesize overrideClient=_overrideClient;
@property(retain, nonatomic) MRMutableApplicationActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSData *deviceInfoData; // @synthesize deviceInfoData=_deviceInfoData;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MROrigin *origin; // @synthesize origin=_origin;
- (id)_playerPathForNowPlayingClient:(id)arg1;	// IMP=0x001000000008ef92
- (unsigned int)_stateFromDataSource:(id)arg1;	// IMP=0x001000000008ef2c
- (void)_registerCallbacks;	// IMP=0x001000000008ebdb
- (void)_onQueue_maybeSavePlaybackStateForNotification:(id)arg1;	// IMP=0x001000000008e979
- (void)_onQueue_maybeSetupPlaybackTimeoutTimerForNotification:(id)arg1;	// IMP=0x001000000008e615
- (id)_onQueue_addNowPlayingClient:(id)arg1;	// IMP=0x001000000008e39e
- (void)_onQueue_updateActivityStatus:(int)arg1;	// IMP=0x001000000008e2f0
- (void)_onQueue_reevaluateStateWithReason:(id)arg1;	// IMP=0x001000000008dced
- (id)_onQueue_calculateActiveNowPlayingPlayerClients;	// IMP=0x001000000008d97a
- (unsigned int)_onQueue_calculateInferredPlaybackStateForPlayer:(id)arg1;	// IMP=0x001000000008d5c7
- (id)_onQueue_calculateInferredNowPlayingClient;	// IMP=0x001000000008d13b
- (id)_onQueue_calculateComputedNowPlayingClient;	// IMP=0x001000000008cc81
- (id)_onQueue_calculateActiveNowPlayingClient;	// IMP=0x001000000008cac5
- (_Bool)_shouldHandleNotification:(id)arg1;	// IMP=0x001000000008c9cd
- (void)_handlePlayerDidRegister:(id)arg1;	// IMP=0x001000000008c805
- (void)_handleNowPlayingApplicationDidUnregisterCanBeNowPlaying:(id)arg1;	// IMP=0x001000000008c737
- (void)_handleActivePlayerDidChange:(id)arg1;	// IMP=0x001000000008c669
- (void)_handlePlayerPictureInPictureEnabledDidChange:(id)arg1;	// IMP=0x001000000008c59b
- (void)_handlePlayerPropertiesDidChange:(id)arg1;	// IMP=0x001000000008c431
- (void)_handleOriginIsPlayingDidChange:(id)arg1;	// IMP=0x001000000008c32d
- (void)_handlePlayerIsPlayingDidChange:(id)arg1;	// IMP=0x001000000008c1df
- (void)_handleNowPlayingAppMaybeDidChange:(id)arg1;	// IMP=0x001000000008c02b
- (void)deviceInfoDataSource:(id)arg1 deviceInfoDidChange:(id)arg2;	// IMP=0x001000000008c016
- (void)_onQueue_reloadInferredStateFromDataSource:(id)arg1 reason:(id)arg2;	// IMP=0x001000000008bc85
- (void)nowPlayingDataSourceNowPlayingAudioFormatContentInfosDidChange:(id)arg1;	// IMP=0x001000000008bbfe
- (void)nowPlayingDataSourceNowPlayingSessionsPlaybackStateDidChange:(id)arg1;	// IMP=0x001000000008bb4d
- (void)nowPlayingDataSourceNowPlayingApplicationsPlaybackStateDidChange:(id)arg1;	// IMP=0x001000000008ba9c
- (void)nowPlayingDataSourceNowPlayingApplicationPlaybackStateDidChange:(id)arg1;	// IMP=0x001000000008b9eb
- (void)nowPlayingDataSourceNowPlayingApplicationDidChange:(id)arg1;	// IMP=0x001000000008b93a
@property(readonly, nonatomic) NSArray *nowPlayingAudioFormatContentInfos;
- (void)updateLastPlayingDate:(id)arg1;	// IMP=0x001000000008b762
- (void)clearDefaultSupportedCommandsData;	// IMP=0x001000000008b6fd
@property(readonly, nonatomic) NSDictionary *defaultSupportedCommands;
- (id)defaultSupportedCommandsForClient:(id)arg1;	// IMP=0x001000000008b394
- (id)defaultSupportedCommandsDataForClient:(id)arg1;	// IMP=0x001000000008b1c4
- (void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000008b049
- (void)_onQueue_removeNowPlayingClient:(id)arg1;	// IMP=0x001000000008ac88
- (void)removeNowPlayingClientForClient:(id)arg1;	// IMP=0x001000000008ab88
- (void)removeAllClients;	// IMP=0x001000000008a9cc
- (id)existingNowPlayingClientForClient:(id)arg1;	// IMP=0x001000000008a658
- (id)existingNowPlayingClientForDisplayID:(id)arg1;	// IMP=0x001000000008a5cc
- (id)existingNowPlayingClientForPid:(int)arg1;	// IMP=0x001000000008a560
- (id)existingNowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x001000000008a4fe
- (id)nowPlayingClientForPlayerPath:(id)arg1;	// IMP=0x001000000008a330
- (id)nowPlayingClientForClient:(id)arg1;	// IMP=0x001000000008a295
@property(readonly, nonatomic) double timeSincePlaying;
@property(readonly, nonatomic) _Bool isPlaying;
@property(readonly, nonatomic) _Bool isActivityActive;
@property(readonly, nonatomic) MRDNowPlayingClient *activeNowPlayingClient;
@property(readonly, nonatomic) NSArray *mostRecentPlayers;
@property(readonly, nonatomic) NSArray *nowPlayingClients;
@property(nonatomic) _Bool isMuted;
@property(nonatomic) unsigned int volumeControlCapabilities;
@property(nonatomic) float volume;
@property(copy, nonatomic) MRDeviceInfo *deviceInfo;
@property(readonly, nonatomic) MRPlayerPath *activePlayerPath;
@property(readonly, nonatomic) NSArray *activePlayerClients;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithOrigin:(id)arg1;	// IMP=0x0010000000086a79
- (id)activeContent;	// IMP=0x0010000000021a57
- (_Bool)containsActiveStream;	// IMP=0x00100000000219e9

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSCountedSet, NSMutableSet, NSString, NSXPCInterface, NSXPCListener, SDAppleIDAgent, SDAutoFillAgent, SDNearbyAgent, SDProxHandoffAgent, SDProximityPairingAgent, SDRemoteInteractionAgent, SDSetupAgent, SDSharedRemoteTextInputClient, SDSubCredentialAgent, SFShareAudioService;
@protocol OS_dispatch_queue;

@interface SDXPCServer : NSObject
{
    SDAppleIDAgent *_appleIDAgent;	// 8 = 0x8
    SDAutoFillAgent *_autoFillAgent;	// 16 = 0x10
    SDSubCredentialAgent *_subCredentialAgent;	// 24 = 0x18
    NSCountedSet *_assertions;	// 32 = 0x20
    MISSING_TYPE *_contactsQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 48 = 0x30
    SDNearbyAgent *_nearbyAgent;	// 56 = 0x38
    int _prefNotifyToken;	// 64 = 0x40
    SDRemoteInteractionAgent *_riAgent;	// 72 = 0x48
    SDSharedRemoteTextInputClient *_rtiClient;	// 80 = 0x50
    SDProximityPairingAgent *_ppAgent;	// 88 = 0x58
    SDProxHandoffAgent *_proxHandoffAgent;	// 96 = 0x60
    SDSetupAgent *_setupAgent;	// 104 = 0x68
    SFShareAudioService *_shareAudioService;	// 112 = 0x70
    unsigned long long _stateHandle;	// 120 = 0x78
    NSMutableSet *_xpcConnections;	// 128 = 0x80
    NSXPCInterface *_xpcInterfaceClient;	// 136 = 0x88
    NSXPCInterface *_xpcInterfaceServer;	// 144 = 0x90
    NSXPCListener *_xpcListener;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000140de5
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (id)_stateDumpString;	// IMP=0x001000000014095f
- (struct os_state_data_s *)_stateDump;	// IMP=0x00100000001407da
- (void)stateAppendXPCConnections:(id *)arg1;	// IMP=0x00100000001403b5
- (void)_connectionInvalidated:(id)arg1;	// IMP=0x0010000000140355
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000013fe61
- (void)_invalidate;	// IMP=0x001000000013fba2
- (void)invalidate;	// IMP=0x001000000013fb41
- (void)_activate;	// IMP=0x001000000013f459
- (void)activate;	// IMP=0x001000000013f3f6
- (id)init;	// IMP=0x001000000013f398

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

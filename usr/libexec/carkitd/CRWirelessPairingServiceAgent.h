//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRBluetoothManager, CRCarPlayPreferences, CRVehicleStore, CRWirelessPairingServiceSession, NSString;

@interface CRWirelessPairingServiceAgent : NSObject
{
    CRBluetoothManager *_bluetoothManager;	// 8 = 0x8
    CRCarPlayPreferences *_carPlayPreferences;	// 16 = 0x10
    CRVehicleStore *_vehicleStore;	// 24 = 0x18
    CRWirelessPairingServiceSession *_currentPairingSession;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000014a14
@property(retain, nonatomic) CRWirelessPairingServiceSession *currentPairingSession; // @synthesize currentPairingSession=_currentPairingSession;
@property(readonly, nonatomic) CRVehicleStore *vehicleStore; // @synthesize vehicleStore=_vehicleStore;
@property(readonly, nonatomic) CRCarPlayPreferences *carPlayPreferences; // @synthesize carPlayPreferences=_carPlayPreferences;
@property(readonly, nonatomic) CRBluetoothManager *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
- (void)handleHeadUnitPairingPromptSession:(id)arg1 receivedResponse:(_Bool)arg2;	// IMP=0x0010000000014759
- (_Bool)shouldPresentHeadUnitPairingPromptSession:(id)arg1;	// IMP=0x001000000001445e
- (_Bool)_shouldAcceptHeadUnitPairingPromptServiceConnection:(id)arg1;	// IMP=0x0010000000014019
- (_Bool)_shouldAcceptPairingServiceConnection:(id)arg1;	// IMP=0x0010000000013804
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000013723
- (id)initWithBluetoothManager:(id)arg1 preferences:(id)arg2 vehicleStore:(id)arg3;	// IMP=0x001000000001361b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

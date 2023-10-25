//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol IDSPairedDevicePersister;

@interface IDSPairedDeviceRepository : NSObject
{
    NSMutableDictionary *_pairedDevices;	// 8 = 0x8
    struct os_unfair_lock_s _pairedDevicesLock;	// 16 = 0x10
    id <IDSPairedDevicePersister> _persister;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000041292b
- (void)_accessPairedDevicesInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000004128ed
- (_Bool)_criticalPersistState;	// IMP=0x0010000000412897
- (_Bool)_criticalPerformTransactionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000412826
- (_Bool)_performTransactionInCriticalSectionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000041270b
- (_Bool)shouldUseIPsecLinkForDefaultPairedDevice;	// IMP=0x00100000004126c7
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x001000000041234b
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 iCloudURIs:(id)arg2 pushToken:(id)arg3;	// IMP=0x0010000000412120
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0010000000411f40
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x0010000000411d87
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x0010000000411460
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 buildVersion:(id)arg3 productVersion:(id)arg4 productName:(id)arg5 pairingProtocolVersion:(unsigned int)arg6 minCompatibilityVersion:(unsigned int)arg7 maxCompatibilityVersion:(unsigned int)arg8 serviceMinCompatibilityVersion:(unsigned short)arg9;	// IMP=0x0010000000411105
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000410efa
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 supportIPsec:(_Bool)arg2;	// IMP=0x0010000000410d0e
- (_Bool)_criticalUpdatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x0010000000410be8
- (_Bool)updatePairedDeviceWithCBUUID:(id)arg1 deviceInfoPayload:(id)arg2;	// IMP=0x0010000000410a00
- (_Bool)_criticalPurgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x0010000000410862
- (_Bool)purgeSecuredEncryptionKeysForAllPairedDevices;	// IMP=0x0010000000410796
- (id)_criticalActivePairedDevice;	// IMP=0x0010000000410612
- (id)activePairedDevice;	// IMP=0x00100000004104fd
- (void)_criticalUpdatePairedDevice:(id)arg1 isActive:(_Bool)arg2;	// IMP=0x001000000041047e
- (long long)_criticalPerformPairedDeviceActivationWithCBUUID:(id)arg1;	// IMP=0x001000000041035f
- (void)_criticalPerformPairedDeviceDeactivation;	// IMP=0x001000000041015e
- (long long)_criticalActivatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x00100000004100e7
- (void)deactivatePairedDevices;	// IMP=0x001000000040fffe
- (long long)activatePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040fe37
- (_Bool)isEmpty;	// IMP=0x000000000040fdef
- (id)pairedDevicesWithIsPairingValue:(_Bool)arg1;	// IMP=0x001000000040fc4a
- (id)_criticalAllPairedDevices;	// IMP=0x001000000040fbd3
- (id)allPairedDevicesWithType:(long long)arg1;	// IMP=0x001000000040fa18
- (id)allPairedDevices;	// IMP=0x001000000040f903
- (_Bool)_criticalRemovePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040f817
- (_Bool)removePairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040f683
- (void)_criticalPutPairedDevice:(id)arg1;	// IMP=0x001000000040f50b
- (_Bool)_addPairedDevice:(id)arg1;	// IMP=0x001000000040f397
- (_Bool)addPairedDeviceWithCBUUID:(id)arg1 pairingType:(long long)arg2;	// IMP=0x001000000040f290
- (id)_criticalPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040f20e
- (id)pairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040efed
- (_Bool)containsPairedDeviceWithCBUUID:(id)arg1;	// IMP=0x001000000040efba
- (void)_criticalLoadPairedDeviceArray:(id)arg1;	// IMP=0x001000000040ed46
- (_Bool)loadPairedDevicesFromStorage;	// IMP=0x001000000040ec79
- (id)description;	// IMP=0x001000000040eae4
- (id)initWithPersister:(id)arg1;	// IMP=0x001000000040ea57

@end

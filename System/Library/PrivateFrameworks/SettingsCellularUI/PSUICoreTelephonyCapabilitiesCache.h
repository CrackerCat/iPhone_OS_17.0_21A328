//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CTCapability, CoreTelephonyClient, NSString, PSSimStatusCache;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyCapabilitiesCache : NSObject
{
    CoreTelephonyClient *_client;	// 8 = 0x8
    PSSimStatusCache *_simStatusCache;	// 16 = 0x10
    CTCapability *_volteCapability;	// 24 = 0x18
    CTCapability *_vonrCapability;	// 32 = 0x20
    CTCapability *_turnOffCellularCapability;	// 40 = 0x28
    CTCapability *_networkSlicingCapability;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0010000000006475
- (void).cxx_destruct;	// IMP=0x00000000000082bf
@property(retain) CTCapability *networkSlicingCapability; // @synthesize networkSlicingCapability=_networkSlicingCapability;
@property(retain) CTCapability *turnOffCellularCapability; // @synthesize turnOffCellularCapability=_turnOffCellularCapability;
@property(retain) CTCapability *vonrCapability; // @synthesize vonrCapability=_vonrCapability;
@property(retain) CTCapability *volteCapability; // @synthesize volteCapability=_volteCapability;
@property(retain, nonatomic) PSSimStatusCache *simStatusCache; // @synthesize simStatusCache=_simStatusCache;
@property(retain, nonatomic) CoreTelephonyClient *client; // @synthesize client=_client;
- (id)getLogger;	// IMP=0x00000000000081dd
- (void)clearCache;	// IMP=0x00000000000080b8
- (void)context:(id)arg1 capabilitiesChanged:(id)arg2;	// IMP=0x0000000000007ff1
- (_Bool)isNetworkSlicingManagedForContext:(id)arg1;	// IMP=0x0000000000007f7b
- (void)setNetworkSlicing:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000007f02
- (_Bool)getNetworkSlicing:(id)arg1;	// IMP=0x0000000000007e93
- (_Bool)canSetNetworkSlicing:(id)arg1;	// IMP=0x0000000000007e24
- (void)setTurnOffCellular:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000007dab
- (_Bool)getTurnOffCellular:(id)arg1;	// IMP=0x0000000000007d3c
- (_Bool)canSetTurnOffCellular:(id)arg1;	// IMP=0x0000000000007ccd
- (void)setCapabilityVoNR:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000007c54
- (_Bool)capabilityEnabledVoNR:(id)arg1;	// IMP=0x0000000000007be5
- (_Bool)canSetCapabilityVoNR:(id)arg1;	// IMP=0x0000000000007b76
- (_Bool)fetchDeviceAndPlan5GSupport:(id)arg1;	// IMP=0x00000000000079e2
- (void)setCapabilityVoLTE:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000007969
- (_Bool)capabilityEnabledVoLTE:(id)arg1;	// IMP=0x00000000000078fa
- (_Bool)isVoLTEStillProvisioningForContext:(id)arg1;	// IMP=0x0000000000007875
- (_Bool)cannotChangeVoLTESettingCallCarrier:(id)arg1;	// IMP=0x00000000000077f0
- (_Bool)canSetCapabilityVoLTE:(id)arg1;	// IMP=0x0000000000007781
- (void)setCapabilityEnabledForContext:(id)arg1 cache:(id)arg2 enabled:(_Bool)arg3;	// IMP=0x0000000000007503
- (_Bool)capabilityEnabledForContext:(id)arg1 cache:(id)arg2;	// IMP=0x000000000000742f
- (void)fetchCapabilityEnabledWithCache:(id)arg1;	// IMP=0x0000000000006f16
- (_Bool)getCapabilityInfo:(id)arg1 forContext:(id)arg2 cache:(id)arg3;	// IMP=0x0000000000006e29
- (_Bool)canSetCapabilityForContext:(id)arg1 cache:(id)arg2;	// IMP=0x0000000000006d55
- (void)fetchCanSetCapabilityWithCache:(id)arg1;	// IMP=0x0000000000006794
- (void)willEnterForeground;	// IMP=0x0000000000006782
- (id)init;	// IMP=0x00000000000066ed
- (id)initPrivate;	// IMP=0x00000000000064da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHAPAccessory, HMDService, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterController : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDHAPAccessory *_accessory;	// 16 = 0x10
    HMDService *_routerService;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000007e4e14
- (void).cxx_destruct;	// IMP=0x00000000007e3904
@property(nonatomic) __weak HMDService *routerService; // @synthesize routerService=_routerService;
@property(nonatomic) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007e3726
- (void)_writeTLVWithValueInResponse:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000007e335e
- (void)_writeValueIfDifferent:(id)arg1 characteristicType:(id)arg2 operationName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000007e2ffa
- (void)_writeClientConfigurationControlRequest:(id)arg1 operationName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000007e2e35
- (void)resetAccessViolationForClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e2ccb
- (void)getAccessViolationList:(CDUnknownBlockType)arg1;	// IMP=0x00000000007e2bfa
- (void)removeClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e2a86
- (void)updateClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e295d
- (void)readClientConfigurationWithClientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e27e9
- (void)addClientConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e26c0
- (void)getClientStatusWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e25af
- (void)getClientStatusWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e23b5
- (void)writeManagedNetworkEnable:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007e237b
@property(readonly) NSString *wiFiSSID;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000007e209a
- (id)initWithAccessory:(id)arg1 service:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000007e1fe6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

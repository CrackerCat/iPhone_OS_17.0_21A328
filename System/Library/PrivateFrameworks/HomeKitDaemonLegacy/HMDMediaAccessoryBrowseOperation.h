//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFOperation.h>

@class HMDMediaEndpoint, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaAccessoryBrowseOperation : HMFOperation
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    void *_session;	// 16 = 0x10
    unsigned int _endpointFeatures;	// 24 = 0x18
    HMDMediaEndpoint *_endpoint;	// 32 = 0x20
    NSArray *_outputDevices;	// 40 = 0x28
    NSString *_accessoryIdentifier;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000039168c
+ (double)defaultTimeout;	// IMP=0x001000000039165f
- (void).cxx_destruct;	// IMP=0x00000000003911ba
@property(readonly, copy) NSString *accessoryIdentifier; // @synthesize accessoryIdentifier=_accessoryIdentifier;
- (void)cancel;	// IMP=0x000000000039115e
- (void)main;	// IMP=0x0000000000390f1c
@property(readonly) NSArray *outputDevices; // @synthesize outputDevices=_outputDevices;
@property(readonly) HMDMediaEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property unsigned int endpointFeatures; // @synthesize endpointFeatures=_endpointFeatures;
- (void)dealloc;	// IMP=0x0000000000390dd3
- (id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2;	// IMP=0x0000000000390c3a
- (id)initWithAccessoryIdentifier:(id)arg1;	// IMP=0x0000000000390c25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

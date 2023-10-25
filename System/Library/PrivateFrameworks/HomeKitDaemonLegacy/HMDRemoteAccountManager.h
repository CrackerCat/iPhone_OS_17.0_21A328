//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDBackingStore, NSArray, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDRemoteAccountManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct os_unfair_recursive_lock_s _lock;	// 16 = 0x10
    NSMutableSet *_accounts;	// 24 = 0x18
    _Bool _monitoring;	// 32 = 0x20
    id <HMDIDSService> _service;	// 40 = 0x28
    NSMutableArray *_resolveOperations;	// 48 = 0x30
    HMDBackingStore *_backingStore;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000007ade41
+ (id)sharedManager;	// IMP=0x00100000007addde
- (void).cxx_destruct;	// IMP=0x00000000007ac7f6
@property(retain, nonatomic) HMDBackingStore *backingStore; // @synthesize backingStore=_backingStore;
@property(readonly, nonatomic) NSMutableArray *resolveOperations; // @synthesize resolveOperations=_resolveOperations;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000000007ac699
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000007ac632
- (void)processAccountModelRemove:(id)arg1 message:(id)arg2;	// IMP=0x00000000007ac4fa
- (void)processAccountModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000007ac405
- (_Bool)isCurrentDeviceDataOwnerForDevice:(id)arg1;	// IMP=0x00000000007ac3fd
- (_Bool)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000007ac3f5
- (_Bool)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;	// IMP=0x00000000007ac3ed
- (_Bool)shouldSyncDevice:(id)arg1;	// IMP=0x00000000007ac399
- (_Bool)shouldSyncAccount:(id)arg1;	// IMP=0x00000000007ac384
- (_Bool)shouldCacheAccount:(id)arg1;	// IMP=0x00000000007ac36f
- (void)_resolveAccountForHandle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000007ac2a3
- (void)removeAccount:(id)arg1;	// IMP=0x00000000007ac1b0
- (void)addAccount:(id)arg1;	// IMP=0x00000000007ab8a9
@property(retain, nonatomic) NSArray *accounts;
- (id)accountForDeviceHandle:(id)arg1;	// IMP=0x00000000007ab35b
- (id)accountForModelIdentifier:(id)arg1;	// IMP=0x00000000007ab12a
- (id)accountForHandle:(id)arg1;	// IMP=0x00000000007aaef9
- (id)accountForIdentifier:(id)arg1;	// IMP=0x00000000007aacc8
- (void)reset;	// IMP=0x00000000007aac0e
- (void)stop;	// IMP=0x00000000007aabbc
- (void)start;	// IMP=0x00000000007aab6a
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
- (id)initWithIDSService:(id)arg1;	// IMP=0x00000000007aa947
- (id)init;	// IMP=0x00000000007aa89f
- (id)deviceForSenderContext:(id)arg1;	// IMP=0x00000000007ae04c
- (id)accountForSenderContext:(id)arg1;	// IMP=0x00000000007adff5
- (void)__handleSendMessageFailureWithError:(id)arg1 destination:(id)arg2;	// IMP=0x00000000007af825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

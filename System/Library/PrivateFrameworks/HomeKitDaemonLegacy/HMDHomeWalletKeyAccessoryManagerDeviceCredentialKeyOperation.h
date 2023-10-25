//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSData, NSSet;

__attribute__((visibility("hidden")))
@interface HMDHomeWalletKeyAccessoryManagerDeviceCredentialKeyOperation : HMFObject
{
    NSData *_deviceCredentialKey;	// 8 = 0x8
    NSSet *_accessoriesUUIDs;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000096505d
@property(readonly) __weak HMDUser *user; // @synthesize user=_user;
@property(readonly, copy) NSSet *accessoriesUUIDs; // @synthesize accessoriesUUIDs=_accessoriesUUIDs;
@property(readonly, copy) NSData *deviceCredentialKey; // @synthesize deviceCredentialKey=_deviceCredentialKey;
- (id)attributeDescriptions;	// IMP=0x0000000000964e7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000964e6f
- (id)operationByMergingWithOperation:(id)arg1;	// IMP=0x0000000000964d38
- (id)initWithDeviceCredentialKey:(id)arg1 accessories:(id)arg2 user:(id)arg3;	// IMP=0x0000000000964b0d
- (id)initWithDeviceCredentialKey:(id)arg1 accessoriesUUIDs:(id)arg2 user:(id)arg3;	// IMP=0x0000000000964a23

@end

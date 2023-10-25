//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryNetworkProtectionGroup : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    long long _targetProtectionMode;	// 16 = 0x10
    NSString *_manufacturer;	// 24 = 0x18
    NSNumber *_category;	// 32 = 0x20
    NSUUID *_uuid;	// 40 = 0x28
    HMDHome *_home;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000520563
- (void).cxx_destruct;	// IMP=0x0000000000520527
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000051ff0d
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000051fd97
- (id)modelForVersion:(long long)arg1;	// IMP=0x000000000051fc99
- (id)modelWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x000000000051fbde
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000051fa16
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000051f8f4
@property(retain, nonatomic) NSNumber *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(nonatomic) long long targetProtectionMode; // @synthesize targetProtectionMode=_targetProtectionMode;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000051f5c9
@property(readonly) unsigned long long hash;
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000051f573
- (id)initWithModel:(id)arg1;	// IMP=0x000000000051f47d
- (id)initWithUUID:(id)arg1 manufacturer:(id)arg2 category:(id)arg3 targetProtectionMode:(long long)arg4;	// IMP=0x000000000051f3b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

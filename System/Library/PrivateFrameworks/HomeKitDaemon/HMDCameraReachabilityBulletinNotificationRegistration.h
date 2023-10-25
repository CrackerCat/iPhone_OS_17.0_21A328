//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraReachabilityBulletinNotificationRegistration
{
    NSUUID *_accessoryUUID;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000082715c
+ (id)type;	// IMP=0x001000000082714f
- (void).cxx_destruct;	// IMP=0x000000000082713c
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)attributeDescriptions;	// IMP=0x0000000000827007
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000826e32
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000826d97
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000826d8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000826c8c
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x0000000000826bc2
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000826a75
- (id)initWithAccessoryUUID:(id)arg1 conditions:(id)arg2;	// IMP=0x00000000008269c5

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessoryBulletinNotificationRegistration, HMDBulletinNotificationRegistrationSource;

__attribute__((visibility("hidden")))
@interface HMDAccessoryBulletinNotificationRegistrationRemote : HMFObject
{
    HMDAccessoryBulletinNotificationRegistration *_registration;	// 8 = 0x8
    HMDBulletinNotificationRegistrationSource *_source;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000069e35a
- (void).cxx_destruct;	// IMP=0x000000000069e329
@property(readonly, copy) HMDBulletinNotificationRegistrationSource *source; // @synthesize source=_source;
@property(readonly, copy) HMDAccessoryBulletinNotificationRegistration *registration; // @synthesize registration=_registration;
- (id)attributeDescriptions;	// IMP=0x000000000069e1df
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000069df8e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000069dee0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000069ded5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000069dd8a
- (id)initWithAccessoryBulletinNotificationRegistration:(id)arg1 source:(id)arg2;	// IMP=0x000000000069dcc6

@end

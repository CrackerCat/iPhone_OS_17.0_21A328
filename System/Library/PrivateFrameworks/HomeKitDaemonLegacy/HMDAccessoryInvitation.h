//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryInvitation : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
    long long _state;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000052d3a7
- (void).cxx_destruct;	// IMP=0x000000000052d378
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000052d26c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000052d156
- (id)initWithAccessory:(id)arg1 identifier:(id)arg2 state:(long long)arg3;	// IMP=0x000000000052d076

@end

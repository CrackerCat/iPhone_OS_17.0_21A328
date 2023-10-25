//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderAppsResponse : NSObject
{
    NSArray *_providerAppAdamIDs;	// 8 = 0x8
    NSArray *_channelMappings;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000067a7a
- (void).cxx_destruct;	// IMP=0x0000000000067c2f
@property(copy, nonatomic) NSArray *channelMappings; // @synthesize channelMappings=_channelMappings;
@property(copy, nonatomic) NSArray *providerAppAdamIDs; // @synthesize providerAppAdamIDs=_providerAppAdamIDs;
- (id)description;	// IMP=0x0000000000067bb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000067b60
- (unsigned long long)hash;	// IMP=0x0000000000067b27
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000067ad7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067a82
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000679fa
- (id)init;	// IMP=0x0000000000067966

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewall : NSObject
{
    long long _type;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000058f002
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058eeab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000058ee5a
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000058ee40
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058ecee
- (id)initWithType:(long long)arg1;	// IMP=0x000000000058ecb1
- (id)init;	// IMP=0x000000000058ec75

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

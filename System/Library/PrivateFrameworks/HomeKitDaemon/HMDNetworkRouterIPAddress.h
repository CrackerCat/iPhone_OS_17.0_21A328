//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterIPAddress : NSObject
{
    NSData *_v4;	// 8 = 0x8
    NSData *_v6;	// 16 = 0x10
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000598fda
+ (id)ipAddressFromRuleAddress:(id)arg1 allowWildcard:(_Bool)arg2;	// IMP=0x001000000050e999
+ (id)ipAddressFromNetAddress:(id)arg1 error:(id *)arg2;	// IMP=0x001000000050e7fb
- (void).cxx_destruct;	// IMP=0x0000000000598fb2
@property(retain, nonatomic) NSData *v6; // @synthesize v6=_v6;
@property(retain, nonatomic) NSData *v4; // @synthesize v4=_v4;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000598cc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000598c32
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000598957
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005985d0
- (id)initWithV4:(id)arg1 v6:(id)arg2;	// IMP=0x0000000000598537
- (id)init;	// IMP=0x0000000000598508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

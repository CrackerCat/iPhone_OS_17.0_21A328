//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBOriginatorEntitlementDomainRestriction : RBDomainRestriction
{
    NSString *_entitlement;	// 8 = 0x8
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x006000000007570c
- (void).cxx_destruct;	// IMP=0x0000000000075be3
- (id)description;	// IMP=0x0000000000075b5f
- (unsigned long long)hash;	// IMP=0x0000000000075b42
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075abd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000075ab2
- (id)allEntitlements;	// IMP=0x0000000000075a8b
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000758ce
- (id)_initWithEntitlement:(id)arg1;	// IMP=0x000000000007567b

@end

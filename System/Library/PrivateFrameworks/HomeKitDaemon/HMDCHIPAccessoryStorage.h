//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary, NSNumber, NSSet;

__attribute__((visibility("hidden")))
@interface HMDCHIPAccessoryStorage : HMFObject
{
    NSNumber *_nodeID;	// 8 = 0x8
    NSNumber *_vendorID;	// 16 = 0x10
    NSNumber *_productID;	// 24 = 0x18
    NSData *_attributeDatabase;	// 32 = 0x20
    NSSet *_pairings;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000462446
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000046243e
- (void).cxx_destruct;	// IMP=0x00000000004623da
@property(copy) NSSet *pairings; // @synthesize pairings=_pairings;
@property(copy) NSData *attributeDatabase; // @synthesize attributeDatabase=_attributeDatabase;
@property(copy) NSNumber *productID; // @synthesize productID=_productID;
@property(copy) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(copy) NSNumber *nodeID; // @synthesize nodeID=_nodeID;
- (id)logIdentifier;	// IMP=0x00000000004622ab
- (id)attributeDescriptions;	// IMP=0x0000000000461f7e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000461d1e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000461b76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000461a3e
- (unsigned long long)hash;	// IMP=0x000000000046190e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004616bf
- (void)updateAccessoryModel:(id)arg1;	// IMP=0x000000000046155b
- (_Bool)updateUsingAccessoryModel:(id)arg1;	// IMP=0x0000000000460a97
@property(readonly, copy) NSDictionary *debugDictionaryRepresentation;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface LSSliceInfo : NSObject
{
    int _type;	// 8 = 0x8
    int _subtype;	// 12 = 0xc
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000154644
@property(readonly, nonatomic) int subtype; // @synthesize subtype=_subtype;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (struct LSSliceData)sliceValue;	// IMP=0x0000000000154747
- (id)description;	// IMP=0x0000000000154716
- (unsigned long long)hash;	// IMP=0x00000000001546ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015464c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001545cf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000154516
- (id)initWithSliceDescData:(struct LSSliceData)arg1;	// IMP=0x00000000001544fd
- (id)initWithType:(int)arg1 subtype:(int)arg2;	// IMP=0x00000000001544b7

@end

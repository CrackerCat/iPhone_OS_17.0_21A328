//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface ADDeviceSyncCommandPullGenerationsRequest : NSObject
{
    NSArray *_dataTypes;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000b0347
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b02fa
- (void).cxx_destruct;	// IMP=0x00200000000b01d8
@property(readonly, copy, nonatomic) NSArray *dataTypes; // @synthesize dataTypes=_dataTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000b01ab
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000b00e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b00d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000b0032
- (unsigned long long)hash;	// IMP=0x00100000000b001c
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000000aff96
- (id)description;	// IMP=0x00100000000aff82
- (id)initWithDataTypes:(id)arg1;	// IMP=0x00100000000afeec
- (id)init;	// IMP=0x00100000000afed8
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000000afde5
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b034f

@end

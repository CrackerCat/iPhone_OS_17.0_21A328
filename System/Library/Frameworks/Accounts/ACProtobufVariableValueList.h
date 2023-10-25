//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueList : PBCodable
{
    NSMutableArray *_values;	// 8 = 0x8
}

+ (Class)valueType;	// IMP=0x0010000000049468
- (void).cxx_destruct;	// IMP=0x0000000000049ee2
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000049d84
- (unsigned long long)hash;	// IMP=0x0000000000049d67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049cd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049b13
- (void)copyTo:(id)arg1;	// IMP=0x0000000000049a4e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000049918
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004990b
- (id)dictionaryRepresentation;	// IMP=0x0000000000049528
- (id)description;	// IMP=0x0000000000049479
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x000000000004944b
- (unsigned long long)valuesCount;	// IMP=0x000000000004942e
- (void)addValue:(id)arg1;	// IMP=0x00000000000493c4
- (void)clearValues;	// IMP=0x00000000000493a7
@property(copy, nonatomic) NSSet *set;
@property(copy, nonatomic) NSArray *array;
- (id)_convertArray:(id)arg1;	// IMP=0x0000000000053e8c
- (id)initWithSet:(id)arg1;	// IMP=0x0000000000053e36
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000053d7d

@end

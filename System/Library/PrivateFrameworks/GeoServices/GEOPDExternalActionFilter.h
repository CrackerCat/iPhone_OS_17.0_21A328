//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExternalActionFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_95bda58d _componentTypes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cb1abb
- (unsigned long long)hash;	// IMP=0x0000000000cb1aaa
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cb1a44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cb19d4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cb195d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cb1950
- (id)jsonRepresentation;	// IMP=0x0000000000cb1840
- (id)dictionaryRepresentation;	// IMP=0x0000000000cb0ffe
- (id)description;	// IMP=0x0000000000cb0f4f
- (void)dealloc;	// IMP=0x0000000000cb0f0f

@end

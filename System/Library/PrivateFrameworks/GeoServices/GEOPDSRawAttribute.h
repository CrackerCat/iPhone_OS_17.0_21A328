//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSRawAttribute : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _beginIndex;	// 16 = 0x10
    unsigned int _endIndex;	// 20 = 0x14
    struct {
        unsigned int has_beginIndex:1;
        unsigned int has_endIndex:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000006d6d59
- (unsigned long long)hash;	// IMP=0x00000000006d6d15
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006d6c62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006d6bc5
- (void)writeTo:(id)arg1;	// IMP=0x00000000006d6b37
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006d6b2a
- (id)jsonRepresentation;	// IMP=0x00000000006d6a1a
- (id)dictionaryRepresentation;	// IMP=0x00000000006d67da
- (id)description;	// IMP=0x00000000006d672b

@end

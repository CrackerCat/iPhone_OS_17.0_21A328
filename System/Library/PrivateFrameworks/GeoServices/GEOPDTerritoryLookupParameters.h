//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTerritoryLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_locations;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000067f23f
- (unsigned long long)hash;	// IMP=0x000000000067f222
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000067f192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000067efd5
- (void)writeTo:(id)arg1;	// IMP=0x000000000067ee76
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000067ee67
- (id)jsonRepresentation;	// IMP=0x000000000067ed57
- (id)dictionaryRepresentation;	// IMP=0x000000000067e9cd
- (id)description;	// IMP=0x000000000067e91e

@end

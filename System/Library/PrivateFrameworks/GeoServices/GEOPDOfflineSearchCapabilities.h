//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineSearchCapabilities : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _supportsTextSearch;	// 16 = 0x10
    struct {
        unsigned int has_supportsTextSearch:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000005bb5d5
- (unsigned long long)hash;	// IMP=0x00000000005bb5aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005bb508
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005bb488
- (void)writeTo:(id)arg1;	// IMP=0x00000000005bb423
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005bb416
- (id)jsonRepresentation;	// IMP=0x00000000005bb0b2
- (id)dictionaryRepresentation;	// IMP=0x00000000005baedd
- (id)description;	// IMP=0x00000000005bae2e

@end

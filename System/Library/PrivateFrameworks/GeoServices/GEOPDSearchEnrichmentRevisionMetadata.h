//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchEnrichmentRevisionMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _revisionType;	// 16 = 0x10
    struct {
        unsigned int has_revisionType:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000e99b0d
- (unsigned long long)hash;	// IMP=0x0000000000e99ae2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e99a50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e999d0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e9996c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e9995d
- (id)jsonRepresentation;	// IMP=0x0000000000e992f7
- (id)dictionaryRepresentation;	// IMP=0x0000000000e99100
- (id)description;	// IMP=0x0000000000e99051

@end

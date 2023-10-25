//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOAttributeKeyValue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_attributeKey;	// 24 = 0x18
    NSString *_attributeValue;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributeKey:1;
        unsigned int read_attributeValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x000000000127336b
- (unsigned long long)hash;	// IMP=0x00000000012732bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012731e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000127303b
- (void)writeTo:(id)arg1;	// IMP=0x0000000001272e9e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001272e8f
- (id)jsonRepresentation;	// IMP=0x00000000012727ec
- (id)dictionaryRepresentation;	// IMP=0x00000000012724b3
- (id)description;	// IMP=0x0000000001272404
- (id)initWithData:(id)arg1;	// IMP=0x0000000001271e97
- (id)init;	// IMP=0x0000000001271e3b

@end

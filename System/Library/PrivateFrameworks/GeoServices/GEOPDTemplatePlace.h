//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDFollowUpRequestMetadata, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTemplatePlace : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDFollowUpRequestMetadata *_followUpRequestMetadata;	// 24 = 0x18
    NSMutableArray *_templateDatas;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    unsigned int _numInlineItems;	// 52 = 0x34
    struct {
        unsigned int has_numInlineItems:1;
        unsigned int read_unknownFields:1;
        unsigned int read_followUpRequestMetadata:1;
        unsigned int read_templateDatas:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 56 = 0x38
}

+ (id)templatedPlacesForPlaceData:(id)arg1;	// IMP=0x0010000000a9dc3a
- (void).cxx_destruct;	// IMP=0x0000000000d6f225
- (unsigned long long)hash;	// IMP=0x0000000000d6f1a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d6f0a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d6ed7d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d6eaa8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d6ea99
- (id)jsonRepresentation;	// IMP=0x0000000000d6e8c1
- (id)dictionaryRepresentation;	// IMP=0x0000000000d6e421
- (id)description;	// IMP=0x0000000000d6e372
- (id)initWithData:(id)arg1;	// IMP=0x0000000000d6d788
- (id)init;	// IMP=0x0000000000d6d72c

@end

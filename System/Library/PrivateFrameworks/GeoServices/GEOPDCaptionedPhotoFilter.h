//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhotoFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    struct GEOPDPhotoSizeFilterValue *_photoSizeFilters;	// 24 = 0x18
    unsigned long long _photoSizeFiltersCount;	// 32 = 0x20
    unsigned long long _photoSizeFiltersSpace;	// 40 = 0x28
    NSString *_vendorId;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_photoSizeFilters:1;
        unsigned int read_vendorId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000bdd413
- (unsigned long long)hash;	// IMP=0x0000000000bdd3b9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000bdd2de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000bdd121
- (void)writeTo:(id)arg1;	// IMP=0x0000000000bdcf06
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000bdcef7
- (id)jsonRepresentation;	// IMP=0x0000000000bdcb78
- (id)dictionaryRepresentation;	// IMP=0x0000000000bdc823
- (id)description;	// IMP=0x0000000000bdc774
- (void)dealloc;	// IMP=0x0000000000bdbeda
- (id)initWithData:(id)arg1;	// IMP=0x0000000000bdbe7e
- (id)init;	// IMP=0x0000000000bdbe22

@end

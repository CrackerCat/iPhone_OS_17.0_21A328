//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEONamedField, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEONamedFieldValue : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _doubleValue;	// 24 = 0x18
    long long _intValue;	// 32 = 0x20
    GEONamedField *_mapValue;	// 40 = 0x28
    NSString *_stringValue;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    _Bool _boolValue;	// 68 = 0x44
    struct {
        unsigned int has_doubleValue:1;
        unsigned int has_intValue:1;
        unsigned int has_boolValue:1;
        unsigned int read_unknownFields:1;
        unsigned int read_mapValue:1;
        unsigned int read_stringValue:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000102cc16
- (unsigned long long)hash;	// IMP=0x000000000102ca78
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000102c91c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000102c704
- (void)writeTo:(id)arg1;	// IMP=0x000000000102c4d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000102c4c2
- (id)jsonRepresentation;	// IMP=0x000000000102c3b2
- (id)dictionaryRepresentation;	// IMP=0x000000000102becf
- (id)description;	// IMP=0x000000000102be20
- (id)initWithData:(id)arg1;	// IMP=0x000000000102b59e
- (id)init;	// IMP=0x000000000102b542

@end

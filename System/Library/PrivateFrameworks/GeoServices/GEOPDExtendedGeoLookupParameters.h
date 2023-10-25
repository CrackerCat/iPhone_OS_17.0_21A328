//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOAddress, GEOInterpolationParameters, GEOLatLng, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExtendedGeoLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _intersectingFeatureGeoIds;	// 24 = 0x18
    NSString *_dataSourceId;	// 48 = 0x30
    GEOInterpolationParameters *_interpolationParameter;	// 56 = 0x38
    GEOAddress *_preserveFields;	// 64 = 0x40
    unsigned long long _primaryFeatureGeoId;	// 72 = 0x48
    GEOLatLng *_primaryFeatureLocation;	// 80 = 0x50
    unsigned long long _streetSubPostalGeoId;	// 88 = 0x58
    unsigned int _readerMarkPos;	// 96 = 0x60
    unsigned int _readerMarkLength;	// 100 = 0x64
    struct os_unfair_lock_s _readerLock;	// 104 = 0x68
    _Bool _dataSourceIdRequired;	// 108 = 0x6c
    _Bool _isLatlngRequest;	// 109 = 0x6d
    struct {
        unsigned int has_primaryFeatureGeoId:1;
        unsigned int has_streetSubPostalGeoId:1;
        unsigned int has_dataSourceIdRequired:1;
        unsigned int has_isLatlngRequest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_intersectingFeatureGeoIds:1;
        unsigned int read_dataSourceId:1;
        unsigned int read_interpolationParameter:1;
        unsigned int read_preserveFields:1;
        unsigned int read_primaryFeatureLocation:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000572211
- (unsigned long long)hash;	// IMP=0x00000000005720c9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000571eb9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000571c0a
- (void)writeTo:(id)arg1;	// IMP=0x00000000005718ef
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005718e0
- (id)jsonRepresentation;	// IMP=0x0000000000571561
- (id)dictionaryRepresentation;	// IMP=0x0000000000570e12
- (id)description;	// IMP=0x0000000000570d63
- (void)dealloc;	// IMP=0x000000000056fb1b
- (id)initWithData:(id)arg1;	// IMP=0x000000000056fabf
- (id)init;	// IMP=0x000000000056fa63

@end

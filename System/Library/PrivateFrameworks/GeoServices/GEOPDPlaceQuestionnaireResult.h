//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDPhotoConstraints, GEOPDScorecardLayout, NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceQuestionnaireResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_historicalMapsIds;	// 16 = 0x10
    GEOPDMapsIdentifier *_mapsId;	// 24 = 0x18
    GEOPDPhotoConstraints *_photoConstraints;	// 32 = 0x20
    GEOPDScorecardLayout *_scorecardLayout;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _status;	// 60 = 0x3c
    _Bool _alwaysPositionInitialRatingCtaTowardsTop;	// 64 = 0x40
    _Bool _collectPhotos;	// 65 = 0x41
    _Bool _isOverride;	// 66 = 0x42
    _Bool _suppressOnExistingRichData;	// 67 = 0x43
    struct {
        unsigned int has_status:1;
        unsigned int has_alwaysPositionInitialRatingCtaTowardsTop:1;
        unsigned int has_collectPhotos:1;
        unsigned int has_isOverride:1;
        unsigned int has_suppressOnExistingRichData:1;
        unsigned int read_historicalMapsIds:1;
        unsigned int read_mapsId:1;
        unsigned int read_photoConstraints:1;
        unsigned int read_scorecardLayout:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x00000000014c4636
- (unsigned long long)hash;	// IMP=0x00000000014c3f5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000014c3d2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014c3953
- (void)writeTo:(id)arg1;	// IMP=0x00000000014c33cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014c33c0
- (id)jsonRepresentation;	// IMP=0x00000000014c13d8
- (id)dictionaryRepresentation;	// IMP=0x00000000014c0cd0
- (id)description;	// IMP=0x00000000014c0c21
- (id)initWithData:(id)arg1;	// IMP=0x00000000014bf9a8
- (id)init;	// IMP=0x00000000014bf94c

@end

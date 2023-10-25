//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPZoneIdentifier : PBCodable
{
    NSString *_zoneIdentifierId;	// 8 = 0x8
    int _zoneIdentifierType;	// 16 = 0x10
    struct {
        unsigned int zoneIdentifierType:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000164ce3
@property(retain, nonatomic) NSString *zoneIdentifierId; // @synthesize zoneIdentifierId=_zoneIdentifierId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000164c5b
- (unsigned long long)hash;	// IMP=0x0010000000164c0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000164b53
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000164abf
- (void)copyTo:(id)arg1;	// IMP=0x0010000000164a5c
- (void)writeTo:(id)arg1;	// IMP=0x00100000001649f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001649e9
- (id)dictionaryRepresentation;	// IMP=0x001000000016472f
- (id)description;	// IMP=0x0010000000164680
@property(readonly, nonatomic) _Bool hasZoneIdentifierId;
- (int)StringAsZoneIdentifierType:(id)arg1;	// IMP=0x00100000001645d4
- (id)zoneIdentifierTypeAsString:(int)arg1;	// IMP=0x001000000016458b
@property(nonatomic) _Bool hasZoneIdentifierType;
@property(nonatomic) int zoneIdentifierType; // @synthesize zoneIdentifierType=_zoneIdentifierType;

@end

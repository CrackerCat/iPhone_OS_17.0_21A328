//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng;

@interface RAPUserPathEntry : PBCodable
{
    GEOLatLng *_rerouteLocation;	// 8 = 0x8
    unsigned int _routeIndex;	// 16 = 0x10
    unsigned int _stepIndex;	// 20 = 0x14
    int _traversal;	// 24 = 0x18
    struct {
        unsigned int routeIndex:1;
        unsigned int stepIndex:1;
        unsigned int traversal:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000b14fe4
@property(retain, nonatomic) GEOLatLng *rerouteLocation; // @synthesize rerouteLocation=_rerouteLocation;
@property(nonatomic) unsigned int stepIndex; // @synthesize stepIndex=_stepIndex;
@property(nonatomic) unsigned int routeIndex; // @synthesize routeIndex=_routeIndex;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000b14eee
- (unsigned long long)hash;	// IMP=0x0010000000b14e6b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000b14d6c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000b14c9c
- (void)copyTo:(id)arg1;	// IMP=0x0010000000b14c01
- (void)writeTo:(id)arg1;	// IMP=0x0010000000b14b51
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000b14b44
- (id)dictionaryRepresentation;	// IMP=0x0010000000b14608
- (id)description;	// IMP=0x0010000000b14559
@property(readonly, nonatomic) _Bool hasRerouteLocation;
- (int)StringAsTraversal:(id)arg1;	// IMP=0x0010000000b144ad
- (id)traversalAsString:(int)arg1;	// IMP=0x0010000000b14464
@property(nonatomic) _Bool hasTraversal;
@property(nonatomic) int traversal; // @synthesize traversal=_traversal;
@property(nonatomic) _Bool hasStepIndex;
- (_Bool);	// IMP=0x0010000000b1439f
@property(nonatomic) _Bool hasRouteIndex;

@end

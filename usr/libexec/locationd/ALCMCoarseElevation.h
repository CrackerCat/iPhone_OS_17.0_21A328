//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMCoarseElevation : PBCodable
{
    unsigned int _elevationAscended;	// 8 = 0x8
    int _source;	// 12 = 0xc
    struct {
        unsigned int source:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned int elevationAscended; // @synthesize elevationAscended=_elevationAscended;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000056ad66
- (unsigned long long)hash;	// IMP=0x001000000056ad2a
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000056acbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000056ac4d
- (void)copyTo:(id)arg1;	// IMP=0x001000000056ac1c
- (void)writeTo:(id)arg1;	// IMP=0x001000000056abc9
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000056abbc
- (id)dictionaryRepresentation;	// IMP=0x001000000056a8b0
- (id)description;	// IMP=0x001000000056a839
- (int)StringAsSource:(id)arg1;	// IMP=0x001000000056a7f2
- (id)sourceAsString:(int)arg1;	// IMP=0x001000000056a7b3
@property(nonatomic) _Bool hasSource;
@property(nonatomic) int source; // @synthesize source=_source;

@end

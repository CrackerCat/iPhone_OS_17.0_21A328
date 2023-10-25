//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieBabbleResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000a0476
- (void).cxx_destruct;	// IMP=0x00000000001e63a7
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001e62f3
- (unsigned long long)hash;	// IMP=0x00000000001e61eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e6141
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e60b7
- (void)copyTo:(id)arg1;	// IMP=0x00000000001e6059
- (void)writeTo:(id)arg1;	// IMP=0x00000000001e5ff9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001e5fec
- (id)dictionaryRepresentation;	// IMP=0x00000000001e5cff
- (id)description;	// IMP=0x00000000001e5c50
- (id)exportToLegacyDictionary;	// IMP=0x00000000000a05fc

@end

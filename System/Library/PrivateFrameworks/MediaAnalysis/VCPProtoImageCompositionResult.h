//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoLine, VCPProtoPoint;

__attribute__((visibility("hidden")))
@interface VCPProtoImageCompositionResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoLine *_dominantLine;	// 16 = 0x10
    VCPProtoPoint *_vanishingPoint;	// 24 = 0x18
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002ea914
- (void).cxx_destruct;	// IMP=0x00000000000fb4b1
@property(retain, nonatomic) VCPProtoLine *dominantLine; // @synthesize dominantLine=_dominantLine;
@property(retain, nonatomic) VCPProtoPoint *vanishingPoint; // @synthesize vanishingPoint=_vanishingPoint;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000fb3a2
- (unsigned long long)hash;	// IMP=0x00000000000fb273
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fb1a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fb0f5
- (void)copyTo:(id)arg1;	// IMP=0x00000000000fb073
- (void)writeTo:(id)arg1;	// IMP=0x00000000000faff5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fafe8
- (id)dictionaryRepresentation;	// IMP=0x00000000000fac89
- (id)description;	// IMP=0x00000000000fabda
- (id)exportToLegacyDictionary;	// IMP=0x00000000002eabe6

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieMusicResult : PBCodable
{
    float _confidence;	// 8 = 0x8
    VCPProtoTimeRange *_timeRange;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002df19e
- (void).cxx_destruct;	// IMP=0x000000000020382b
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000203777
- (unsigned long long)hash;	// IMP=0x000000000020366f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002035c5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020353b
- (void)copyTo:(id)arg1;	// IMP=0x00000000002034dd
- (void)writeTo:(id)arg1;	// IMP=0x000000000020347d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000203470
- (id)dictionaryRepresentation;	// IMP=0x0000000000203183
- (id)description;	// IMP=0x00000000002030d4
- (id)exportToLegacyDictionary;	// IMP=0x00000000002df324

@end

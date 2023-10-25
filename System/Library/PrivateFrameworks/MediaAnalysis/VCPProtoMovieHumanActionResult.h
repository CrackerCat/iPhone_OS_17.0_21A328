//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, VCPProtoBounds, VCPProtoTimeRange;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieHumanActionResult : PBCodable
{
    float _absoluteScore;	// 8 = 0x8
    VCPProtoBounds *_bounds;	// 16 = 0x10
    NSString *_faceId;	// 24 = 0x18
    float _humanScore;	// 32 = 0x20
    float _relativeScore;	// 36 = 0x24
    VCPProtoTimeRange *_timeRange;	// 40 = 0x28
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000195c5a
- (void).cxx_destruct;	// IMP=0x0000000000085195
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) NSString *faceId; // @synthesize faceId=_faceId;
@property(nonatomic) float humanScore; // @synthesize humanScore=_humanScore;
@property(nonatomic) float relativeScore; // @synthesize relativeScore=_relativeScore;
@property(nonatomic) float absoluteScore; // @synthesize absoluteScore=_absoluteScore;
@property(retain, nonatomic) VCPProtoTimeRange *timeRange; // @synthesize timeRange=_timeRange;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000084fd5
- (unsigned long long)hash;	// IMP=0x0000000000084cd8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000084bad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084ab0
- (void)copyTo:(id)arg1;	// IMP=0x00000000000849fc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000084939
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008492c
- (id)dictionaryRepresentation;	// IMP=0x0000000000084425
- (id)description;	// IMP=0x0000000000084376
@property(readonly, nonatomic) _Bool hasBounds;
@property(readonly, nonatomic) _Bool hasFaceId;
- (id)exportToLegacyDictionary;	// IMP=0x000000000019600b

@end

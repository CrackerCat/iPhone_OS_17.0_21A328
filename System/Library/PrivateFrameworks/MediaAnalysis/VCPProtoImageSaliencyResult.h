//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class VCPProtoBounds;

__attribute__((visibility("hidden")))
@interface VCPProtoImageSaliencyResult : PBCodable
{
    VCPProtoBounds *_bounds;	// 8 = 0x8
    float _confidence;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000007324c
- (void).cxx_destruct;	// IMP=0x00000000000d13c6
@property(retain, nonatomic) VCPProtoBounds *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) float confidence; // @synthesize confidence=_confidence;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d1312
- (unsigned long long)hash;	// IMP=0x00000000000d120d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d1168
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d10dd
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d10a9
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d1043
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d1036
- (id)dictionaryRepresentation;	// IMP=0x00000000000d0d59
- (id)description;	// IMP=0x00000000000d0caa
- (id)exportToLegacyDictionary;	// IMP=0x00000000000733f8

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDReverseGeocodingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000656a95
- (unsigned long long)hash;	// IMP=0x0000000000656a8d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000656a4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006569ed
- (void)writeTo:(id)arg1;	// IMP=0x00000000006569d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006569c3
- (id)jsonRepresentation;	// IMP=0x00000000006568b3
- (id)dictionaryRepresentation;	// IMP=0x0000000000656749
- (id)description;	// IMP=0x000000000065669a

@end

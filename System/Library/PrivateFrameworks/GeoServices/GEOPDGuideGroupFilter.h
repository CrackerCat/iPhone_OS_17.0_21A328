//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc1d33
- (unsigned long long)hash;	// IMP=0x0000000000cc1d2b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc1ce8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc1c8b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc1c6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc1c61
- (id)jsonRepresentation;	// IMP=0x0000000000cc1b51
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc19e7
- (id)description;	// IMP=0x0000000000cc1938

@end

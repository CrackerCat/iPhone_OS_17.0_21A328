//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAddressFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000babd6b
- (unsigned long long)hash;	// IMP=0x0000000000babd63
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000babd20
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000babcc3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000babca6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000babc99
- (id)jsonRepresentation;	// IMP=0x0000000000bab9dd
- (id)dictionaryRepresentation;	// IMP=0x0000000000bab873
- (id)description;	// IMP=0x0000000000bab7c4

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValuePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000041cb60
- (unsigned long long)hash;	// IMP=0x000000000041ca20
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000041c990
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000041c7f2
- (void)writeTo:(id)arg1;	// IMP=0x000000000041c6bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000041c6ad
- (id)jsonRepresentation;	// IMP=0x000000000041c0a8
- (id)dictionaryRepresentation;	// IMP=0x000000000041be3a
- (id)description;	// IMP=0x000000000041bd8b

@end

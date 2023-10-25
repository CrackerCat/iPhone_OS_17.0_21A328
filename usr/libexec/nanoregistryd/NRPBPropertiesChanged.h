//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NRPBPropertiesChanged : PBCodable
{
    double _bornOn;	// 8 = 0x8
    NSMutableArray *_properties;	// 16 = 0x10
    _Bool _thisIsAllOfThem;	// 24 = 0x18
    struct {
        unsigned int bornOn:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000007f72
- (unsigned long long)hash;	// IMP=0x0010000000007dca
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000007cef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000007b14
- (void)writeTo:(id)arg1;	// IMP=0x0010000000007992
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000007985
- (id)dictionaryRepresentation;	// IMP=0x001000000000740e
- (id)description;	// IMP=0x001000000000735f

@end

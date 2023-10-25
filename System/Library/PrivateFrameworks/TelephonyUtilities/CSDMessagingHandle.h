//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, TUHandle;

__attribute__((visibility("hidden")))
@interface CSDMessagingHandle : PBCodable
{
    NSString *_isoCountryCode;	// 8 = 0x8
    int _type;	// 16 = 0x10
    NSString *_value;	// 24 = 0x18
    struct {
        unsigned int type:1;
    } _has;	// 32 = 0x20
}

+ (id)handleWithTUHandle:(id)arg1;	// IMP=0x0010000000028eb4
- (void).cxx_destruct;	// IMP=0x0000000000127099
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000126fcc
- (unsigned long long)hash;	// IMP=0x0000000000126f4c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000126e69
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000126da6
- (void)copyTo:(id)arg1;	// IMP=0x0000000000126d23
- (void)writeTo:(id)arg1;	// IMP=0x0000000000126ca0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000126c93
- (id)dictionaryRepresentation;	// IMP=0x0000000000126989
- (id)description;	// IMP=0x00000000001268da
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(readonly, nonatomic) _Bool hasValue;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001267fc
- (id)typeAsString:(int)arg1;	// IMP=0x00000000001267b3
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) TUHandle *tuHandle;

@end

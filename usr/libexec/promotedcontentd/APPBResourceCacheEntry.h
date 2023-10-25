//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface APPBResourceCacheEntry : PBCodable
{
    double _expirationDate;	// 8 = 0x8
    NSString *_adIdentifier;	// 16 = 0x10
    NSString *_uRL;	// 24 = 0x18
    struct {
        unsigned int expirationDate:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000075482
@property(nonatomic) double expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSString *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(retain, nonatomic) NSString *uRL; // @synthesize uRL=_uRL;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007539f
- (unsigned long long)hash;	// IMP=0x001000000007524f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000075163
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000750a1
- (void)copyTo:(id)arg1;	// IMP=0x001000000007501a
- (void)writeTo:(id)arg1;	// IMP=0x0010000000074f95
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000074f88
- (id)dictionaryRepresentation;	// IMP=0x0010000000074cd1
- (id)description;	// IMP=0x0010000000074c22
@property(nonatomic) _Bool hasExpirationDate;
@property(readonly, nonatomic) _Bool hasAdIdentifier;
@property(readonly, nonatomic) _Bool hasURL;

@end

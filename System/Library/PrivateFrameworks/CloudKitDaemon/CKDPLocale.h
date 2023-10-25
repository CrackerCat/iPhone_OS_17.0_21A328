//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPLocale : PBCodable
{
    NSString *_languageCode;	// 8 = 0x8
    NSString *_regionCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000258047
@property(retain, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000257f9a
- (unsigned long long)hash;	// IMP=0x0000000000257f4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000257e95
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000257df7
- (void)copyTo:(id)arg1;	// IMP=0x0000000000257d94
- (void)writeTo:(id)arg1;	// IMP=0x0000000000257d37
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000257d2a
- (id)dictionaryRepresentation;	// IMP=0x0000000000257b3d
- (id)description;	// IMP=0x0000000000257a8e
@property(readonly, nonatomic) _Bool hasRegionCode;
@property(readonly, nonatomic) _Bool hasLanguageCode;

@end

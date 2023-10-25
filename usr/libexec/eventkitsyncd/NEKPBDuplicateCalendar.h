//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NEKPBDuplicateCalendar : PBCodable
{
    NSString *_externalId;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000054ffc
@property(retain, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000054f4f
- (unsigned long long)hash;	// IMP=0x0010000000054f02
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000054e4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000054dac
- (void)copyTo:(id)arg1;	// IMP=0x0010000000054d49
- (void)writeTo:(id)arg1;	// IMP=0x0010000000054cec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000054cdf
- (id)dictionaryRepresentation;	// IMP=0x0010000000054af2
- (id)description;	// IMP=0x0010000000054a43
@property(readonly, nonatomic) _Bool hasExternalId;
@property(readonly, nonatomic) _Bool hasName;

@end

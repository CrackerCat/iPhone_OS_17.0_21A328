//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface ICAppleMusicAPITokenError : PBCodable
{
    long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_localizedDescription;	// 24 = 0x18
    int _phase;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int phase:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00200000000d7cb1
@property(retain, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d7bae
- (unsigned long long)hash;	// IMP=0x00100000000d7b02
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d79ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d7910
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d7865
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d7858
- (id)dictionaryRepresentation;	// IMP=0x00100000000d7713
- (id)description;	// IMP=0x00100000000d7664
@property(nonatomic) _Bool hasPhase;
@property(nonatomic) int phase; // @synthesize phase=_phase;
- (int);	// IMP=0x00100000000d75f9
@property(readonly, nonatomic) _Bool hasLocalizedDescription;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
- (id)initWithNSError:(id)arg1;	// IMP=0x00100000000c491d

@end

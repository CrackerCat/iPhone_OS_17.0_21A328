//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SDUnlockSessionKeyExchangeResponse : PBCodable
{
    NSData *_key;	// 8 = 0x8
    unsigned int _sessionID;	// 16 = 0x10
    unsigned int _version;	// 20 = 0x14
    _Bool _keyFailed;	// 24 = 0x18
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int keyFailed:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000014feb
@property(nonatomic) _Bool keyFailed; // @synthesize keyFailed=_keyFailed;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000014ef3
- (unsigned long long)hash;	// IMP=0x0010000000014e54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000014d3a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000014c68
- (void)copyTo:(id)arg1;	// IMP=0x0010000000014bc5
- (void)writeTo:(id)arg1;	// IMP=0x0010000000014b15
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000014b08
- (id)dictionaryRepresentation;	// IMP=0x0010000000014675
- (id)description;	// IMP=0x00100000000145c6
@property(nonatomic) _Bool hasKeyFailed;
@property(readonly, nonatomic) _Bool hasKey;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

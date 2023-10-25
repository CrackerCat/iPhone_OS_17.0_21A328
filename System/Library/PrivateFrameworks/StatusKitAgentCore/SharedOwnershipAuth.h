//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface SharedOwnershipAuth : PBCodable
{
    NSData *_channelPublicKey;	// 8 = 0x8
    NSData *_nonce;	// 16 = 0x10
    NSData *_serverEncryptionKey;	// 24 = 0x18
    NSData *_signNonce;	// 32 = 0x20
    NSString *_simpleJwt;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007948b
@property(retain, nonatomic) NSData *serverEncryptionKey; // @synthesize serverEncryptionKey=_serverEncryptionKey;
@property(retain, nonatomic) NSData *signNonce; // @synthesize signNonce=_signNonce;
@property(retain, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSData *channelPublicKey; // @synthesize channelPublicKey=_channelPublicKey;
@property(retain, nonatomic) NSString *simpleJwt; // @synthesize simpleJwt=_simpleJwt;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000007930f
- (unsigned long long)hash;	// IMP=0x0000000000079270
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079138
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000079020
- (void)copyTo:(id)arg1;	// IMP=0x0000000000078f5d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000078ea9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000078e9c
- (id)dictionaryRepresentation;	// IMP=0x0000000000078bc4
- (id)description;	// IMP=0x0000000000078b15
@property(readonly, nonatomic) _Bool hasServerEncryptionKey;
@property(readonly, nonatomic) _Bool hasSignNonce;
@property(readonly, nonatomic) _Bool hasNonce;
@property(readonly, nonatomic) _Bool hasChannelPublicKey;
@property(readonly, nonatomic) _Bool hasSimpleJwt;

@end

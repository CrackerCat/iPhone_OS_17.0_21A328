//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SecDbKeychainSerializedItemV7 : PBCodable
{
    NSData *_encryptedMetadata;	// 8 = 0x8
    NSData *_encryptedSecretData;	// 16 = 0x10
    int _keyclass;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001c4b07
@property(nonatomic) int keyclass; // @synthesize keyclass=_keyclass;
@property(retain, nonatomic) NSData *encryptedMetadata; // @synthesize encryptedMetadata=_encryptedMetadata;
@property(retain, nonatomic) NSData *encryptedSecretData; // @synthesize encryptedSecretData=_encryptedSecretData;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c4a2c
- (unsigned long long)hash;	// IMP=0x00100000001c49c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c4900
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001c4854
- (void)copyTo:(id)arg1;	// IMP=0x00100000001c47d5
- (void)writeTo:(id)arg1;	// IMP=0x00100000001c475f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001c456a
- (id)dictionaryRepresentation;	// IMP=0x00100000001c447a
- (id)description;	// IMP=0x00100000001c43cb
- (int)StringAsKeyclass:(id)arg1;	// IMP=0x00100000001c42ab
- (id)keyclassAsString:(int)arg1;	// IMP=0x00100000001c4260

@end

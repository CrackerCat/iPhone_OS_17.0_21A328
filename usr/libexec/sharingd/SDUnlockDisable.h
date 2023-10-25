//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SDUnlockDisable : PBCodable
{
    NSString *_pairingID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00200000000beef5
@property(retain, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000bee5d
- (unsigned long long)hash;	// IMP=0x00100000000bee11
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000bed56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000becc2
- (void)copyTo:(id)arg1;	// IMP=0x00100000000bec5f
- (void)writeTo:(id)arg1;	// IMP=0x00100000000bebf9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000bebec
- (id)dictionaryRepresentation;	// IMP=0x00100000000be94e
- (id)description;	// IMP=0x00100000000be89f
@property(readonly, nonatomic) _Bool hasPairingID;
@property(nonatomic) _Bool hasVersion;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDAutoUnlockStartAdvertising : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ce974
- (unsigned long long)hash;	// IMP=0x00100000001ce94a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ce8b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ce856
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ce832
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ce807
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ce7fa
- (id)dictionaryRepresentation;	// IMP=0x00100000001ce5ac
- (id)description;	// IMP=0x00100000001ce4fd
@property(nonatomic) _Bool hasVersion;

@end

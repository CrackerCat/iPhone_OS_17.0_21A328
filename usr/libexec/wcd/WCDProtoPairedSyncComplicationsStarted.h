//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface WCDProtoPairedSyncComplicationsStarted : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    CDStruct_f20694ce _has;	// 12 = 0xc
}

@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002dec0
- (unsigned long long)hash;	// IMP=0x001000000002de96
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002de04
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002dda2
- (void)copyTo:(id)arg1;	// IMP=0x001000000002dd7e
- (void)writeTo:(id)arg1;	// IMP=0x001000000002dd53
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002dd46
- (id)dictionaryRepresentation;	// IMP=0x001000000002daf8
- (id)description;	// IMP=0x001000000002da49
@property(nonatomic) _Bool hasVersion;

@end

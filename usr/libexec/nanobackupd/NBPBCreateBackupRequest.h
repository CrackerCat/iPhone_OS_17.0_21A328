//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface NBPBCreateBackupRequest : PBRequest
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00400000000031e7
- (unsigned long long)hash;	// IMP=0x00100000000031df
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000319c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000003163
- (void)copyTo:(id)arg1;	// IMP=0x001000000000315d
- (void)writeTo:(id)arg1;	// IMP=0x0010000000003157
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000000314a
- (id)dictionaryRepresentation;	// IMP=0x0010000000003036
- (id)description;	// IMP=0x0010000000002f87

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface XDCPingMessage : PBCodable
{
    NSString *_uuid;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000fd6b0
- (unsigned long long)hash;	// IMP=0x00100000000fd67c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fd5ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fd574
- (void)writeTo:(id)arg1;	// IMP=0x00100000000fd550
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000fd407
- (id)dictionaryRepresentation;	// IMP=0x00100000000fd3ab
- (id)description;	// IMP=0x00100000000fd2fc

@end

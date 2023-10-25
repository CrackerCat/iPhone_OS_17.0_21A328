//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

@interface PDDPPublishClassRequest : PBRequest
{
    NSMutableArray *_payloads;	// 8 = 0x8
}

+ (Class)payloadType;	// IMP=0x00200000000699ad
- (void).cxx_destruct;	// IMP=0x002000000006a436
@property(retain, nonatomic) NSMutableArray *payloads; // @synthesize payloads=_payloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006a2d8
- (unsigned long long)hash;	// IMP=0x001000000006a2bb
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006a22b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006a067
- (void)copyTo:(id)arg1;	// IMP=0x0010000000069fa2
- (Class)responseClass;	// IMP=0x0010000000069f91
- (unsigned int)requestTypeCode;	// IMP=0x0010000000069f86
- (void)writeTo:(id)arg1;	// IMP=0x0010000000069e50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000069c9d
- (id)dictionaryRepresentation;	// IMP=0x0010000000069a6d
- (id)description;	// IMP=0x00100000000699be
- (id)payloadAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000069990
- (unsigned long long)payloadsCount;	// IMP=0x0010000000069973
- (void);	// IMP=0x0010000000069909
- (void)clearPayloads;	// IMP=0x00100000000698ec

@end

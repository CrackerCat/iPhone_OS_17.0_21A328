//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface CKCDPCodeServiceResponseAssetAuthorizationResponse : PBCodable
{
    NSData *_authGetResponseBody;	// 8 = 0x8
    NSMutableArray *_responseHeaders;	// 16 = 0x10
    NSString *_responseUUID;	// 24 = 0x18
}

+ (Class)responseHeadersType;	// IMP=0x0010000000314c2b
- (void).cxx_destruct;	// IMP=0x000000000031592e
@property(retain, nonatomic) NSMutableArray *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSData *authGetResponseBody; // @synthesize authGetResponseBody=_authGetResponseBody;
@property(retain, nonatomic) NSString *responseUUID; // @synthesize responseUUID=_responseUUID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000031572b
- (unsigned long long)hash;	// IMP=0x00000000003156be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003155de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003153d9
- (void)copyTo:(id)arg1;	// IMP=0x00000000003152d5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000315166
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000315159
- (id)dictionaryRepresentation;	// IMP=0x0000000000314ceb
- (id)description;	// IMP=0x0000000000314c3c
- (id)responseHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000314c0e
- (unsigned long long)responseHeadersCount;	// IMP=0x0000000000314bf1
- (void)addResponseHeaders:(id)arg1;	// IMP=0x0000000000314b87
- (void)clearResponseHeaders;	// IMP=0x0000000000314b6a
@property(readonly, nonatomic) _Bool hasAuthGetResponseBody;
@property(readonly, nonatomic) _Bool hasResponseUUID;

@end

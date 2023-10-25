//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PDDPClientConfig, PDDPStatus, PDDPUserInfo;

@interface PDDPBootstrapResponse : PBCodable
{
    PDDPClientConfig *_clientConfig;	// 8 = 0x8
    NSMutableArray *_endpoints;	// 16 = 0x10
    PDDPStatus *_status;	// 24 = 0x18
    PDDPUserInfo *_userInfo;	// 32 = 0x20
}

+ (Class)endpointsType;	// IMP=0x0020000000153078
- (void).cxx_destruct;	// IMP=0x0020000000153fed
@property(retain, nonatomic) NSMutableArray *endpoints; // @synthesize endpoints=_endpoints;
@property(retain, nonatomic) PDDPClientConfig *clientConfig; // @synthesize clientConfig=_clientConfig;
@property(retain, nonatomic) PDDPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) PDDPStatus *status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000153d63
- (unsigned long long)hash;	// IMP=0x0010000000153cdf
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000153bd3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001539a8
- (void)copyTo:(id)arg1;	// IMP=0x0010000000153884
- (void)writeTo:(id)arg1;	// IMP=0x00100000001536f8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000153447
- (id)dictionaryRepresentation;	// IMP=0x0010000000153138
- (id)description;	// IMP=0x0010000000153089
- (id)endpointsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000015305b
- (unsigned long long)endpointsCount;	// IMP=0x001000000015303e
- (void)addEndpoints:(id)arg1;	// IMP=0x0010000000152fd4
- (void)clearEndpoints;	// IMP=0x0010000000152fb7
@property(readonly, nonatomic) _Bool hasClientConfig;
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(readonly, nonatomic) _Bool hasStatus;

@end

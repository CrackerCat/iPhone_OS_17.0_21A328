//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest
{
    NSString *_apiToken;	// 8 = 0x8
    _Bool _forceFetchToken;	// 16 = 0x10
    struct {
        unsigned int forceFetchToken:1;
    } _has;	// 20 = 0x14
}

+ (id)options;	// IMP=0x0010000000197196
- (void).cxx_destruct;	// IMP=0x00000000001978d6
@property(nonatomic) _Bool forceFetchToken; // @synthesize forceFetchToken=_forceFetchToken;
@property(retain, nonatomic) NSString *apiToken; // @synthesize apiToken=_apiToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019783e
- (unsigned long long)hash;	// IMP=0x00000000001977eb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000197721
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000197689
- (void)copyTo:(id)arg1;	// IMP=0x0000000000197626
- (Class)responseClass;	// IMP=0x0000000000197615
- (unsigned int)requestTypeCode;	// IMP=0x000000000019760a
- (void)writeTo:(id)arg1;	// IMP=0x00000000001975a3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000197596
- (id)dictionaryRepresentation;	// IMP=0x00000000001972ef
- (id)description;	// IMP=0x0000000000197240
@property(nonatomic) _Bool hasForceFetchToken;
@property(readonly, nonatomic) _Bool hasApiToken;

@end

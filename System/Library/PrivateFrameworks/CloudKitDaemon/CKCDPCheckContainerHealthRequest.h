//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPCheckContainerHealthRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009fb03
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000009fa56
- (unsigned long long)hash;	// IMP=0x000000000009fa09
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009f951
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000009f8b3
- (void)copyTo:(id)arg1;	// IMP=0x000000000009f850
- (Class)responseClass;	// IMP=0x000000000009f83f
- (unsigned int)requestTypeCode;	// IMP=0x000000000009f834
- (void)writeTo:(id)arg1;	// IMP=0x000000000009f7d7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000009f66d
- (id)dictionaryRepresentation;	// IMP=0x000000000009f5ea
- (id)description;	// IMP=0x000000000009f53b
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICPBDGSStartDelegationRequest : PBRequest
{
    NSMutableArray *_playerInfoContextRequestTokens;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d158f
- (unsigned long long)hash;	// IMP=0x00000000000d1572
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d14e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1344
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d120e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d1201
- (id)dictionaryRepresentation;	// IMP=0x00000000000d0fd1
- (id)description;	// IMP=0x00000000000d0f22

@end

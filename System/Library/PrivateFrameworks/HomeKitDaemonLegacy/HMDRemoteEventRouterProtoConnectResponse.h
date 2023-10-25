//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoConnectResponse : PBCodable
{
    NSMutableArray *_cachedEvents;	// 8 = 0x8
}

+ (Class)cachedEventsType;	// IMP=0x00100000000a2e32
- (void).cxx_destruct;	// IMP=0x00000000000a2c6c
@property(retain, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000a2b0e
- (unsigned long long)hash;	// IMP=0x00000000000a2af1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a2a61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a289d
- (void)copyTo:(id)arg1;	// IMP=0x00000000000a27d8
- (void)writeTo:(id)arg1;	// IMP=0x00000000000a26a2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000a2695
- (id)dictionaryRepresentation;	// IMP=0x00000000000a2465
- (id)description;	// IMP=0x00000000000a23b6
- (id)cachedEventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000a2399
- (unsigned long long)cachedEventsCount;	// IMP=0x00000000000a237c
- (void)addCachedEvents:(id)arg1;	// IMP=0x00000000000a2312
- (void)clearCachedEvents;	// IMP=0x00000000000a22f5

@end

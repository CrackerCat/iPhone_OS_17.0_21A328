//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface SECSFAActionDropEvent : PBCodable
{
    _Bool _excludeCount;	// 8 = 0x8
    _Bool _excludeEvent;	// 9 = 0x9
    struct {
        unsigned int excludeCount:1;
        unsigned int excludeEvent:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool excludeCount; // @synthesize excludeCount=_excludeCount;
@property(nonatomic) _Bool excludeEvent; // @synthesize excludeEvent=_excludeEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000022fb8
- (unsigned long long)hash;	// IMP=0x0000000000022f72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022ea4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022e23
- (void)copyTo:(id)arg1;	// IMP=0x0000000000022dc5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000022d50
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000022d43
- (id)dictionaryRepresentation;	// IMP=0x0000000000022c48
- (id)description;	// IMP=0x0000000000022b99
@property(nonatomic) _Bool hasExcludeCount;
@property(nonatomic) _Bool hasExcludeEvent;

@end

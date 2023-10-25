//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDDPButtonInfo : PBCodable
{
    NSString *_title;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000196949
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019689c
- (unsigned long long)hash;	// IMP=0x001000000019684f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000196797
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001966f9
- (void)copyTo:(id)arg1;	// IMP=0x0010000000196696
- (void)writeTo:(id)arg1;	// IMP=0x0010000000196639
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019662c
- (id)dictionaryRepresentation;	// IMP=0x001000000019643f
- (id)description;	// IMP=0x0010000000196390
@property(readonly, nonatomic) _Bool hasUrl;
@property(readonly, nonatomic) _Bool hasTitle;

@end

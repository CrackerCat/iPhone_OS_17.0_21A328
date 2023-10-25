//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PUProtoPasscodePolicy;

@interface PUProtoPasscodeState : PBCodable
{
    PUProtoPasscodePolicy *_policy;	// 8 = 0x8
    _Bool _hasPasscode;	// 16 = 0x10
    _Bool _isLocked;	// 17 = 0x11
    _Bool _isUnlockOnly;	// 18 = 0x12
    _Bool _isWristDetectionEnabled;	// 19 = 0x13
    struct {
        unsigned int isWristDetectionEnabled:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0020000000009c5f
@property(retain, nonatomic) PUProtoPasscodePolicy *policy; // @synthesize policy=_policy;
@property(nonatomic) _Bool isWristDetectionEnabled; // @synthesize isWristDetectionEnabled=_isWristDetectionEnabled;
@property(nonatomic) _Bool isUnlockOnly; // @synthesize isUnlockOnly=_isUnlockOnly;
@property(nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(nonatomic) _Bool hasPasscode; // @synthesize hasPasscode=_hasPasscode;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000009b27
- (unsigned long long)hash;	// IMP=0x0010000000009aa4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000000998d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000098cc
- (void)copyTo:(id)arg1;	// IMP=0x001000000000983f
- (void)writeTo:(id)arg1;	// IMP=0x001000000000978d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000009780
- (id)dictionaryRepresentation;	// IMP=0x00100000000091e9
- (id)description;	// IMP=0x001000000000913a
@property(readonly, nonatomic) _Bool hasPolicy;
@property(nonatomic) _Bool hasIsWristDetectionEnabled;

@end

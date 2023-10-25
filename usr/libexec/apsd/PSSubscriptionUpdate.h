//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface PSSubscriptionUpdate : PBCodable
{
    int _subscriptionsStatus;	// 8 = 0x8
    struct {
        unsigned int subscriptionsStatus:1;
    } _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x002000000007efe9
- (unsigned long long)hash;	// IMP=0x001000000007efbe
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007ef2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007eeca
- (void)copyTo:(id)arg1;	// IMP=0x001000000007eea6
- (void)writeTo:(id)arg1;	// IMP=0x001000000007ee7b
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007ee6e
- (id)dictionaryRepresentation;	// IMP=0x001000000007ec14
- (id)description;	// IMP=0x001000000007eb65
- (int)StringAsSubscriptionsStatus:(id)arg1;	// IMP=0x001000000007eb46
- (id)subscriptionsStatusAsString:(int)arg1;	// IMP=0x001000000007eb02
@property(nonatomic) _Bool hasSubscriptionsStatus;
@property(nonatomic) int subscriptionsStatus; // @synthesize subscriptionsStatus=_subscriptionsStatus;

@end

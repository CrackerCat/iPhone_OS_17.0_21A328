//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface PDDPPrivilege : PBCodable
{
    NSMutableArray *_locationIds;	// 8 = 0x8
    NSString *_privilegeName;	// 16 = 0x10
}

+ (Class)locationIdsType;	// IMP=0x00200000000d7412
- (void).cxx_destruct;	// IMP=0x00200000000d7dd5
@property(retain, nonatomic) NSMutableArray *locationIds; // @synthesize locationIds=_locationIds;
@property(retain, nonatomic) NSString *privilegeName; // @synthesize privilegeName=_privilegeName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d7c17
- (unsigned long long);	// IMP=0x00100000000d7bca
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d7b12
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d793a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d7852
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d7700
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d76f3
- (id)dictionaryRepresentation;	// IMP=0x00100000000d74d2
- (id)description;	// IMP=0x00100000000d7423
- (id)locationIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d73f5
- (unsigned long long)locationIdsCount;	// IMP=0x00100000000d73d8
- (void)addLocationIds:(id)arg1;	// IMP=0x00100000000d736e
- (void)clearLocationIds;	// IMP=0x00100000000d7351
@property(readonly, nonatomic) _Bool hasPrivilegeName;

@end

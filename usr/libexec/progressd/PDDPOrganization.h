//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPDate;

@interface PDDPOrganization : PBCodable
{
    PDDPDate *_dateCreated;	// 8 = 0x8
    PDDPDate *_dateLastModified;	// 16 = 0x10
    NSMutableArray *;	// 24 = 0x18
    NSMutableArray *_locations;	// 32 = 0x20
    NSString *_organizationId;	// 40 = 0x28
    NSString *_organizationName;	// 48 = 0x30
    int _organizationType;	// 56 = 0x38
    struct {
        unsigned int organizationType:1;
    } _has;	// 60 = 0x3c
}

+ (Class)emailDomainsType;	// IMP=0x00200000000da34f
+ (Class)locationsType;	// IMP=0x00100000000da27d
- (void).cxx_destruct;	// IMP=0x00200000000db9f8
@property(retain, nonatomic) NSMutableArray *emailDomains; // @synthesize emailDomains=_emailDomains;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) PDDPDate *dateLastModified; // @synthesize dateLastModified=_dateLastModified;
@property(retain, nonatomic) PDDPDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *organizationId; // @synthesize organizationId=_organizationId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000db608
- (unsigned long long)hash;	// IMP=0x00100000000db51e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000db38b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000dafdd
- (void)copyTo:(id)arg1;	// IMP=0x00100000000dade9
- (void)writeTo:(id)arg1;	// IMP=0x00100000000dab39
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000dab2c
- (id)dictionaryRepresentation;	// IMP=0x00100000000da40f
- (id)description;	// IMP=0x00100000000da360
- (id)emailDomainsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000da332
- (unsigned long long)emailDomainsCount;	// IMP=0x00100000000da315
- (void)addEmailDomains:(id)arg1;	// IMP=0x00100000000da2ab
- (void)clearEmailDomains;	// IMP=0x00100000000da28e
- (id)locationsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000da260
- (unsigned long long)locationsCount;	// IMP=0x00100000000da243
- (void)addLocations:(id)arg1;	// IMP=0x00100000000da1d9
- (void)clearLocations;	// IMP=0x00100000000da1bc
- (int)StringAsOrganizationType:(id)arg1;	// IMP=0x00100000000da125
- (id)organizationTypeAsString:(int)arg1;	// IMP=0x00100000000da0dc
@property(nonatomic) _Bool hasOrganizationType;
@property(nonatomic) int organizationType; // @synthesize organizationType=_organizationType;
@property(readonly, nonatomic) _Bool hasDateLastModified;
@property(readonly, nonatomic) _Bool hasDateCreated;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasOrganizationId;

@end

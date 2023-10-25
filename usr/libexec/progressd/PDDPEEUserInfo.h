//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PDDPUserInfo;

@interface PDDPEEUserInfo : PBCodable
{
    NSMutableArray *_locations;	// 8 = 0x8
    NSString *_organizationId;	// 16 = 0x10
    NSString *_organizationName;	// 24 = 0x18
    NSMutableArray *_privileges;	// 32 = 0x20
    NSMutableArray *_roles;	// 40 = 0x28
    PDDPUserInfo *_userInfo;	// 48 = 0x30
    _Bool _analyticsOptedIn;	// 56 = 0x38
    _Bool _isEduUser;	// 57 = 0x39
    _Bool _organizationFacetimeMessagesEnabled;	// 58 = 0x3a
    _Bool _organizationProgressTrackingAllowed;	// 59 = 0x3b
    struct {
        unsigned int analyticsOptedIn:1;
        unsigned int isEduUser:1;
        unsigned int organizationFacetimeMessagesEnabled:1;
        unsigned int organizationProgressTrackingAllowed:1;
    } _has;	// 60 = 0x3c
}

+ (Class)locationsType;	// IMP=0x002000000012c742
+ (Class)rolesType;	// IMP=0x001000000012c670
+ (Class)privilegesType;	// IMP=0x001000000012c59e
- (void).cxx_destruct;	// IMP=0x002000000012eb37
@property(nonatomic) _Bool analyticsOptedIn; // @synthesize analyticsOptedIn=_analyticsOptedIn;
@property(nonatomic) _Bool organizationFacetimeMessagesEnabled; // @synthesize organizationFacetimeMessagesEnabled=_organizationFacetimeMessagesEnabled;
@property(nonatomic) _Bool organizationProgressTrackingAllowed; // @synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed;
@property(retain, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(retain, nonatomic) NSString *organizationId; // @synthesize organizationId=_organizationId;
@property(nonatomic) _Bool isEduUser; // @synthesize isEduUser=_isEduUser;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSMutableArray *roles; // @synthesize roles=_roles;
@property(retain, nonatomic) NSMutableArray *privileges; // @synthesize privileges=_privileges;
@property(retain, nonatomic) PDDPUserInfo *userInfo; // @synthesize userInfo=_userInfo;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000012e5ed
- (unsigned long long)hash;	// IMP=0x001000000012e496
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000012e257
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000012dd0e
- (void)copyTo:(id)arg1;	// IMP=0x001000000012da54
- (void)writeTo:(id)arg1;	// IMP=0x001000000012d67d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000012d670
- (id)dictionaryRepresentation;	// IMP=0x001000000012c950
- (id)description;	// IMP=0x001000000012c8a1
@property(nonatomic) _Bool hasAnalyticsOptedIn;
@property(nonatomic) _Bool hasOrganizationFacetimeMessagesEnabled;
@property(nonatomic) _Bool hasOrganizationProgressTrackingAllowed;
@property(readonly, nonatomic) _Bool hasOrganizationName;
@property(readonly, nonatomic) _Bool hasOrganizationId;
@property(nonatomic) _Bool hasIsEduUser;
- (id)locationsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012c725
- (unsigned long long)locationsCount;	// IMP=0x001000000012c708
- (void)addLocations:(id)arg1;	// IMP=0x001000000012c69e
- (void)clearLocations;	// IMP=0x001000000012c681
- (id)rolesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012c653
- (unsigned long long)rolesCount;	// IMP=0x001000000012c636
- (void)addRoles:(id)arg1;	// IMP=0x001000000012c5cc
- (void)clearRoles;	// IMP=0x001000000012c5af
- (id)privilegesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000012c581
- (unsigned long long)privilegesCount;	// IMP=0x001000000012c564
- (void)addPrivileges:(id)arg1;	// IMP=0x001000000012c4fa
- (void)clearPrivileges;	// IMP=0x001000000012c4dd
@property(readonly, nonatomic) _Bool hasUserInfo;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface PDDPClientConfig : PBCodable
{
    int _cloudKitSyncFetchGracePeriod;	// 8 = 0x8
    NSMutableArray *_excludeAppIds;	// 16 = 0x10
    NSMutableArray *_hostAllowLists;	// 24 = 0x18
    _Bool _isContextTrackingAllowed;	// 32 = 0x20
    _Bool _recordActivity;	// 33 = 0x21
    _Bool _sendToCloudKit;	// 34 = 0x22
    _Bool _sendToOnramp;	// 35 = 0x23
    struct {
        unsigned int cloudKitSyncFetchGracePeriod:1;
        unsigned int isContextTrackingAllowed:1;
        unsigned int recordActivity:1;
        unsigned int sendToCloudKit:1;
        unsigned int sendToOnramp:1;
    } _has;	// 36 = 0x24
}

+ (Class)hostAllowListType;	// IMP=0x00200000000205a0
+ (Class)excludeAppIdsType;	// IMP=0x00100000000204ce
- (void).cxx_destruct;	// IMP=0x0020000000021c8b
@property(nonatomic) _Bool isContextTrackingAllowed; // @synthesize isContextTrackingAllowed=_isContextTrackingAllowed;
@property(nonatomic) int cloudKitSyncFetchGracePeriod; // @synthesize cloudKitSyncFetchGracePeriod=_cloudKitSyncFetchGracePeriod;
@property(retain, nonatomic) NSMutableArray *hostAllowLists; // @synthesize hostAllowLists=_hostAllowLists;
@property(retain, nonatomic) NSMutableArray *excludeAppIds; // @synthesize excludeAppIds=_excludeAppIds;
@property(nonatomic) _Bool sendToOnramp; // @synthesize sendToOnramp=_sendToOnramp;
@property(nonatomic) _Bool sendToCloudKit; // @synthesize sendToCloudKit=_sendToCloudKit;
@property(nonatomic) _Bool recordActivity; // @synthesize recordActivity=_recordActivity;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002191e
- (unsigned long long)hash;	// IMP=0x0010000000021810
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000021648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000021293
- (void)copyTo:(id)arg1;	// IMP=0x00100000000210af
- (void)writeTo:(id)arg1;	// IMP=0x0010000000020de1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000020dd4
- (id)dictionaryRepresentation;	// IMP=0x00100000000206ee
- (id)description;	// IMP=0x001000000002063f
@property(nonatomic) _Bool hasIsContextTrackingAllowed;
@property(nonatomic) _Bool hasCloudKitSyncFetchGracePeriod;
- (id)hostAllowListAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000020583
- (unsigned long long)hostAllowListsCount;	// IMP=0x0010000000020566
- (void)addHostAllowList:(id)arg1;	// IMP=0x00100000000204fc
- (void)clearHostAllowLists;	// IMP=0x00100000000204df
- (id)excludeAppIdsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000204b1
- (unsigned long long)excludeAppIdsCount;	// IMP=0x0010000000020494
- (void)addExcludeAppIds:(id)arg1;	// IMP=0x001000000002042a
- (void)clearExcludeAppIds;	// IMP=0x001000000002040d
@property(nonatomic) _Bool hasSendToOnramp;
@property(nonatomic) _Bool hasSendToCloudKit;
@property(nonatomic) _Bool hasRecordActivity;

@end

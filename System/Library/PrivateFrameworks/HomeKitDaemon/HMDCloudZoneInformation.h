//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCloudZoneInformation : HMFObject
{
    _Bool _fetchFailed;	// 8 = 0x8
    _Bool _firstFetch;	// 9 = 0x9
    _Bool _zoneCreated;	// 10 = 0xa
    _Bool _handlesCloudRecord;	// 11 = 0xb
    NSUUID *_uuid;	// 16 = 0x10
    NSString *_ownerName;	// 24 = 0x18
    long long _schemaVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006b3685
+ (id)shortDescription;	// IMP=0x00100000006b3673
+ (id)cloudZonesArrayWithCloudZones:(id)arg1;	// IMP=0x00100000006b3464
+ (id)cloudZoneInformationWithCloudZones:(id)arg1;	// IMP=0x00100000006b306c
+ (id)cloudZonesWithDictionary:(id)arg1;	// IMP=0x00100000006b2c9a
- (void).cxx_destruct;	// IMP=0x00000000006b2ab1
@property(nonatomic, getter=doesHandlesCloudRecord) _Bool handlesCloudRecord; // @synthesize handlesCloudRecord=_handlesCloudRecord;
@property(nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(nonatomic, getter=isZoneCreated) _Bool zoneCreated; // @synthesize zoneCreated=_zoneCreated;
@property(nonatomic, getter=isFirstFetch) _Bool firstFetch; // @synthesize firstFetch=_firstFetch;
@property(nonatomic, getter=didFetchFailed) _Bool fetchFailed; // @synthesize fetchFailed=_fetchFailed;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;	// IMP=0x00000000006b2946
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 parent:(id)arg3;	// IMP=0x00000000006b28d7
- (id)modelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;	// IMP=0x00000000006b28bd
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000006b28b7
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000006b27e0
- (void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2;	// IMP=0x00000000006b2725
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006b25e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006b2435
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006b2377
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x00000000006b220e
- (id)shortDescription;	// IMP=0x00000000006b214c
- (id)initWithOwnerName:(id)arg1 uuid:(id)arg2;	// IMP=0x00000000006b201a
- (id)init;	// IMP=0x00000000006b1f72

// Remaining properties
@property(readonly) Class superclass;

@end

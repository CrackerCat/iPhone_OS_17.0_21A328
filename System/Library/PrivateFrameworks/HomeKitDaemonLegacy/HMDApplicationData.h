//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDApplicationData : HMFObject
{
    NSUUID *_parentUUID;	// 8 = 0x8
    NSUUID *_uuid;	// 16 = 0x10
    NSMutableDictionary *_appDataDictionary;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000001a3132
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001a312a
- (void).cxx_destruct;	// IMP=0x00000000001a2fe8
@property(retain, nonatomic) NSMutableDictionary *appDataDictionary; // @synthesize appDataDictionary=_appDataDictionary;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (id)logIdentifier;	// IMP=0x00000000001a2f3d
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000001a2e1c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a2d46
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a2ace
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a2a45
- (void)encodeForXPCTransportWithCoder:(id)arg1 key:(id)arg2;	// IMP=0x00000000001a2978
- (void)updateParentUUIDIfNil:(id)arg1;	// IMP=0x00000000001a2897
- (void)updateWithModel:(id)arg1;	// IMP=0x00000000001a25f9
- (id)dumpState;	// IMP=0x00000000001a218f
- (id)dictionary;	// IMP=0x00000000001a2147
- (void)removeApplicationDataForIdentifier:(id)arg1;	// IMP=0x00000000001a20d8
- (id)applicationDataForIdentifier:(id)arg1;	// IMP=0x00000000001a1db0
- (void)setApplicationData:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000001a164a
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithDictionary:(id)arg1 parentUUID:(id)arg2;	// IMP=0x00000000001a14a1
- (id)initWithParentUUID:(id)arg1;	// IMP=0x00000000001a13ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

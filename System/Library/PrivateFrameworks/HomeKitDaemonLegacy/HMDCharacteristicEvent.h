//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDCharacteristicEvent
{
    id _eventValue;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008fed29
+ (id)logCategory;	// IMP=0x00100000008fecf9
- (void).cxx_destruct;	// IMP=0x00000000008fe89f
@property(retain, nonatomic) id eventValue; // @synthesize eventValue=_eventValue;
- (id)analyticsTriggerEventData;	// IMP=0x00000000008fe7c1
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000008fe7bb
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008fe4e8
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000008fe2f5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008fe239
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008fe07b
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000008fe04c
- (id)createPayload;	// IMP=0x00000000008fdf78
- (id)dumpState;	// IMP=0x00000000008fdd26
- (_Bool)_compareEventValue:(id)arg1;	// IMP=0x00000000008fdb4e
- (_Bool)_evaluateNewValue:(id)arg1;	// IMP=0x00000000008fd821
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000008fd556
- (id)emptyModelObject;	// IMP=0x00000000008fd49e
- (id)description;	// IMP=0x00000000008fd3ef
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000008fd360

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCalendarEvent
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSDateComponents *_fireDateComponents;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000aa826
+ (id)logCategory;	// IMP=0x00100000000aa7f6
- (void).cxx_destruct;	// IMP=0x00000000000aa402
- (id)analyticsTriggerEventData;	// IMP=0x00000000000aa388
- (id)_nextRecurrentFireDateAfterDate:(id)arg1 recurrences:(id)arg2;	// IMP=0x00000000000aa056
- (id)_nextRecurrentFireDateAfterDate:(id)arg1;	// IMP=0x00000000000a9fb2
- (id)_nextTimerDateAfterDate:(id)arg1 timeZone:(id)arg2;	// IMP=0x00000000000a96e9
- (id)_nextTimerDate;	// IMP=0x00000000000a965b
- (_Bool)areMonthDayNotMatching:(id)arg1;	// IMP=0x00000000000a94f5
- (void)_transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000000a94ef
- (void)_transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000000a927e
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x00000000000a9126
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a908b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a8ff0
- (_Bool)isCompatibleWithEvent:(id)arg1;	// IMP=0x00000000000a8fc1
@property(retain) NSDateComponents *fireDateComponents; // @synthesize fireDateComponents=_fireDateComponents;
- (void)_handleUpdateRequest:(id)arg1;	// IMP=0x00000000000a8cab
- (id)emptyModelObject;	// IMP=0x00000000000a8bf3
- (id)createPayload;	// IMP=0x00000000000a8b06
@property(readonly, copy) NSString *description;
- (id)initWithModel:(id)arg1 home:(id)arg2;	// IMP=0x00000000000a8948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly) Class superclass;

@end

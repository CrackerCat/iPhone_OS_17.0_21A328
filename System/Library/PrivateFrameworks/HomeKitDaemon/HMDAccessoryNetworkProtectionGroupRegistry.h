//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHome, NSMutableDictionary, NSNotificationCenter, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryNetworkProtectionGroupRegistry : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_groupRecords;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x0010000000534f9f
- (void).cxx_destruct;	// IMP=0x0000000000533e66
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) __weak HMDHome *home; // @synthesize home=_home;
- (void)handleAccessoryTransportAdded:(id)arg1;	// IMP=0x0000000000533d65
- (id)accessoriesForGroupWithUUID:(id)arg1;	// IMP=0x0000000000533c7a
- (_Bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id *)arg3 requestMessage:(id)arg4;	// IMP=0x0000000000533841
- (_Bool)updateTargetProtectionModeForGroupWithUUID:(id)arg1 protectionMode:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000053382c
- (long long)targetProtectionModeForGroupWithUUID:(id)arg1;	// IMP=0x00000000005337df
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000533752
- (void)handleAddedAccessory:(id)arg1;	// IMP=0x00000000005336c5
- (void)handleRemoveAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000533353
- (void)handleAddOrUpdateAccessoryNetworkProtectionGroupModel:(id)arg1 message:(id)arg2;	// IMP=0x0000000000532e0b
- (void)configure;	// IMP=0x0000000000532ddd
- (void)addActiveSurrogateGroupForAccessory:(id)arg1 shouldNotifyChange:(_Bool)arg2;	// IMP=0x000000000053268d
- (void)notifyClientsOfRemovedGroup:(id)arg1;	// IMP=0x000000000053244a
- (void)notifyClientsOfAddedGroup:(id)arg1;	// IMP=0x0000000000532235
- (_Bool)_updateGroupWithUUID:(id)arg1 active:(_Bool)arg2;	// IMP=0x0000000000531dce
- (_Bool)_evaluateActiveStatusForGroupWithUUID:(id)arg1;	// IMP=0x0000000000531ac7
- (void)_setupProtectionGroupForAccessory:(id)arg1 shouldNotifyChange:(_Bool)arg2;	// IMP=0x000000000053172d
- (void)_setupActiveGroupsForHome;	// IMP=0x000000000053135b
- (void)_registerForAccessoryChanges:(id)arg1;	// IMP=0x0000000000531198
- (void)handleUpdatedAccessoryConfiguredNetworkProtectionGroup:(id)arg1;	// IMP=0x0000000000531035
- (void)handleUpdatedAccessoryInitialManufacturerOrCategory:(id)arg1;	// IMP=0x0000000000530ed2
- (void)handleUpdateAccessoryNetworkProtectionGroupProtectionMode:(id)arg1;	// IMP=0x0000000000530a70
- (void)_registerForMessages;	// IMP=0x000000000053092f
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000530853
- (id)markGroupWithUUID:(id)arg1 active:(_Bool)arg2;	// IMP=0x0000000000530653
- (id)removeGroupWithUUID:(id)arg1;	// IMP=0x00000000005304e2
- (_Bool)addActiveSurrogateGroup:(id)arg1;	// IMP=0x0000000000530269
- (id)groupWithUUID:(id)arg1;	// IMP=0x0000000000530219
- (id)groupRecordWithUUID:(id)arg1;	// IMP=0x000000000053019d
@property(readonly, copy) NSSet *activeGroups;
@property(readonly, copy) NSSet *persistedGroups;
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2 persistedGroups:(id)arg3;	// IMP=0x000000000052f820
- (id)initWithHome:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x000000000052f733

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

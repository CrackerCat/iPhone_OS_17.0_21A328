//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableDictionary, NSObject, NSString;
@protocol HMDCompositeSettingControllerManagerStateManager, HMDStereoPairSettingsControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDStereoPairSettingsController : HMFObject
{
    id <HMDStereoPairSettingsControllerDataSource> _dataSource;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDCompositeSettingControllerManagerStateManager> _residentRunStateManager;	// 24 = 0x18
    NSMutableDictionary *_topicToLastReceivedEvent;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000ce486f
- (void).cxx_destruct;	// IMP=0x0000000000ce3fc5
@property(retain) NSMutableDictionary *topicToLastReceivedEvent; // @synthesize topicToLastReceivedEvent=_topicToLastReceivedEvent;
@property(retain, nonatomic) id <HMDCompositeSettingControllerManagerStateManager> residentRunStateManager; // @synthesize residentRunStateManager=_residentRunStateManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) __weak id <HMDStereoPairSettingsControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)pushLastEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000ce3eab
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000ce3d85
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000ce39d4
- (id)_mediaSystemWithAccessorryUUID:(id)arg1;	// IMP=0x0000000000ce38f9
- (id)logIdentifier;	// IMP=0x0000000000ce38a9
- (void)didUpdateCurrentRunState:(long long)arg1 updatedState:(long long)arg2 forHome:(id)arg3;	// IMP=0x0000000000ce36ca
@property(readonly, copy) NSArray *homes;
- (id)_mediaSystems;	// IMP=0x0000000000ce35b8
- (_Bool)_currentDevicePrimaryResident;	// IMP=0x0000000000ce354c
- (void)_unsubscribeToRemovedMediaSystem:(id)arg1;	// IMP=0x0000000000ce31a9
- (id)mediaSystemGroupOwner:(id)arg1;	// IMP=0x0000000000ce2d7c
- (id)_mediaSystemGroupOwnerAccessoryUUID:(id)arg1;	// IMP=0x0000000000ce2cf5
- (id)_homeUUID;	// IMP=0x0000000000ce2c7b
- (void)_postAsStereoPairEventsIfDifferentForHome:(id)arg1 mediaSystem:(id)arg2 keyPath:(id)arg3 setting:(id)arg4;	// IMP=0x0000000000ce2788
- (void)_processReceivedEvent:(id)arg1 topic:(id)arg2 home:(id)arg3 mediaSystem:(id)arg4;	// IMP=0x0000000000ce2360
- (void)_subscribeToAddedMediaSystem:(id)arg1;	// IMP=0x0000000000ce1f5c
- (id)_groupOwnerTopicsForMediaSystem:(id)arg1;	// IMP=0x0000000000ce1c53
- (void)stopIfPrimaryResidentChange;	// IMP=0x0000000000ce1965
- (void)unsubscribeToRemovedMediaSystemIfPrimaryResident:(id)arg1;	// IMP=0x0000000000ce191b
- (void)subscribeToAddedMediaSystemIfPrimaryResident:(id)arg1;	// IMP=0x0000000000ce18d1
- (void)startIfPrimaryResident;	// IMP=0x0000000000ce1630
- (id)initWithDataSource:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000ce161b
- (id)initWithDataSource:(id)arg1 workQueue:(id)arg2 stateManagerFactory:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ce1430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

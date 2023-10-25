//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APECMetricSampler, APJourneySettings, APUnfairLock, NSLock, NSMutableDictionary, NSSet, NSString;
@protocol APMetricNotificationRegister><APMetricReceiving, APMetricServerDelivering, OS_dispatch_queue;

@interface APMetricStorageEC : NSObject
{
    _Bool _eventCollectionDisabled;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_metricsQueue;	// 16 = 0x10
    id <APMetricNotificationRegister><APMetricReceiving> _notificationRegistrar;	// 24 = 0x18
    id <APMetricServerDelivering> _serverDelivery;	// 32 = 0x20
    NSLock *_storageLock;	// 40 = 0x28
    NSMutableDictionary *_currentBatches;	// 48 = 0x30
    APJourneySettings *_journeySettings;	// 56 = 0x38
    NSSet *_channels;	// 64 = 0x40
    APUnfairLock *_serverDeliveryLock;	// 72 = 0x48
    APECMetricSampler *_sampler;	// 80 = 0x50
}

+ (id)destinationsStoragePath;	// IMP=0x00200000000c6e37
+ (id)openStoragePathPrefix;	// IMP=0x00100000000c6e23
+ (id)closedStoragePathPrefix;	// IMP=0x00100000000c6e0f
- (void).cxx_destruct;	// IMP=0x00200000000c9e9b
@property(nonatomic) _Bool eventCollectionDisabled; // @synthesize eventCollectionDisabled=_eventCollectionDisabled;
@property(retain, nonatomic) APECMetricSampler *sampler; // @synthesize sampler=_sampler;
@property(readonly, nonatomic) APUnfairLock *serverDeliveryLock; // @synthesize serverDeliveryLock=_serverDeliveryLock;
@property(copy, nonatomic) NSSet *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSMutableDictionary *currentBatches; // @synthesize currentBatches=_currentBatches;
@property(readonly, nonatomic) NSLock *storageLock; // @synthesize storageLock=_storageLock;
@property(readonly, nonatomic) id <APMetricServerDelivering> serverDelivery; // @synthesize serverDelivery=_serverDelivery;
@property(readonly, nonatomic) id <APMetricNotificationRegister><APMetricReceiving> notificationRegistrar; // @synthesize notificationRegistrar=_notificationRegistrar;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metricsQueue; // @synthesize metricsQueue=_metricsQueue;
- (void)rotateIDAccount;	// IMP=0x00100000000c9da8
- (id)preparedMetricDataForDestination:(id)arg1 purpose:(long long)arg2 containsSignature:(_Bool)arg3;	// IMP=0x00100000000c9ae7
- (void)_cleanupLeftovers;	// IMP=0x00100000000c9a2e
- (void)_withdrawShelvedBatchesForChannel:(id)arg1 groupBatches:(_Bool)arg2 signingAuthority:(id)arg3;	// IMP=0x00100000000c956f
- (void)finishEventsRotationWithSigningAuthority:(id)arg1;	// IMP=0x00100000000c940a
- (void)startEventsRotation;	// IMP=0x00100000000c9391
- (void)receivedMetric:(id)arg1;	// IMP=0x00100000000c90c0
- (void)_notifyListenersOfMetric:(id)arg1;	// IMP=0x00100000000c8f8f
- (void)_processMetric:(id)arg1;	// IMP=0x00100000000c8831
- (void)_closeBatchForChannel:(id)arg1;	// IMP=0x00100000000c8798
- (id)_openBatchForChannel:(id)arg1;	// IMP=0x00100000000c8556
- (id)_closeBatchesForChannel:(id)arg1 shelved:(_Bool)arg2 groupBatches:(_Bool)arg3;	// IMP=0x00100000000c80d0
- (id)closeShelvedBatchesForChannel:(id)arg1 groupBatches:(_Bool)arg2;	// IMP=0x00100000000c80b6
- (id)closeBatchesForChannel:(id)arg1;	// IMP=0x00100000000c809c
- (void)closeActiveBatches;	// IMP=0x00100000000c7dbc
- (id)_shelvedPathForChannel:(id)arg1;	// IMP=0x00100000000c7c9e
- (id)_closedPathForChannel:(id)arg1;	// IMP=0x00100000000c7b5e
- (_Bool)hasBacklogForChannel:(id)arg1;	// IMP=0x00100000000c7a72
- (void)addActiveChannel:(id)arg1;	// IMP=0x00100000000c7914
- (void)_writeChannels;	// IMP=0x00100000000c7798
- (id)_readChannels;	// IMP=0x00100000000c7287
@property(readonly, nonatomic) APJourneySettings *journeySettings; // @synthesize journeySettings=_journeySettings;
- (id)activeChannels;	// IMP=0x00100000000c722a
- (void)setup;	// IMP=0x00100000000c7177
- (void)dealloc;	// IMP=0x00100000000c70c0
- (id)init;	// IMP=0x00100000000c6e4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

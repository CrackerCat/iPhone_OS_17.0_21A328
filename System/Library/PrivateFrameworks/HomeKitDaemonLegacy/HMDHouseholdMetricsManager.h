//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHouseholdMetricsClient, HMDHouseholdMetricsMessagingProvider, HMDHouseholdMetricsServer, HMMDateProvider, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsManager : HMFObject
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    HMMDateProvider *_dateProvider;	// 16 = 0x10
    HMDHouseholdMetricsClient *_client;	// 24 = 0x18
    HMDHouseholdMetricsServer *_server;	// 32 = 0x20
    HMDHouseholdMetricsMessagingProvider *_messagingProvider;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000065fdcb
- (void).cxx_destruct;	// IMP=0x000000000065fd56
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDHouseholdMetricsMessagingProvider *messagingProvider; // @synthesize messagingProvider=_messagingProvider;
@property(readonly, nonatomic) HMDHouseholdMetricsServer *server; // @synthesize server=_server;
@property(readonly, nonatomic) HMDHouseholdMetricsClient *client; // @synthesize client=_client;
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (void)runHomeutilTask;	// IMP=0x000000000065fc53
- (void)runDailyTask;	// IMP=0x000000000065fb89
- (id)initWithCountersManager:(id)arg1 dataSource:(id)arg2 dailyScheduler:(id)arg3 logEventSubmitter:(id)arg4 dateProvider:(id)arg5 requestCountProvider:(id)arg6 logEventFactories:(id)arg7;	// IMP=0x000000000065f8c9
- (id)initWithCountersManager:(id)arg1 dataSource:(id)arg2 accessoryDetailsManager:(id)arg3 dailyScheduler:(id)arg4 logEventSubmitter:(id)arg5 dateProvider:(id)arg6 activityContributors:(id)arg7;	// IMP=0x000000000065f4f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end

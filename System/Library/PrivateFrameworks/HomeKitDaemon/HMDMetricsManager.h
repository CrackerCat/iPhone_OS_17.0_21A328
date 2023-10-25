//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAppleAccountManager, HMDCloudSyncLogEventsAnalyzer, HMDConfigurationLogEvent, HMDCoreAnalyticsLogEventObserverDelegate, HMDCoreDataLogEventsAnalyzer, HMDDevice, HMDDiagnosticReporterLogObserver, HMDEventCountersManager, HMDHH2AutoMigrationEligibilityLogEventSubmitter, HMDHH2MigrationLogEventsAnalyzer, HMDHomeManager, HMDHouseholdMetricsManager, HMDLogEventBulletinNotificationsAnalyzer, HMDLogEventCountingAnalyzer, HMDLogEventDailyScheduler, HMDLogEventElectionEventsAnalyzer, HMDLogEventErrorEventsAnalyzer, HMDLogEventHAPMetricsEventAnalyzer, HMDLogEventMessageEventsAnalyzer, HMDLogEventProcessLaunchAnalyzer, HMDLogEventProcessMemoryEventsAnalyzer, HMDLogEventReachabilityEventsAnalyzer, HMDLogEventUserActivityAnalyzer, HMDMessageDispatcher, HMDMetricsAccessoryDetailsManager, HMDMetricsDeviceStateManager, HMDNetworkObserver, HMDPowerLogObserver, HMDThreadNetworkObserver, HMDTimeBasedFlagsManager, HMDWidgetTimelineRefresherEventsAnalyzer, HMMCoreAnalyticsLogEventObserver, HMMCoreAnalyticsTagObserver, HMMDateProvider, HMMSiriSELFLogEventObserver, NSArray, NSMutableArray, NSNotificationCenter, NSString, NSUUID, NSUserDefaults;
@protocol HMDEWSLogging, HMDMetricsDeviceStateProvider, HMDRadarInitiating, HMDUserNotificationCenterSettingsProviding, HMMLogEventDispatching, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMetricsManager : NSObject
{
    NSMutableArray *_configurationObservers;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _metricsCollectionStarted;	// 20 = 0x14
    HMDEventCountersManager *_legacyCountersManager;	// 24 = 0x18
    HMDTimeBasedFlagsManager *_flagsManager;	// 32 = 0x20
    id <HMDRadarInitiating> _ttrManager;	// 40 = 0x28
    HMMDateProvider *_dateProvider;	// 48 = 0x30
    HMDConfigurationLogEvent *_cachedConfiguration;	// 56 = 0x38
    NSString *_PRKitDateString;	// 64 = 0x40
    NSString *_PRKitUUIDString;	// 72 = 0x48
    HMDNetworkObserver *_networkObserver;	// 80 = 0x50
    HMDThreadNetworkObserver *_threadNetworkObserver;	// 88 = 0x58
    NSUserDefaults *_userDefaults;	// 96 = 0x60
    NSNotificationCenter *_notificationCenter;	// 104 = 0x68
    NSString *_currentSoftwareVersion;	// 112 = 0x70
    HMDHomeManager *_homeManager;	// 120 = 0x78
    id <HMMLogEventDispatching> _logEventDispatcher;	// 128 = 0x80
    HMDLogEventDailyScheduler *_dailyScheduler;	// 136 = 0x88
    id <HMDEWSLogging> _ewsLogger;	// 144 = 0x90
    HMDMetricsDeviceStateManager *_deviceStateManager;	// 152 = 0x98
    HMDMessageDispatcher *_messageDispatcher;	// 160 = 0xa0
    HMDAppleAccountManager *_accountManager;	// 168 = 0xa8
    id <HMDUserNotificationCenterSettingsProviding> _notificationSettingsProvider;	// 176 = 0xb0
    HMDHH2AutoMigrationEligibilityLogEventSubmitter *_hh2AutoMigrationEligibilitySubmitter;	// 184 = 0xb8
    HMDMetricsAccessoryDetailsManager *_accessoryDetailsManager;	// 192 = 0xc0
    HMDHouseholdMetricsManager *_householdMetricsManager;	// 200 = 0xc8
    HMDCoreAnalyticsLogEventObserverDelegate *_coreAnalyticsDelegate;	// 208 = 0xd0
    NSArray *_coreAnalyticsFilters;	// 216 = 0xd8
    HMMCoreAnalyticsLogEventObserver *_coreAnalyticsObserver;	// 224 = 0xe0
    HMDDiagnosticReporterLogObserver *_diagnosticReporterLogObserver;	// 232 = 0xe8
    HMDPowerLogObserver *_powerLogObserver;	// 240 = 0xf0
    HMMSiriSELFLogEventObserver *_siriSELFLoggingObserver;	// 248 = 0xf8
    HMDLogEventBulletinNotificationsAnalyzer *_bulletinNotificationsAnalyzer;	// 256 = 0x100
    HMDCloudSyncLogEventsAnalyzer *_cloudSyncLogEventsAnalyzer;	// 264 = 0x108
    HMDCoreDataLogEventsAnalyzer *_coreDataLogEventsAnalyzer;	// 272 = 0x110
    HMDLogEventElectionEventsAnalyzer *_electionEventsAnalyzer;	// 280 = 0x118
    HMDLogEventErrorEventsAnalyzer *_errorEventsAnalyzer;	// 288 = 0x120
    HMDLogEventCountingAnalyzer *_eventCountingAnalyzer;	// 296 = 0x128
    HMDLogEventHAPMetricsEventAnalyzer *_hapEventsAnalyzer;	// 304 = 0x130
    HMDHH2MigrationLogEventsAnalyzer *_hh2MigrationAnalyzer;	// 312 = 0x138
    HMDLogEventMessageEventsAnalyzer *_messagingEventsAnalyzer;	// 320 = 0x140
    HMDLogEventProcessLaunchAnalyzer *_processLaunchEventsAnalyzer;	// 328 = 0x148
    HMDLogEventProcessMemoryEventsAnalyzer *_processMemoryEventsAnalyzer;	// 336 = 0x150
    HMDLogEventReachabilityEventsAnalyzer *_reachabilityEventsAnalyzer;	// 344 = 0x158
    HMDLogEventUserActivityAnalyzer *_userActivityEventsAnalyzer;	// 352 = 0x160
    HMDWidgetTimelineRefresherEventsAnalyzer *_widgetTimelineRefresherEventsAnalyzer;	// 360 = 0x168
    HMMCoreAnalyticsTagObserver *_coreAnalyticsTagObserver;	// 368 = 0x170
    NSMutableArray *_aggregationAnalysisEventContributingAnalyzers;	// 376 = 0x178
}

+ (id)namespaceUUID;	// IMP=0x0010000000660add
- (void).cxx_destruct;	// IMP=0x00000000006605b4
@property(readonly, nonatomic) NSMutableArray *aggregationAnalysisEventContributingAnalyzers; // @synthesize aggregationAnalysisEventContributingAnalyzers=_aggregationAnalysisEventContributingAnalyzers;
@property(readonly, nonatomic) HMMCoreAnalyticsTagObserver *coreAnalyticsTagObserver; // @synthesize coreAnalyticsTagObserver=_coreAnalyticsTagObserver;
@property(readonly, nonatomic) HMDWidgetTimelineRefresherEventsAnalyzer *widgetTimelineRefresherEventsAnalyzer; // @synthesize widgetTimelineRefresherEventsAnalyzer=_widgetTimelineRefresherEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventUserActivityAnalyzer *userActivityEventsAnalyzer; // @synthesize userActivityEventsAnalyzer=_userActivityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventReachabilityEventsAnalyzer *reachabilityEventsAnalyzer; // @synthesize reachabilityEventsAnalyzer=_reachabilityEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessMemoryEventsAnalyzer *processMemoryEventsAnalyzer; // @synthesize processMemoryEventsAnalyzer=_processMemoryEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventProcessLaunchAnalyzer *processLaunchEventsAnalyzer; // @synthesize processLaunchEventsAnalyzer=_processLaunchEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventMessageEventsAnalyzer *messagingEventsAnalyzer; // @synthesize messagingEventsAnalyzer=_messagingEventsAnalyzer;
@property(readonly, nonatomic) HMDHH2MigrationLogEventsAnalyzer *hh2MigrationAnalyzer; // @synthesize hh2MigrationAnalyzer=_hh2MigrationAnalyzer;
@property(readonly, nonatomic) HMDLogEventHAPMetricsEventAnalyzer *hapEventsAnalyzer; // @synthesize hapEventsAnalyzer=_hapEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventCountingAnalyzer *eventCountingAnalyzer; // @synthesize eventCountingAnalyzer=_eventCountingAnalyzer;
@property(readonly, nonatomic) HMDLogEventErrorEventsAnalyzer *errorEventsAnalyzer; // @synthesize errorEventsAnalyzer=_errorEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventElectionEventsAnalyzer *electionEventsAnalyzer; // @synthesize electionEventsAnalyzer=_electionEventsAnalyzer;
@property(readonly, nonatomic) HMDCoreDataLogEventsAnalyzer *coreDataLogEventsAnalyzer; // @synthesize coreDataLogEventsAnalyzer=_coreDataLogEventsAnalyzer;
@property(readonly, nonatomic) HMDCloudSyncLogEventsAnalyzer *cloudSyncLogEventsAnalyzer; // @synthesize cloudSyncLogEventsAnalyzer=_cloudSyncLogEventsAnalyzer;
@property(readonly, nonatomic) HMDLogEventBulletinNotificationsAnalyzer *bulletinNotificationsAnalyzer; // @synthesize bulletinNotificationsAnalyzer=_bulletinNotificationsAnalyzer;
@property(readonly, nonatomic) HMMSiriSELFLogEventObserver *siriSELFLoggingObserver; // @synthesize siriSELFLoggingObserver=_siriSELFLoggingObserver;
@property(readonly, nonatomic) HMDPowerLogObserver *powerLogObserver; // @synthesize powerLogObserver=_powerLogObserver;
@property(readonly, nonatomic) HMDDiagnosticReporterLogObserver *diagnosticReporterLogObserver; // @synthesize diagnosticReporterLogObserver=_diagnosticReporterLogObserver;
@property(readonly, nonatomic) HMMCoreAnalyticsLogEventObserver *coreAnalyticsObserver; // @synthesize coreAnalyticsObserver=_coreAnalyticsObserver;
@property(readonly, nonatomic) NSArray *coreAnalyticsFilters; // @synthesize coreAnalyticsFilters=_coreAnalyticsFilters;
@property(readonly, nonatomic) HMDCoreAnalyticsLogEventObserverDelegate *coreAnalyticsDelegate; // @synthesize coreAnalyticsDelegate=_coreAnalyticsDelegate;
@property(readonly, nonatomic) HMDHouseholdMetricsManager *householdMetricsManager; // @synthesize householdMetricsManager=_householdMetricsManager;
@property(readonly, nonatomic) HMDMetricsAccessoryDetailsManager *accessoryDetailsManager; // @synthesize accessoryDetailsManager=_accessoryDetailsManager;
@property(readonly, nonatomic) HMDHH2AutoMigrationEligibilityLogEventSubmitter *hh2AutoMigrationEligibilitySubmitter; // @synthesize hh2AutoMigrationEligibilitySubmitter=_hh2AutoMigrationEligibilitySubmitter;
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationSettingsProvider; // @synthesize notificationSettingsProvider=_notificationSettingsProvider;
@property(readonly, nonatomic) HMDAppleAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property _Bool metricsCollectionStarted; // @synthesize metricsCollectionStarted=_metricsCollectionStarted;
@property(readonly, nonatomic) HMDMetricsDeviceStateManager *deviceStateManager; // @synthesize deviceStateManager=_deviceStateManager;
@property(readonly, nonatomic) __weak id <HMDEWSLogging> ewsLogger; // @synthesize ewsLogger=_ewsLogger;
@property(readonly, nonatomic) HMDLogEventDailyScheduler *dailyScheduler; // @synthesize dailyScheduler=_dailyScheduler;
@property(readonly, nonatomic) id <HMMLogEventDispatching> logEventDispatcher; // @synthesize logEventDispatcher=_logEventDispatcher;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) NSString *currentSoftwareVersion; // @synthesize currentSoftwareVersion=_currentSoftwareVersion;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver; // @synthesize threadNetworkObserver=_threadNetworkObserver;
@property(readonly, nonatomic) HMDNetworkObserver *networkObserver; // @synthesize networkObserver=_networkObserver;
@property(readonly, nonatomic) NSString *PRKitUUIDString; // @synthesize PRKitUUIDString=_PRKitUUIDString;
@property(readonly, nonatomic) NSString *PRKitDateString; // @synthesize PRKitDateString=_PRKitDateString;
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <HMDRadarInitiating> ttrManager; // @synthesize ttrManager=_ttrManager;
@property(readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager; // @synthesize flagsManager=_flagsManager;
@property(readonly, nonatomic) HMDEventCountersManager *legacyCountersManager; // @synthesize legacyCountersManager=_legacyCountersManager;
@property(readonly, nonatomic) NSUUID *homeUUIDForCurrentResidentDevice;
@property(readonly, nonatomic) NSArray *homeDataSources;
@property(readonly, nonatomic) NSArray *devicesOnCurrentAccount;
@property(readonly, nonatomic) HMDDevice *currentDevice;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000065fea2
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)saveCounters;	// IMP=0x000000000065fe4b
- (void)waitToCompleteCurrentlyQueuedTasks;	// IMP=0x000000000065fddf
- (void)_handleLogEventDailySchedulerSubmitRequest:(id)arg1;	// IMP=0x000000000065fd6c
- (void)_handleLogEventDailySchedulerStatusRequest:(id)arg1;	// IMP=0x000000000065fce5
- (void)_handleResetEventCounters:(id)arg1;	// IMP=0x000000000065fc72
- (void)_handleFetchEventCounters:(id)arg1;	// IMP=0x000000000065faee
- (void)addRateTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 windowSize:(unsigned long long)arg5;	// IMP=0x000000000065f9e2
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4 uploadImmediately:(_Bool)arg5;	// IMP=0x000000000065f8d7
- (void)addThresholdTrigger:(id)arg1 forEventName:(id)arg2 requestGroup:(id)arg3 atThreshold:(unsigned long long)arg4;	// IMP=0x000000000065f7d5
- (void)registerEWSTriggers;	// IMP=0x000000000065f327
- (void)startAnalyzers;	// IMP=0x000000000065e903
- (void)registerTaggedLoggingProcessors;	// IMP=0x000000000065e837
@property(readonly) _Bool isSubmissionEnabled;
@property(readonly, nonatomic) _Bool isDemoModeConfigured;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter;
- (void)updateWidgetStatusInCachedConfiguration;	// IMP=0x000000000065e60b
- (id)accessoryForIdentifier:(id)arg1;	// IMP=0x000000000065e2d1
@property(readonly, nonatomic) id <HMDMetricsDeviceStateProvider> deviceStateProvider;
- (id)cachedHomeConfigurationForHomeUUID:(id)arg1;	// IMP=0x000000000065e0c6
@property(readonly, copy, nonatomic) HMDConfigurationLogEvent *cachedConfiguration; // @synthesize cachedConfiguration=_cachedConfiguration;
- (void)homeKitConfigurationChanged;	// IMP=0x000000000065ddba
@property(readonly, copy, nonatomic) NSArray *configurationObservers;
- (void)addConfigurationChangedObserver:(CDUnknownBlockType)arg1;	// IMP=0x000000000065dce5
- (id)logHomeKitErrorAggregationSummary;	// IMP=0x000000000065dc95
- (id)logHomeKitAggregationAnalysisSummary;	// IMP=0x000000000065dc45
- (void)resetHomeKitAggregationAnalysisContext;	// IMP=0x000000000065db16
- (id)homeKitAggregationAnalysisLogEvent;	// IMP=0x000000000065d9bb
- (void)submitDailyAggregationAnalysisEvents;	// IMP=0x000000000065d920
- (void)submitCurrentUserSettings;	// IMP=0x000000000065d6fc
- (void)runDailyTask;	// IMP=0x000000000065d14b
- (void)startMetricsCollection;	// IMP=0x000000000065ce81
- (void)configureHAPMetricsDispatcher:(id)arg1;	// IMP=0x000000000065ce18
- (void)_registerForMessages;	// IMP=0x000000000065cb18
- (void)_configureManagers;	// IMP=0x000000000065c98c
- (void)addAnalyzer:(id)arg1 toListOfAggregationAnalysisEventContributing:(id)arg2;	// IMP=0x000000000065c919
- (void)_configureObservers;	// IMP=0x000000000065c24a
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3 logEventDispatcher:(id)arg4 dailyScheduler:(id)arg5 dateProvider:(id)arg6 legacyCountersManager:(id)arg7 flagsManager:(id)arg8 ewsLogger:(id)arg9 deviceStateManager:(id)arg10 networkObserver:(id)arg11 coreAnalyticsTagObserver:(id)arg12 notificationCenter:(id)arg13 userDefaults:(id)arg14 currentSoftwareVersion:(id)arg15;	// IMP=0x000000000065beb4
- (id)initWithMessageDispatcher:(id)arg1 accountManager:(id)arg2 notificationSettingsProvider:(id)arg3;	// IMP=0x000000000065bad2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

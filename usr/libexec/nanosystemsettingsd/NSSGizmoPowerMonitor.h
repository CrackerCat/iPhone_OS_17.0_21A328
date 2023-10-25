//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKSPSleepSettings, HKSPSleepStore, NPSManager, NSDictionary, NSString, SFClient, _CDClientContext;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface NSSGizmoPowerMonitor : NSObject
{
    int _psNotifyTokenAnyPowerSource;	// 8 = 0x8
    _CDClientContext *_context;	// 16 = 0x10
    NSObject<OS_os_transaction> *_keepAliveTransaction;	// 24 = 0x18
    NSDictionary *_powerSourceDescription;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
    HKSPSleepStore *_sleepStore;	// 48 = 0x30
    HKSPSleepSettings *_sleepSettings;	// 56 = 0x38
    NPSManager *_npsManager;	// 64 = 0x40
    SFClient *_sfClient;	// 72 = 0x48
}

+ (id)sharedMonitor;	// IMP=0x0020000000018028
- (void).cxx_destruct;	// IMP=0x002000000001a46b
@property(retain, nonatomic) SFClient *sfClient; // @synthesize sfClient=_sfClient;
@property(retain, nonatomic) NPSManager *npsManager; // @synthesize npsManager=_npsManager;
@property(retain, nonatomic) HKSPSleepSettings *sleepSettings; // @synthesize sleepSettings=_sleepSettings;
@property(retain, nonatomic) HKSPSleepStore *sleepStore; // @synthesize sleepStore=_sleepStore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDictionary *powerSourceDescription; // @synthesize powerSourceDescription=_powerSourceDescription;
- (void)_stopMonitoringOnWristState;	// IMP=0x001000000001a3b5
- (void)_beginMonitoringOnWristState;	// IMP=0x001000000001a205
- (void)_postNotificationForLowPowerModeAutoDisabled:(unsigned long long)arg1;	// IMP=0x001000000001a1b2
- (void)processLowPowerModeAutoDisableUpdateType:(unsigned long long)arg1;	// IMP=0x001000000001a04a
- (void)resetLevels;	// IMP=0x0010000000019fd0
- (void)addLevel:(long long)arg1;	// IMP=0x0010000000019e52
- (void)_setLevels:(id)arg1;	// IMP=0x0010000000019cf3
- (id)levels;	// IMP=0x0010000000019c55
- (_Bool)_droppedFromLastNotifiedLevel:(long long)arg1;	// IMP=0x0010000000019b7e
- (_Bool)substantialChangeFromLastNotifiedLevel:(long long)arg1;	// IMP=0x0010000000019b3a
- (long long)substantialChange;	// IMP=0x0010000000019af2
- (void)setLastKnownPowerLevelBeforeGoingOffCharger:(long long)arg1;	// IMP=0x0010000000019a41
- (long long)lastKnownPowerLevelBeforeGoingOffCharger;	// IMP=0x00100000000199af
- (_Bool)forceEnabledOverride;	// IMP=0x00100000000198fd
- (void)_registerForSleepSettingsChanges;	// IMP=0x0010000000019744
- (id)sleepSchedulePredicate;	// IMP=0x00100000000196df
- (_Bool)_shouldPostNotificationForPowerLevel:(long long)arg1;	// IMP=0x00100000000195d5
- (void)_updateSettings;	// IMP=0x001000000001934a
- (void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2;	// IMP=0x001000000001928e
- (void)sleepStore:(id)arg1 sleepModeOnDidChange:(_Bool)arg2;	// IMP=0x00100000000191b5
- (void)_loadSleepSettingsFrom:(id)arg1;	// IMP=0x00100000000190be
- (void)_stopMonitoringForPowerUpdates;	// IMP=0x0010000000018fa3
- (void)_beginMonitoringForPowerUpdates;	// IMP=0x0010000000018da6
- (void)_removedFromChargerNotification;	// IMP=0x0010000000018cbe
- (void)_processOffChargerState;	// IMP=0x0010000000018aa6
- (_Bool)_powerStatusNotifierEnabled;	// IMP=0x0010000000018962
- (void)_postNotificationForPowerLevel:(long long)arg1;	// IMP=0x00100000000187b3
- (void)_updatePowerSourceDescription;	// IMP=0x0010000000018507
- (id)_activeNRDevice;	// IMP=0x0010000000018458
- (void)processBatteryUpdate;	// IMP=0x001000000001822c
- (id)init;	// IMP=0x00100000000180ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

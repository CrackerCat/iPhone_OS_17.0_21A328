//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAPSuspendedAccessory, HMFTimer, NSString;
@protocol HMDLowPowerModeProfileDelegate;

__attribute__((visibility("hidden")))
@interface HMDLowPowerModeProfile
{
    CDUnknownBlockType _pendingWakeBlock;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    unsigned long long _internalState;	// 32 = 0x20
    unsigned long long _internalOldState;	// 40 = 0x28
    unsigned long long _retryCount;	// 48 = 0x30
    HMFTimer *_backoffTimer;	// 56 = 0x38
    id <HMDLowPowerModeProfileDelegate> _delegate;	// 64 = 0x40
    HAPSuspendedAccessory *_suspendedAccessory;	// 72 = 0x48
    HMFTimer *_waitForWakeTimer;	// 80 = 0x50
}

+ (id)WoWLANInfoForSupportedSleepConfiguration:(id)arg1;	// IMP=0x001000000049c4db
+ (id)logCategory;	// IMP=0x001000000049c4ab
- (void).cxx_destruct;	// IMP=0x00000000004998b8
@property(retain, nonatomic) HMFTimer *waitForWakeTimer; // @synthesize waitForWakeTimer=_waitForWakeTimer;
@property(retain, nonatomic) HAPSuspendedAccessory *suspendedAccessory; // @synthesize suspendedAccessory=_suspendedAccessory;
@property(nonatomic) __weak id <HMDLowPowerModeProfileDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMFTimer *backoffTimer; // @synthesize backoffTimer=_backoffTimer;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long internalOldState; // @synthesize internalOldState=_internalOldState;
@property(nonatomic) unsigned long long internalState; // @synthesize internalState=_internalState;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(copy, nonatomic) CDUnknownBlockType pendingWakeBlock; // @synthesize pendingWakeBlock=_pendingWakeBlock;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004994cd
- (void)_stopBackoffTimerForType:(unsigned long long)arg1;	// IMP=0x000000000049926d
- (void)_startTimerForType:(unsigned long long)arg1;	// IMP=0x0000000000498f72
@property(readonly, copy) NSString *description;
- (id)newHAPSuspendedAccessoryFromAccessoryConnectivityInfoWithType:(unsigned long long)arg1;	// IMP=0x0000000000498a62
- (unsigned long long)suspendedState;	// IMP=0x0000000000498a1e
- (id)supportedSleepConfigurationCharacteristic;	// IMP=0x00000000004989c7
- (id)selectedSleepConfigurationCharacteristic;	// IMP=0x0000000000498970
- (id)powerManagementService;	// IMP=0x0000000000498957
- (id)connectivityInfo;	// IMP=0x0000000000498907
- (id)hapAccessory;	// IMP=0x00000000004988b0
- (void)handleAccessoryConfigurationChanged:(id)arg1;	// IMP=0x000000000049861d
- (void)handleAccessoryCharacteristicsChanged:(id)arg1;	// IMP=0x0000000000498565
- (_Bool)_shouldManageAccessoryLPM;	// IMP=0x0000000000498330
- (void)_updateCharacteristicsNotifications:(_Bool)arg1;	// IMP=0x000000000049823e
- (void)_readInitialRequiredCharacteristics;	// IMP=0x000000000049816e
- (void)_readFromCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000497fa9
- (void)_writeToCharacteristic:(id)arg1 value:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000497db3
- (void)_processSelectedSleepConfigurationParametersWithCharacteristic:(id)arg1;	// IMP=0x0000000000497aba
- (void)_processSupportedSleepConfigurationParametersWithCharacteristic:(id)arg1;	// IMP=0x00000000004977c0
- (void)_queryAccessoryWithOperation:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004971a6
- (void)_unconfigureAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004970df
- (void)_configureAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000496fb6
- (void)_readAccessorySelectedConfigWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000496ea7
- (void)_stateMachine_unconfigureAccessory;	// IMP=0x0000000000496dd5
- (void)_stateMachine_configureAccessory;	// IMP=0x0000000000496d03
- (void)_stateMachine_readAccessoryConfiguration;	// IMP=0x0000000000496c31
- (void)_stateMachine_Idle;	// IMP=0x0000000000496bd9
- (void)_stateMachine_backoffOperation;	// IMP=0x0000000000496b81
- (void)_enterState:(unsigned long long)arg1;	// IMP=0x00000000004967fc
- (void)enterState:(unsigned long long)arg1;	// IMP=0x0000000000496780
- (_Bool)_canEnterNewState:(unsigned long long)arg1;	// IMP=0x00000000004966c1
- (void)_resetStateMachine;	// IMP=0x0000000000496698
- (void)_runStateMachine;	// IMP=0x0000000000496307
- (void)_wakeSuspendedAccessory:(id)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000049611a
- (void)wakeSuspendedAccessoryWithType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000049587b
- (void)wakeSuspendedAccessoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000004957ca
- (void)dealloc;	// IMP=0x000000000049578c
- (void)unconfigure;	// IMP=0x0000000000495708
- (void)handleInitialState;	// IMP=0x0000000000495695
- (void)registerForMessages;	// IMP=0x0000000000495451
- (id)initWithAccessory:(id)arg1 powerManagementservice:(id)arg2 workQueue:(id)arg3;	// IMP=0x00000000004951df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

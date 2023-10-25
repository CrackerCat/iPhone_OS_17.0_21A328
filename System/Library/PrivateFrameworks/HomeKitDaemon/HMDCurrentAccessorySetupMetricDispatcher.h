//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDCurrentAccessorySetupMetricDispatcher : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _submitted;	// 12 = 0xc
    CDUnknownBlockType _currentUpTicksFactory;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
    unsigned long long _setupSessionStartTime;	// 32 = 0x20
    unsigned long long _setupSessionEndTime;	// 40 = 0x28
    unsigned long long _pairingIdentityCreationTime;	// 48 = 0x30
    unsigned long long _settingsCreationTime;	// 56 = 0x38
    unsigned long long _addAccessoryFinishTime;	// 64 = 0x40
    unsigned long long _coreDataFirstCloudImportCompleteTime;	// 72 = 0x48
    unsigned long long _siriReadyTime;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x0010000000966e07
- (void).cxx_destruct;	// IMP=0x0000000000966a21
@property(readonly) unsigned long long siriReadyTime; // @synthesize siriReadyTime=_siriReadyTime;
@property(readonly) unsigned long long coreDataFirstCloudImportCompleteTime; // @synthesize coreDataFirstCloudImportCompleteTime=_coreDataFirstCloudImportCompleteTime;
@property(readonly) unsigned long long addAccessoryFinishTime; // @synthesize addAccessoryFinishTime=_addAccessoryFinishTime;
@property(readonly) unsigned long long settingsCreationTime; // @synthesize settingsCreationTime=_settingsCreationTime;
@property(readonly) unsigned long long pairingIdentityCreationTime; // @synthesize pairingIdentityCreationTime=_pairingIdentityCreationTime;
@property(readonly) unsigned long long setupSessionEndTime; // @synthesize setupSessionEndTime=_setupSessionEndTime;
@property(readonly) unsigned long long setupSessionStartTime; // @synthesize setupSessionStartTime=_setupSessionStartTime;
@property(readonly) _Bool submitted;
- (void)markSiriReady;	// IMP=0x000000000096690a
- (void)markCoreDataFirstImportComplete;	// IMP=0x000000000096687c
- (void)markCurrentAccessoryAddComplete;	// IMP=0x00000000009667ee
- (void)markPairingIdentityCreated;	// IMP=0x0000000000966760
- (void)markSettingsCreated;	// IMP=0x00000000009666d2
- (id)initWithSetupSessionStartTime:(unsigned long long)arg1 setupSessionEndTime:(unsigned long long)arg2 logEventSubmitter:(id)arg3;	// IMP=0x00000000009666b9
- (id)initWithSetupSessionStartTime:(unsigned long long)arg1 setupSessionEndTime:(unsigned long long)arg2 logEventSubmitter:(id)arg3 currentUpTicksFactory:(CDUnknownBlockType)arg4;	// IMP=0x00000000009665df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

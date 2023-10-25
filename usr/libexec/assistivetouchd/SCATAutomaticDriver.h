//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXDispatchTimer;

@interface SCATAutomaticDriver
{
    _Bool _forcePause;	// 8 = 0x8
    _Bool _shouldScanToNextFocusContextAfterSpeaking;	// 9 = 0x9
    AXDispatchTimer *_focusTimer;	// 16 = 0x10
    long long _currentCycleCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000004554d
@property(nonatomic) _Bool shouldScanToNextFocusContextAfterSpeaking; // @synthesize shouldScanToNextFocusContextAfterSpeaking=_shouldScanToNextFocusContextAfterSpeaking;
@property(nonatomic) _Bool forcePause; // @synthesize forcePause=_forcePause;
@property(nonatomic) long long currentCycleCount; // @synthesize currentCycleCount=_currentCycleCount;
@property(retain, nonatomic) AXDispatchTimer *focusTimer; // @synthesize focusTimer=_focusTimer;
- (void)resumeAutoscanning:(_Bool)arg1;	// IMP=0x001000000004548c
- (void)pauseAutoscanning;	// IMP=0x0010000000045459
- (void)actionHandlerDidCancelPendingAction:(id)arg1;	// IMP=0x0010000000045418
- (void)actionHandlerDidFireAction:(id)arg1;	// IMP=0x00100000000453d7
- (void)_pauseForMaximumNumberOfCycles;	// IMP=0x0010000000045335
- (void)_willStepToNextFocusContext:(id)arg1 inDirection:(long long)arg2;	// IMP=0x00100000000450d7
- (void)_idleTimerDidFire;	// IMP=0x00100000000450a8
- (void)_didWrapInDirection:(long long)arg1;	// IMP=0x0010000000045031
- (_Bool)_handleStopAction;	// IMP=0x001000000004501c
- (_Bool)_handleRunAction;	// IMP=0x0010000000045007
- (_Bool)_handleSelectAction;	// IMP=0x0010000000044fc9
- (void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2;	// IMP=0x0010000000044f0d
- (void)_endAutoscanning;	// IMP=0x0010000000044eb3
- (void)_autoscanToNextFocusContext;	// IMP=0x0010000000044d99
- (void)_didTransitionToPhase:(int)arg1;	// IMP=0x0010000000044d2d
@property(readonly, nonatomic) unsigned long long maxAutoscanCycles;
@property(readonly, nonatomic) double focusInterval;
- (int)driverType;	// IMP=0x0010000000044b8f
- (_Bool)pauseScanningForPointPickerNumberOfCycles:(unsigned long long)arg1;	// IMP=0x0010000000044b41
- (void)freezeScanning;	// IMP=0x0010000000044b2f
- (void)willDrillOutOfGroup;	// IMP=0x0010000000044aff
- (void)willDrillIntoGroup;	// IMP=0x0010000000044acf
- (void)willFinishAsScannerDriver;	// IMP=0x0010000000044a91
- (id)description;	// IMP=0x001000000004490a
- (void)dealloc;	// IMP=0x001000000004489f
- (id)initWithDelegate:(id)arg1;	// IMP=0x00100000000447f2

@end

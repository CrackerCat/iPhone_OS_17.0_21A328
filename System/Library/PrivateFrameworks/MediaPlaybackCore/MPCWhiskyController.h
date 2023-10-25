//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPCRecordingSession, MPCVocalAttenuationPolicyController, MPCWhiskyControllerDisabledState, MSVTimer, NSDate, NSObject, NSString;
@protocol MPCVocalAttenuationModelProvider, MPCVocalAttenuationProcessor, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCWhiskyController
{
    NSObject<OS_dispatch_queue> *_setupQueue;	// 8 = 0x8
    float _vocalLevel;	// 16 = 0x10
    _Bool _processIsBackgrounded;	// 20 = 0x14
    NSDate *_shutdownSequenceStartDate;	// 24 = 0x18
    float _minVocalLevel;	// 32 = 0x20
    float _maxVocalLevel;	// 36 = 0x24
    float _defaultVocalLevel;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    MPCWhiskyControllerDisabledState *_disabledState;	// 56 = 0x38
    MPCRecordingSession *_recordingSession;	// 64 = 0x40
    id <MPCVocalAttenuationModelProvider> _modelProvider;	// 72 = 0x48
    id <MPCVocalAttenuationProcessor> _processor;	// 80 = 0x50
    MPCVocalAttenuationPolicyController *_policyController;	// 88 = 0x58
    MSVTimer *_shutdownTimer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000152eaa
@property(retain, nonatomic) MSVTimer *shutdownTimer; // @synthesize shutdownTimer=_shutdownTimer;
@property(readonly, nonatomic) MPCVocalAttenuationPolicyController *policyController; // @synthesize policyController=_policyController;
@property(readonly, nonatomic) id <MPCVocalAttenuationProcessor> processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) id <MPCVocalAttenuationModelProvider> modelProvider; // @synthesize modelProvider=_modelProvider;
@property(readonly, nonatomic) MPCRecordingSession *recordingSession; // @synthesize recordingSession=_recordingSession;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, copy) NSString *description;
- (void)_emitStatisticsEvent;	// IMP=0x00000000001520cd
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x000000000015209f
- (void)engine:(id)arg1 willChangeToItem:(id)arg2 fromItem:(id)arg3;	// IMP=0x0000000000151fa2
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x0000000000151f2b
- (void)vocalAttenuationPolicyControllerDidChange:(id)arg1;	// IMP=0x0000000000151e30
- (void)_stopShutdownSequenceIfRelevant;	// IMP=0x0000000000151da3
- (void)_startShutdownSequenceIfRelevant;	// IMP=0x0000000000151bc9
- (float)_vocalLevelForProcessorLevel:(float)arg1;	// IMP=0x00000000001519f0
- (float)_processorLevelForVocalLevel:(float)arg1;	// IMP=0x0000000000151815
- (void)_tearDownTapData;	// IMP=0x00000000001517d8
- (void)_loadModel;	// IMP=0x00000000001516ad
- (void)_updateState:(long long)arg1;	// IMP=0x0000000000151171
@property(readonly, nonatomic) double renderingTimeLimit;
- (id)blockingPolicy;	// IMP=0x00000000001510d1
@property(readonly, copy, nonatomic) NSString *modelID;
- (void)finalizeTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x0000000000150fcf
- (void)processTap:(struct opaqueMTAudioProcessingTap *)arg1 sampleIndex:(long long)arg2 numberFrames:(long long)arg3 flags:(unsigned int)arg4 audioBufferList:(struct AudioBufferList *)arg5 numberFramesOut:(long long *)arg6 flagsOut:(unsigned int *)arg7;	// IMP=0x0000000000150d2f
- (void)unprepareTap:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x0000000000150c8b
- (void)prepareTap:(struct opaqueMTAudioProcessingTap *)arg1 maxFrames:(long long)arg2 processingFormat:(const struct AudioStreamBasicDescription *)arg3;	// IMP=0x0000000000150a28
- (unsigned int)creationFlags;	// IMP=0x0000000000150a11
- (_Bool)shouldAttachAudioTapToItem:(id)arg1;	// IMP=0x000000000015071c
- (void)dealloc;	// IMP=0x00000000001506a7
- (id)initWithPlaybackEngine:(id)arg1 modelProvider:(id)arg2 processor:(id)arg3;	// IMP=0x00000000001502e1
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x000000000015025c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

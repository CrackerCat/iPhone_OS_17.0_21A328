//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMIVideoAnalyzer.h"

@class HMFTimer, HMIVideoAssetWriter, HMIVideoCommandBuffer, HMIVideoDecoder, HMIVideoEncoder, HMIVideoEventBuffer, HMIVideoFrameAnalyzer, HMIVideoFrameSampler, HMIVideoFrameSelector, HMIVideoFrameTracker, HMIVideoTemporalEventFilter, HMIVideoTimeline, NSData, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMIVideoAnalyzerServer : HMIVideoAnalyzer
{
    long long _numDecodedSamples;	// 88 = 0x58
    long long _numDidAnalyzeFrames;	// 96 = 0x60
    long long _numDidAnalyzePackages;	// 104 = 0x68
    long long _numDidAnalyzeFragments;	// 112 = 0x70
    long long _numDidCreateTimelapseFragments;	// 120 = 0x78
    _Bool _monitored;	// 128 = 0x80
    _Bool _encode;	// 129 = 0x81
    _Bool _hasFailed;	// 130 = 0x82
    _Bool _cancelled;	// 131 = 0x83
    double _analysisFPS;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_inputQueue;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_workQueue;	// 152 = 0x98
    NSObject<OS_dispatch_queue> *_encoderQueue;	// 160 = 0xa0
    struct opaqueCMFormatDescription *_inputVideoFormat;	// 168 = 0xa8
    struct opaqueCMFormatDescription *_inputAudioFormat;	// 176 = 0xb0
    struct opaqueCMFormatDescription *_timelapseOutputVideoFormat;	// 184 = 0xb8
    HMFTimer *_watchdogTimer;	// 192 = 0xc0
    HMIVideoCommandBuffer *_commandBuffer;	// 200 = 0xc8
    HMIVideoDecoder *_decoder;	// 208 = 0xd0
    HMIVideoFrameSampler *_frameThumbnailSampler;	// 216 = 0xd8
    HMIVideoFrameSampler *_frameTimelapseSampler;	// 224 = 0xe0
    HMIVideoEncoder *_encoder;	// 232 = 0xe8
    HMIVideoEncoder *_timelapseEncoder;	// 240 = 0xf0
    HMIVideoFrameSelector *_frameSelector;	// 248 = 0xf8
    HMIVideoFrameTracker *_frameTracker;	// 256 = 0x100
    HMIVideoFrameAnalyzer *_frameAnalyzer;	// 264 = 0x108
    HMIVideoAssetWriter *_assetWriter;	// 272 = 0x110
    HMIVideoAssetWriter *_timelapseAssetWriter;	// 280 = 0x118
    HMIVideoEventBuffer *_frameAnalyzerFrameResultBuffer;	// 288 = 0x120
    HMIVideoEventBuffer *_thumbnailBuffer;	// 296 = 0x128
    NSData *_initializationSegment;	// 304 = 0x130
    NSData *_timelapseInitializationSegment;	// 312 = 0x138
    HMIVideoEventBuffer *_dynamicConfigurationBuffer;	// 320 = 0x140
    HMIVideoTemporalEventFilter *_temporalEventFilter;	// 328 = 0x148
    HMIVideoTimeline *_timeline;	// 336 = 0x150
    NSDate *_startDate;	// 344 = 0x158
    NSDate *_lastFragmentReceivedDate;	// 352 = 0x160
    CDStruct_1b6d18a9 _currentPTS;	// 360 = 0x168
    CDStruct_1b6d18a9 _currentDTS;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x00000000000da127
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(retain) NSDate *lastFragmentReceivedDate; // @synthesize lastFragmentReceivedDate=_lastFragmentReceivedDate;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly) HMIVideoTimeline *timeline; // @synthesize timeline=_timeline;
@property(readonly) HMIVideoTemporalEventFilter *temporalEventFilter; // @synthesize temporalEventFilter=_temporalEventFilter;
@property(readonly) HMIVideoEventBuffer *dynamicConfigurationBuffer; // @synthesize dynamicConfigurationBuffer=_dynamicConfigurationBuffer;
@property(retain) NSData *timelapseInitializationSegment; // @synthesize timelapseInitializationSegment=_timelapseInitializationSegment;
@property(retain) NSData *initializationSegment; // @synthesize initializationSegment=_initializationSegment;
@property(readonly) HMIVideoEventBuffer *thumbnailBuffer; // @synthesize thumbnailBuffer=_thumbnailBuffer;
@property(readonly) HMIVideoEventBuffer *frameAnalyzerFrameResultBuffer; // @synthesize frameAnalyzerFrameResultBuffer=_frameAnalyzerFrameResultBuffer;
@property CDStruct_1b6d18a9 currentDTS; // @synthesize currentDTS=_currentDTS;
@property CDStruct_1b6d18a9 currentPTS; // @synthesize currentPTS=_currentPTS;
@property(retain) HMIVideoAssetWriter *timelapseAssetWriter; // @synthesize timelapseAssetWriter=_timelapseAssetWriter;
@property(retain) HMIVideoAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(readonly) HMIVideoFrameAnalyzer *frameAnalyzer; // @synthesize frameAnalyzer=_frameAnalyzer;
@property(readonly) HMIVideoFrameTracker *frameTracker; // @synthesize frameTracker=_frameTracker;
@property(readonly) HMIVideoFrameSelector *frameSelector; // @synthesize frameSelector=_frameSelector;
@property(retain) HMIVideoEncoder *timelapseEncoder; // @synthesize timelapseEncoder=_timelapseEncoder;
@property(retain) HMIVideoEncoder *encoder; // @synthesize encoder=_encoder;
@property(readonly) HMIVideoFrameSampler *frameTimelapseSampler; // @synthesize frameTimelapseSampler=_frameTimelapseSampler;
@property(readonly) HMIVideoFrameSampler *frameThumbnailSampler; // @synthesize frameThumbnailSampler=_frameThumbnailSampler;
@property(readonly) HMIVideoDecoder *decoder; // @synthesize decoder=_decoder;
@property(readonly) HMIVideoCommandBuffer *commandBuffer; // @synthesize commandBuffer=_commandBuffer;
@property(readonly) HMFTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
@property struct opaqueCMFormatDescription *timelapseOutputVideoFormat; // @synthesize timelapseOutputVideoFormat=_timelapseOutputVideoFormat;
@property struct opaqueCMFormatDescription *inputAudioFormat; // @synthesize inputAudioFormat=_inputAudioFormat;
@property struct opaqueCMFormatDescription *inputVideoFormat; // @synthesize inputVideoFormat=_inputVideoFormat;
@property(readonly) NSObject<OS_dispatch_queue> *encoderQueue; // @synthesize encoderQueue=_encoderQueue;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSObject<OS_dispatch_queue> *inputQueue; // @synthesize inputQueue=_inputQueue;
- (double)analysisFPS;	// IMP=0x00000000000d9d46
- (void)setEncode:(_Bool)arg1;	// IMP=0x00000000000d9d36
- (_Bool)encode;	// IMP=0x00000000000d9d26
- (void)setMonitored:(_Bool)arg1;	// IMP=0x00000000000d9d16
- (_Bool)monitored;	// IMP=0x00000000000d9d06
- (unsigned long long)status;	// IMP=0x00000000000d9c84
- (void)setAnalysisFPS:(double)arg1;	// IMP=0x00000000000d9b1e
- (double)delay;	// IMP=0x00000000000d9ace
@property(readonly) double timeSinceLastFragmentWasReceived;
@property(readonly) double timeSinceAnalyzerStarted;
- (id)state;	// IMP=0x00000000000d96fd
- (void)_produceResult:(SEL)arg1 withArguments:(id)arg2;	// IMP=0x00000000000d94fe
- (void)_notifyDelegateDidProduceAnalysisStateUpdate:(id)arg1;	// IMP=0x00000000000d940a
- (void)_notifyDelegateDidFailWithError:(id)arg1;	// IMP=0x00000000000d91a5
- (void)_notifyDelegateDidCreateTimelapseFragment:(id)arg1;	// IMP=0x00000000000d907a
- (void)_notifyDelegateDidAnalyzeFrameWithResult:(id)arg1;	// IMP=0x00000000000d8f86
- (void)_notifyDelegateDidAnalyzeFragmentWithResult:(id)arg1;	// IMP=0x00000000000d8d3a
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000d8c75
- (void)encoder:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000d8b1d
- (void)decoder:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000d8b08
- (void)assetWriter:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000d8af3
- (void)assetWriter:(id)arg1 didOutputSeparableSegment:(id)arg2 segmentReport:(id)arg3;	// IMP=0x00000000000d811a
- (void)assetWriter:(id)arg1 didOutputInitializationSegment:(id)arg2;	// IMP=0x00000000000d8062
- (void)frameSampler:(id)arg1 didSampleFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d7e14
- (void)frameAnalyzer:(id)arg1 didProduceAnalysisStateUpdate:(id)arg2;	// IMP=0x00000000000d7dff
- (void)frameAnalyzer:(id)arg1 didAnalyzeFrame:(id)arg2;	// IMP=0x00000000000d76bc
- (id)_filterFrameResult:(id)arg1 dynamicConfiguration:(id)arg2 motionDetections:(id)arg3;	// IMP=0x00000000000d734c
- (void)frameTracker:(id)arg1 didTrackFrame:(struct opaqueCMSampleBuffer *)arg2 background:(struct opaqueCMSampleBuffer *)arg3 motionDetections:(id)arg4 tracks:(id)arg5;	// IMP=0x00000000000d723b
- (void)frameSelector:(id)arg1 didSkipFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d71ef
- (void)frameSelector:(id)arg1 didSelectFrame:(struct opaqueCMSampleBuffer *)arg2 reference:(struct opaqueCMSampleBuffer *)arg3;	// IMP=0x00000000000d7115
- (struct opaqueCMSampleBuffer *)frameSelector:(id)arg1 prepareFrame:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d70c2
- (void)_handleDecodedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000000d6eb1
- (void)encoder:(id)arg1 didEncodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d6d60
- (void)decoder:(id)arg1 didDecodeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d6cc7
- (void)_ensureTimelapseEncoder;	// IMP=0x00000000000d6c18
- (void)_ensureEncoder;	// IMP=0x00000000000d6ba5
- (void)_ensureDecoderForFragment:(id)arg1;	// IMP=0x00000000000d6ab9
- (void)bufferWillFlush:(id)arg1;	// IMP=0x00000000000d685c
- (void)buffer:(id)arg1 willHandleSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x00000000000d6590
- (void)_configureTimelapseEncoder;	// IMP=0x00000000000d6098
- (void)_configureEncoder;	// IMP=0x00000000000d5df6
- (void)_configureTimelapseAssetWriter;	// IMP=0x00000000000d5c39
- (void)_configureAssetWriter;	// IMP=0x00000000000d5b01
- (void)dealloc;	// IMP=0x00000000000d59dd
- (void)_prepareForTimelapseOutputVideoFormat:(struct opaqueCMFormatDescription *)arg1;	// IMP=0x00000000000d596b
- (void)_prepareForInputVideoFormat:(struct opaqueCMFormatDescription *)arg1 audioFormat:(struct opaqueCMFormatDescription *)arg2;	// IMP=0x00000000000d572d
- (void)_saveFragmentDataToDisk:(id)arg1 diskBufferSize:(unsigned long long)arg2;	// IMP=0x00000000000d4797
- (void)cancel;	// IMP=0x00000000000d4786
- (void)finishWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d43dc
- (void)flushAsync;	// IMP=0x00000000000d439f
- (void)flush;	// IMP=0x00000000000d4362
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d41cc
- (void)handleAssetData:(id)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d33fe
- (void)handleMessageWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000d2e4a
- (id)dynamicConfigurationForTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000d2c02
- (id)initWithConfiguration:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000d25a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInputWritingHelper;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputNoMorePassesHelper
{
    AVAssetWriterInputWritingHelper *_writingHelper;	// 24 = 0x18
}

- (void)markCurrentPassAsFinished;	// IMP=0x00000000000b3947
- (void)markAsFinished;	// IMP=0x00000000000b3927
- (struct __CVPixelBufferPool *)pixelBufferPool;	// IMP=0x00000000000b390a
- (_Bool)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000b3898
- (_Bool)appendPixelBuffer:(struct __CVBuffer *)arg1 withPresentationTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000b3826
- (long long)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 error:(id *)arg2;	// IMP=0x00000000000b3793
- (void)stopRequestingMediaData;	// IMP=0x00000000000b3721
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b36af
- (_Bool)isReadyForMoreMediaData;	// IMP=0x00000000000b36a7
- (id)currentPassDescription;	// IMP=0x00000000000b369f
- (_Bool)canPerformMultiplePasses;	// IMP=0x00000000000b3682
- (long long)status;	// IMP=0x00000000000b3665
- (void)dealloc;	// IMP=0x00000000000b3623
- (id)initWithWritingHelper:(id)arg1;	// IMP=0x00000000000b3554
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000b3540

@end

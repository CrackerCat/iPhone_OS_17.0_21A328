//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _LTMultilingualSpeechRecognizer : NSObject
{
    NSDictionary *_recognizers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000038942
- (void)setLanguagesRecognized:(id)arg1;	// IMP=0x00000000000385bb
- (void)cancelRecognition;	// IMP=0x0000000000038488
- (void)endAudio;	// IMP=0x0000000000038328
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x00000000000381cc
- (void)startRecognitionForLocale:(id)arg1 autoEndpoint:(_Bool)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000037491
- (id)initWithModelURLs:(id)arg1 modelVersions:(id)arg2;	// IMP=0x0000000000037280

@end

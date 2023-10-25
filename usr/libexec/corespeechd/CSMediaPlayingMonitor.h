//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor
{
    long long _mediaIsPlaying;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00400000001448e2
- (void).cxx_destruct;	// IMP=0x0020000000144695
- (void)mediaPlayingStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001445f7
- (long long)mediaPlayingState;	// IMP=0x0010000000144564
- (void)_notifyObserver:(id)arg1 mediaIsPlayingState:(long long)arg2;	// IMP=0x00100000001444f0
- (void)_notePossiblePlayPausedStateChange:(id)arg1;	// IMP=0x0010000000144386
- (void)_stopMonitoring;	// IMP=0x00100000001442b3
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x00100000001441a3
- (void)initializeMediaPlayingState;	// IMP=0x0010000000144151
- (id)init;	// IMP=0x00100000001440e3

@end

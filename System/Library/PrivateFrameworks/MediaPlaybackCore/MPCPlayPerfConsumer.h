//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlayPerfConsumer : NSObject
{
    NSString *_lastSiriReferenceIdentifier;	// 8 = 0x8
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 24 = 0x18
}

+ (id)coreAnalyticsEventNameWithEventType:(id)arg1;	// IMP=0x00100000001ce0d6
+ (id)analyticsFormat:(id)arg1;	// IMP=0x00100000001cde30
+ (id)analyticsContentType:(long long)arg1;	// IMP=0x00100000001cde0c
+ (id)identifier;	// IMP=0x00100000001cddff
- (void).cxx_destruct;	// IMP=0x00000000001cc18f
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)sendMetricsToSiriSelfLogger:(id)arg1;	// IMP=0x00000000001cc0c3
- (void)sendMetricsToCoreAnalytics:(id)arg1;	// IMP=0x00000000001cbfb2
- (void)generatePlayPerfSignposts:(id)arg1;	// IMP=0x00000000001cb13d
- (void)publishPlaybackMetrics:(id)arg1;	// IMP=0x00000000001cb048
- (void)handleMetrics:(id)arg1;	// IMP=0x00000000001cace9
- (void)setupErrorHandlerForEventType:(id)arg1 errorKey:(id)arg2 prefix:(id)arg3;	// IMP=0x00000000001cac2a
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000001cac10
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000001ca943
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001ca8df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

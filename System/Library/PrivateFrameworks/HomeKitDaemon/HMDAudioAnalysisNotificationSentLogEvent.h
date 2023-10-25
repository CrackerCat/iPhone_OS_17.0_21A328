//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDate, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAudioAnalysisNotificationSentLogEvent : HMMLogEvent
{
    NSDate *_dateOfOccurrence;	// 8 = 0x8
    unsigned long long _reason;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x0010000000aca93d
- (void).cxx_destruct;	// IMP=0x0000000000aca92a
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(readonly) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithDate:(id)arg1 reason:(unsigned long long)arg2 state:(unsigned long long)arg3;	// IMP=0x0000000000aca73a

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

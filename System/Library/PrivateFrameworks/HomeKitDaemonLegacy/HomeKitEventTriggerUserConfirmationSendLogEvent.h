//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDAnalyticsEventTriggerUserConfirmationSendData;

__attribute__((visibility("hidden")))
@interface HomeKitEventTriggerUserConfirmationSendLogEvent : HMMLogEvent
{
    HMDAnalyticsEventTriggerUserConfirmationSendData *_analyticsData;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000615c36
@property(readonly, nonatomic) HMDAnalyticsEventTriggerUserConfirmationSendData *analyticsData; // @synthesize analyticsData=_analyticsData;
- (id)initWithSessionID:(id)arg1;	// IMP=0x0000000000615b7f

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDIncomingCloudPushLogEvent : HMMLogEvent
{
    NSString *_topic;	// 8 = 0x8
}

+ (id)incomingCloudPush:(id)arg1;	// IMP=0x00600000005dd8d0
- (void).cxx_destruct;	// IMP=0x00000000005dd8bd
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)initWithTopic:(id)arg1;	// IMP=0x00000000005dd83e

@end

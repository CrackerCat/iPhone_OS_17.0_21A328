//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDBulletinNotificationLogEvent : HMMLogEvent
{
    NSString *_topic;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000079f897
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (id)initWithTopic:(long long)arg1;	// IMP=0x000000000079f815

@end

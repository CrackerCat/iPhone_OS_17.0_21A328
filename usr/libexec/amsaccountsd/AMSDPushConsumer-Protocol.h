//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APSIncomingMessage, NSString;

@protocol AMSDPushConsumer
@property(readonly, nonatomic) NSString *pushTopic;
- (_Bool)shouldEnablePushTopic;
- (void)handlePushNotification:(APSIncomingMessage *)arg1;
@end

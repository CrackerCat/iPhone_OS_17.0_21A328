//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSArray, NSString, UNSNotificationRepository;

@protocol UNSNotificationRepositoryObserver <NSObject>
- (void)notificationRepository:(UNSNotificationRepository *)arg1 didPerformUpdates:(NSArray *)arg2 forBundleIdentifier:(NSString *)arg3;

@optional
- (void)notificationRepository:(UNSNotificationRepository *)arg1 didDiscoverContentOnFirstUnlockForBundleIdentifier:(NSString *)arg2;
@end

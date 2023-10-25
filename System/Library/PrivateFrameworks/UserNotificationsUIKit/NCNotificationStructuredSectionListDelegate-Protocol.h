//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsUIKit/NCNotificationListComponentDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationStructuredSectionList, NSString;
@protocol NCAuxiliaryOptionsProviding;

@protocol NCNotificationStructuredSectionListDelegate <NCNotificationListComponentDelegate>
- (void)notificationStructuredSectionListDidClearAllNotificationRequests:(NCNotificationStructuredSectionList *)arg1;
- (void)notificationStructuredSectionListRequestsClearingSection:(NCNotificationStructuredSectionList *)arg1;
- (void)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 transitionedGroupedStateIsGrouped:(_Bool)arg2;
- (_Bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 areNotificationsLoadedForSectionIdentifier:(NSString *)arg2;
- (_Bool)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 shouldFilterNotificationRequest:(NCNotificationRequest *)arg2;
- (id <NCAuxiliaryOptionsProviding>)notificationStructuredSectionList:(NCNotificationStructuredSectionList *)arg1 requestsAuxiliaryOptionsContentProviderForNotificationRequest:(NCNotificationRequest *)arg2 isLongLook:(_Bool)arg3;
@end

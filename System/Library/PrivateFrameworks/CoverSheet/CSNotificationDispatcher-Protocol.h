//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/CSCoverSheetParticipating-Protocol.h>

@class NCNotificationAction, NCNotificationRequest, NCNotificationSectionSettings, NCNotificationSystemSettings, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol CSNotificationAlertingController, CSNotificationDestination;

@protocol CSNotificationDispatcher <CSCoverSheetParticipating>
- (NCNotificationSystemSettings *)notificationSystemSettingsForDestination:(id <CSNotificationDestination>)arg1;
- (NSSet *)notificationSectionSettingsForDestination:(id <CSNotificationDestination>)arg1;
- (NCNotificationSectionSettings *)destination:(id <CSNotificationDestination>)arg1 settingsForSectionIdentifier:(NSString *)arg2;
- (id <CSNotificationAlertingController>)alertingControllerForDestination:(id <CSNotificationDestination>)arg1;
- (void)destination:(id <CSNotificationDestination>)arg1 setNotificationSystemSettings:(NCNotificationSystemSettings *)arg2;
- (NCNotificationRequest *)destination:(id <CSNotificationDestination>)arg1 notificationRequestForUUID:(NSUUID *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 setSystemScheduledDeliveryEnabled:(_Bool)arg2 scheduledDeliveryTimes:(NSArray *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setScheduledDelivery:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsDirectMessages:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsTimeSensitive:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setMuted:(_Bool)arg2 untilDate:(NSDate *)arg3 forSectionIdentifier:(NSString *)arg4 threadIdentifier:(NSString *)arg5;
- (void)destination:(id <CSNotificationDestination>)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsInSections:(NSSet *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequestsFromIncomingSection:(NSSet *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 clearNotificationRequests:(NSSet *)arg2;
- (void)destination:(id <CSNotificationDestination>)arg1 performAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 requestAuthentication:(_Bool)arg4 withParameters:(NSDictionary *)arg5 completion:(void (^)(_Bool))arg6;
- (void)destination:(id <CSNotificationDestination>)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3 withParameters:(NSDictionary *)arg4 completion:(void (^)(_Bool))arg5;
@end

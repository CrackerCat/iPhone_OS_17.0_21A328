//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, UNUserNotificationCenter;
@protocol HMDUserNotificationCenterDelegate, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDUserNotificationCenter : HMFObject
{
    id <HMDUserNotificationCenterDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_userNotificationCenter;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000c25124
- (void).cxx_destruct;	// IMP=0x0000000000c24d21
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property __weak id <HMDUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c24c0d
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000c24b7f
- (void)_showNotification:(id)arg1;	// IMP=0x0000000000c24ac1
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c24a06
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1;	// IMP=0x0000000000c24966
- (id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(_Bool)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;	// IMP=0x0000000000c2458b
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x0000000000c243ef
- (void)setBadgeNumber:(long long)arg1;	// IMP=0x0000000000c243a1
- (id)configureWithNotificationCategories:(id)arg1;	// IMP=0x0000000000c24253
- (id)initWithBundleIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000c2417e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

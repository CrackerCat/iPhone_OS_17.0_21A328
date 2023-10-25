//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;

@interface NPDBulletinManager : NSObject
{
    UNUserNotificationCenter *_notificationCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000004b514
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (id)_defaultNotficationIdentifierWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 forPass:(id)arg4;	// IMP=0x001000000004b3d5
- (id)_userNotificationWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 forPass:(id)arg4 playSound:(_Bool)arg5 notificationIdentifier:(id)arg6 expirationDate:(id)arg7;	// IMP=0x001000000004b0ab
- (void)_persistArchivedNotifications:(id)arg1;	// IMP=0x001000000004b097
- (id)_archivedDelayedNotifications;	// IMP=0x001000000004b055
- (void)_removeDelayedNotificationRequestWithIdentifier:(id)arg1;	// IMP=0x001000000004aecd
- (id)_delayedUserNotificationWithIdentifier:(id)arg1;	// IMP=0x001000000004ac97
- (void)_persistDelayedNotificationRequest:(id)arg1;	// IMP=0x001000000004aa78
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x001000000004a9f4
- (void)removeDeliveredBridgeBulletinsWithNotificationIdentifier:(id)arg1;	// IMP=0x001000000004a896
- (void)removeBridgeBulletinsWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;	// IMP=0x001000000004a6a9
- (void)removeBridgeBulletinsForPassWithUniqueID:(id)arg1;	// IMP=0x001000000004a2b2
- (void)insertBridgeBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 delay:(double)arg4;	// IMP=0x001000000004a010
- (void)insertBridgeBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 forPass:(id)arg4 playSound:(_Bool)arg5 notificationIdentifier:(id)arg6 expirationDate:(id)arg7;	// IMP=0x0010000000049ddf
- (void)insertBridgeBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 forPass:(id)arg4;	// IMP=0x0010000000049d7e
- (void)dealloc;	// IMP=0x0010000000049d41
- (id)init;	// IMP=0x0010000000049cbe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

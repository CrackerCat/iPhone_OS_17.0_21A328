//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SYDUserNotifications : NSObject
{
}

+ (id)queue;	// IMP=0x004000000000b94d
+ (_Bool)shouldShowNotifications;	// IMP=0x001000000000b921
+ (id)userNotificationCenter;	// IMP=0x001000000000b812
+ (void)requestAuthorizationIfNecessary;	// IMP=0x001000000000b68f
+ (void)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3;	// IMP=0x001000000000b3a8
+ (void)showUserNotificationIfEnabledForStoreIdentifier:(id)arg1 format:(id)arg2;	// IMP=0x001000000000b149

@end

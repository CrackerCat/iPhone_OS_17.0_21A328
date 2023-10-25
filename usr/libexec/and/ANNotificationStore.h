//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator;

@interface ANNotificationStore : NSObject
{
    NSManagedObjectContext *_managedObjectContext;	// 8 = 0x8
    NSPersistentStoreCoordinator *_storeCoordinator;	// 16 = 0x10
}

+ (id)sharedStore;	// IMP=0x0040000000001ab5
- (void).cxx_destruct;	// IMP=0x0020000000003f2d
- (id)_copyPersistentStoreFilePath;	// IMP=0x0010000000003e6a
- (id)_managedObjectModel;	// IMP=0x0010000000003d65
- (void)_createManagedObjectContext;	// IMP=0x0010000000003ab3
- (_Bool)_unsafe_commitChangesInManagedObjectContext;	// IMP=0x0010000000003a0a
- (_Bool)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000003590
- (_Bool)removeAllNotificationsForAccountTypeID:(id)arg1;	// IMP=0x0010000000003174
- (_Bool)limitPendingNotificationsForAccountTypeID:(id)arg1 toMaximumCount:(unsigned long long)arg2;	// IMP=0x0010000000002a02
- (_Bool)saveNotification:(id)arg1;	// IMP=0x0010000000002535
- (id)_notificationsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x0010000000002150
- (id)_notificationsMatchingPredicate:(id)arg1;	// IMP=0x001000000000213c
- (id)typeIdentifiersOfAccountsWithPendingNotifications;	// IMP=0x0010000000001cd2
- (id)pendingNotificationsWithEventID:(id)arg1;	// IMP=0x0010000000001c60
- (id)notificationWithIdentifier:(id)arg1;	// IMP=0x0010000000001bc8
- (id)pendingNotificationsForAccountsWithTypeID:(id)arg1;	// IMP=0x0010000000001b56
- (id)init;	// IMP=0x0010000000001b0a

@end

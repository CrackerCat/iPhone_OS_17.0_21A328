//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol LibraryOpen, LibraryProgress, LibraryUninstall, OS_dispatch_queue;

@interface LibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSArray *_libraryCatalogs;	// 16 = 0x10
    id <LibraryOpen> _libraryOpen;	// 24 = 0x18
    id <LibraryProgress> _libraryProgress;	// 32 = 0x20
    id <LibraryUninstall> _libraryUninstall;	// 40 = 0x28
    NSMutableDictionary *_remoteCatalogs;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000210635
- (void)catalogUnregisteredBundleIDs:(id)arg1;	// IMP=0x0010000000210473
- (void)catalogRefreshedBundleIDs:(id)arg1;	// IMP=0x001000000021040e
- (void)catalogRegisteredApps:(id)arg1;	// IMP=0x00100000002103a9
- (void)uninstallApp:(id)arg1 requestUserConfirmation:(_Bool)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000021008d
- (void)lookupItemIDsForDeletableSystemAppsForWatchWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020fe30
- (void)lookupBundleIDsForDeletableSystemAppsForWatchWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020fbd3
- (void)lookupItemIDsForDeletableSystemAppsWithBundleIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f976
- (void)lookupBundleIDsForDeletableSystemAppsWithItemIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f719
- (void)launchApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f592
- (void)launchApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f3ea
- (void)launchApp:(id)arg1 extensionType:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f25b
- (void)openableStatusForExecutableAtPath:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f246
- (void)resumeApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f230
- (void)pauseApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f21a
- (void)cancelApp:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f204
- (void)cancelApp:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f1ee
- (void)executeQueryForUpdatesReloadingFromServer:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020f186
- (void)executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000020f11e
- (void)executeQueryWithPredicate:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000020e733
- (id)init;	// IMP=0x001000000020e532

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Error: Property attributes should begin with the type ('T') attribute, property name: description
// Property attributes: (null)

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

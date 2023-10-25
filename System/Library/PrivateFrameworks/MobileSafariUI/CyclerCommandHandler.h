//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, WBDatabaseLockAcquisitor, WBSDistributedNotificationObserver, WebBookmarkCollection;

__attribute__((visibility("hidden")))
@interface CyclerCommandHandler : NSObject
{
    WebBookmarkCollection *_bookmarkCollection;	// 8 = 0x8
    NSMutableArray *_blocksAwaitingDatabaseLock;	// 16 = 0x10
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;	// 24 = 0x18
    WBDatabaseLockAcquisitor *_bookmarkDatabaseLockAcquisitor;	// 32 = 0x20
    _Bool _isWaitingToAcquireLock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001bf92
- (_Bool)_isBookmarkSyncEnabled;	// IMP=0x000000000001bee2
- (void)_tryToAcquireDatabaseLockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bdde
- (id)_cyclerRepresentationOfBookmark:(id)arg1;	// IMP=0x000000000001b9b9
- (unsigned long long)_adjustInsertionIndex:(unsigned long long)arg1 forInsertionIntoListWithIdentifier:(int)arg2;	// IMP=0x000000000001b8be
- (_Bool)_isSpecialBookmark:(id)arg1;	// IMP=0x000000000001b86b
- (void)_startMonitoringSyncStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001b3d7
- (void)databaseLockAcquisitor:(id)arg1 acquiredLock:(_Bool)arg2;	// IMP=0x000000000001b1fa
- (void)syncBookmarksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001afe6
- (void)setURL:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ac9a
- (void)setTitle:(id)arg1 forBookmarkWithIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a96f
- (void)moveBookmarkWithIdentifier:(id)arg1 intoListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a515
- (void)deleteBookmarkWithIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a230
- (void)createBookmarkListWithTitle:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000019e0e
- (void)createBookmarkWithTitle:(id)arg1 url:(id)arg2 inListWithIdentifier:(id)arg3 atIndex:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001994d
- (void)clearBookmarksWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000193ce
- (void)fetchTopLevelBookmarkList:(CDUnknownBlockType)arg1;	// IMP=0x00000000000192e7
- (id)initWithBookmarkCollection:(id)arg1;	// IMP=0x00000000000191e8
- (id)init;	// IMP=0x00000000000191da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

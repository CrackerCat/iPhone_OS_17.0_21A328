//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@protocol FRAppCacheSnapshotter
@property(readonly, nonatomic) _Bool snapshotPreparedAndWaitingForRestoration;
@property(readonly, nonatomic) NSDate *existingSnapshotCreationDate;
- (void)finalizeRestoreOfCachesDirectory;
- (void)prepareToRestoreSnapshotAndKillApp;
- (void)removeExistingSnapshotWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
- (void)snapshotWithCompletionHandler:(void (^)(_Bool, NSError *))arg1;
@end

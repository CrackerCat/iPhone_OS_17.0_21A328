//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookDataStore/NSObject-Protocol.h>

@class NSArray;

@protocol BCCloudDataSyncObserver <NSObject>
- (void)removedCloudRecordsWithIDs:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)updatedCloudRecords:(NSArray *)arg1 completion:(void (^)(void))arg2;
@end

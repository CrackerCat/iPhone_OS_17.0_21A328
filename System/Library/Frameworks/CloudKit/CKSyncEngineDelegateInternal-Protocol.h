//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKSchedulerActivity, CKSyncEngine, NSOperation;

@protocol CKSyncEngineDelegateInternal
- (void)syncEngine:(CKSyncEngine *)arg1 didHandleSchedulerActivity:(CKSchedulerActivity *)arg2;
- (void)syncEngine:(CKSyncEngine *)arg1 willEnqueueOperation:(NSOperation *)arg2;
@end

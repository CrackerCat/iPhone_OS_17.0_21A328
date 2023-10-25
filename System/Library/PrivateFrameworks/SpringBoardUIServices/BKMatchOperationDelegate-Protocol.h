//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/BKOperationDelegate-Protocol.h>

@class BKMatchOperation, BKMatchResultInfo;

@protocol BKMatchOperationDelegate <BKOperationDelegate>

@optional
- (void)matchOperation:(BKMatchOperation *)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 presenceDetectedInLockout:(long long)arg2;
- (void)matchOperation:(BKMatchOperation *)arg1 matchedWithResult:(BKMatchResultInfo *)arg2;
@end

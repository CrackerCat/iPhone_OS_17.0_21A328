//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSNumber, NSString;

@protocol GEOAPServiceProxy <NSObject>
- (void)runAggregationTasks;
- (void)showEvalDataWithVisitorBlock:(void (^)(unsigned long long, NSData *, NSDate *))arg1;
- (void)flushEvalData;
- (void)setEvalMode:(_Bool)arg1;
- (void)reportDailyUsageCountType:(int)arg1 usageString:(NSString *)arg2 usageBool:(NSNumber *)arg3 appId:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)reportLogMsg:(NSData *)arg1 uploadBatchId:(unsigned long long)arg2 completion:(void (^)(void))arg3;
@end

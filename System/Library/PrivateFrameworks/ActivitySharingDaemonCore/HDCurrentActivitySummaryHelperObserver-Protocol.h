//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActivitySharingDaemonCore/NSObject-Protocol.h>

@class HDCurrentActivitySummaryHelper, HKActivitySummary;

@protocol HDCurrentActivitySummaryHelperObserver <NSObject>
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateYesterdayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(HDCurrentActivitySummaryHelper *)arg1 didUpdateTodayActivitySummary:(HKActivitySummary *)arg2 changedFields:(unsigned long long)arg3;
@end

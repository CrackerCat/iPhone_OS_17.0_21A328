//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSIndexPath, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12GameCenterUI30DashboardActivityFeedPresenter
{
    MISSING_TYPE *scrollToIndexPath;	// 268435461 = 0x10000005
    MISSING_TYPE *didScrollToIndexPath;	// 0 = 0x0
    MISSING_TYPE *scrollToActivityInfo;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *sections;	// 0 = 0x0
    MISSING_TYPE *requiredData;	// 0 = 0x0
    MISSING_TYPE *dashboardDisplayMode;	// 0 = 0x0
    MISSING_TYPE *pageMetricsPresenter;	// 0 = 0x0
    MISSING_TYPE *requiredDataPresenter;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x000000000049b6ca
- (id)initWithPlayerId:(id)arg1;	// IMP=0x000000000049b600
- (void)loadMoreActivityFeedWithContinuationToken:(id)arg1;	// IMP=0x000000000049b592
- (void)updateSnapshot;	// IMP=0x000000000049b56d
@property(nonatomic) _Bool didScrollToIndexPath; // @synthesize didScrollToIndexPath;
@property(nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property(nonatomic, readonly) NSString *title;

@end

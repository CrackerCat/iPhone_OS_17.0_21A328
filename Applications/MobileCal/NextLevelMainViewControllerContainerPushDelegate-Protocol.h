//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class EKCalendarDate, MonthViewContainerViewController;

@protocol NextLevelMainViewControllerContainerPushDelegate <NSObject>
- (void)pushContentViewOfType:(long long)arg1 date:(EKCalendarDate *)arg2 animated:(_Bool)arg3;
- (MonthViewContainerViewController *)pushNextLevelMainViewControllerContainerWithDate:(EKCalendarDate *)arg1 animated:(_Bool)arg2;
@end

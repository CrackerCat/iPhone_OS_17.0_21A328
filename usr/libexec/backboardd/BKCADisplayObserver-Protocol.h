//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BKCADisplayMonitor, CADisplay;

@protocol BKCADisplayObserver <NSObject>
- (void)monitor:(BKCADisplayMonitor *)arg1 activeDisplayPropertiesDidChange:(CADisplay *)arg2;
- (void)monitor:(BKCADisplayMonitor *)arg1 displayDidBecomeInactive:(CADisplay *)arg2;
- (void)monitor:(BKCADisplayMonitor *)arg1 displayDidBecomeActive:(CADisplay *)arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class FBSApplicationDataStoreMonitor, NSString;

@protocol FBSApplicationDataStoreObserver <NSObject>

@optional
- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didInvalidateApplication:(NSString *)arg2;
- (void)dataStoreMonitor:(FBSApplicationDataStoreMonitor *)arg1 didUpdateApplication:(NSString *)arg2 forKey:(NSString *)arg3;
@end

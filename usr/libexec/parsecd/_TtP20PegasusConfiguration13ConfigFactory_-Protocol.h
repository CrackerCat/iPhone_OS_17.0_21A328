//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL, NSUserDefaults;
@protocol _TtP20PegasusConfiguration6Config_;

@protocol _TtP20PegasusConfiguration13ConfigFactory_ <NSObject>
- (id <_TtP20PegasusConfiguration6Config_>)loadWithData:(NSData *)arg1 userAgent:(NSString *)arg2 userDefaults:(NSUserDefaults *)arg3;
- (id <_TtP20PegasusConfiguration6Config_>)loadWithUrl:(NSURL *)arg1 userAgent:(NSString *)arg2 userDefaults:(NSUserDefaults *)arg3;
@end

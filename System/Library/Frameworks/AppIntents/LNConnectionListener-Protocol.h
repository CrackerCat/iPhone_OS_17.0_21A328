//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppIntents/NSObject-Protocol.h>

@class BSAction;

@protocol LNConnectionListener <NSObject>
+ (id)sharedListener;
- (void)handleAction:(BSAction *)arg1 completionHandler:(void (^)(BSActionResponse *))arg2;
@end

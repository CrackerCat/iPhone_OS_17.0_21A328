//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDHome;

@protocol HMDAccessoryAssociation <NSObject>
@property(readonly) _Bool supportsAssociation;
- (void)associateToHome:(HMDHome *)arg1 completionHandler:(void (^)(NSError *))arg2;
@end

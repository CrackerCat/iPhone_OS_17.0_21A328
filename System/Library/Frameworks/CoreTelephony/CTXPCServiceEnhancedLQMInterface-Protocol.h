//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CTXPCServiceSubscriptionContext, NSData;

@protocol CTXPCServiceEnhancedLQMInterface
- (void)sendTaggedInfo:(CTXPCServiceSubscriptionContext *)arg1 type:(unsigned long long)arg2 payload:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@protocol MAPushServiceProtocol
- (void)addSyntheticJobWithType:(NSString *)arg1 assetSpecifier:(NSString *)arg2 matchingAssetVersion:(NSString *)arg3 triggerInterval:(long long)arg4;
- (void)pushJobsAwaitingTriggerWithCompletion:(void (^)(NSArray *))arg1;
- (void)triggerPushNotificationWithPayload:(NSDictionary *)arg1;
- (void)unsubscribeFromAllChannels;
- (void)subscribedChannelIDsWithCompletion:(void (^)(NSArray *))arg1;
- (void)unsubscribeToChannelWithIdentifier:(NSString *)arg1;
- (void)subscribeToChannelWithIdentifier:(NSString *)arg1;
@end

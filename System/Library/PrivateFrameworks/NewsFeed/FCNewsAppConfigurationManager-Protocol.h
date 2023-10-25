//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsFeed/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, OS_dispatch_queue;
@protocol FCNewsAppConfiguration, FCNewsAppConfiguration><FCJSONEncodableObjectProviding, FCNewsAppConfigurationObserving;

@protocol FCNewsAppConfigurationManager <NSObject>
@property(readonly, nonatomic) id <FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> appConfiguration;
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 refreshCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(OS_dispatch_queue *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg2;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void (^)(id <FCNewsAppConfiguration>, NSError *))arg1;

@optional
@property(readonly, nonatomic) id <FCNewsAppConfiguration><FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;
@property(readonly, nonatomic) id <FCNewsAppConfiguration> fetchedAppConfiguration;
@property(readonly, copy, nonatomic) NSString *feldsparID;
@property(readonly, nonatomic) NSArray *segmentSetIDs;
@property(readonly, nonatomic) NSArray *treatmentIDs;
- (void)fetchAppWidgetConfigurationWithAdditionalFields:(NSDictionary *)arg1 completion:(void (^)(id <FCNewsAppConfiguration>, NSDictionary *, NSError *))arg2;
@end

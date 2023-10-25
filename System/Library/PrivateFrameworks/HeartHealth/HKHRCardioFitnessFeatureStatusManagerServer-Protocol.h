//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HeartHealth/NSObject-Protocol.h>

@protocol HKHRCardioFitnessFeatureStatusManagerServer <NSObject>
- (void)remote_stopObservingChanges;
- (void)remote_startObservingChangesWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_resetOnboardingWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_setNotificationsEnabled:(_Bool)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_notificationStatusWithCompletion:(void (^)(HKHRCardioFitnessNotificationStatus *, NSError *))arg1;
- (void)remote_onboardingStatusWithCompletion:(void (^)(HKHRCardioFitnessOnboardingStatus *, NSError *))arg1;
@end

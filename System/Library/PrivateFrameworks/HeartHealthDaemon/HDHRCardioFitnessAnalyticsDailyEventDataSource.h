//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile;

__attribute__((visibility("hidden")))
@interface HDHRCardioFitnessAnalyticsDailyEventDataSource : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

+ (id)localGregorianCalendar;	// IMP=0x0010000000030456
- (void).cxx_destruct;	// IMP=0x00000000000304d4
- (long long)numberOfDaysBetweenStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0000000000030326
- (long long)_determineDaysSinceLastSampleWithSampleType:(id)arg1 currentDate:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003011a
- (id)latestClassificationWithIsOnboarded:(_Bool)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000030007
- (_Bool)determineIsNotificationsEnabled;	// IMP=0x000000000002ffa8
- (long long)determineWeeksSinceOnboardingWithCurrentDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002fd8d
- (id)determineIsWristDetectionEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;	// IMP=0x000000000002fcbf
- (id)determineIsHeartRateEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1;	// IMP=0x000000000002fb81
- (id)determineIsBlockersEnabledWithIsImproveHealthAndActivityAllowed:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000002f960
- (id)determineNumberOfLowNotificationsInPastYearWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002f66b
- (id)determineDaysSinceLastVO2MaxSampleWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002f4b1
- (id)determineDaysSinceLastLowNotificationWithCurrentDate:(id)arg1 isImproveHealthAndActivityAllowed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000002f2f7
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000002f293

@end

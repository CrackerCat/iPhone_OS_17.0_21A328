//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleDailyAnalytics : NSObject
{
    HDProfile *_profile;	// 8 = 0x8
}

+ (id)_medicationCountForUnavailableSchedulesWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b223
+ (id)_medicationCountForSchedulesWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004afb0
- (void).cxx_destruct;	// IMP=0x000000000004b4f4
- (id)_makeMedicationCountPayloadForSchedulesWithProfile:(id)arg1;	// IMP=0x000000000004ac9e
- (id)makeIHAGatedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ac20
- (id)makeUnrestrictedEventPayloadWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ac18
@property(readonly, nonatomic) NSString *eventName;
@property(readonly, nonatomic) _Bool isEventSubmissionIHAGated;
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000004ab3c

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HKDayIndex)
+ (id)hk_componentsWithDayIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x00600000000aab10
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;	// IMP=0x00600000000f31cb
+ (id)hk_componentsWithDays:(long long)arg1;	// IMP=0x00600000000f319a
+ (id)hk_oneWeek;	// IMP=0x00600000000f3162
+ (id)hk_oneDay;	// IMP=0x00600000000f314b
+ (id)hk_componentsWithHour:(long long)arg1 minute:(long long)arg2;	// IMP=0x006000000026d1c8
- (id)hk_dayIndexDateDescription;	// IMP=0x00100000000aae7d
- (long long)hk_dayIndex;	// IMP=0x00100000000aad68
- (long long)hk_indexForDate:(id)arg1 anchorDate:(id)arg2;	// IMP=0x00100000000f3f90
- (id)hk_dateIntervalForDate:(id)arg1 anchorDate:(id)arg2 outIndex:(long long *)arg3;	// IMP=0x00100000000f3bbd
- (long long)hk_ageWithCurrentDate:(id)arg1;	// IMP=0x00100000000f3af5
- (id)hk_negativeComponents;	// IMP=0x00100000000f3adc
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;	// IMP=0x00100000000f3999
- (id)hk_populatedCalendarGregorianCalendarDefault;	// IMP=0x001000000000a799
- (long long)hk_maxComponentValue;	// IMP=0x00100000000f376f
- (id)_hk_dateComponentsMultipliedByCount:(long long)arg1;	// IMP=0x00100000000f34a9
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000f33c4
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;	// IMP=0x00100000000f328c
- (double)hk_approximateDuration;	// IMP=0x00100000000f3201
- (id)hk_dateOptionalDescription;	// IMP=0x001000000026d2f8
- (id)hk_minuteNumber;	// IMP=0x001000000026d288
- (id)hk_hourNumber;	// IMP=0x001000000026d218
@end

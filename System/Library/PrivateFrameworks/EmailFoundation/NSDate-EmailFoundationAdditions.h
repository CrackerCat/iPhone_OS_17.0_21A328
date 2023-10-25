//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class EFSQLBinding, NSString;

@interface NSDate (EmailFoundationAdditions)
+ (id)_ef_gregorianCalendarForTimeZone:(id)arg1;	// IMP=0x001000000001daa0
+ (id)_ef_morningDateComponents;	// IMP=0x001000000001da31
+ (id)_ef_nightDateComponents;	// IMP=0x001000000001d9c2
+ (id)ef_localCombinedDate:(id)arg1 time:(id)arg2 timeZone:(id)arg3;	// IMP=0x001000000001d7c7
+ (id)ef_thisWeekday:(long long)arg1 hour:(long long)arg2 minute:(long long)arg3 second:(long long)arg4;	// IMP=0x001000000001d661
+ (id)ef_dateHoursAgo:(long long)arg1;	// IMP=0x001000000001d491
+ (id)ef_midnightInNdays:(long long)arg1;	// IMP=0x001000000001d35e
+ (id)ef_midnightNdaysAgo:(long long)arg1;	// IMP=0x001000000001d342
+ (id)ef_nextWeekMorning;	// IMP=0x001000000001d1aa
+ (id)ef_tomorrowMorning;	// IMP=0x001000000001d012
+ (id)ef_tomorrowNight;	// IMP=0x001000000001ce7a
+ (id)ef_inOneHour;	// IMP=0x001000000001cd8e
+ (id)ef_tonight;	// IMP=0x001000000001cc21
+ (id)ef_morning;	// IMP=0x001000000001cab4
+ (id)ef_lastWeekMidnight;	// IMP=0x001000000001ca96
- (id)ef_dateWithTruncatedSeconds;	// IMP=0x001000000001d5ad
- (double)ef_timeIntervalSinceDate:(id)arg1;	// IMP=0x001000000001ca2f
- (_Bool)ef_isDateNextDayOrLater:(id)arg1;	// IMP=0x001000000001c8a8
- (_Bool)ef_isEarlierThanNow;	// IMP=0x001000000001c88a
- (_Bool)ef_isLaterThanOrEqualDate:(id)arg1;	// IMP=0x001000000001c870
- (_Bool)ef_isLaterThanDate:(id)arg1;	// IMP=0x001000000001c856
- (_Bool)ef_isEarlierThanOrEqualDate:(id)arg1;	// IMP=0x001000000001c839
- (_Bool)ef_isEarlierThanDate:(id)arg1;	// IMP=0x001000000001c81f
- (_Bool)ef_isMoreThanTimeIntervalAgo:(double)arg1;	// IMP=0x001000000001c7ef
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;	// IMP=0x0010000000042a31
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x00100000000429c7
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

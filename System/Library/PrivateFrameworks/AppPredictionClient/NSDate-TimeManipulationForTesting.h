//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (TimeManipulationForTesting)
+ (double)_atx_timeIntervalSinceReferenceDate;	// IMP=0x00600000001771ff
+ (id)_atx_dateWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x00600000001770db
+ (id)_atx_date;	// IMP=0x0060000000176fef
+ (id)_atx_now;	// IMP=0x0060000000176ede
+ (void)test_adjustCurrentDateWithTimeInterval:(double)arg1;	// IMP=0x0060000000176da6
+ (void)test_setCurrentDate:(id)arg1;	// IMP=0x0060000000176c6c
+ (void)test_endManipulationOfTime;	// IMP=0x0060000000176b47
+ (void)test_beginManipulationOfTime;	// IMP=0x00600000001768fc
+ (void)test_performBlockWithAbilityToManipulateTime:(CDUnknownBlockType)arg1;	// IMP=0x00600000001768a4
- (double)_atx_timeIntervalSinceNow;	// IMP=0x00100000001772d5
@end

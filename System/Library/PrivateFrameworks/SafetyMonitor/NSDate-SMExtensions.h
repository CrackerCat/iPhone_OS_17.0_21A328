//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (SMExtensions)
- (id)timeStringWithPreposition:(long long)arg1 capitalized:(_Bool)arg2;	// IMP=0x0070000000031bc0
- (id)dateString;	// IMP=0x0070000000031b46
- (id)absoluteTimeString:(long long)arg1 preposition:(long long)arg2 capitalized:(_Bool)arg3;	// IMP=0x007000000003190c
- (id)relativeTimeString;	// IMP=0x007000000003187e
- (id)roundedTime;	// IMP=0x007000000003183a
- (id)roundedFormattedTimeWithUnitStyle:(long long)arg1 roundedMinutesUnit:(long long)arg2 allowedUnits:(unsigned long long)arg3;	// IMP=0x0070000000031713
- (id)preciseFormattedTime;	// IMP=0x00700000000316f4
@end

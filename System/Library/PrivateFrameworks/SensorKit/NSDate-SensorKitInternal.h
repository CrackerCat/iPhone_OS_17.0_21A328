//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (SensorKitInternal)
+ (id)sr_dateWithTimeIntervalSinceReferenceDate:(double)arg1 roundedDownToNearest:(double)arg2;	// IMP=0x0020000000006baf
+ (id)dateWithSRAbsoluteTime:(double)arg1;	// IMP=0x0020000000027701
@property(readonly) double srAbsoluteTime;
- (id)initWithSRAbsoluteTime:(double)arg1;	// IMP=0x0010000000027729
@end

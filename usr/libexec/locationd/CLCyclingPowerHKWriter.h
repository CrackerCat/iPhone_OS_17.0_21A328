//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKHealthStore, NSDate;

@interface CLCyclingPowerHKWriter : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    HKHealthStore *_healthStore;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0020000000b43559
- (void)writeFTPToHK:(struct CLCyclingFTPResults)arg1;	// IMP=0x0010000000b43149
- (id)init;	// IMP=0x0010000000b42f42

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, UICollectionViewDiffableDataSource, _UIDatePickerCalendarDaySet, _UIDatePickerCalendarMonthSet;

__attribute__((visibility("hidden")))
@interface _UICalendarViewDataSourceController : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_dataSource;	// 16 = 0x10
    _UIDatePickerCalendarMonthSet *_loadedMonthSet;	// 24 = 0x18
    _UIDatePickerCalendarDaySet *_loadedDaySet;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000093b6d9
- (long long)prepareDataSourceWithScrollPositionIfNecessary:(id)arg1;	// IMP=0x000000000093b3e8
- (long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)arg1;	// IMP=0x000000000093b2f2
- (void)reloadDataSourceAroundMonth:(id)arg1;	// IMP=0x000000000093b2e0
- (void)_reloadDataSourceWithScrollPosition:(id)arg1;	// IMP=0x000000000093b06d
- (id)initWithCalendar:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000093af73
- (id)_loadedDays;	// IMP=0x000000000093b72d
- (id)_loadedMonths;	// IMP=0x000000000093b717

@end

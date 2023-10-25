//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKCalendarItem, EKStructuredLocation, EKUIConferenceRoom, EKUILocationSearchModel, NSError;

@protocol EKUILocationSearchModelDelegate
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 updatedSearchTypes:(unsigned long long)arg2;
- (_Bool)shouldIncludeConferenceRoom:(EKUIConferenceRoom *)arg1;
- (void)locationSearchModel:(EKUILocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (EKCalendarItem *)calendarItemForSearchModel:(EKUILocationSearchModel *)arg1;
@end

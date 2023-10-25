//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKCalendarChooserDelegate-Protocol.h>

@class EKAccountRefresher, EKCalendarChooser, NSSet;

@protocol EKCalendarChooserDelegatePrivateInProcessOnly <EKCalendarChooserDelegate>
@property(readonly, nonatomic) NSSet *unselectedCalendarsForFocusMode;
@property(nonatomic) unsigned long long focusFilterMode;
- (void)calendarChooserSelectedIdentityDidChange:(EKCalendarChooser *)arg1;
- (void)calendarChooserUpdatedToolbarItems;
- (EKAccountRefresher *)refreshCalendarsButtonPressed;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOAppleMediaServicesResult, INRestaurantReservationUserBooking, NSString, NSUserActivity, RestaurantReservationAnalyticsBookingSession, RestaurantReservationRequester, _MXExtension;
@protocol RestaurantReservationPresentation;

@interface RestaurantReservationRouter : NSObject
{
    id <RestaurantReservationPresentation> _presenter;	// 8 = 0x8
    GEOAppleMediaServicesResult *_appStoreApp;	// 16 = 0x10
    _Bool _hasActiveRestaurantUserBooking;	// 24 = 0x18
    _Bool _activeEventDiscoveryCompleted;	// 25 = 0x19
    RestaurantReservationRequester *_restaurantReservationRequester;	// 32 = 0x20
    _MXExtension *_extension;	// 40 = 0x28
    RestaurantReservationAnalyticsBookingSession *_activeBookingSession;	// 48 = 0x30
    INRestaurantReservationUserBooking *_activeRestaurantUserBooking;	// 56 = 0x38
    NSUserActivity *_activeRestaurantUserBookingActivity;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000cda1ca
@property(retain, nonatomic) NSUserActivity *activeRestaurantUserBookingActivity; // @synthesize activeRestaurantUserBookingActivity=_activeRestaurantUserBookingActivity;
@property(retain, nonatomic) INRestaurantReservationUserBooking *activeRestaurantUserBooking; // @synthesize activeRestaurantUserBooking=_activeRestaurantUserBooking;
@property(nonatomic) _Bool activeEventDiscoveryCompleted; // @synthesize activeEventDiscoveryCompleted=_activeEventDiscoveryCompleted;
@property(nonatomic) _Bool hasActiveRestaurantUserBooking; // @synthesize hasActiveRestaurantUserBooking=_hasActiveRestaurantUserBooking;
@property(retain, nonatomic) RestaurantReservationAnalyticsBookingSession *activeBookingSession; // @synthesize activeBookingSession=_activeBookingSession;
@property(readonly, nonatomic) _MXExtension *extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) RestaurantReservationRequester *restaurantReservationRequester; // @synthesize restaurantReservationRequester=_restaurantReservationRequester;
- (void)updateSessionAsInstallCompletedIfNeeded:(id)arg1;	// IMP=0x0010000000cda13b
- (id)reservationExtensionFlowViewController;	// IMP=0x0010000000cda056
- (id)alertControllerForExtensionPermission;	// IMP=0x0010000000cd9b5d
- (void)requester:(id)arg1 userCurrentBookingRequestDidFailWithError:(id)arg2;	// IMP=0x0010000000cd9a49
- (void)requesterUserCurrentBookingRequestDidComplete:(id)arg1;	// IMP=0x0010000000cd9844
- (void)discoverActiveReservationEvents;	// IMP=0x0010000000cd97ce
- (void)discoverGuest;	// IMP=0x0010000000cd9791
- (void)discoverAvailableBookings;	// IMP=0x0010000000cd956f
- (void)requesterReservationDefaultsRequestDidComplete:(id)arg1;	// IMP=0x0010000000cd94af
- (void)discoverDefaults;	// IMP=0x0010000000cd9472
- (void)resolve;	// IMP=0x0010000000cd93a4
- (id)initWithExtension:(id)arg1 appStoreApp:(id)arg2 mapItem:(id)arg3 presenter:(id)arg4;	// IMP=0x0010000000cd9282

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

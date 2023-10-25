//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEORPProblemStatusResponse.h>

@interface GEORPProblemStatusResponse (RAPNotification)
+ (id)problemStatusResponseWithNotificationID:(id)arg1;	// IMP=0x0010000000b5eff8
- (void)_displayDedicatedFixedProblemViewController:(id)arg1;	// IMP=0x001000000045686e
- (void)displayAdditionalUIOnViewController:(id)arg1;	// IMP=0x001000000045680e
- (_Bool)canDisplayAdditionalUI;	// IMP=0x00100000004567f4
- (_Bool)getSingleServerSideAlertTitle:(out id *)arg1 message:(out id *)arg2 messageIsSameAsNotificationTitle:(out _Bool *)arg3;	// IMP=0x001000000045662c
- (void)getDefaultAlertTitle:(out id *)arg1 alertMessage:(out id *)arg2;	// IMP=0x00100000004558d0
- (_Bool)writeToDisk:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000b5edf0
@end

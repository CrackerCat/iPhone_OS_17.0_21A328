//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UserProfileAnalyticsManager : NSObject
{
}

+ (void)captureSettingsAppTapAction;	// IMP=0x00400000009ff31a
+ (void)captureEnableTransitPreferenceForMode:(unsigned long long)arg1;	// IMP=0x00100000009ff2e7
+ (void)captureDisableTransitPreferenceForMode:(unsigned long long)arg1;	// IMP=0x00100000009ff2b4
+ (void)captureTravelPreferencesUserAction:(int)arg1;	// IMP=0x00100000009ff293
+ (void)captureTravelPreferencesUserAction:(int)arg1 value:(id)arg2;	// IMP=0x00100000009ff272
+ (void)capturePreferredDirectionsForTransportType:(long long)arg1;	// IMP=0x00100000009ff235
+ (void)captureRatingHistoryItemTapAction;	// IMP=0x00100000009ff20f
+ (void)captureExitRatingsHistoryTapAction;	// IMP=0x00100000009ff1e9
+ (void)captureExitAccountTapAction;	// IMP=0x00100000009ff1c3
+ (void)captureICloudSignInTapAction;	// IMP=0x00100000009ff19d
+ (void)captureTapActionWithUserProfileLinkType:(long long)arg1 availableActions:(id)arg2 signedIntoICloud:(_Bool)arg3;	// IMP=0x00100000009fef06
+ (void)captureAccountDidAppearWithAvailableActions:(id)arg1 signedIntoICloud:(_Bool)arg2;	// IMP=0x00100000009fed1f
+ (void)captureEnterAccountTapAction;	// IMP=0x00100000009fecc4

@end

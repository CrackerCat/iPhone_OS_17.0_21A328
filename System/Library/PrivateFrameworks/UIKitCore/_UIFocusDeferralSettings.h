//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PrototypeTools/PTSettings.h>

__attribute__((visibility("hidden")))
@interface _UIFocusDeferralSettings : PTSettings
{
    double _userEngagementTimeoutInSeconds;	// 8 = 0x8
}

+ (id)settingsControllerModule;	// IMP=0x0060000001344712
@property(nonatomic) double userEngagementTimeoutInSeconds; // @synthesize userEngagementTimeoutInSeconds=_userEngagementTimeoutInSeconds;
- (void)setDefaultValues;	// IMP=0x00000000013446c9

@end

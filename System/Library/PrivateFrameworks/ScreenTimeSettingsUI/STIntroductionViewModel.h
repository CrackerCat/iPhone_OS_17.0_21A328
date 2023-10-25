//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, STAllowance, STDeviceBedtime;

__attribute__((visibility("hidden")))
@interface STIntroductionViewModel : NSObject
{
    _Bool _deviceForChild;	// 8 = 0x8
    NSNumber *_appAndWebsiteActivityEnabled;	// 16 = 0x10
    STDeviceBedtime *_bedtime;	// 24 = 0x18
    STAllowance *_allowance;	// 32 = 0x20
    NSNumber *_communicationSafetyEnabled;	// 40 = 0x28
    NSNumber *_screenDistanceEnabled;	// 48 = 0x30
    NSString *_parentalControlsPasscode;	// 56 = 0x38
    NSString *_recoveryAltDSID;	// 64 = 0x40
    NSDictionary *_restrictions;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000075921
@property(copy) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
@property(copy) NSString *recoveryAltDSID; // @synthesize recoveryAltDSID=_recoveryAltDSID;
@property(retain) NSString *parentalControlsPasscode; // @synthesize parentalControlsPasscode=_parentalControlsPasscode;
@property(retain) NSNumber *screenDistanceEnabled; // @synthesize screenDistanceEnabled=_screenDistanceEnabled;
@property(retain) NSNumber *communicationSafetyEnabled; // @synthesize communicationSafetyEnabled=_communicationSafetyEnabled;
@property(retain) STAllowance *allowance; // @synthesize allowance=_allowance;
@property(retain) STDeviceBedtime *bedtime; // @synthesize bedtime=_bedtime;
@property(copy) NSNumber *appAndWebsiteActivityEnabled; // @synthesize appAndWebsiteActivityEnabled=_appAndWebsiteActivityEnabled;
@property _Bool deviceForChild; // @synthesize deviceForChild=_deviceForChild;

@end

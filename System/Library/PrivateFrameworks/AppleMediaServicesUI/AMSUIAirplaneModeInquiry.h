//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RadiosPreferences;
@protocol AMSUIAirplaneModeInquiryDelegate;

__attribute__((visibility("hidden")))
@interface AMSUIAirplaneModeInquiry : NSObject
{
    id <AMSUIAirplaneModeInquiryDelegate> _delegate;	// 8 = 0x8
    RadiosPreferences *_radiosPreferences;	// 16 = 0x10
}

+ (id)settingsURL;	// IMP=0x001000000000a844
- (void).cxx_destruct;	// IMP=0x000000000000a91e
@property(readonly, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(nonatomic) __weak id <AMSUIAirplaneModeInquiryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)airplaneModeChanged;	// IMP=0x000000000000a8a1
@property(readonly, nonatomic) _Bool isEnabled;
- (id)init;	// IMP=0x000000000000a7da

@end

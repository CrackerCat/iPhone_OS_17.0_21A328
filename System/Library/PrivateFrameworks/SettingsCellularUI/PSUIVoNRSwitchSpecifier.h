//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSSpecifier.h>

@class CTXPCServiceSubscriptionContext, NSString, PSConfirmationSpecifier, PSListController, PSUICoreTelephonyCallCache, PSUICoreTelephonyCapabilitiesCache, PSUICoreTelephonyCarrierBundleCache;

__attribute__((visibility("hidden")))
@interface PSUIVoNRSwitchSpecifier : PSSpecifier
{
    CTXPCServiceSubscriptionContext *_subscriptionContext;	// 184 = 0xb8
    PSListController *_listController;	// 192 = 0xc0
    PSConfirmationSpecifier *_phoneCallWillEndWarning;	// 200 = 0xc8
    PSUICoreTelephonyCallCache *_callCache;	// 208 = 0xd0
    PSUICoreTelephonyCapabilitiesCache *_capabilitiesCache;	// 216 = 0xd8
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;	// 224 = 0xe0
    PSSpecifier *_parentSpecifier;	// 232 = 0xe8
    NSString *_instance;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x0000000000023fbd
- (id)getLogger;	// IMP=0x0000000000023f8f
- (_Bool)shouldAddVoNRUnoptimizedWarning;	// IMP=0x0000000000023f64
- (id)groupFooterText;	// IMP=0x0000000000023e37
- (void)reloadSelfInListController;	// IMP=0x0000000000023dae
- (void)setVoNROff;	// IMP=0x0000000000023d7e
- (void)setVoNREnabled:(_Bool)arg1;	// IMP=0x0000000000023c94
- (void)setUpPhoneCallWillEndWarningSpecifier;	// IMP=0x00000000000238dd
- (void)showPhoneCallWillEndWarning;	// IMP=0x000000000002381f
- (_Bool)shouldShowCallWillEndWarning;	// IMP=0x0000000000023802
- (_Bool)showDisableVoNRWarningsIfNeeded;	// IMP=0x00000000000237cc
- (void)setVoNREnabled:(id)arg1 specifier:(id)arg2;	// IMP=0x00000000000236d9
- (id)getVoNREnabled;	// IMP=0x00000000000235dc
- (_Bool)shouldEnableVoNRSwitchCell;	// IMP=0x0000000000023596
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2;	// IMP=0x00000000000234a3
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 callCache:(id)arg3 capabilitiesCache:(id)arg4 carrierBundleCache:(id)arg5;	// IMP=0x00000000000231d8

@end

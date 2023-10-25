//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSAppLink.h"

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink : LSAppLink
{
    struct LSBinding _binding;	// 8 = 0x8
    _SWCServiceDetails *_serviceDetails;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000519ba
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0060000000051846
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000514a6
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x00600000000511fd
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x0060000000050702
+ (_Bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id *)arg2;	// IMP=0x00600000000504ee
+ (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00600000000501b2
+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x006000000005008c
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;	// IMP=0x006000000004ff44
+ (void)initialize;	// IMP=0x006000000004fefd
- (id).cxx_construct;	// IMP=0x0000000000051be1
- (void).cxx_destruct;	// IMP=0x0000000000051b99
@property(retain, nonatomic) _SWCServiceDetails *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(readonly) struct LSBinding binding; // @synthesize binding=_binding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000051a45
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000519c2
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x00000000000516cd
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000516b1
- (id)browserSettings;	// IMP=0x0000000000051625
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000051183
- (_Bool)isEnabled;	// IMP=0x0000000000051124
- (_Bool)isAlwaysEnabled;	// IMP=0x0000000000051107
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000503ef
- (id)_SWCSettingsReturningError:(id *)arg1;	// IMP=0x00000000000500fd
- (id)_SWCSpecifierForSettings;	// IMP=0x000000000004ffdc

@end

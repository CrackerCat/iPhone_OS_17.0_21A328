//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSPrivacyInfoCenter : NSObject
{
    int _registrationToken;	// 8 = 0x8
    long long _accountAccessStatus;	// 16 = 0x10
}

+ (id)sharedPrivacyInfoCenter;	// IMP=0x001000000006cbdf
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) long long accountAccessStatus; // @synthesize accountAccessStatus=_accountAccessStatus;
- (void)profileConnectionSettingsChanged:(id)arg1;	// IMP=0x000000000006d1c9
- (void)profileConnectionProfileChanged:(id)arg1;	// IMP=0x000000000006d1c3
- (id)updateAccountAccessStatusWithError:(id)arg1;	// IMP=0x000000000006d0c5
- (void)updateAccountAccessStatusWithResponse:(id)arg1;	// IMP=0x000000000006d06f
- (void)_invalidateAccountAccessStatus;	// IMP=0x000000000006d05b
- (void)dealloc;	// IMP=0x000000000006cf98
- (id)init;	// IMP=0x000000000006cc34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

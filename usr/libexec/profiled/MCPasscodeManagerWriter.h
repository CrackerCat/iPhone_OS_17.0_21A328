//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPasscodeManager.h>

@interface MCPasscodeManagerWriter : MCPasscodeManager
{
}

+ (void)setCurrentEphemeralUserPasscodeTypeFromUnlockScreenType:(int)arg1 simplePasscodeType:(int)arg2;	// IMP=0x004000000007d8e9
+ (_Bool)didPasscodePolicyChangeWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2;	// IMP=0x001000000007d6c9
+ (id)sharedManager;	// IMP=0x001000000007d5a7
- (void)migratePasscodeMetadata;	// IMP=0x004000000007dc18
- (id)processPasscodeChangeWithOldPascodeGeneration:(id)arg1 oldPublicDict:(id)arg2 newPasscodeGeneration:(id)arg3 newPublicDict:(id)arg4 newPasscodeWasSet:(_Bool)arg5;	// IMP=0x001000000007dc10
- (_Bool)clearRecoveryPasscodeOpaqueDataWithOutError:(id *)arg1;	// IMP=0x001000000007dab1
- (id)clearRecoveryPasscode;	// IMP=0x001000000007da46
- (void)clearPasscodeHistory;	// IMP=0x001000000007da40
- (void)updatePasscodeHistoryWithOldPasscode:(id)arg1 oldPasscodeData:(id)arg2 newPrivateDictionary:(id)arg3;	// IMP=0x001000000007da3a
- (void)resetPasscodeMetadata;	// IMP=0x001000000007da26
- (_Bool)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000007d6c1
- (_Bool)changePasscodeWithRecoveryPasscode:(id)arg1 to:(id)arg2 skipRecovery:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x001000000007d6b9
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 skipRecovery:(_Bool)arg3 outError:(id *)arg4;	// IMP=0x001000000007d6b1
- (_Bool)changePasscodeFrom:(id)arg1 to:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000007d699
- (_Bool)isPasscodeRecoveryRestricted;	// IMP=0x001000000007d613
- (void)_sendPasscodeChangedNotification;	// IMP=0x001000000007d5f3
- (void)_setPrivatePasscodeDict:(id)arg1;	// IMP=0x001000000007d5ed
- (id)_setPublicPasscodeDict:(id)arg1;	// IMP=0x001000000007d5e5

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSPublicKeyStorage, IDSRateLimiter, NSString;
@protocol IDSMPFullDeviceIdentityContainerEncrypter;

@interface IDSDeviceIDEncrypter : NSObject
{
    _Bool _forceLegacy;	// 8 = 0x8
    IDSPublicKeyStorage *_publicKeyStorage;	// 16 = 0x10
    IDSDAccountController *_accountController;	// 24 = 0x18
    IDSRateLimiter *_rateLimiter;	// 32 = 0x20
    id <IDSMPFullDeviceIdentityContainerEncrypter> _fullDeviceIdentityContainerEncrypter;	// 40 = 0x28
    NSString *_deviceID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000006ef38
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property(readonly, nonatomic) id <IDSMPFullDeviceIdentityContainerEncrypter> fullDeviceIdentityContainerEncrypter; // @synthesize fullDeviceIdentityContainerEncrypter=_fullDeviceIdentityContainerEncrypter;
@property(readonly, nonatomic) _Bool forceLegacy; // @synthesize forceLegacy=_forceLegacy;
@property(readonly, nonatomic) IDSRateLimiter *rateLimiter; // @synthesize rateLimiter=_rateLimiter;
@property(readonly, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(readonly, nonatomic) IDSPublicKeyStorage *publicKeyStorage; // @synthesize publicKeyStorage=_publicKeyStorage;
- (void)decryptData:(id)arg1 guid:(id)arg2 usingIdentifier:(id)arg3 onQueue:(id)arg4 isRetry:(_Bool)arg5 replayKey:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x001000000006eeb8
- (void)decryptData:(id)arg1 usingIdentifier:(id)arg2 onQueue:(id)arg3 isRetry:(_Bool)arg4 replayKey:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x001000000006e188
- (id)decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(_Bool)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006debd
- (void)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 onQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006d546
- (id)encryptData:(id)arg1 forceSizeOptimizations:(_Bool)arg2 resetState:(_Bool)arg3 withEncryptedAttributes:(id)arg4 usedIdentifier:(id *)arg5 onQueue:(id)arg6 metadata:(id *)arg7 error:(id *)arg8;	// IMP=0x001000000006d518
- (id)encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 usedIdentifier:(id *)arg3 onQueue:(id)arg4 error:(id *)arg5;	// IMP=0x001000000006d121
- (id)_decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(_Bool)arg3;	// IMP=0x001000000006d010
- (id)_decryptData:(id)arg1 usingIdentifier:(id)arg2 isRetry:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000006cf5a
- (id)_validateDecryptionParametersWithError:(id *)arg1;	// IMP=0x001000000006cbd3
- (id)_encryptData:(id)arg1 withEncryptedAttributes:(id)arg2 usedIdentifier:(id *)arg3 error:(id *)arg4;	// IMP=0x001000000006c61c
- (id)initWithPublicKeyStorage:(id)arg1 accountController:(id)arg2 fullDeviceIdentityContainerEncrypter:(id)arg3 rateLimiter:(id)arg4 forceLegacy:(_Bool)arg5;	// IMP=0x001000000006c52c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

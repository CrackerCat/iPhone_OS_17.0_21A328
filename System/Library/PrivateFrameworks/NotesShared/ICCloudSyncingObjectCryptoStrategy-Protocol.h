//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/NSObject-Protocol.h>

@class CKRecord, ICCloudSyncingObject, ICEncryptionKey, NSData, NSString, NSURL;

@protocol ICCloudSyncingObjectCryptoStrategy <NSObject>
@property(readonly, copy, nonatomic) NSString *passphraseHint;
@property(readonly, nonatomic) _Bool hasPassphraseSet;
@property(readonly, nonatomic) _Bool isAuthenticated;
@property(readonly, nonatomic) _Bool canAuthenticate;
@property(readonly, nonatomic) long long intrinsicNotesVersion;
- (void)invalidateStrategy;
- (_Bool)isPassphraseCorrect:(NSString *)arg1;
- (_Bool)authenticateWithPassphrase:(NSString *)arg1;
- (ICEncryptionKey *)mainKeyForPassphrase:(NSString *)arg1;
- (_Bool)rewrapWithMainKey:(ICEncryptionKey *)arg1;
- (_Bool)rewrapDataAtURL:(NSURL *)arg1 withMainKey:(ICEncryptionKey *)arg2;
- (NSData *)encryptedData:(NSData *)arg1 rewrappedWithMainKey:(ICEncryptionKey *)arg2;
- (_Bool)mainKeyDecryptsPrimaryData:(ICEncryptionKey *)arg1;
- (_Bool)recordHasChangedPassphrase:(CKRecord *)arg1;
- (void)mergeEncryptedDataFromRecord:(CKRecord *)arg1;
- (_Bool)encryptSidecarFileFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (NSData *)decryptSidecarData:(NSData *)arg1;
- (NSData *)encryptSidecarData:(NSData *)arg1;
- (_Bool)loadDecryptedValuesIfNecessary;
- (_Bool)encryptFileFromURL:(NSURL *)arg1 toURL:(NSURL *)arg2;
- (_Bool)saveEncryptedJSON;
- (void)initializeCryptoPropertiesFromObject:(ICCloudSyncingObject *)arg1;
@end

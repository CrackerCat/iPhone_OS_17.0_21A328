//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSSet, NSString, PKPassLibrary;
@protocol HMDWalletPassLibraryDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDWalletPassLibrary : HMFObject
{
    id <HMDWalletPassLibraryDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    PKPassLibrary *_passLibrary;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000928453
- (void).cxx_destruct;	// IMP=0x00000000009278b9
@property(readonly) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDWalletPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, getter=isWalletVisible) _Bool walletVisible;
- (void)deleteKeyMaterialForSubCredentialId:(id)arg1;	// IMP=0x00000000009277de
- (void)handlePassLibraryDidChangeNotification:(id)arg1;	// IMP=0x000000000092726f
- (void)fetchTransactionKeyForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000927162
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000927149
- (id)createTemporaryPassDirectoryURL;	// IMP=0x0000000000927080
- (void)generateHomeKeyNFCInfoWithReaderPublicKey:(id)arg1 readerIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000926f73
- (void)fetchExpressEnablementConflictingPassDescriptionForPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000926a89
@property(readonly, copy) NSString *secureElementIdentifier;
- (id)passUniqueIDOfWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x000000000092678e
- (void)fetchIsExpressEnabledForPassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009263b0
- (_Bool)isExpressModeEnabledForPassUniqueIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000000009260ac
- (void)enableExpressWithAuthData:(id)arg1 passTypeIdentifier:(id)arg2 serialNumber:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000925c89
- (void)fetchHomeKeySupportedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000925bb7
- (_Bool)removePassWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x00000000009259fd
- (id)urlForWalletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x000000000092593d
- (id)walletKeyWithTypeIdentifier:(id)arg1 serialNumber:(id)arg2;	// IMP=0x000000000092579e
- (void)updatePassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009256ce
- (void)addPassAtURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000009255a4
- (void)start;	// IMP=0x000000000092550f
@property(readonly, copy) NSSet *walletKeys;
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x00000000009251f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

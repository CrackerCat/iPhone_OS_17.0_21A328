//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSLock, NSObject, NSPersistentStore, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportOperation : NSOperation
{
    NSString *_localPeerID;	// 8 = 0x8
    NSString *_storeName;	// 16 = 0x10
    NSPersistentStore *_store;	// 24 = 0x18
    PFUbiquityLocation *_ubiquityRootLocation;	// 32 = 0x20
    NSLock *_delegateLock;	// 40 = 0x28
    _Bool _lockedDelegateLock;	// 48 = 0x30
    NSObject *_delegate;	// 56 = 0x38
}

@property NSObject *delegate;
- (id)retainedDelegate;	// IMP=0x0000000000324b59
- (void)cancel;	// IMP=0x0000000000324ac4
- (void)storeWillBeRemoved:(id)arg1;	// IMP=0x0000000000324a81
- (id)description;	// IMP=0x00000000003249f5
- (void)dealloc;	// IMP=0x0000000000324919
- (id)initWithStoreName:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;	// IMP=0x00000000003248a1
- (id)initWithPersistentStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3;	// IMP=0x00000000003247b4
- (id)init;	// IMP=0x0000000000324728

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADRemoteTimerManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_storagesByDeviceIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000009d796
- (void)_sendStereoPartnerAction:(id)arg1 timerID:(id)arg2 changes:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009d66a
- (void)_invalidateStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000009d5ea
- (id)_storageForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000009d556
- (void)clockItemStorageDidUpdate:(id)arg1 insertedItemIDs:(id)arg2 updatedItemIDs:(id)arg3 deletedItemIDs:(id)arg4;	// IMP=0x001000000009d512
- (void)removeTimerWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d45b
- (void)updateTimerWithID:(id)arg1 changes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009d376
- (void)accessStorageForDeviceWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d2b0
- (void)finalizeStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000009d223
- (void)prepareStorageForDeviceWithIdentifier:(id)arg1;	// IMP=0x001000000009d196
- (void)getSnapshotsByDeviceIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000009d0e4
- (void)getSnapshotForDeviceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009cffe
- (id)init;	// IMP=0x001000000009cf5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

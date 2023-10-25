//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMDAccessorySettingsBackingStoreTransactionReceiverDelegate;

__attribute__((visibility("hidden")))
@interface HMDAccessorySettingsBackingStoreTransactionReceiver : HMFObject
{
    id <HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003af02d
@property __weak id <HMDAccessorySettingsBackingStoreTransactionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000003aece6
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000003ae9cc
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000003ae965

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

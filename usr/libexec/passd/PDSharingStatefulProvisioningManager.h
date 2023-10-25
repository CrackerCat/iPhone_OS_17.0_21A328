//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PDDatabaseManager;
@protocol OS_dispatch_queue, PDSharingStatefulProvisioningManagerDelegate;

@interface PDSharingStatefulProvisioningManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    id <PDSharingStatefulProvisioningManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000000b43b
- (_Bool)_isPassProvisioningComplete:(id)arg1;	// IMP=0x001000000000b3e9
- (void)_recalculateOperations;	// IMP=0x001000000000aec6
- (void)_enumerateOperations:(CDUnknownBlockType)arg1;	// IMP=0x001000000000addb
- (void);	// IMP=0x001000000000ab57
- (void)channelEndpointWasTerminatedRemotely:(id)arg1;	// IMP=0x001000000000a702
- (void)userDidEnterActivationCodeForShare:(id)arg1 activationCode:(id)arg2;	// IMP=0x001000000000a451
- (void)userDidTerminatePendingShareActivationForShare:(id)arg1;	// IMP=0x001000000000a081
- (void)_operationDidTimeout:(id)arg1;	// IMP=0x0010000000009e94
- (void)passAddedOrUpdated:(id)arg1;	// IMP=0x00100000000098d4
- (void)didReceiverActivationCodeFailureForShare:(id)arg1 attemptsRemaining:(unsigned long long)arg2 transportIdentifier:(id)arg3;	// IMP=0x0010000000009319
- (id)pendingShares;	// IMP=0x00100000000092a1
- (id)operations;	// IMP=0x00100000000091a7
- (id)initWithQueue:(id)arg1 replyQueue:(id)arg2 databaseManager:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000000090a1
- (id)init;	// IMP=0x0010000000009093

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHomeManager, HMFMessageDispatcher, IDSInvitationManager, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDIDSInvitationManager : NSObject
{
    IDSInvitationManager *_idsInvitationManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    HMFMessageDispatcher *_messageDispatcher;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000584fff
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) IDSInvitationManager *idsInvitationManager; // @synthesize idsInvitationManager=_idsInvitationManager;
- (void)handleForwardedAcceptance:(id)arg1;	// IMP=0x00000000005849e1
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;	// IMP=0x00000000005846e8
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;	// IMP=0x0000000000583b4f
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;	// IMP=0x00000000005839e1
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;	// IMP=0x00000000005836a7
- (void)cancelInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000058322d
- (void)acceptInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 dictionary:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000582d48
- (void)declineInvitationWithIDSIdentifier:(id)arg1 homeInvitationID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000005828b5
- (void)sendInvitationToDestination:(id)arg1 expirationDate:(id)arg2 dictionary:(id)arg3 homeInvitationID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x0000000000582600
- (id)_sendOptions;	// IMP=0x000000000058235e
- (id)_receivedInvitationWithUniqueID:(id)arg1;	// IMP=0x00000000005821d1
- (id)_sentInvitationWithUniqueID:(id)arg1;	// IMP=0x0000000000582044
- (id)initWithHomeManager:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;	// IMP=0x00000000005819ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

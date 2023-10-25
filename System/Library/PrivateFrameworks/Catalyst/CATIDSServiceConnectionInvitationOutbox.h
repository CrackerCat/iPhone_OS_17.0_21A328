//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol CATAssertionProviding, CATIDSServiceConnectionInvitationOutboxDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATIDSServiceConnectionInvitationOutbox : NSObject
{
    id <CATAssertionProviding> mAssertionProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *mWorkQueue;	// 16 = 0x10
    NSMutableDictionary *mInFlightInvitationRequestsByInvitationID;	// 24 = 0x18
    NSMutableArray *mInvitationRequestQueue;	// 32 = 0x20
    _Bool mIsActive;	// 40 = 0x28
    id <CATIDSServiceConnectionInvitationOutboxDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000039f7a
@property(nonatomic) __weak id <CATIDSServiceConnectionInvitationOutboxDelegate> delegate; // @synthesize delegate=_delegate;
- (void)cancelAllPowerAssertions;	// IMP=0x0000000000039e94
- (void)serviceInvitationQueue;	// IMP=0x0000000000039d07
- (void)cancelAllInvitations;	// IMP=0x0000000000039cb6
- (void)cancelInvitationWithIdentifier:(id)arg1;	// IMP=0x0000000000039b50
- (void)receiveRejectForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 error:(id)arg4;	// IMP=0x0000000000039963
- (void)receiveAcceptForInvitation:(id)arg1 connectionIdentifier:(id)arg2 senderAddress:(id)arg3 messagingVersion:(unsigned long long)arg4;	// IMP=0x00000000000396f1
- (void)suspend;	// IMP=0x00000000000396c5
- (void)resume;	// IMP=0x0000000000039699
- (void)beginInvitationWithIdentifier:(id)arg1 appleID:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000039599
- (id)initWithAssertionProvider:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000000394cb
- (void)dealloc;	// IMP=0x000000000003948d

@end

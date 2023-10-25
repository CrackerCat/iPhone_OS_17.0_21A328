//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@class NSString;
@protocol CKSMSComposeRemoteViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKSMSComposeRemoteViewController : _UIRemoteViewController
{
    id <CKSMSComposeRemoteViewControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)serviceViewControllerInterface;	// IMP=0x00100000004af19c
+ (id)exportedInterface;	// IMP=0x00100000004af17c
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004aee6e
- (void).cxx_destruct;	// IMP=0x00000000004af1e2
@property(nonatomic) __weak id <CKSMSComposeRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000004af174
- (void)smsComposeControllerEntryViewContentInserted;	// IMP=0x00000000004af137
- (void)smsComposeControllerCancelled;	// IMP=0x00000000004af0fa
- (void)smsComposeControllerSendStartedWithText:(id)arg1 messageGUID:(id)arg2;	// IMP=0x00000000004af06f
- (void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004aefd2
- (void)smsComposeControllerAppeared;	// IMP=0x00000000004aef95
- (void)smsComposeControllerDataInserted;	// IMP=0x00000000004aef58
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000004aeecd
- (void)dealloc;	// IMP=0x00000000004aee2e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

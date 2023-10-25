//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XPCNotificationClient;

@interface CallerRequestPresenter : NSObject
{
    id <XPCNotificationClient> _notificationClient;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001a17bc
- (void)presentEngagementRequest:(id)arg1 withClientInfo:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001a1588
- (void)presentDialogRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1305
- (void)presentAuthenticateRequest:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1082

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

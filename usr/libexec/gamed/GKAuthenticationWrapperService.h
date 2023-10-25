//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKService, NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x00200000000bbaed
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x00100000000bb9d4
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x00100000000bb8f8
- (void).cxx_destruct;	// IMP=0x00200000000c20c2
- (void)forwardInvocation:(id)arg1;	// IMP=0x00100000000c1db4
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00100000000c1c70
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c1950
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c15bd
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000c0d81
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000c0591
- (oneway void)notifyWidgetPlayerAuthenticationUpdated;	// IMP=0x00100000000c0406
- (oneway void)getLastContactsIntegrationConsentVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c025e
- (oneway void)setLastContactsIntegrationConsentVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000c00b6
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bff0e
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000bfd66
- (oneway void)getLastFriendSuggestionsVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bfbbe
- (oneway void)setLastFriendSuggestionsVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000bfa16
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf86e
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00100000000bf6c6
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf51e
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000bf389
- (oneway void)getLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bf1e1
- (oneway void)setLastWelcomeWhatsNewCopyVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x00100000000bf04c
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000beea2
- (oneway void)authenticationCancelled;	// IMP=0x00100000000bed41
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bebb3
- (oneway void)getDevicePushTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bea25
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000be897
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000be673
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000be49d
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 altDSID:(id)arg3 usingFastPath:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000be29d
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 usingFastPath:(_Bool)arg3 displayAuthUI:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000be0a2
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000be082
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 displayAuthUI:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00100000000bd1a1
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000bd17a
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bce45
- (oneway void)signOutPlayerWithOptOut:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bc835
- (oneway void)authenticationWasCancelled;	// IMP=0x00100000000bc6d4
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bc26d
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bbe06
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000bbc06
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000bb769
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x00100000000bb591
- (id)initWithClient:(id)arg1;	// IMP=0x00100000000bb46a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

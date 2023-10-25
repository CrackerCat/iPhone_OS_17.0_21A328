//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface MediaLibraryAccessRevocationController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    MISSING_TYPE *_identifiersOfApplicationsWithGrantedAccessToMediaLibraryIncludingTCCAcceptanceDates;	// 16 = 0x10
    int _tccAccessChangedNotificationToken;	// 24 = 0x18
    _Bool _isObservingTCCAccessChangedNotification;	// 28 = 0x1c
    NSXPCListener *_listener;	// 32 = 0x20
    NSMutableDictionary *_replyBlocksForPID;	// 40 = 0x28
}

+ (id)_identifiersOfApplicationsWithGrantedAccessToMediaLibrary;	// IMP=0x00200000000d215b
+ (id)sharedController;	// IMP=0x00100000000d212b
- (void).cxx_destruct;	// IMP=0x00200000000d0e9d
- (id)_storeRequestContextWithIdentity:(id)arg1 clientInfo:(id)arg2;	// IMP=0x00100000000d0dcd
- (void)_stopObservingRevocations;	// IMP=0x00100000000d0d83
- (void)_startObservingRevocations;	// IMP=0x00100000000d0c83
- (void)_registerFailureToRevokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d0bad
- (void)_registerFailureToRevokeMusicUserTokensForApplicationIdentifier:(id)arg1 error:(id)arg2;	// IMP=0x00100000000d0ad7
- (id)_storeRequestContextWithIdentity:(id)arg1 applicationIdentifier:(id)arg2;	// IMP=0x00100000000d0a07
- (void)_revokeMusicUserTokensForApplicationsWithIdentifiers:(id)arg1;	// IMP=0x00100000000d07c9
- (void)_revokeMusicUserTokensForApplicationWithIdentifier:(id)arg1 andUserIdentity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d05d3
- (void)_displayNotificationForBuilder:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d04a7
- (void)_checkForRecentRevocations;	// IMP=0x00100000000d00cb
- (id)_identifiersOfApplicationsWithExpiredAccessToMediaLibrary;	// IMP=0x00100000000cfde7
- (void)revokeMusicKitUserTokensForUserIdentity:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cfd4d
- (void)validateExpirationForBundleIdentifier:(id)arg1 withReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000cf538
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000cf364
- (void)stopObservingRevocations;	// IMP=0x00100000000cf319
- (void)startObservingRevocations;	// IMP=0x00100000000cf2ce
- (void)dealloc;	// IMP=0x00100000000cf263
- (id)_init;	// IMP=0x00100000000cf181

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

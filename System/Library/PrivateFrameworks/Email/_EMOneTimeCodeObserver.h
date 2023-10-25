//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFCancelationToken, NSString;
@protocol EMOneTimeCodeObserver_xpc;

__attribute__((visibility("hidden")))
@interface _EMOneTimeCodeObserver : NSObject
{
    id <EMOneTimeCodeObserver_xpc> _observer;	// 8 = 0x8
    EFCancelationToken *_token;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000075739
- (void)_performWithRemoteConnection:(id)arg1 forRecovery:(_Bool)arg2;	// IMP=0x000000000007547a
- (void)recoverWithRemoteConnection:(id)arg1;	// IMP=0x0000000000075463
- (void)performWithRemoteConnection:(id)arg1;	// IMP=0x000000000007544f
- (void)cancel;	// IMP=0x0000000000075439
- (void)dealloc;	// IMP=0x00000000000753c5
- (id)initWithObserver:(id)arg1;	// IMP=0x000000000007531b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

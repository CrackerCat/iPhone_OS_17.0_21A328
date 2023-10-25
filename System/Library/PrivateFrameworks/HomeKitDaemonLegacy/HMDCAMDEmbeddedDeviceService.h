//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCAMDBlockManager, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface HMDCAMDEmbeddedDeviceService
{
    NSXPCConnection *_connection;	// 16 = 0x10
    unsigned long long _backoffTimer;	// 24 = 0x18
    _Bool _isRoot;	// 32 = 0x20
    _Bool _isValid;	// 33 = 0x21
    _Bool _directInvocations;	// 34 = 0x22
    unsigned long long _requestTimeout;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
    HMDCAMDBlockManager *_blockInvoker;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000058093a
+ (void)confirmSemaphoreAndSignal:(id)arg1;	// IMP=0x00100000005807f5
- (void).cxx_destruct;	// IMP=0x000000000057fa60
@property(readonly) HMDCAMDBlockManager *blockInvoker; // @synthesize blockInvoker=_blockInvoker;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property unsigned long long requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property _Bool directInvocations; // @synthesize directInvocations=_directInvocations;
@property(readonly) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly) _Bool isRoot; // @synthesize isRoot=_isRoot;
- (id)logIdentifier;	// IMP=0x000000000057f987
- (void)_testCommunication:(CDUnknownBlockType)arg1;	// IMP=0x000000000057f974
- (void)_performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000057f6ae
- (void)_removeActualBlockForKey:(id)arg1;	// IMP=0x000000000057f581
- (void)_fireActualBlockWithArguments:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000057f45e
- (_Bool)testCommunication;	// IMP=0x000000000057f296
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x000000000057ee9f
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000057edee
- (id)remoteObjectProxy;	// IMP=0x000000000057edda
- (void)resetConnection;	// IMP=0x000000000057ec53
- (void)start;	// IMP=0x000000000057e81e
- (void)blockReleased:(id)arg1;	// IMP=0x000000000057e76a
- (void)dealloc;	// IMP=0x000000000057e6c1
- (id)initAsMobile;	// IMP=0x000000000057e6af
- (id)initAsRoot;	// IMP=0x000000000057e698
- (id)init;	// IMP=0x000000000057e684
- (id)_initAsRoot:(_Bool)arg1;	// IMP=0x000000000057e577

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

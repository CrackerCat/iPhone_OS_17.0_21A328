//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, RMActivationEngine, RMSharedLock, RMStatusEngine;
@protocol RMClientDelegate, RMConduit;

@interface RMClient : NSObject
{
    NSObject *_needsSyncingLock;	// 8 = 0x8
    RMSharedLock *_syncLock;	// 16 = 0x10
    _Bool _needsSyncing;	// 24 = 0x18
    _Bool _firstSync;	// 25 = 0x19
    id <RMClientDelegate> _delegate;	// 32 = 0x20
    NSString *_managementSourceIdentifier;	// 40 = 0x28
    id <RMConduit> _conduit;	// 48 = 0x30
    RMActivationEngine *_activationEngine;	// 56 = 0x38
    RMStatusEngine *_statusEngine;	// 64 = 0x40
    NSOperationQueue *_operationQueue;	// 72 = 0x48
}

+ (id)_makeConduitWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0020000000010367
- (void).cxx_destruct;	// IMP=0x0020000000013a68
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) RMStatusEngine *statusEngine; // @synthesize statusEngine=_statusEngine;
@property(retain, nonatomic) RMActivationEngine *activationEngine; // @synthesize activationEngine=_activationEngine;
@property(retain, nonatomic) id <RMConduit> conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) NSString *managementSourceIdentifier; // @synthesize managementSourceIdentifier=_managementSourceIdentifier;
@property(nonatomic) __weak id <RMClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_syncIfNeeded;	// IMP=0x001000000001390d
- (void)_setNeedsSyncing:(_Bool)arg1;	// IMP=0x00100000000136bf
- (void)statusEngineHasUnacknowledgedSubscription:(id)arg1;	// IMP=0x0010000000013658
- (void)conduitNeedsToSendStatusForKeyPaths:(id)arg1;	// IMP=0x0010000000013595
- (void)conduitNeedsToSync:(id)arg1;	// IMP=0x001000000001352e
- (void)_processConduitErrorState:(short)arg1;	// IMP=0x001000000001344e
- (void)_handleConduitError;	// IMP=0x00100000000133ab
- (_Bool)_haltSyncing;	// IMP=0x001000000001335b
- (void)_sendStatusQueryResultIfNeeded:(id)arg1 fullReport:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000130ff
- (void)sendStatusForSubscriptionsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012dbf
- (id)queryForStatusSubscriptionsWithIdentifiers:(id)arg1;	// IMP=0x00100000000129cd
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012640
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000123c6
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001214c
- (void)applyNowWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000120e3
- (void)_syncConduitOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011e4f
- (void)_syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000113dc
- (void)syncIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001133c
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001129f
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011045
- (void)reenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010cae
- (void)enrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010934
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000105cd
- (id)initWithConduit:(id)arg1 activationEngine:(id)arg2 statusEngine:(id)arg3 managementSourceIdentifier:(id)arg4;	// IMP=0x0010000000010186
- (id)initWithManagementSourceObjectID:(id)arg1 managementSourceIdentifier:(id)arg2 statusQuerier:(id)arg3 persistentContainer:(id)arg4;	// IMP=0x001000000000ff3b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

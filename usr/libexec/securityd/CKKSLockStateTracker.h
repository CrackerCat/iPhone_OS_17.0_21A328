//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSHashTable, NSOperation, NSOperationQueue;
@protocol CKKSLockStateProviderProtocol, OS_dispatch_queue;

@interface CKKSLockStateTracker : NSObject
{
    _Bool _queueIsLocked;	// 8 = 0x8
    int _notify_token;	// 12 = 0xc
    NSOperation *_unlockDependency;	// 16 = 0x10
    id <CKKSLockStateProviderProtocol> _lockStateProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSOperationQueue *_operationQueue;	// 40 = 0x28
    NSHashTable *_observers;	// 48 = 0x30
    NSDate *_lastUnlockedTime;	// 56 = 0x38
}

+ (id)globalTracker;	// IMP=0x004000000019cd41
- (void).cxx_destruct;	// IMP=0x002000000019c9e2
@property(retain) NSDate *lastUnlockedTime; // @synthesize lastUnlockedTime=_lastUnlockedTime;
@property int notify_token; // @synthesize notify_token=_notify_token;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool queueIsLocked; // @synthesize queueIsLocked=_queueIsLocked;
@property(retain) id <CKKSLockStateProviderProtocol> lockStateProvider; // @synthesize lockStateProvider=_lockStateProvider;
@property(retain) NSOperation *unlockDependency; // @synthesize unlockDependency=_unlockDependency;
- (void)addLockStateObserver:(id)arg1;	// IMP=0x001000000019c832
- (_Bool)isLockedError:(id)arg1;	// IMP=0x001000000019c7a5
- (_Bool)checkErrorChainForLockState:(id)arg1;	// IMP=0x001000000019c6cf
- (_Bool)lockedError:(id)arg1;	// IMP=0x001000000019c600
- (void)recheck;	// IMP=0x001000000019c58f
- (void)_onqueueRecheck;	// IMP=0x001000000019c255
- (void)resetUnlockDependency;	// IMP=0x001000000019c168
- (id)description;	// IMP=0x001000000019c0c3
@property(readonly) NSDate *lastUnlockTime;
@property(readonly) _Bool isLocked;
- (void)dealloc;	// IMP=0x001000000019befc
- (id)initWithProvider:(id)arg1;	// IMP=0x001000000019bceb

@end

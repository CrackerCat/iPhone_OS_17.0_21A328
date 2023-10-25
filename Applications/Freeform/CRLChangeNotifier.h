//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface CRLChangeNotifier : NSObject
{
    NSMapTable *_changeSourceOfObjectObservers;	// 8 = 0x8
    NSMapTable *_changeSourceOfClassObservers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_currentlyNotifyingLock;	// 24 = 0x18
    long long _currentlyNotifyingCount;	// 32 = 0x20
    NSMapTable *_objectObserversToCheckForRemovalAfterNotifications;	// 40 = 0x28
    NSMapTable *_classObserversToCheckForRemovalAfterNotifications;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000002753da
- (void)processChanges:(id)arg1;	// IMP=0x00100000002753c6
- (void)preprocessChanges:(id)arg1;	// IMP=0x00100000002753af
- (void)p_trimChangeSourceToCountedObserversMap:(id)arg1;	// IMP=0x00100000002750ba
- (void)p_removeDeallocatedObserversFromArray:(id)arg1;	// IMP=0x0010000000275010
- (void)p_removeZeroCountObserversInMap:(id)arg1 fromCountedObserversByChangeSourceMap:(id)arg2;	// IMP=0x0010000000274dd6
- (void)p_processChanges:(id)arg1 preprocessing:(_Bool)arg2;	// IMP=0x0010000000273693
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;	// IMP=0x001000000027367b
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;	// IMP=0x0010000000273663
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;	// IMP=0x001000000027364e
- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;	// IMP=0x0010000000273639
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;	// IMP=0x001000000027333e
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(_Bool)arg3;	// IMP=0x00100000002731d7
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;	// IMP=0x00100000002730c2
- (id)init;	// IMP=0x0010000000272ff4

@end

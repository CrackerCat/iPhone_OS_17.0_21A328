//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMUserIdentityCache, NSMutableDictionary, NSString;
@protocol MCMChildParentMapCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMContainerCache : NSObject
{
    NSMutableDictionary *_queue_cache;	// 8 = 0x8
    MCMUserIdentityCache *_userIdentityCache;	// 16 = 0x10
    id <MCMChildParentMapCache> _childParentMapCache;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    Class _cacheEntryClass;	// 40 = 0x28
    Class _classCacheClass;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000afe17
@property(readonly, nonatomic) Class classCacheClass; // @synthesize classCacheClass=_classCacheClass;
@property(readonly, nonatomic) Class cacheEntryClass; // @synthesize cacheEntryClass=_cacheEntryClass;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
- (void)_queue_setContainerClassCache:(id)arg1;	// IMP=0x00000000000afc74
- (id)_containerClassPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000afb98
- (id)_queue_containerClassCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000afada
- (id)_queue_containerClassCacheForContainerClassPath:(id)arg1;	// IMP=0x00000000000af8f6
- (void)_queue_flushCacheForContainerClassPath:(id)arg1;	// IMP=0x00000000000af82c
- (void)_queue_invalidateUserIdentity:(id)arg1;	// IMP=0x00000000000af700
- (void)userIdentityCache:(id)arg1 didAddUserIdentity:(id)arg2;	// IMP=0x00000000000af6cf
- (void)userIdentityCache:(id)arg1 didInvalidateUserIdentity:(id)arg2;	// IMP=0x00000000000af68f
- (void)invalidateUserIdentity:(id)arg1;	// IMP=0x00000000000af5dc
- (void)flushCacheForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 transient:(_Bool)arg3;	// IMP=0x00000000000af50c
- (_Bool)removeContainerForUserIdentity:(id)arg1 contentClass:(unsigned long long)arg2 identifier:(id)arg3 transient:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000af27e
- (id)addContainerMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000aeedc
- (id)entriesForUserIdentities:(id)arg1 contentClass:(unsigned long long)arg2 transient:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000ae7f5
- (long long)countContainersForOtherUserIdentitiesWithIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ae620
- (id)entryForContainerIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ae50d
- (id)entryForContainerIdentity:(id)arg1 classCache:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000ae11f
- (id)classCacheForContainerIdentity:(id)arg1;	// IMP=0x00000000000adf93
- (void)setContainerClassCache:(id)arg1;	// IMP=0x00000000000adee0
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 error:(id *)arg5;	// IMP=0x00000000000ade14
- (id)initWithUserIdentityCache:(id)arg1 childParentMapCache:(id)arg2 classCacheClass:(Class)arg3 cacheEntryClass:(Class)arg4 queue:(id)arg5;	// IMP=0x00000000000adce4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueMutatingArrayMethodSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueFastMutableArray
{
    NSKeyValueMutatingArrayMethodSet *_mutatingMethods;	// 24 = 0x18
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x0000000000689acd
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x0000000000689953
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000006898c1
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000689822
- (void)removeLastObject;	// IMP=0x00000000006897f0
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x000000000068975e
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000068963e
- (void)addObject:(id)arg1;	// IMP=0x00000000006895fe
- (void)_proxyNonGCFinalize;	// IMP=0x000000000068958d
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x0000000000689500

@end

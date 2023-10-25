//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSKeyValueGetter, NSKeyValueSetter;

__attribute__((visibility("hidden")))
@interface NSKeyValueSlowMutableOrderedSet
{
    NSKeyValueGetter *_valueGetter;	// 24 = 0x18
    NSKeyValueSetter *_valueSetter;	// 32 = 0x20
    _Bool _treatNilValuesLikeEmptyOrderedSets;	// 40 = 0x28
    char _padding[3];	// 41 = 0x29
}

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;	// IMP=0x00000000007ef9f7
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x00000000007ef981
- (void)removeObjectsAtIndexes:(id)arg1;	// IMP=0x00000000007ef91a
- (void)removeObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007ef8b3
- (id)_createNonNilMutableOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000007ef853
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;	// IMP=0x00000000007ef647
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000007ef534
- (id)objectsAtIndexes:(id)arg1;	// IMP=0x00000000007ef500
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000007ef4cc
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000007ef498
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000007ef450
- (id)_nonNilOrderedSetValueWithSelector:(SEL)arg1;	// IMP=0x00000000007ef3fc
- (unsigned long long)count;	// IMP=0x00000000007ef38e
- (void)_raiseNilValueExceptionWithSelector:(SEL)arg1;	// IMP=0x00000000007ef2f7
- (void)_proxyNonGCFinalize;	// IMP=0x00000000007ef26a
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;	// IMP=0x00000000007ef197

@end

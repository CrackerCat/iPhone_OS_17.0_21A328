//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, PersonalizedItemClientRankingFunction, PersonalizedItemPriorityFunction;
@protocol OS_dispatch_queue;

@interface PersonalizedItemManager : NSObject
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_itemSources;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSArray *_allItems;	// 40 = 0x28
    NSArray *_itemGroups;	// 48 = 0x30
    int _resetCounter;	// 56 = 0x38
    _Bool _updateInProgress;	// 60 = 0x3c
    _Bool _needsRecalculation;	// 61 = 0x3d
    _Bool _updatesPaused;	// 62 = 0x3e
    PersonalizedItemClientRankingFunction *_clientRankingFunction;	// 64 = 0x40
    PersonalizedItemPriorityFunction *_priorityFunction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000006d9441
@property(nonatomic) _Bool updatesPaused; // @synthesize updatesPaused=_updatesPaused;
@property(readonly, nonatomic) NSArray *itemGroups; // @synthesize itemGroups=_itemGroups;
@property(copy, nonatomic) NSArray *itemSources; // @synthesize itemSources=_itemSources;
- (void)personalizedItemSourceDidChangeItems:(id)arg1;	// IMP=0x00100000006d9412
- (id)_itemsFilteredBySearchableString:(id)arg1 predicate:(id)arg2;	// IMP=0x00100000006d9177
- (id)itemsContainingSearchableString:(id)arg1;	// IMP=0x00100000006d90de
- (id)itemsMatchingSearchableString:(id)arg1;	// IMP=0x00100000006d9045
- (void)_gatherItemsWithShouldCancel:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006d6f2b
@property(readonly, nonatomic) NSArray *allItems;
- (void)removeObserver:(id)arg1;	// IMP=0x00100000006d6d8c
- (void)addObserver:(id)arg1;	// IMP=0x00100000006d6ce0
- (void)_recalculateIfNeeded;	// IMP=0x00100000006d62c5
- (void)_setNeedsRecalculation;	// IMP=0x00100000006d61f4
- (void)_reset;	// IMP=0x00100000006d6059
- (void)removeItemSource:(id)arg1;	// IMP=0x00100000006d4e60
- (void)addItemSource:(id)arg1;	// IMP=0x00100000006d4ce3
@property(retain, nonatomic, getter=_priorityFunction) PersonalizedItemPriorityFunction *priorityFunction; // @synthesize priorityFunction=_priorityFunction;
@property(retain, nonatomic, getter=_clientRankingFunction) PersonalizedItemClientRankingFunction *clientRankingFunction; // @synthesize clientRankingFunction=_clientRankingFunction;
- (id)init;	// IMP=0x00100000006d474f

@end

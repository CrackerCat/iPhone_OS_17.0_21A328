//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DiscoveryItem
{
    unsigned long long _itemOrder;	// 24 = 0x18
}

+ (id)_propertySettersForAccount;	// IMP=0x004000000020ead6
+ (id)_predicateForViewCount:(long long)arg1;	// IMP=0x001000000020ea65
+ (id)_predicateForEntitledToForceLargeCard;	// IMP=0x001000000020ea3e
+ (id)_predicateForShouldBadge;	// IMP=0x001000000020ea17
+ (id)_predicateForCheckingRelevantDate:(id)arg1;	// IMP=0x001000000020e743
+ (id)_predicateForNonTerminalItems;	// IMP=0x001000000020e616
+ (id)_predicateForItemsWaitinForTrigger;	// IMP=0x001000000020e542
+ (id)_predicateDismissedItems;	// IMP=0x001000000020e51b
+ (id)_predicateForActiveOrActionedItems;	// IMP=0x001000000020e408
+ (id)_predicateForActiveOrActionedRelevantItemsRequiringBadge:(id)arg1;	// IMP=0x001000000020e2a7
+ (id)_predicateForActiveOrActionedAndRelevantItems:(id)arg1;	// IMP=0x001000000020e190
+ (id)_predicateForItemIdentifier:(id)arg1;	// IMP=0x001000000020e16d
+ (void)deleteAllItemsInDatabase:(id)arg1;	// IMP=0x001000000020e0d3
+ (void)deleteItemsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020e02f
+ (void)deleteItemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020dfed
+ (id)updateItem:(id)arg1 inDatabse:(id)arg2;	// IMP=0x001000000020d5aa
+ (id)insertOrUpdateItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000020cf83
+ (id)itemWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020cef7
+ (id)nonTerminalItemIdentifiersInDatabase:(id)arg1;	// IMP=0x001000000020cce1
+ (id)activeItemIdentifiersWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020cad3
+ (_Bool)activeItemRequiringBadgeExistsForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020ca3e
+ (id)discoveryItemsMatchingQuery:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020c868
+ (id)orderedQueryWithPredicate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020c738
+ (id)itemsWaitingForTriggerInDatabase:(id)arg1;	// IMP=0x001000000020c688
+ (id)activeItemsRequiringBadgingForRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020c5d2
+ (id)dismissedDiscoveryItemsInDatabase:(id)arg1;	// IMP=0x001000000020c522
+ (id)activeItemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020c46c
+ (id)itemsWithRelevantDate:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000020c3b6
+ (id)itemsInDatabase:(id)arg1;	// IMP=0x001000000020c2ff
+ (id)databaseTable;	// IMP=0x001000000020c2f2
@property(nonatomic) unsigned long long itemOrder; // @synthesize itemOrder=_itemOrder;
- (void)setItemOrder;	// IMP=0x001000000020f16c
- (id)item;	// IMP=0x001000000020db3b
- (void)updateWithItem:(id)arg1;	// IMP=0x001000000020d661
- (id)initWithItem:(id)arg1 itemOrder:(unsigned long long)arg2 inDatabase:(id)arg3;	// IMP=0x001000000020d073

@end

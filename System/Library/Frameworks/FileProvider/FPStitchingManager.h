//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface FPStitchingManager : NSObject
{
    NSHashTable *_stitchingSessions;	// 8 = 0x8
    NSMapTable *_bouncedItems;	// 16 = 0x10
}

+ (id)parentIdNameKeyForItem:(id)arg1;	// IMP=0x00600000000d1120
+ (id)sharedInstance;	// IMP=0x00600000000d0d5c
- (void).cxx_destruct;	// IMP=0x00000000000d21a9
- (id)stitchedItemsForParentID:(id)arg1;	// IMP=0x00000000000d1f37
@property(readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
- (_Bool)cleanStitchedForItemID:(id)arg1 ignoreSession:(id)arg2;	// IMP=0x00000000000d195b
@property(readonly, nonatomic) NSMutableArray *allDeletedIDs;
@property(readonly, nonatomic) NSArray *allPlaceholderReplacementsIDs;
@property(readonly, nonatomic) NSDictionary *allPlaceholderItemsByParentIdentifierAndName;
- (void)removeBouncedItemsWithIDs:(id)arg1;	// IMP=0x00000000000d0f9e
- (void)addBouncedItem:(id)arg1;	// IMP=0x00000000000d0efc
- (void)registerStitchingSession:(id)arg1;	// IMP=0x00000000000d0e4b
- (id)init;	// IMP=0x00000000000d0db1

@end

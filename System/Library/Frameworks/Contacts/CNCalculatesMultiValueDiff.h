//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSOrderedSet;

__attribute__((visibility("hidden")))
@interface CNCalculatesMultiValueDiff : NSObject
{
    NSArray *_multiValue1;	// 8 = 0x8
    NSArray *_multiValue2;	// 16 = 0x10
    NSOrderedSet *_originalIdentifiers;	// 24 = 0x18
    NSOrderedSet *_finalIdentifiers;	// 32 = 0x20
    NSMutableOrderedSet *_addedIdentifiers;	// 40 = 0x28
    NSMutableOrderedSet *_removedIdentifiers;	// 48 = 0x30
    NSMutableOrderedSet *_sameIdentifiers;	// 56 = 0x38
    NSMutableOrderedSet *_calculatedFinalIdentifiers;	// 64 = 0x40
    NSMutableArray *_updates;	// 72 = 0x48
}

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;	// IMP=0x0060000000032ce6
- (void).cxx_destruct;	// IMP=0x0000000000033a14
- (id)updates;	// IMP=0x0000000000033a06
- (void)calculateDiff;	// IMP=0x0000000000033970
- (void)appendReorderUpdates;	// IMP=0x0000000000033810
- (void)appendReplaceUpdates;	// IMP=0x00000000000335ca
- (void)appendAddUpdates;	// IMP=0x00000000000333f8
- (void)appendRemoveUpdates;	// IMP=0x0000000000033226
- (void)setupCalculatedFinalIdentifiers;	// IMP=0x00000000000331c0
- (void)setupSameIdentifiers;	// IMP=0x000000000003316c
- (void)setupAddedIdentifiers;	// IMP=0x0000000000033118
- (void)setupRemovedIdentifiers;	// IMP=0x00000000000330c4
- (void)setupFinalIdentifiers;	// IMP=0x0000000000032fe9
- (void)setupOriginalIdentifiers;	// IMP=0x0000000000032f0e
- (id)initWithMultiValue1:(id)arg1 multiValue2:(id)arg2;	// IMP=0x0000000000032e4c

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC10ContactsUI38CNAvatarPosterPairCollectionViewLayout : UICollectionViewLayout
{
    MISSING_TYPE *mode;	// 8 = 0x8
    MISSING_TYPE *itemRevealProgressProvider;	// 16 = 0x10
    MISSING_TYPE *itemSize;	// 32 = 0x20
    MISSING_TYPE *minimumInterimSpacing;	// 48 = 0x30
    MISSING_TYPE *scrollDirection;	// 56 = 0x38
    MISSING_TYPE *cardSizeMultiplier;	// 64 = 0x40
    MISSING_TYPE *maximumVerticalRevealFraction;	// 72 = 0x48
    MISSING_TYPE *contentBounds;	// 80 = 0x50
    MISSING_TYPE *cachedAttributes;	// 112 = 0x70
    MISSING_TYPE *cachedSupplementaryFooterAttributes;	// 120 = 0x78
    MISSING_TYPE *itemRevealProgresses;	// 128 = 0x80
    MISSING_TYPE *itemIndexPathsToDelete;	// 136 = 0x88
    MISSING_TYPE *indexPathToMaintainForTransition;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000709b0
- (id)init;	// IMP=0x0000000000070950
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000070670
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000070200
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;	// IMP=0x000000000006f5a0
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000006f4c0
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000006efb0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000006e980
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000006e810
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000006e4a0
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x000000000006d970
- (void)finalizeCollectionViewUpdates;	// IMP=0x000000000006c6f0
- (void)prepareForCollectionViewUpdates:(id)arg1;	// IMP=0x000000000006c650
@property(nonatomic, readonly) _Bool flipsHorizontallyInOppositeLayoutDirection;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006c3f0

@end

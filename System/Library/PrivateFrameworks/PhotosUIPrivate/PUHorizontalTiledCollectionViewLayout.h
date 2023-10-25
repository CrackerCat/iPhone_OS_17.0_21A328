//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewLayout.h>

@class PUCollectionViewData, UICollectionViewLayoutAttributes;
@protocol PUHorizontalTiledCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout
{
    PUCollectionViewData *_data;	// 8 = 0x8
    UICollectionViewLayoutAttributes *_dummyAttrs;	// 16 = 0x10
    double _interitemSpacing;	// 24 = 0x18
    id <PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;	// 32 = 0x20
    struct UIEdgeInsets _itemsContentInset;	// 40 = 0x28
}

+ (Class)invalidationContextClass;	// IMP=0x006000000026c60c
- (void).cxx_destruct;	// IMP=0x000000000026c4b2
@property(nonatomic) __weak id <PUHorizontalTiledCollectionViewLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets itemsContentInset; // @synthesize itemsContentInset=_itemsContentInset;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000026c3d4
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000026c3c2
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000026c318
- (void)prepareLayout;	// IMP=0x000000000026c28f
- (void)invalidateLayoutWithContext:(id)arg1;	// IMP=0x000000000026c1f3
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000026c131
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000026c11f
- (id)layoutAttributesForItemsInRect:(struct CGRect)arg1;	// IMP=0x000000000026bfa7
- (_Bool)_shouldInvalidateCachedLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000026bf2a
- (void)invalidateCachedLayout;	// IMP=0x000000000026bf0d
@property(readonly, nonatomic) _Bool hasReferenceIndexPath;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000026bd54
- (void)_ensureIndexPath:(id)arg1 inData:(id)arg2;	// IMP=0x000000000026ba7c
- (void)_ensureRect:(struct CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double *)arg3;	// IMP=0x000000000026b7c3
- (_Bool)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double *)arg3;	// IMP=0x000000000026aa17
- (id)init;	// IMP=0x000000000026a994

@end

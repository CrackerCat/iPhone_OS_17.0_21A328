//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface CKSendMenuCollectionViewLayout : UICollectionViewCompositionalLayout
{
    MISSING_TYPE *sendMenuLayoutDelegate;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_dynamicAnimator;	// 24 = 0x18
    MISSING_TYPE *frozenCollectionViewContentSize;	// 32 = 0x20
    MISSING_TYPE *lastPanGestureRecognizerPositionInCollectionViewCoordinates;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000061ca40
- (id)initWithSection:(id)arg1 sectionProvider:(CDUnknownBlockType)arg2 configuration:(id)arg3;	// IMP=0x000000000061c9d0
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x000000000061c980
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000061c940
- (id)initWithSection:(id)arg1 configuration:(id)arg2;	// IMP=0x000000000061c900
- (id)initWithSection:(id)arg1;	// IMP=0x000000000061c8d0
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000061c7f0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000061c7d0
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000061c4a0
- (void)prepareLayout;	// IMP=0x000000000061c430
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;	// IMP=0x000000000061b850
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;	// IMP=0x000000000061ae30
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000061aad0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCompositionalLayout.h>

@class MISSING_TYPE;

@interface _TtC8Freeform36CRLCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout
{
    MISSING_TYPE *footerViewHeight;	// 8 = 0x8
    MISSING_TYPE *footerViewContentInsets;	// 16 = 0x10
    MISSING_TYPE *layoutStyle;	// 48 = 0x30
    MISSING_TYPE *containsInvitations;	// 49 = 0x31
    MISSING_TYPE *coreLayout;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000713860
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1 configuration:(id)arg2;	// IMP=0x00100000007137e0
- (id)initWithSectionProvider:(CDUnknownBlockType)arg1;	// IMP=0x00100000007137a0
- (id)initWithSection:(id)arg1 configuration:(id)arg2;	// IMP=0x0010000000713760
- (id)initWithSection:(id)arg1;	// IMP=0x0010000000713730
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00100000007135d0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000713530
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x00100000007133b0
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x0010000000713110
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000713020

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSString, SUUIShelfLayoutData;

__attribute__((visibility("hidden")))
@interface SUUIShelfCollectionViewLayout : UICollectionViewLayout
{
    SUUIShelfLayoutData *_layoutData;	// 8 = 0x8
}

+ (Class)layoutAttributesClass;	// IMP=0x0010000000243aa0
+ (_Bool)collectionViewCanClipToBounds;	// IMP=0x0010000000243a98
+ (double)snapToBoundariesDecelerationRate;	// IMP=0x0010000000243a8a
- (void).cxx_destruct;	// IMP=0x0000000000244802
@property(retain, nonatomic) SUUIShelfLayoutData *layoutData; // @synthesize layoutData=_layoutData;
- (_Bool)_shouldScrollToContentBeginningInRightToLeft;	// IMP=0x00000000002447d5
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x00000000002444e1
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000002441b7
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000243ace
- (struct CGSize)collectionViewContentSize;	// IMP=0x0000000000243ab1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

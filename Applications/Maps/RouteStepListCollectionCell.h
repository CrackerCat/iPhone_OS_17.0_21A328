//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class MISSING_TYPE, NSString, RouteStepItem, RouteStepListView;

@interface RouteStepListCollectionCell : UICollectionViewCell
{
    RouteStepListView *_stepView;	// 8 = 0x8
    MISSING_TYPE *_heightConstraint;	// 16 = 0x10
}

+ (double)heightForItem:(id)arg1 width:(double)arg2 maximumHeight:(double)arg3;	// IMP=0x0020000000bd9dfa
+ (Class)stepViewClass;	// IMP=0x0010000000bd9b3d
- (void).cxx_destruct;	// IMP=0x0020000000bd9ea8
@property(retain, nonatomic) RouteStepItem *item;
@property(nonatomic) _Bool shouldUseTextToBottomConstraint;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000bd9b4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

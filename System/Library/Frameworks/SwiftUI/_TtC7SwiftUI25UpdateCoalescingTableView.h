//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UpdateCoalescingTableView : UITableView
{
    MISSING_TYPE *isSidebarStyle;	// 8 = 0x8
    MISSING_TYPE *cachedIdealSize;	// 16 = 0x10
    MISSING_TYPE *rowSpacing;	// 40 = 0x28
    MISSING_TYPE *safeAreaTransitionState;	// 56 = 0x38
    MISSING_TYPE *visibleCellsUpdate;	// 72 = 0x48
    MISSING_TYPE *ignoreGraphUpdates;	// 88 = 0x58
    MISSING_TYPE *pendingGraphUpdate;	// 92 = 0x5c
    MISSING_TYPE *pendingScrollTarget;	// 0 = 0x0
    MISSING_TYPE *previousHorizontalMargin;	// 0 = 0x0
    MISSING_TYPE *_lastUpdateSeed;	// 0 = 0x0
    MISSING_TYPE *bridgedState;	// 24 = 0x18
    MISSING_TYPE *shouldDetermineInsetStyle;	// 65536 = 0x10000
    MISSING_TYPE *needsUpdateAlignmentInsets;	// 0 = 0x0
    MISSING_TYPE *lastConfigurationHash;	// 0 = 0x0
}

+ (_Bool)_isInternalTableView;	// IMP=0x006000000195dfc1
+ (_Bool)_isFromSwiftUI;	// IMP=0x006000000195d8f3
- (void).cxx_destruct;	// IMP=0x000000000195fbff
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000195fa72
- (void)layoutSubviews;	// IMP=0x000000000195f5ea
- (double)_rowSpacing;	// IMP=0x000000000195eb0a
- (double)_alignedContentMarginGivenMargin:(double)arg1;	// IMP=0x000000000195eaaf
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000195ea66
- (void)layoutMarginsDidChange;	// IMP=0x000000000195e9fd
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000195e241
@property(nonatomic) struct CGRect bounds;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000195dfa9
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;	// IMP=0x000000000195dd5f
- (void)_setSectionContentInsetFollowsLayoutMargins:(_Bool)arg1;	// IMP=0x000000000195da4e
- (_Bool)_sectionContentInsetFollowsLayoutMargins;	// IMP=0x000000000195d9e9

// Remaining properties
@property(nonatomic) _Bool sectionContentInsetFollowsLayoutMargins;

@end

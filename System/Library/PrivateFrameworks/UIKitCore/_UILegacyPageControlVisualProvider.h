//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, UIImage, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UILegacyPageControlVisualProvider
{
    UIImage *_currentPageImage;	// 24 = 0x18
    UIImage *_pageImage;	// 32 = 0x20
    NSMutableArray *_currentPageImages;	// 40 = 0x28
    NSMutableArray *_pageImages;	// 48 = 0x30
    UIVisualEffectView *_backgroundVisualEffectView;	// 56 = 0x38
    NSMutableArray *_indicators;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000124079b
- (void)_cachePageIndicatorImages;	// IMP=0x0000000001240509
- (id)_pageIndicatorCurrentImageForPage:(long long)arg1;	// IMP=0x00000000012404cc
- (id)_pageIndicatorImageForPage:(long long)arg1;	// IMP=0x000000000124048f
- (id)_cachedPageIndicatorCurrentImageForPage:(long long)arg1;	// IMP=0x00000000012403ee
- (id)_cachedPageIndicatorImageForPage:(long long)arg1;	// IMP=0x000000000124034d
- (id)defaultActivePageIndicatorImage;	// IMP=0x000000000124033c
- (id)preferredIndicatorImage;	// IMP=0x000000000124032b
- (void)_drawModernIndicatorInView:(id)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000001240206
- (id)_indicatorViewEnabled:(_Bool)arg1 index:(long long)arg2;	// IMP=0x0000000001240127
- (void)_transitionIndicator:(id)arg1 toEnabled:(_Bool)arg2 index:(long long)arg3;	// IMP=0x000000000124007a
- (_Bool)_hasCustomImageForPage:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x000000000123ff98
- (id)_modernColorEnabled:(_Bool)arg1;	// IMP=0x000000000123fe91
- (double)_modernCornerRadius;	// IMP=0x000000000123fe5e
- (struct CGRect)_modernBounds;	// IMP=0x000000000123fe3d
- (double)_indicatorSpacing;	// IMP=0x000000000123fdfe
- (struct CGRect)_indicatorFrameAtIndex:(long long)arg1;	// IMP=0x000000000123fd57
- (void)_setDisplayedPage:(long long)arg1;	// IMP=0x000000000123fc51
- (void)updateDisplayedPageToCurrentPage;	// IMP=0x000000000123fc1c
- (id)effectiveContentView;	// IMP=0x000000000123fbca
- (void)invalidateIndicators;	// IMP=0x000000000123f985
- (void)layoutSubviews;	// IMP=0x000000000123f4cc
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000123f40b
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000123f283
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;	// IMP=0x000000000123f1b6
- (void)didEndTrackingWithTouch:(id)arg1;	// IMP=0x000000000123efe9
- (void)didUpdatePageIndicatorTintColor;	// IMP=0x000000000123efa3
- (void)didUpdateCurrentPageIndicatorTintColor;	// IMP=0x000000000123ef91
- (void)didUpdateNumberOfPages;	// IMP=0x000000000123eda6
- (void)pruneArchivedSubviews:(id)arg1;	// IMP=0x000000000123ec56
- (void)prepare;	// IMP=0x000000000123eb99

@end

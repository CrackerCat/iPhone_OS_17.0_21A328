//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PDFPageIconLayer, PDFThumbnailView;

__attribute__((visibility("hidden")))
@interface PDFIconsView : UIView
{
    PDFThumbnailView *_thumbnailView;	// 8 = 0x8
    NSMutableArray *_icons;	// 16 = 0x10
    PDFPageIconLayer *_activeIcon;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008cde4
- (void)_updateScrubberForPageIndex:(int)arg1 goToPage:(_Bool)arg2;	// IMP=0x000000000008c52e
- (void)_updateScrubberAtViewLocation:(struct CGPoint)arg1;	// IMP=0x000000000008c28b
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000008c279
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000008c21d
- (struct CGSize)_iconsLayoutSize;	// IMP=0x000000000008c139
- (int)_iconsLayoutIconCount;	// IMP=0x000000000008bf5b
- (void)layoutSubviews;	// IMP=0x000000000008b6e0
- (void)pageChanged:(id)arg1;	// IMP=0x000000000008b471
- (void)currentPageChanged:(id)arg1;	// IMP=0x000000000008b3a9
- (void)documentMutated:(id)arg1;	// IMP=0x000000000008b37b
- (void)documentChanged:(id)arg1;	// IMP=0x000000000008b369
- (id)currentPage;	// IMP=0x000000000008b2d9
- (void)updateIconsImages;	// IMP=0x000000000008b1aa
- (id)initFromThumbnailView:(id)arg1;	// IMP=0x000000000008b0d9

@end

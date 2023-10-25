//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface SUUISlideshowImageScrollView : UIScrollView
{
    UIImageView *_imageView;	// 8 = 0x8
    struct CGPoint _centerPointBeforeResize;	// 16 = 0x10
    double _scaleBeforeResize;	// 32 = 0x20
    UIImage *_image;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000200675
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)_resetMinMaxZoomScales;	// IMP=0x000000000020055e
- (void)_recoverFromResize;	// IMP=0x00000000002003b1
- (void)_prepareToResize;	// IMP=0x00000000002002e4
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000200122
- (void)layoutSubviews;	// IMP=0x00000000001fffde
- (struct CGRect)visibleRect;	// IMP=0x00000000001fff38
- (void)zoomIntoPoint:(struct CGPoint)arg1;	// IMP=0x00000000001ffd3b
- (void)resetZoomScale;	// IMP=0x00000000001ffd0d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001ffc2d

@end

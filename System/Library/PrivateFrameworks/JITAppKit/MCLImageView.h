//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface MCLImageView : UIImageView
{
    UIImage *_image;	// 8 = 0x8
}

+ (id)bitmapImage:(id)arg1;	// IMP=0x0060000000016230
- (void).cxx_destruct;	// IMP=0x0000000000016590
- (void)setImage:(id)arg1;	// IMP=0x0000000000016140
- (void)backgroundDecompressImage;	// IMP=0x0000000000015ec0
- (void)setImageDelayed:(id)arg1;	// IMP=0x0000000000015da0
- (void)didMoveToWindow;	// IMP=0x0000000000015ce0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@interface UIImage (PaperBoardUtilities)
+ (id)pbui_thumbnailImageForImage:(id)arg1;	// IMP=0x006000000000bbfe
+ (id)pbui_imageFromSceneSnapshot:(id)arg1;	// IMP=0x006000000000b994
+ (id)pbui_imageSnapshotFromLayer:(id)arg1 buffer:(struct __IOSurface *)arg2;	// IMP=0x006000000000b87b
+ (id)pbui_imageWithIOSurface:(id)arg1;	// IMP=0x006000000000b6ba
+ (id)pbui_imageWithIOSurface:(id)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x006000000000b46c
- (long long)pbui_EXIFOrientation;	// IMP=0x001000000000d759
- (id)pbui_imageHashData;	// IMP=0x001000000000d6f0
- (id)pbui_resizedImageForCurrentMagnifyMode;	// IMP=0x001000000000d5c4
- (id)pbui_imageByManipulatingInDeviceColorSpaceWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d1b5
- (struct CGColorSpace *)pbui_colorSpace;	// IMP=0x001000000000d18a
- (id)pbui_resizeImageToSize:(struct CGSize)arg1;	// IMP=0x001000000000ce81
- (id)pbui_resizeImageToSize:(struct CGSize)arg1 preservingAspectRatio:(_Bool)arg2;	// IMP=0x001000000000cd90
- (id)pbui_scaleImage:(double)arg1 canUseIOSurface:(_Bool)arg2;	// IMP=0x001000000000cc74
- (id)pbui_scaleImage:(double)arg1;	// IMP=0x001000000000cc5d
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3 canUseIOSurface:(_Bool)arg4;	// IMP=0x001000000000c4a1
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 canUseIOSurface:(_Bool)arg3;	// IMP=0x001000000000c488
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2 preservingAspectRatio:(_Bool)arg3;	// IMP=0x001000000000c471
- (id)pbui_cropImageWithRect:(struct CGRect)arg1 outputSize:(struct CGSize)arg2;	// IMP=0x001000000000c45a
- (id)pbui_CGImageBackedImageUsingDataProvider;	// IMP=0x001000000000c18c
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1 skipCIF10FitsInSRGBCheck:(_Bool)arg2;	// IMP=0x001000000000bf91
- (id)pbui_CGImageBackedImageWithMaximumBitsPerComponent:(unsigned long long)arg1;	// IMP=0x001000000000bf7d
- (id)pbui_CGImageBackedImage;	// IMP=0x001000000000bf64
- (id)wrappedIOSurface;	// IMP=0x001000000000b81d
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImage.h>

@class UIImageView;

@interface UIImage (Utilities)
+ (struct CGRect)vk_aspectFitImageFrameForViewWithFrame:(struct CGRect)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x00200000000d4ad4
+ (id)vk_imageWithColor:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00200000000d4a17
+ (id)vk_fileIconForURL:(id)arg1 withPreferredSize:(struct CGSize)arg2;	// IMP=0x00200000000d4354
+ (id)vk_orientationMetadataFromImageOrientation:(long long)arg1;	// IMP=0x00200000000d327e
+ (id)vk_imageWithData:(id)arg1;	// IMP=0x00200000000d31f6
+ (id)vk_imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x00200000000d317e
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1;	// IMP=0x00200000000d316c
+ (id)vk_imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;	// IMP=0x00200000000d3153
+ (id)vk_imageWithCIImage:(id)arg1;	// IMP=0x00200000000d2fa2
+ (id)vk_orientedImageFromImage:(id)arg1 toOrientation:(long long)arg2;	// IMP=0x00200000000d2f05
+ (id)vk_orientedImageFromImage:(id)arg1 fromOrientation:(long long)arg2;	// IMP=0x00200000000d2e1e
+ (id)vk_orientedImageFromCGImage:(struct CGImage *)arg1 scale:(double)arg2 transform:(struct CGAffineTransform)arg3;	// IMP=0x00200000000d2c1c
+ (id)vk_UIImageFromCIImage:(id)arg1;	// IMP=0x00200000000d2b2e
+ (id)vk_symbolImageWithName:(id)arg1;	// IMP=0x00200000000d28d5
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x00200000000d2321
+ (id)vk_imageNamed:(id)arg1 withTint:(id)arg2;	// IMP=0x00200000000d2287
+ (id)vk_imageWithContentsOfURL:(id)arg1;	// IMP=0x00200000000d2200
- (struct CGRect)vk_cropRectZeroAlpha;	// IMP=0x00100000000d4c3d
- (id)vk_decodeInBackground;	// IMP=0x00100000000d48fd
- (void)vk_decodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d46cf
- (void)vk_imageDataWithRequirements:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d3b1d
- (id)vk_imageDataWithRequirements:(id)arg1;	// IMP=0x00100000000d3929
- (id)vk_imageDataWithUTType:(id)arg1 metadata:(id)arg2;	// IMP=0x00100000000d376f
- (id)vk_imageDataWithUTType:(id)arg1;	// IMP=0x00100000000d3689
- (id)vk_HEICDataLossless;	// IMP=0x00100000000d366f
- (id)vk_HEICData;	// IMP=0x00100000000d3655
- (id)vk_HEICDataWithCompressionQuality:(double)arg1 orientation:(long long)arg2;	// IMP=0x00100000000d3558
- (id)vk_HEICDataWithCompressionQuality:(double)arg1;	// IMP=0x00100000000d3515
- (id)vk_PNGDataWithOrientation:(long long)arg1;	// IMP=0x00100000000d347a
- (id)vk_PNGData;	// IMP=0x00100000000d340f
- (id)vk_JPEGDataWithOrientation:(long long)arg1;	// IMP=0x00100000000d3374
- (id)vk_JPEGData;	// IMP=0x00100000000d3343
- (unsigned int)vk_cgImagePropertyOrientation;	// IMP=0x00100000000d3264
- (id)vk_horizontallyMirroredImage;	// IMP=0x00100000000d320f
- (long long)vk_imageOrientation;	// IMP=0x00100000000d31e4
- (id)vk_ciImage;	// IMP=0x00100000000d3141
- (struct CGImage *)vk_cgImageGeneratingIfNecessary;	// IMP=0x00100000000d3009
- (struct CGImage *)vk_cgImage;	// IMP=0x00100000000d2fef
- (id)vk_imageFromSubrect:(struct CGRect)arg1;	// IMP=0x00100000000d28ee
- (id)vk_scaledImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00100000000d2797
- (id)vk_scaledImageMaxDimension:(double)arg1 scale:(double)arg2;	// IMP=0x00100000000d2711
- (id)vk_scaledImageMinDimension:(double)arg1 scale:(double)arg2;	// IMP=0x00100000000d268b
@property(readonly, nonatomic) UIImageView *vk_imageView;
- (id)vk_imageWithTint:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00100000000d23c5
@end

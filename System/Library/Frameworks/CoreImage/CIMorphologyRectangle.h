//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIMorphologyRectangle : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputWidth;	// 80 = 0x50
    NSNumber *inputHeight;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000012fa99
@property(retain, nonatomic) NSNumber *inputHeight; // @synthesize inputHeight;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000012fd6b
- (_Bool)_doMinimum;	// IMP=0x000000000012fd63
- (_Bool)_isIdentity;	// IMP=0x000000000012fd16

@end

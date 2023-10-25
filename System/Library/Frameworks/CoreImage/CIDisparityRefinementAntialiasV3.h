//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDisparityRefinementAntialiasV3 : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputPreprocImage;	// 80 = 0x50
    CIImage *inputDisparityWeightImage;	// 88 = 0x58
    NSDictionary *inputTuningParameters;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
}

@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) CIImage *inputDisparityWeightImage; // @synthesize inputDisparityWeightImage;
@property(retain) CIImage *inputPreprocImage; // @synthesize inputPreprocImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001bbda6
- (id)antialiasKernel;	// IMP=0x00000000001bbd49

@end

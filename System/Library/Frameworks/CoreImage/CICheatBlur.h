//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CICheatBlur : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputAmount;	// 80 = 0x50
}

+ (id)customAttributes;	// IMP=0x006000000003ed69
- (id)outputImage;	// IMP=0x000000000003e702
- (id)_CICross4;	// IMP=0x000000000003e6bf
- (id)_CIBox6;	// IMP=0x000000000003e67c
- (id)_CIBox4;	// IMP=0x000000000003e639

@end

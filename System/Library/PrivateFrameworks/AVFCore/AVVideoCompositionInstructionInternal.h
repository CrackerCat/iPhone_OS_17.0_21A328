//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionInstructionInternal : NSObject
{
    CDStruct_e83c9415 timeRange;	// 8 = 0x8
    struct CGColor *backgroundColor;	// 56 = 0x38
    NSArray *layerInstructions;	// 64 = 0x40
    _Bool enablePostProcessing;	// 72 = 0x48
    NSString *blendingTransferFunction;	// 80 = 0x50
    NSArray *requiredSourceSampleDataTrackIDs;	// 88 = 0x58
}

@end

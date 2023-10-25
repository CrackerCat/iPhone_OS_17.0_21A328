//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, VCPCNNPetsDetectorV2, VCPCNNPetsKeypointsDetector;

__attribute__((visibility("hidden")))
@interface VCPImagePetsKeypointsAnalyzer
{
    int _maxNumRegions;	// 8 = 0x8
    int _inputWidth;	// 12 = 0xc
    int _inputHeight;	// 16 = 0x10
    VCPCNNPetsDetectorV2 *_petsDetector;	// 24 = 0x18
    VCPCNNPetsKeypointsDetector *_petsKeypointsDetector;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000010b987
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;	// IMP=0x000000000010b95f
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 petsDetections:(id)arg3 results:(id *)arg4 cancel:(CDUnknownBlockType)arg5;	// IMP=0x000000000010a44a
- (int)preferredInputFormat:(int *)arg1 height:(int *)arg2 format:(unsigned int *)arg3;	// IMP=0x000000000010a40f
- (id)initWithMaxNumRegions:(int)arg1 forceCPU:(_Bool)arg2 sharedModel:(_Bool)arg3;	// IMP=0x000000000010a276

@end

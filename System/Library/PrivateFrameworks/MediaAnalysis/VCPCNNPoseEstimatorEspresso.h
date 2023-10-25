//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimatorEspresso
{
    VCPCNNModelEspresso *_modelEspresso;	// 8 = 0x8
    float *_inputData;	// 16 = 0x10
}

+ (id)sharedModel:(id)arg1;	// IMP=0x0060000000071d65
- (void).cxx_destruct;	// IMP=0x000000000007217c
- (void)dealloc;	// IMP=0x0000000000072136
- (int)computePoseScore:(float *)arg1;	// IMP=0x0000000000071e9d
- (float *)getInputBuffer;	// IMP=0x0000000000071d54
- (id)init;	// IMP=0x0000000000071bac

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ShotflowDetectorANODv3
{
}

+ (id)filterThresholds;	// IMP=0x00400000000efb97
+ (float)defaultFaceDetectionPrecisionRecallThreshold;	// IMP=0x00400000000efb89
+ (Class)shotflowNetworkClass;	// IMP=0x00400000000efb78
+ (id)supportedLabelKeys;	// IMP=0x00400000000efb15
- (id)nmsBoxes:(id)arg1;	// IMP=0x00000000000f015d
- (id)getIndexBoxes:(id)arg1 filterThresholdIndex:(unsigned long long)arg2;	// IMP=0x00000000000f0088
- (id)processBoxes:(id)arg1 withHeight:(float)arg2 andWidth:(float)arg3;	// IMP=0x00000000000eff30
- (id)initWithNetwork:(id)arg1;	// IMP=0x00000000000efedb
- (id)initWithNetwork:(id)arg1 filterThresholds:(id)arg2;	// IMP=0x00000000000efe86
@property(nonatomic) float faceDetectionPrecisionRecallThreshold;

@end

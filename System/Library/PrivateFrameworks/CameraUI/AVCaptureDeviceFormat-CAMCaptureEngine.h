//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVCaptureDeviceFormat.h>

@interface AVCaptureDeviceFormat (CAMCaptureEngine)
- (double)cam_maximumFrameRate;	// IMP=0x00300000001f807d
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;	// IMP=0x00300000001f7ff9
- (long long)cam_compareUsingBinning:(id)arg1;	// IMP=0x00300000001f7f91
- (long long)cam_compareUsingQuality:(id)arg1;	// IMP=0x00300000001f7f30
- (long long)cam_compareUsingDimensions:(id)arg1;	// IMP=0x00300000001f7e8c
@property(readonly, nonatomic) _Bool cam_supportsPortraitFrontFacingZoomed;
- (_Bool)cam_supportsPanoramaConfiguration:(id)arg1;	// IMP=0x00300000001f7b76
- (_Bool)cam_supportsFrameDuration:(CDStruct_198678f7)arg1;	// IMP=0x00300000001f7971
- (_Bool)cam_supportsFrameRate:(double)arg1;	// IMP=0x00300000001f7822
- (_Bool)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4 enableProResVideo:(_Bool)arg5;	// IMP=0x00300000001f76b1
- (_Bool)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2 enableProResVideo:(_Bool)arg3;	// IMP=0x00300000001f763f
- (CDStruct_1ef3fb1f)_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;	// IMP=0x00300000001f75be
- (CDStruct_198678f7)cam_frameDurationForVideoConfiguration:(long long)arg1;	// IMP=0x00300000001f7584
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;	// IMP=0x00300000001f74ec
@end

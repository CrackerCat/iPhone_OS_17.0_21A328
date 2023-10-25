//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADRemoveBackgroundMaskRequest, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface MADImageRemoveBackgroundMaskTask
{
    MADRemoveBackgroundMaskRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
}

+ (id)dependencies;	// IMP=0x00100000002a2fc2
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00100000002a2dd7
- (void).cxx_destruct;	// IMP=0x00000000002a46c6
- (int)run;	// IMP=0x00000000002a2fcf
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x00000000002a2d10

@end

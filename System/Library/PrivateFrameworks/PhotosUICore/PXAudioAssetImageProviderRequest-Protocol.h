//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXImageRequestOptions;
@protocol PXDisplayAsset;

@protocol PXAudioAssetImageProviderRequest
@property(readonly, nonatomic) CDUnknownBlockType resultHandler;
@property(readonly, nonatomic) PXImageRequestOptions *options;
@property(readonly, nonatomic) long long contentMode;
@property(readonly, nonatomic) struct CGSize targetSize;
@property(readonly, nonatomic) id <PXDisplayAsset> asset;
- (id)init;
@end

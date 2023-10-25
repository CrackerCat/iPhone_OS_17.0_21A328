//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PFStoryRecipeDisplayAssetNormalization;
@protocol PXStoryClip, PXStoryResource;

@protocol PXStoryClip <NSObject>
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly, nonatomic) PFStoryRecipeDisplayAssetNormalization *colorNormalization;
@property(readonly, nonatomic) CDStruct_5c5366e1 videoTimeRange;
@property(readonly, nonatomic) CDStruct_7f86bb89 info;
@property(readonly, nonatomic) id <PXStoryResource> resource;
@property(readonly, nonatomic) long long identifier;
- (id <PXStoryClip>)copyWithInfo:(CDStruct_7f86bb89)arg1;
- (_Bool)isVisuallyEqualToClip:(id <PXStoryClip>)arg1;
- (_Bool)isEqualToClip:(id <PXStoryClip>)arg1;
- (CDStruct_5c5366e1)playbackTimeRangeForClipDuration:(double)arg1;
@end

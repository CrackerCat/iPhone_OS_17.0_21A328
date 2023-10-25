//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSNumber, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface CKMomentSharePlaceholderAsset : NSObject
{
    UIImage *_cachedImage;	// 8 = 0x8
    float _audioScore;	// 16 = 0x10
}

+ (id)placeholderImage;	// IMP=0x00100000003151e4
+ (id)sharedInstance;	// IMP=0x0010000000314f85
- (void).cxx_destruct;	// IMP=0x00000000003153db
@property(readonly, nonatomic) float audioScore; // @synthesize audioScore=_audioScore;
@property(readonly, nonatomic) double aspectRatio;
- (struct CGSize)size;	// IMP=0x0000000000315342
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x0000000000315298
@property(readonly, nonatomic) UIImage *placeholderImage;
@property(readonly, nonatomic) NSString *uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003151cc
@property(readonly, nonatomic) _Bool isInSharedLibrary;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x0000000000315173
@property(readonly, nonatomic) Class defaultImageProviderClass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isInCloud;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
- (id)init;	// IMP=0x0000000000314fda

// Remaining properties
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *importDate;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) _Bool isSpatialMedia;
@property(readonly, nonatomic) CDStruct_1b6d18a9 livePhotoVideoDuration;
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) long long originalFileSize;
@property(readonly, nonatomic) unsigned short playbackVariation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailVersion;

@end

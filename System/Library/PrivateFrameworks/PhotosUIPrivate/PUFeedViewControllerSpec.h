//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSIndexSet, PUPhotosGridViewControllerSpec;

__attribute__((visibility("hidden")))
@interface PUFeedViewControllerSpec : NSObject
{
    unsigned short _squareThumbnailFastImageFormat;	// 8 = 0x8
    unsigned short _squareThumbnailQualityImageFormat;	// 10 = 0xa
    unsigned short _smallTileFastImageFormat;	// 12 = 0xc
    unsigned short _smallTileQualityImageFormat;	// 14 = 0xe
    unsigned short _smallTilePanoQualityImageFormat;	// 16 = 0x10
    unsigned short _mediumTileFastImageFormat;	// 18 = 0x12
    unsigned short _mediumTileQualityImageFormat;	// 20 = 0x14
    unsigned short _largeTileFastImageFormat;	// 22 = 0x16
    unsigned short _largeTileQualityImageFormat;	// 24 = 0x18
    unsigned short _veryLargeTileFastImageFormat;	// 26 = 0x1a
    unsigned short _veryLargeTileQualityImageFormat;	// 28 = 0x1c
    struct CGSize _squareThumbnailMaximumSize;	// 32 = 0x20
    struct CGSize _smallTileMaximumFittingSize;	// 48 = 0x30
    double _smallTilePanoAspectRatio;	// 64 = 0x40
    struct CGSize _mediumTileMaximumFillingSize;	// 72 = 0x48
    struct CGSize _largeTileMaximumFillingSize;	// 88 = 0x58
    _Bool _shouldUseAspectThumbnails;	// 104 = 0x68
    _Bool _shouldHideBarsInLandscape;	// 105 = 0x69
    _Bool _shouldShowInvitationsInPopover;	// 106 = 0x6a
    _Bool _shouldUseFullscreenLayout;	// 107 = 0x6b
    NSIndexSet *_qualityImageFormats;	// 112 = 0x70
    long long _largeNumberOfSubjectsForLikes;	// 120 = 0x78
    PUFeedViewControllerSpec *_popoverFeedViewControllerSpec;	// 128 = 0x80
    PUPhotosGridViewControllerSpec *_gridSpec;	// 136 = 0x88
    long long _promptStyle;	// 144 = 0x90
    double _standardSideMargins;	// 152 = 0x98
    struct CGSize _minimumVideoTileSize;	// 160 = 0xa0
    struct CGSize _thumbnailSize;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000002404df
@property(readonly, nonatomic) double standardSideMargins; // @synthesize standardSideMargins=_standardSideMargins;
@property(readonly, nonatomic) _Bool shouldUseFullscreenLayout; // @synthesize shouldUseFullscreenLayout=_shouldUseFullscreenLayout;
@property(readonly, nonatomic) long long promptStyle; // @synthesize promptStyle=_promptStyle;
@property(readonly, nonatomic) PUPhotosGridViewControllerSpec *gridSpec; // @synthesize gridSpec=_gridSpec;
@property(readonly, nonatomic) PUFeedViewControllerSpec *popoverFeedViewControllerSpec; // @synthesize popoverFeedViewControllerSpec=_popoverFeedViewControllerSpec;
@property(readonly, nonatomic) _Bool shouldShowInvitationsInPopover; // @synthesize shouldShowInvitationsInPopover=_shouldShowInvitationsInPopover;
@property(readonly, nonatomic) _Bool shouldHideBarsInLandscape; // @synthesize shouldHideBarsInLandscape=_shouldHideBarsInLandscape;
@property(readonly, nonatomic) _Bool shouldUseAspectThumbnails; // @synthesize shouldUseAspectThumbnails=_shouldUseAspectThumbnails;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, nonatomic) long long largeNumberOfSubjectsForLikes; // @synthesize largeNumberOfSubjectsForLikes=_largeNumberOfSubjectsForLikes;
@property(readonly, nonatomic) struct CGSize minimumVideoTileSize; // @synthesize minimumVideoTileSize=_minimumVideoTileSize;
@property(copy, nonatomic, setter=_setQualityImageFormats:) NSIndexSet *qualityImageFormats; // @synthesize qualityImageFormats=_qualityImageFormats;
- (double)spacingBetweenSectionWithInfo:(id)arg1 andHeaderWithGroupID:(id)arg2;	// IMP=0x000000000024042e
- (void)configureSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1 betweenSectionWithInfo:(id)arg2 andSectionWithInfo:(id)arg3 joined:(_Bool)arg4 collectionViewType:(long long)arg5;	// IMP=0x000000000024012f
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;	// IMP=0x0000000000240127
- (void)getReferenceMaximumLength:(double *)arg1 minimumNumberOfTilesToOmit:(long long *)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;	// IMP=0x0000000000240121
- (void)configureGradientCell:(id)arg1 forSectionHeaderBackgroundInCollectionViewType:(long long)arg2;	// IMP=0x000000000024011b
- (struct CGSize)thumbnailSizeForImageSize:(struct CGSize)arg1;	// IMP=0x0000000000240105
- (id)defaultSubTitleTextAttributesForCollectionViewType:(long long)arg1;	// IMP=0x00000000002400ae
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;	// IMP=0x00000000002400a6
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;	// IMP=0x000000000024009e
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(_Bool)arg7;	// IMP=0x0000000000240098
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x0000000000240092
- (void)configureTextCell:(id)arg1 forSectionFooterWithDateText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x000000000024008c
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;	// IMP=0x0000000000240086
- (void)configureTextCell:(id)arg1 forEventWithDescriptionPhrase:(id)arg2;	// IMP=0x000000000023ffa3
- (void)configureTextCell:(id)arg1 forLikesWithDescriptionPhrase:(id)arg2 date:(id)arg3;	// IMP=0x000000000023fecd
- (void)configureTextCell:(id)arg1 forCommentWithDescriptionPhrase:(id)arg2 date:(id)arg3;	// IMP=0x000000000023fdf7
- (void)configureTextCell:(id)arg1 forCaption:(id)arg2 date:(id)arg3;	// IMP=0x000000000023fcc3
- (double)textSpacingBetweenText:(id)arg1 detailText:(id)arg2;	// IMP=0x000000000023fb75
- (_Bool)shouldShowCommentBadgesInCollectionViewType:(long long)arg1;	// IMP=0x000000000023fb6d
- (void)configureCommentSeparatorMetrics:(inout struct PUFeedSeparatorMetrics *)arg1;	// IMP=0x000000000023faeb
- (struct UIEdgeInsets)contentInsetsForSectionType:(long long)arg1 collectionViewType:(long long)arg2;	// IMP=0x000000000023fa5e
- (struct UIEdgeInsets)textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;	// IMP=0x000000000023f9d3
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize)arg3 collectionViewContentInset:(out struct UIEdgeInsets *)arg4;	// IMP=0x000000000023f862
- (void)setLayoutReferenceWidth:(double)arg1;	// IMP=0x000000000023f85c
- (void)getFastImageFormat:(out unsigned short *)arg1 qualityImageFormat:(out unsigned short *)arg2 forSourceSize:(struct CGSize)arg3 destinationSize:(struct CGSize)arg4 allowCrop:(_Bool)arg5;	// IMP=0x000000000023f78b
- (void)updateFormats;	// IMP=0x000000000023f048
- (_Bool)canUseSimplePreheatManager;	// IMP=0x000000000023f040
- (id)init;	// IMP=0x000000000023efd3

@end

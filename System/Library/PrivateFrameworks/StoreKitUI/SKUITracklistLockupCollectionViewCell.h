//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSString, SKUIGradientView, SKUIPreviewProgressIndicator, SKUITrackViewElement, SKUITracklistColumnData, SUPlayerStatus, UIView;

__attribute__((visibility("hidden")))
@interface SKUITracklistLockupCollectionViewCell
{
    NSMapTable *_buyButtonDescriptorToButton;	// 8 = 0x8
    SKUITracklistColumnData *_columnData;	// 16 = 0x10
    NSMutableDictionary *_columnViewsByIndex;	// 24 = 0x18
    NSMapTable *_imageViewToImageResourceCacheKey;	// 32 = 0x20
    SUPlayerStatus *_lastPlayerStatus;	// 40 = 0x28
    SKUIGradientView *_offerConfirmationGradientView;	// 48 = 0x30
    SKUIPreviewProgressIndicator *_previewProgressIndicator;	// 56 = 0x38
    long long _previewState;	// 64 = 0x40
    UIView *_separatorView;	// 72 = 0x48
    SKUITrackViewElement *_track;	// 80 = 0x50
}

+ (id)_attributedStringForOrdinal:(id)arg1 context:(id)arg2;	// IMP=0x001000000023393f
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000230da2
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x0010000000230414
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000002303bb
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002301f9
- (void).cxx_destruct;	// IMP=0x00000000002345e3
- (void)_resolvePreviewStateAfterTransitionForFlipView:(id)arg1;	// IMP=0x00000000002343c8
- (id)_previewMediaURL;	// IMP=0x0000000000234345
- (id)_previewControlViewElement;	// IMP=0x0000000000234323
- (id)_previewColumnView;	// IMP=0x0000000000234139
- (void)_layoutConfirmationGradientRelativeToView:(id)arg1 alpha:(double)arg2;	// IMP=0x0000000000233ea5
- (void)_enumerateViewElementViewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000233c40
- (id)_addFlipContainerViewWithFrontView:(id)arg1 backView:(id)arg2;	// IMP=0x0000000000233aab
- (void)_audioPlayerStatusChangeNotification:(id)arg1;	// IMP=0x0000000000233772
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x00000000002334ff
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x00000000002334e3
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000002332a0
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x0000000000232f8c
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;	// IMP=0x0000000000232f3b
- (void)layoutSubviews;	// IMP=0x0000000000232578
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002323a8
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000023212a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x0000000000231e58
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002311e4
- (void)togglePreviewPlaybackAnimated:(_Bool)arg1;	// IMP=0x0000000000230004
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000022fb0d
- (void)hidePreviewProgressAnimated:(_Bool)arg1;	// IMP=0x000000000022f803
- (void)dealloc;	// IMP=0x000000000022f781
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000022f610

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

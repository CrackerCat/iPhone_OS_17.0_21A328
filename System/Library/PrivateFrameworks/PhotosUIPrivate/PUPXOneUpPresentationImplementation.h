//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUOneUpPresentationHelper, PXAssetReference, PXOneUpPresentation;

__attribute__((visibility("hidden")))
@interface PUPXOneUpPresentationImplementation : NSObject
{
    PUOneUpPresentationHelper *__helper;	// 8 = 0x8
    PXOneUpPresentation *__oneUpPresentation;	// 16 = 0x10
    CDUnknownBlockType _stateChangeHandler;	// 24 = 0x18
}

+ (id)implementationForOneUpPresentation:(id)arg1;	// IMP=0x00100000003b0832
- (void).cxx_destruct;	// IMP=0x00000000003b0346
@property(copy, nonatomic) CDUnknownBlockType stateChangeHandler; // @synthesize stateChangeHandler=_stateChangeHandler;
@property(readonly, nonatomic) __weak PXOneUpPresentation *_oneUpPresentation; // @synthesize _oneUpPresentation=__oneUpPresentation;
@property(readonly, nonatomic) PUOneUpPresentationHelper *_helper; // @synthesize _helper=__helper;
- (void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2;	// IMP=0x00000000003b00f5
- (void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x00000000003b0082
- (id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2;	// IMP=0x00000000003affe1
- (id)oneUpPresentationHelper:(id)arg1 regionOfInterestForAssetReference:(id)arg2 cropInsets:(struct UIEdgeInsets *)arg3;	// IMP=0x00000000003aff7f
- (id)oneUpPresentationHelperSearchQueryMatchInfo:(id)arg1;	// IMP=0x00000000003aff2f
- (_Bool)oneUpPresentationHelperShouldLeaveContentOnSecondScreen:(id)arg1;	// IMP=0x00000000003aff27
- (id)oneUpPresentationHelperScrollView:(id)arg1;	// IMP=0x00000000003afed7
- (id)oneUpPresentationHelperViewHostingTilingView:(id)arg1;	// IMP=0x00000000003afe5d
- (void)oneUpPresentationHelperStateDidChange:(id)arg1;	// IMP=0x00000000003afde0
- (unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1;	// IMP=0x00000000003afd19
- (_Bool)oneUpPresentationHelperWantsShowInLibraryButton:(id)arg1;	// IMP=0x00000000003afcd5
- (_Bool)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1;	// IMP=0x00000000003afc91
- (_Bool)oneUpPresentationHelperShouldAutoPlay:(id)arg1;	// IMP=0x00000000003afc4d
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000003afc09
- (id)oneUpPresentationHelperOriginalViewController:(id)arg1;	// IMP=0x00000000003afbb9
- (id)oneUpPresentationHelperViewController:(id)arg1;	// IMP=0x00000000003afb69
- (id)regionOfInterestForAssetReference:(id)arg1;	// IMP=0x00000000003afaef
- (_Bool)handlePresentingPinchGestureRecognizer:(id)arg1;	// IMP=0x00000000003afa81
- (void)invalidatePresentingGeometry;	// IMP=0x00000000003afa42
- (void)stopAnimated:(_Bool)arg1;	// IMP=0x00000000003af9de
@property(readonly, nonatomic) _Bool canStop;
- (void)commitPreviewViewController:(id)arg1;	// IMP=0x00000000003af931
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;	// IMP=0x00000000003af8bc
- (id)previewViewControllerAllowingActions:(_Bool)arg1;	// IMP=0x00000000003af6c9
- (_Bool)startWithConfigurationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003af4b2
@property(readonly, nonatomic) PXAssetReference *lastViewedAssetReference;
- (_Bool)canStartAnimated:(_Bool)arg1;	// IMP=0x00000000003af413
- (void)registerStateChangeHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003af34b
- (void)presentingViewControllerViewDidDisappear:(_Bool)arg1;	// IMP=0x00000000003af301
- (void)presentingViewControllerViewWillDisappear:(_Bool)arg1;	// IMP=0x00000000003af2b7
- (void)presentingViewControllerViewDidAppear:(_Bool)arg1;	// IMP=0x00000000003af26d
- (void)presentingViewControllerViewIsAppearing:(_Bool)arg1;	// IMP=0x00000000003af223
- (void)presentingViewControllerViewWillAppear:(_Bool)arg1;	// IMP=0x00000000003af1d9
- (id)_initWithOneUpPresentation:(id)arg1;	// IMP=0x00000000003af096
- (id)init;	// IMP=0x00000000003af082

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

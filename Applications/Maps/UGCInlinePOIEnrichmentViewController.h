//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UGCInlinePOIEnrichmentController, UGCPOIEnrichmentForm, UGCPOIEnrichmentViewController;

@interface UGCInlinePOIEnrichmentViewController : UIViewController
{
    UGCPOIEnrichmentViewController *_contentVC;	// 8 = 0x8
    _Bool _formInteractionEnabled;	// 16 = 0x10
    UGCInlinePOIEnrichmentController *_enrichmentController;	// 24 = 0x18
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a380d4
@property(readonly, nonatomic) UGCPOIEnrichmentForm *poiEnrichmentForm; // @synthesize poiEnrichmentForm=_poiEnrichmentForm;
@property(nonatomic) _Bool formInteractionEnabled; // @synthesize formInteractionEnabled=_formInteractionEnabled;
@property(nonatomic) __weak UGCInlinePOIEnrichmentController *enrichmentController; // @synthesize enrichmentController=_enrichmentController;
- (void)poiEnrichmentViewController:(id)arg1 didSelectTermsOfServiceURL:(id)arg2;	// IMP=0x0010000000a3801d
- (void)poiEnrichmentViewController:(id)arg1 captureUserAction:(int)arg2 value:(id)arg3 target:(int)arg4;	// IMP=0x0010000000a37fa3
- (void)poiEnrichmentViewController:(id)arg1 captureUserActionForRatingCategoryState:(long long)arg2 value:(id)arg3 target:(int)arg4;	// IMP=0x0010000000a37f29
- (void)poiEnrichmentViewController:(id)arg1 didSelectAddPhotosUsingSourceType:(long long)arg2 presentationOptions:(id)arg3;	// IMP=0x0010000000a37eb2
- (void)poiEnrichmentViewController:(id)arg1 presentInformedConsentIfNeededWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a37e49
- (void)formDidChange:(id)arg1;	// IMP=0x0010000000a37d7c
- (void)viewDidLoad;	// IMP=0x0010000000a37ade
- (id)initWithPOIEnrichmentForm:(id)arg1;	// IMP=0x0010000000a37a30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

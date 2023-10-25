//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuickLook/NSObject-Protocol.h>

@class NSDictionary, UIImage, UIView, UIViewController, VKCImageAnalysisInteraction;

@protocol QLImageAnalysisManagerDelegate <NSObject>
@property(readonly, nonatomic) UIImage *imageForAnalysis;
@property(readonly, nonatomic) UIView *imageAnalysisView;

@optional
@property(readonly, nonatomic) NSDictionary *clientPreviewOptions;
- (UIViewController *)presentingViewControllerForImageAnalysisInteraction:(VKCImageAnalysisInteraction *)arg1;
- (void)imageAnalysisInteractionDidDismissVisualSearchController;
- (void)imageAnalysisInteractionWillPresentVisualSearchController;
- (void)imageAnalyzerWantsUpdateOverlayViews;
- (void)imageAnalyzerWantsUpdateInfoButtonWithAnimation:(_Bool)arg1;
@end

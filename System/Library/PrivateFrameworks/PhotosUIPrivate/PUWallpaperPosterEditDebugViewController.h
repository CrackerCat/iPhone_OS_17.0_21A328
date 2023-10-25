//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, NSString, PUWallpaperPosterDateView, PUWallpaperPosterEditToolBar, PUWallpaperPosterEditorController, UIAction, UIButton, UIPageControl, UIScrollView, UIView, _PUWallpaperPosterEditorDebugEnvironment, _PUWallpaperPosterEditorDebugPreferences;
@protocol PUWallpaperEditingLook;

__attribute__((visibility("hidden")))
@interface PUWallpaperPosterEditDebugViewController : UIViewController
{
    _Bool _needsUpdateUserTransform;	// 8 = 0x8
    _Bool _perspectiveZoomEnabled;	// 9 = 0x9
    PUWallpaperPosterEditorController *_posterEditorController;	// 16 = 0x10
    NSArray *_availableLooks;	// 24 = 0x18
    long long _currentLookIndex;	// 32 = 0x20
    UIScrollView *_looksScrollView;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
    UIView *_foregroundView;	// 56 = 0x38
    UIView *_floatingView;	// 64 = 0x40
    UIView *_contentOverlayView;	// 72 = 0x48
    PUWallpaperPosterEditToolBar *_editToolBar;	// 80 = 0x50
    UIAction *_tapToRadarAction;	// 88 = 0x58
    UIPageControl *_pageControl;	// 96 = 0x60
    UIButton *_lookLabelButton;	// 104 = 0x68
    PUWallpaperPosterDateView *_dateView;	// 112 = 0x70
    _PUWallpaperPosterEditorDebugEnvironment *_editEnvironment;	// 120 = 0x78
    _PUWallpaperPosterEditorDebugPreferences *_editPreferences;	// 128 = 0x80
    CDUnknownBlockType _colorPickerChangeHandler;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000005e2e73
@property(copy, nonatomic) CDUnknownBlockType colorPickerChangeHandler; // @synthesize colorPickerChangeHandler=_colorPickerChangeHandler;
@property(retain, nonatomic) _PUWallpaperPosterEditorDebugPreferences *editPreferences; // @synthesize editPreferences=_editPreferences;
@property(retain, nonatomic) _PUWallpaperPosterEditorDebugEnvironment *editEnvironment; // @synthesize editEnvironment=_editEnvironment;
@property(retain, nonatomic) PUWallpaperPosterDateView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UIButton *lookLabelButton; // @synthesize lookLabelButton=_lookLabelButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIAction *tapToRadarAction; // @synthesize tapToRadarAction=_tapToRadarAction;
@property(retain, nonatomic) PUWallpaperPosterEditToolBar *editToolBar; // @synthesize editToolBar=_editToolBar;
@property(retain, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property(retain, nonatomic) UIView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIScrollView *looksScrollView; // @synthesize looksScrollView=_looksScrollView;
@property(nonatomic) long long currentLookIndex; // @synthesize currentLookIndex=_currentLookIndex;
@property(copy, nonatomic) NSArray *availableLooks; // @synthesize availableLooks=_availableLooks;
@property(retain, nonatomic) PUWallpaperPosterEditorController *posterEditorController; // @synthesize posterEditorController=_posterEditorController;
@property(nonatomic, getter=isPerspectiveZoomEnabled) _Bool perspectiveZoomEnabled; // @synthesize perspectiveZoomEnabled=_perspectiveZoomEnabled;
@property(readonly, nonatomic) UIAction *placeholderAction;
- (void)pu_endBackgroundTask:(id)arg1 completionStatus:(long long)arg2;	// IMP=0x00000000005e2b84
- (id)pu_beginBackgroundTaskForReason:(id)arg1;	// IMP=0x00000000005e2b7c
@property(readonly, nonatomic) _Bool pu_isDepthEffectDisallowed;
- (void)pu_requestDismissalWithAction:(long long)arg1;	// IMP=0x00000000005e2b46
- (void)updateActions;	// IMP=0x00000000005e2a7c
@property(readonly, copy, nonatomic) id <PUWallpaperEditingLook> pu_currentLook;
- (void)pu_updateLuminanceValuesForLooks;	// IMP=0x00000000005e2a0a
- (void)pu_updateLookProperties;	// IMP=0x00000000005e29f8
- (void)pu_updateLooks;	// IMP=0x00000000005e29e6
- (void)pu_updatePreferences:(CDUnknownBlockType)arg1;	// IMP=0x00000000005e296f
@property(readonly, nonatomic) _Bool pu_canApplyParallaxToViews;
- (void)presentColorPickerWithConfiguration:(id)arg1 changeHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005e27cf
- (void)colorPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00000000005e27bb
- (void)colorPickerViewController:(id)arg1 didSelectColor:(id)arg2 continuously:(_Bool)arg3;	// IMP=0x00000000005e273b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000005e239a
- (void)_handlePageControlSelectedPage:(id)arg1;	// IMP=0x00000000005e22b1
- (void)_dismissAndCancel:(id)arg1;	// IMP=0x00000000005e226d
- (void)_dismissAndSave:(id)arg1;	// IMP=0x00000000005e21ec
- (void)viewDidLayoutSubviews;	// IMP=0x00000000005e2044
- (_Bool)prefersStatusBarHidden;	// IMP=0x00000000005e203c
- (void)_setupSimulatedControls;	// IMP=0x00000000005e110b
- (void)_setupEditorViews;	// IMP=0x00000000005e0d6f
- (void)_updateLookControls;	// IMP=0x00000000005e0b5d
- (void)_updateLooks;	// IMP=0x00000000005e0993
- (void)_updateLookProperties;	// IMP=0x00000000005e07ec
- (void)_setupPosterEditorController;	// IMP=0x00000000005e0764
- (void)viewDidLoad;	// IMP=0x00000000005e066e
- (id)initWithAssets:(id)arg1 posterType:(long long)arg2 photoLibrary:(id)arg3;	// IMP=0x00000000005e0532
- (id)initWithExistingConfiguration:(id)arg1 assetDirectory:(id)arg2 overrideConfiguration:(id)arg3 photoLibrary:(id)arg4;	// IMP=0x00000000005e041c
- (id)initWithMigratorOfLegacyConfigurationType:(unsigned long long)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000005e0227
- (id)initWithPosterType:(long long)arg1 photoLibrary:(id)arg2;	// IMP=0x00000000005e0208
- (id)initWithAsset:(id)arg1 posterType:(long long)arg2;	// IMP=0x00000000005e0131
- (id)initWithAsset:(id)arg1;	// IMP=0x00000000005e005b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

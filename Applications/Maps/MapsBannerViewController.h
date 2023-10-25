//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class BNBannerSource, BSAction, GCDTimer, NSArray, NSLayoutConstraint, NSSet, NSString, NSURL, UIColor, UITapGestureRecognizer, UIView;
@protocol BNPresentableContext, BannerView, MapsBannerViewControllerDelegate, SBUISystemApertureAccessoryView, SBUISystemApertureAutomaticallyInvalidatable;

@interface MapsBannerViewController : UIViewController
{
    _Bool _aperturePresentation;	// 8 = 0x8
    _Bool _didShowControlsForArrival;	// 9 = 0x9
    id <SBUISystemApertureAutomaticallyInvalidatable> _alertingAssertion;	// 16 = 0x10
    NSLayoutConstraint *_widthConstraint;	// 24 = 0x18
    NSArray *_bannerConstraints;	// 32 = 0x20
    NSArray *_alternateBannerConstraints;	// 40 = 0x28
    double _cachedDisplayWidth;	// 48 = 0x30
    _Bool _waitingForDisplay;	// 56 = 0x38
    _Bool _didViewWillAppear;	// 57 = 0x39
    struct CGSize _deferredContentSize;	// 64 = 0x40
    NSString *_requestIdentifier;	// 80 = 0x50
    long long _activeLayoutMode;	// 88 = 0x58
    UIView<BannerView> *_bannerView;	// 96 = 0x60
    UIView<BannerView> *_alternateBannerView;	// 104 = 0x68
    BNBannerSource *_target;	// 112 = 0x70
    id <MapsBannerViewControllerDelegate> _delegate;	// 120 = 0x78
    GCDTimer *_timeoutTimer;	// 128 = 0x80
    GCDTimer *_apertureExpansionTimer;	// 136 = 0x88
    GCDTimer *_alternateBannerActiveTimer;	// 144 = 0x90
    UITapGestureRecognizer *_knobSelectRecognizer;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0020000000847fad
@property(retain, nonatomic) UITapGestureRecognizer *knobSelectRecognizer; // @synthesize knobSelectRecognizer=_knobSelectRecognizer;
@property(retain, nonatomic) GCDTimer *alternateBannerActiveTimer; // @synthesize alternateBannerActiveTimer=_alternateBannerActiveTimer;
@property(retain, nonatomic) GCDTimer *apertureExpansionTimer; // @synthesize apertureExpansionTimer=_apertureExpansionTimer;
- (id);	// IMP=0x0010000000847f4f
@property(retain, nonatomic) GCDTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(readonly, nonatomic) __weak id <MapsBannerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak BNBannerSource *target; // @synthesize target=_target;
@property(readonly, nonatomic) UIView<BannerView> *alternateBannerView; // @synthesize alternateBannerView=_alternateBannerView;
@property(readonly, nonatomic) UIView<BannerView> *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) long long activeLayoutMode; // @synthesize activeLayoutMode=_activeLayoutMode;
- (void)generateAttachmentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000008477fd
- (void)_wheelChangedWithEvent:(id)arg1;	// IMP=0x0010000000847765
- (void)_handleBackGesture:(id)arg1;	// IMP=0x0010000000847722
- (void)_handleSwipeGesture:(id)arg1;	// IMP=0x00100000008476df
- (void)_handleTapOnContent:(id)arg1;	// IMP=0x001000000084765c
- (void)_openMaps;	// IMP=0x00100000008472da
@property(readonly, copy, nonatomic) UIColor *keyColor;
@property(readonly, copy, nonatomic) NSString *elementIdentifier;
@property(readonly, copy, nonatomic) NSSet *backgroundActivitiesToSuppress;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property(readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property(readonly, nonatomic) long long maximumLayoutMode;
@property(readonly, nonatomic) long long preferredLayoutMode;
@property(readonly, nonatomic) unsigned long long presentationBehaviors;
@property(readonly, nonatomic) _Bool preventsInteractiveDismissal;
@property(readonly, nonatomic) long long contentRole;
- (id)systemApertureElementViewController;	// IMP=0x0010000000846e44
- (void)_updateShowsControls;	// IMP=0x0010000000846a06
- (void)_requestAlertingAssertionIfNecessary;	// IMP=0x0010000000846583
- (void)presentableWillNotAppearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x001000000084641e
- (void)presentableDidDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x0010000000846238
- (void)presentableWillDisappearAsBanner:(id)arg1 withReason:(id)arg2;	// IMP=0x00100000008460ba
- (void)presentableDidAppearAsBanner:(id)arg1;	// IMP=0x0010000000845f16
- (void)presentableWillAppearAsBanner:(id)arg1;	// IMP=0x0010000000845d55
@property(readonly, nonatomic) UIViewController *viewController;
@property(readonly, copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, copy, nonatomic) NSString *requesterIdentifier;
- (void)_dismissBannerWithReason:(id)arg1;	// IMP=0x0010000000845ad6
- (void)_revertToPrimaryBannerView;	// IMP=0x00100000008458e8
- (void)_revertToPrimaryBannerViewAfterDelay;	// IMP=0x0010000000845736
- (_Bool)_useSignificantUpdateSPI;	// IMP=0x00100000008456ed
- (void)_setApertureExpansionTimeout;	// IMP=0x00100000008454e5
- (void)_setTimeout;	// IMP=0x00100000008451cd
- (void)setPreferredContentSize:(struct CGSize)arg1;	// IMP=0x0010000000844fc6
- (void)postTemporaryAlternateBannerView:(id)arg1;	// IMP=0x0010000000844952
- (_Bool)_shouldExpandForGuidanceState:(id)arg1;	// IMP=0x0010000000844619
- (void)updateFromGuidanceState:(id)arg1;	// IMP=0x0010000000843aad
- (double)approximateWidth;	// IMP=0x0010000000843971
- (double)displayWidth;	// IMP=0x00100000008437e9
@property(readonly, copy) NSString *description;
- (id)accessibilityIdentifier;	// IMP=0x0010000000843728
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000843670
- (void)viewWillLayoutSubviewsWithTransitionCoordinator:(id)arg1;	// IMP=0x0010000000843488
- (void)_performViewWillAppear;	// IMP=0x00100000008432bc
- (void)_sceneDidActivate:(id)arg1;	// IMP=0x0010000000843188
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000843147
- (id)_contentView;	// IMP=0x001000000084306d
- (void)viewDidLoad;	// IMP=0x0010000000842ccc
- (void)loadView;	// IMP=0x0010000000842be3
- (void)dealloc;	// IMP=0x0010000000842b30
- (id)initWithRequestId:(id)arg1 target:(id)arg2 bannerView:(id)arg3 delegate:(id)arg4 aperturePresentation:(_Bool)arg5;	// IMP=0x00100000008426c8
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000008426c0

// Remaining properties
@property(readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property(readonly, nonatomic) _Bool attachedMinimalViewRequiresZeroPadding;
@property(nonatomic) _Bool canRequestAlertingAssertion;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDraggingDismissalEnabled) _Bool draggingDismissalEnabled;
@property(readonly, nonatomic, getter=isDraggingInteractionEnabled) _Bool draggingInteractionEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BSAction *launchAction;
@property(readonly, copy, nonatomic) NSURL *launchURL;
@property(nonatomic) unsigned long long minimalViewLayoutAxis;
@property(readonly, nonatomic) long long minimumLayoutMode;
@property(readonly, nonatomic) struct CGSize preferredCustomAspectRatio;
@property(readonly, nonatomic) long long preferredCustomLayout;
@property(readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property(readonly, nonatomic) long long presentableBehavior;
@property(nonatomic) __weak id <BNPresentableContext> presentableContext;
@property(readonly, nonatomic) long long presentableType;
@property(readonly, nonatomic) _Bool preventsAutomaticDismissal;
@property(readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) _Bool touchOutsideDismissalEnabled;

@end

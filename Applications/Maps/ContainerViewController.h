//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BackdropView, CardAnimation, CardAnimationManager, CardProvider, ContainerStack, ContainerStyleManager, ContainerTransitionManager, IOSBasedChromeViewController, MISSING_TYPE, MapGestureCardDismissalHelper, NSArray, NSMapTable, NSString, StatusBarBackgroundViewStyle, UIView, UIViewController;
@protocol ContaineeProtocol, ContainerDelegate, IOSBasedChromeContext, StatusBarSupplementaryView;

@interface ContainerViewController
{
    NSMapTable *_cards;	// 8 = 0x8
    ContainerTransitionManager *_transitionManager;	// 16 = 0x10
    ContainerStack *_containerStack;	// 24 = 0x18
    CardProvider *_cardProvider;	// 32 = 0x20
    BackdropView *_backdropView;	// 40 = 0x28
    NSArray *_backdropConstraints;	// 48 = 0x30
    double _nextHeight;	// 56 = 0x38
    double _lastValidBottomInset;	// 64 = 0x40
    _Bool _viewHasAppeared;	// 72 = 0x48
    _Bool _needToUpdateHeight;	// 73 = 0x49
    _Bool _shouldEndTransitionWhenAnimationCompletes;	// 74 = 0x4a
    _Bool _incompleteCompletion;	// 75 = 0x4b
    long long _edgeInsetPropagationCount;	// 80 = 0x50
    _Bool _willBeginDisplayingInLockScreen;	// 88 = 0x58
    NSMapTable *_resizingBlocksByObserver;	// 96 = 0x60
    MapGestureCardDismissalHelper *_cardDismissalHelper;	// 104 = 0x68
    _Bool _chromeHidden;	// 112 = 0x70
    _Bool _fullscreenMode;	// 113 = 0x71
    _Bool _transitioning;	// 114 = 0x72
    _Bool _preventEdgeInsetsUpdate;	// 115 = 0x73
    _Bool _useBackdropFullScreen;	// 116 = 0x74
    unsigned long long _containeeLayout;	// 120 = 0x78
    UIViewController<ContaineeProtocol> *_currentViewController;	// 128 = 0x80
    id <ContainerDelegate> _containerDelegate;	// 136 = 0x88
    id <IOSBasedChromeContext> _chromeContext;	// 144 = 0x90
    IOSBasedChromeViewController *_chromeViewController;	// 152 = 0x98
    UIView *_containerView;	// 160 = 0xa0
    CardAnimationManager *_animationManager;	// 168 = 0xa8
    ContainerStyleManager *_containerStyleManager;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000002080f8
@property(nonatomic) _Bool useBackdropFullScreen; // @synthesize useBackdropFullScreen=_useBackdropFullScreen;
@property(nonatomic) _Bool preventEdgeInsetsUpdate; // @synthesize preventEdgeInsetsUpdate=_preventEdgeInsetsUpdate;
@property(nonatomic) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) _Bool fullscreenMode; // @synthesize fullscreenMode=_fullscreenMode;
@property(nonatomic) _Bool chromeHidden; // @synthesize chromeHidden=_chromeHidden;
@property(readonly, nonatomic) ContainerStyleManager *containerStyleManager; // @synthesize containerStyleManager=_containerStyleManager;
@property(readonly, nonatomic) CardAnimationManager *animationManager; // @synthesize animationManager=_animationManager;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) __weak id <IOSBasedChromeContext> chromeContext; // @synthesize chromeContext=_chromeContext;
@property(nonatomic) __weak id <ContainerDelegate> containerDelegate; // @synthesize containerDelegate=_containerDelegate;
@property(readonly, nonatomic) unsigned long long containeeLayout; // @synthesize containeeLayout=_containeeLayout;
- (void)_dismissPresentedViewControllersIfNeededForViewController:(id)arg1;	// IMP=0x0010000000207997
- (double)_cardHeightForComputingBottomMapEdgeInsets;	// IMP=0x001000000020769b
- (void)willBeginDisplayingInSecureLockScreen;	// IMP=0x0010000000207671
- (void)_sequentiallyPresentViewControllers:(id)arg1 allowAnimations:(_Bool)arg2;	// IMP=0x0010000000207165
- (void)_internal_ensurePresentationsMatchContaineeStackAllowingFault:(_Bool)arg1 allowingAnimations:(_Bool)arg2 skipUnlock:(_Bool)arg3;	// IMP=0x0010000000206a97
- (void)assertPresentationStackAppearsCorrect;	// IMP=0x0010000000206839
- (_Bool)presentationStackAppearsCorrectWithInternalStack:(id)arg1 uikitStack:(id)arg2;	// IMP=0x0010000000206558
- (id)uikitPresentationStack;	// IMP=0x00100000002063fb
- (id)internalStackLessWaitingForPresentation;	// IMP=0x001000000020613c
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000205f3e
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000205ad6
- (_Bool)presentationControllerShouldDismiss:(id)arg1;	// IMP=0x0010000000205a0e
- (void)_sheetPresentationControllerDidInvalidateCurrentPresentedViewFrame:(id)arg1;	// IMP=0x0010000000205979
- (void)sheetPresentationControllerDidChangeSelectedDetentIdentifier:(id)arg1;	// IMP=0x00100000002055a5
- (void)requestDismissalWithCardDismissalHelper:(id)arg1;	// IMP=0x0010000000205536
- (double)dismissalRectTopEdgeForCardDismissalHelper:(id)arg1 coordinateSpace:(id)arg2;	// IMP=0x0010000000205415
- (_Bool)cardDismissalHelperShouldObserveGestures:(id)arg1;	// IMP=0x00100000002053d7
- (int)currentMapViewTargetForAnalytics;	// IMP=0x001000000020532e
- (int)currentUITargetForAnalytics;	// IMP=0x0010000000205285
- (unsigned long long)overriddenLayoutForCurrentController:(unsigned long long)arg1;	// IMP=0x00100000002050b8
- (void)updateHeightConstraintWithValue:(double)arg1;	// IMP=0x0010000000205027
- (void)_notifyObserversWithContainerStyle:(unsigned long long)arg1 value:(double)arg2;	// IMP=0x0010000000204ccc
- (void)_notifyResizingObserversWithValue:(double)arg1 onlyIfDragging:(_Bool)arg2;	// IMP=0x0010000000204a85
- (void)contentHeightUpdatedWithValue:(double)arg1;	// IMP=0x00100000002049e4
- (void)registerResizingObserver:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000204900
- (void)snapToLayout:(unsigned long long)arg1;	// IMP=0x0010000000204493
- (void)transitionEnded;	// IMP=0x001000000020444b
- (void)animateAlongsideCardTransition;	// IMP=0x00100000002043d0
- (void)_completeStateIfNeeded;	// IMP=0x0010000000204338
- (void)setLayoutIfSupported:(unsigned long long)arg1 animated:(_Bool)arg2 source:(unsigned long long)arg3;	// IMP=0x001000000020407c
- (void)setLayoutIfSupported:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000204067
- (MISSING_TYPE *)updateLayoutAnimated: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000203c14
- (_Bool)_updateContaineeIfNeeded:(id)arg1 withLayout:(unsigned long long)arg2;	// IMP=0x0010000000203b6f
- (_Bool)_canUpdateContainee:(id)arg1 withLayout:(unsigned long long)arg2;	// IMP=0x0010000000203b45
- (double)mapPeek;	// IMP=0x0010000000203a52
@property(readonly, nonatomic) double statusBarHeight;
@property(readonly, nonatomic) _Bool hasMargin;
- (void)_updateVisibleContentForLayout:(unsigned long long)arg1;	// IMP=0x001000000020391b
@property(readonly, nonatomic) UIView *passThroughView;
- (_Bool)shouldPassPoint:(struct CGPoint)arg1 withEvent:(id)arg2 inView:(id)arg3;	// IMP=0x0010000000203787
- (_Bool)_chromeEnabled;	// IMP=0x001000000020373f
@property(readonly) CardAnimation *cardHeightAnimation;
- (void)removeControllerFromStack:(id)arg1;	// IMP=0x0010000000203482
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000202ad7
- (void)presentController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x0010000000202ac2
- (void)presentController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000202aaa
- (void)presentController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000202a95
- (void)presentController:(id)arg1;	// IMP=0x0010000000202a7b
- (void)setControllerStack:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000020244d
- (void)setControllerStack:(id)arg1;	// IMP=0x0010000000202436
- (_Bool)controllerIsInStack:(id)arg1;	// IMP=0x00100000002023b8
- (void)removeControllersFromStack:(id)arg1;	// IMP=0x00100000002023b2
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeLayout:(unsigned long long)arg2;	// IMP=0x0010000000201fb6
- (void)replaceCurrentWithController:(id)arg1 moveToContaineeDefaultLayout:(_Bool)arg2;	// IMP=0x0010000000201f5e
- (void)replaceCurrentWithController:(id)arg1;	// IMP=0x0010000000201f4a
- (void)popLastViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 useDefaultContaineeLayout:(_Bool)arg3;	// IMP=0x0010000000201bbc
- (void)popLastViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000201ba7
- (void)popLastViewControllerAnimated:(_Bool)arg1 useDefaultContaineeLayout:(_Bool)arg2;	// IMP=0x0010000000201b48
- (void)popLastViewControllerAnimated:(_Bool)arg1;	// IMP=0x0010000000201b34
- (void)popLastViewControllerWithInitialVelocity:(double)arg1;	// IMP=0x0010000000201af4
- (unsigned long long)originalLayoutForViewController:(id)arg1;	// IMP=0x00100000002019fc
- (void)controller:(id)arg1 wantsLayout:(unsigned long long)arg2;	// IMP=0x001000000020199d
- (double)availableHeightForViewController:(id)arg1;	// IMP=0x00100000002017f5
@property(readonly, nonatomic) double availableHeight;
- (void)minimizeContainee:(id)arg1;	// IMP=0x00100000002016b3
- (void)expandContainee:(id)arg1;	// IMP=0x0010000000201625
- (unsigned long long)transitionFrom:(id)arg1 to:(id)arg2;	// IMP=0x0010000000201530
- (void)resumePropagatingEdgeInsets;	// IMP=0x001000000020128a
- (void)suspendPropagatingEdgeInsets;	// IMP=0x0010000000200fe4
- (void)_statusBarHeightChanged;	// IMP=0x0010000000200e2d
@property(readonly, nonatomic) UIView<StatusBarSupplementaryView> *statusBarSupplementaryView;
@property(readonly, nonatomic) StatusBarBackgroundViewStyle *statusBarBackgroundViewStyle;
@property(readonly, nonatomic) struct UIEdgeInsets mapAttributionInsets;
@property(readonly, nonatomic) double attributionVerticalPadding;
- (double)floatingContainerBottomVerticalPadding;	// IMP=0x00100000002007f5
- (struct UIEdgeInsets)_calculateMapEdgeInsets;	// IMP=0x0010000000200320
- (void)updateMapEdgeInsets;	// IMP=0x00100000002000b1
@property(readonly, nonatomic) double leftSafeOffset;
@property(readonly, nonatomic) double rightSafeOffset;
@property(readonly, nonatomic) double bottomEdgeInset;
@property(readonly, nonatomic) double topEdgeInset;
@property(readonly, nonatomic) double bottomSafeOffset;
@property(readonly, nonatomic) unsigned long long maxLayoutForEdgeInsetsUpdate;
@property(readonly, nonatomic) double bottomEdgePadding;
@property(readonly, nonatomic) double topEdgePadding;
@property(readonly, nonatomic) double leadingEdgePadding;
@property(readonly, nonatomic) double edgePadding;
- (double)topLabelEdgeInset;	// IMP=0x00100000001ff5eb
- (long long)VKApplicationUILayoutForStyle:(unsigned long long)arg1;	// IMP=0x00100000001ff5cf
- (void)containerStyleManagerDidChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000001ff307
- (void)containerStyleManagerConfigureLayoutForStyle:(unsigned long long)arg1;	// IMP=0x00100000001ff301
- (void)containerStyleManagerWillChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000001ff18d
- (void)_updateOverrideTraitCollectionsForStyle:(unsigned long long)arg1;	// IMP=0x00100000001ff067
- (void)updateContentInjection;	// IMP=0x00100000001ff061
- (void)transitionAlongsideContainee:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001ff05b
- (void)didResignContainee:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000001fee06
- (void)didPresentContainee:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00100000001febb1
- (void)willResignContainee:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001fea1f
- (void)willPresentContainee:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001fe88d
- (void)containee:(id)arg1 didChangeLayout:(unsigned long long)arg2;	// IMP=0x00100000001fe47c
- (void)containee:(id)arg1 willChangeLayout:(unsigned long long)arg2 source:(unsigned long long)arg3;	// IMP=0x00100000001fe22f
- (void)didChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000001fe0aa
- (void)willChangeStyle:(unsigned long long)arg1;	// IMP=0x00100000001fdf42
- (void)applyTransitionWithProgress:(double)arg1;	// IMP=0x00100000001fdf3c
- (void)reset;	// IMP=0x00100000001fdee6
- (void)_updateContainerMargins;	// IMP=0x00100000001fde5c
- (void)_unlockCardQueue;	// IMP=0x00100000001fda4c
@property(readonly, nonatomic) _Bool delaysFirstCardPresentation;
- (_Bool)isContaineeStackEmpty;	// IMP=0x00100000001fda1e
@property(retain, nonatomic) UIViewController<ContaineeProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)removeChildViewController:(id)arg1;	// IMP=0x00100000001fd6d5
- (void)addChildViewController:(id)arg1;	// IMP=0x00100000001fd62c
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001fd5d3
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001fd279
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001fc9e3
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00100000001fc98a
- (void)viewLayoutMarginsDidChange;	// IMP=0x00100000001fc949
- (void)viewDidLayoutSubviews;	// IMP=0x00100000001fc7f8
- (void)viewWillLayoutSubviews;	// IMP=0x00100000001fc754
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001fc57f
- (void)setContaineesHidden:(_Bool)arg1;	// IMP=0x00100000001fc1af
- (_Bool)containeesHidden;	// IMP=0x00100000001fc0ff
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x00100000001fbf1f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001fbe59
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000001fbbae
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001fbb07
- (void)viewDidLoad;	// IMP=0x00100000001fb717
- (void)dealloc;	// IMP=0x00100000001fb61d
- (void)customInit;	// IMP=0x00100000001fb508
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001fb4bc
@property(readonly, nonatomic) _Bool shouldHideCard;
@property(readonly, nonatomic) _Bool allowsDisplayOnLockScreen;
@property(readonly, nonatomic) _Bool isRootContainer;
- (_Bool)supportsEmptyStack;	// IMP=0x00100000001fb49c
@property(readonly, nonatomic) UIViewController<ContaineeProtocol> *modalPresenter;
@property(readonly, nonatomic) unsigned long long layoutModalPresenter;
- (unsigned long long)layoutForCurrentViewControllerWithStyle:(unsigned long long)arg1;	// IMP=0x00100000001fb22b
- (id)currentContaineeState;	// IMP=0x00100000001fb200
- (void)updateContaineeStackState;	// IMP=0x00100000001fb148
@property(readonly, nonatomic) UIViewController<ContaineeProtocol> *currentOrPendingViewController;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x00100000001fb0a9
@property(readonly, nonatomic) UIViewController<ContaineeProtocol> *rootPresentingViewController;
@property(readonly, nonatomic) NSArray *visibleCardViews;
@property(readonly, nonatomic) NSArray *visibleViewControllers;
- (void)removeCardforViewController:(id)arg1;	// IMP=0x00100000001fad12
- (id)cardForViewController:(id)arg1;	// IMP=0x00100000001fab89
- (id)cardWithBlur:(_Bool)arg1;	// IMP=0x00100000001fab6c
- (void)setCaptureViewForCardView:(id)arg1;	// IMP=0x00100000001faadd
@property(readonly, nonatomic) NSString *blurGroupName;
@property(readonly, nonatomic) _Bool useBackdrop;
- (void)_updateBackdropConstraints;	// IMP=0x00100000001fa7ad
@property(nonatomic) _Bool stackOnOppositeSide;
@property(nonatomic) _Bool allowOnlyStandardStyle;
@property(readonly, nonatomic) unsigned long long containerStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

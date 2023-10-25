//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXPIFingerController, AXUIClient, HNDBubbleCursorController, HNDHandManager, HNDIgnoredWindow, HNDRocker, HNDView, HNDWindow, MISSING_TYPE, NSDictionary, NSMutableSet, NSString, SBSSystemApertureLayoutMonitor, UIAccessibilityHUDView, UIView;

@interface HNDDisplayManager : NSObject
{
    AXDispatchTimer *_idleTimer;	// 8 = 0x8
    AXDispatchTimer *_longIdleTimer;	// 16 = 0x10
    AXDispatchTimer *_autoHideFingersTimer;	// 24 = 0x18
    HNDWindow *_window;	// 32 = 0x20
    HNDIgnoredWindow *_ignoredWindow;	// 40 = 0x28
    HNDRocker *_rocker;	// 48 = 0x30
    HNDView *_fingerContentView;	// 56 = 0x38
    UIView *_contentView;	// 64 = 0x40
    UIView *_scannerContentView;	// 72 = 0x48
    UIView *_scannerBackCursorView;	// 80 = 0x50
    UIView *_scannerFrontCursorView;	// 88 = 0x58
    HNDView *_rockerDismiss;	// 96 = 0x60
    HNDView *_multiTouchBackgound;	// 104 = 0x68
    struct CGPoint _currentPoint;	// 112 = 0x70
    double _menuOpenTime;	// 128 = 0x80
    _Bool _menuDownWillFireAutomaticUp;	// 136 = 0x88
    struct CGRect _screenBounds;	// 144 = 0x90
    int _orientation;	// 176 = 0xb0
    _Bool _showingHoverOverMenu;	// 180 = 0xb4
    _Bool _isPressedDown;	// 181 = 0xb5
    _Bool _openedMenuOnDown;	// 182 = 0xb6
    double _nubbitTouchToUpTimeLatency;	// 184 = 0xb8
    double _nubbitTouchDownTime;	// 192 = 0xc0
    struct SCRCMathAverageValue _nubbitDistanceTracking;	// 200 = 0xc8
    struct SCRCMathAverageValue _nubbitAngleTracking;	// 640 = 0x280
    double _nubbitVelocity;	// 1080 = 0x438
    _Bool _nubbitMoving;	// 1088 = 0x440
    struct CGPoint _downPoint;	// 1096 = 0x448
    struct CGPoint _movePoint;	// 1112 = 0x458
    struct CGPoint _nubbitStartDownPoint;	// 1128 = 0x468
    HNDView *_downView;	// 1144 = 0x478
    unsigned int _lastHandType;	// 1152 = 0x480
    double _maxOrbDuringTouch;	// 1160 = 0x488
    double _nubbitPositionPercentage;	// 1168 = 0x490
    int _nubbitPositionEdge;	// 1176 = 0x498
    struct CGPoint _preKeyboardMovePosition;	// 1184 = 0x4a0
    _Bool _visualsHidden;	// 1200 = 0x4b0
    AXDispatchTimer *_positionSetTimer;	// 1208 = 0x4b8
    _Bool _keyboardVisible;	// 1216 = 0x4c0
    struct CGRect _keyboardFrame;	// 1224 = 0x4c8
    _Bool _orbActionExists;	// 1256 = 0x4e8
    _Bool _playedHapticForCurrentEvent;	// 1257 = 0x4e9
    NSDictionary *_lastReachabilityPayload;	// 1264 = 0x4f0
    _Bool _longPressActionActivated;	// 1272 = 0x4f8
    AXDispatchTimer *_longPressTimer;	// 1280 = 0x500
    AXDispatchTimer *_doubleTapTimer;	// 1288 = 0x508
    NSString *_pendingForegroundImageAction;	// 1296 = 0x510
    SBSSystemApertureLayoutMonitor *_layoutMonitor;	// 1304 = 0x518
    struct CGRect _foreheadRect;	// 1312 = 0x520
    _Bool _isMainDisplay;	// 1344 = 0x540
    _Bool _alwaysShowMenu;	// 1345 = 0x541
    _Bool _bubbleCursorIsActive;	// 1346 = 0x542
    _Bool _shouldDelayBeforePresentingHUDView;	// 1347 = 0x543
    _Bool _assistiveTouchMousePointerTimeoutEnabled;	// 1348 = 0x544
    HNDHandManager *_handManager;	// 1352 = 0x548
    AXPIFingerController *_fingerController;	// 1360 = 0x550
    NSString *_hardwareIdentifier;	// 1368 = 0x558
    AXUIClient *_userInterfaceClient;	// 1376 = 0x560
    double _lastMenuInteractionTime;	// 1384 = 0x568
    UIView *_fingerContainerView;	// 1392 = 0x570
    AXDispatchTimer *_presentHUDViewTimer;	// 1400 = 0x578
    UIAccessibilityHUDView *_hudView;	// 1408 = 0x580
    NSString *_reachabilityHandlerIdentifier;	// 1416 = 0x588
    double _reachabilityOffset;	// 1424 = 0x590
    NSMutableSet *_userInterfaceClientEnablers;	// 1432 = 0x598
    double _assistiveTouchMousePointerTimeout;	// 1440 = 0x5a0
    double _assistiveTouchMouseDwellControlActivationTimeout;	// 1448 = 0x5a8
    HNDBubbleCursorController *_bubbleCursorController;	// 1456 = 0x5b0
    MISSING_TYPE *_bubbleCursor;	// 1464 = 0x5b8
    HNDView *_bubbleModeContentView;	// 1472 = 0x5c0
    CDUnknownBlockType _dwellBubbleModeCompletionBlock;	// 1480 = 0x5c8
}

+ (double)fadeDuration;	// IMP=0x002000000000ee0c
- (void).cxx_destruct;	// IMP=0x002000000001b533
@property(copy, nonatomic) CDUnknownBlockType dwellBubbleModeCompletionBlock; // @synthesize dwellBubbleModeCompletionBlock=_dwellBubbleModeCompletionBlock;
@property(retain, nonatomic) HNDView *bubbleModeContentView; // @synthesize bubbleModeContentView=_bubbleModeContentView;
@property(retain, nonatomic) UIView *bubbleCursor; // @synthesize bubbleCursor=_bubbleCursor;
@property(retain, nonatomic) HNDBubbleCursorController *bubbleCursorController; // @synthesize bubbleCursorController=_bubbleCursorController;
@property(nonatomic) double assistiveTouchMouseDwellControlActivationTimeout; // @synthesize assistiveTouchMouseDwellControlActivationTimeout=_assistiveTouchMouseDwellControlActivationTimeout;
@property(nonatomic) double assistiveTouchMousePointerTimeout; // @synthesize assistiveTouchMousePointerTimeout=_assistiveTouchMousePointerTimeout;
@property(nonatomic) _Bool assistiveTouchMousePointerTimeoutEnabled; // @synthesize assistiveTouchMousePointerTimeoutEnabled=_assistiveTouchMousePointerTimeoutEnabled;
@property(retain, nonatomic) NSMutableSet *userInterfaceClientEnablers; // @synthesize userInterfaceClientEnablers=_userInterfaceClientEnablers;
@property(nonatomic) double reachabilityOffset; // @synthesize reachabilityOffset=_reachabilityOffset;
@property(copy, nonatomic) NSString *reachabilityHandlerIdentifier; // @synthesize reachabilityHandlerIdentifier=_reachabilityHandlerIdentifier;
@property(nonatomic) _Bool shouldDelayBeforePresentingHUDView; // @synthesize shouldDelayBeforePresentingHUDView=_shouldDelayBeforePresentingHUDView;
@property(retain, nonatomic) UIAccessibilityHUDView *hudView; // @synthesize hudView=_hudView;
@property(retain, nonatomic) AXDispatchTimer *presentHUDViewTimer; // @synthesize presentHUDViewTimer=_presentHUDViewTimer;
@property(retain, nonatomic) UIView *fingerContainerView; // @synthesize fingerContainerView=_fingerContainerView;
@property(nonatomic) double lastMenuInteractionTime; // @synthesize lastMenuInteractionTime=_lastMenuInteractionTime;
@property(retain, nonatomic) AXUIClient *userInterfaceClient; // @synthesize userInterfaceClient=_userInterfaceClient;
@property(nonatomic) _Bool playedHapticForCurrentEvent; // @synthesize playedHapticForCurrentEvent=_playedHapticForCurrentEvent;
@property(nonatomic) _Bool bubbleCursorIsActive; // @synthesize bubbleCursorIsActive=_bubbleCursorIsActive;
@property(nonatomic) _Bool alwaysShowMenu; // @synthesize alwaysShowMenu=_alwaysShowMenu;
@property(retain, nonatomic) NSString *hardwareIdentifier; // @synthesize hardwareIdentifier=_hardwareIdentifier;
@property(nonatomic) _Bool isMainDisplay; // @synthesize isMainDisplay=_isMainDisplay;
@property(retain, nonatomic) AXPIFingerController *fingerController; // @synthesize fingerController=_fingerController;
@property(nonatomic) __weak HNDHandManager *handManager; // @synthesize handManager=_handManager;
@property(nonatomic) _Bool showingHoverOverMenu; // @synthesize showingHoverOverMenu=_showingHoverOverMenu;
- (_Bool)_nubbitIsOverFrame:(struct CGRect)arg1;	// IMP=0x001000000001b266
- (struct CGPoint)_testingRockerPosition;	// IMP=0x001000000001b229
@property(readonly, nonatomic) struct CGRect foreheadRect;
- (void)systemApertureLayoutDidChange:(id)arg1;	// IMP=0x001000000001af11
- (void)_hideLargeContentViewerIfNeeded;	// IMP=0x001000000001adf3
- (void)_presentLargeContentViewerForHUDItem:(id)arg1 inContentView:(id)arg2;	// IMP=0x001000000001ac4a
- (void)_updateLargeContentViewerIfNeededForView:(id)arg1;	// IMP=0x001000000001a883
- (_Bool)_shouldShowLargeContentViewer;	// IMP=0x001000000001a824
- (id)_itemForButton:(id)arg1;	// IMP=0x001000000001a759
- (void)_layoutHUDView:(id)arg1 withinBounds:(struct CGRect)arg2;	// IMP=0x001000000001a56b
@property(readonly, nonatomic) UIView *scannerBackCursorView;
@property(readonly, nonatomic) UIView *scannerFrontCursorView;
@property(readonly, nonatomic) UIView *scannerContentView;
- (void)showSimpleBannerWithTitle:(id)arg1 text:(id)arg2;	// IMP=0x001000000001a356
- (void)showSimpleAlertWithText:(id)arg1;	// IMP=0x001000000001a202
- (void)_cleanupUserInterfaceClient;	// IMP=0x001000000001a168
- (void)_setupUserInterfaceClient;	// IMP=0x001000000001a08e
- (void)removeUserInterfaceClientEnabler:(id)arg1;	// IMP=0x0010000000019fc9
- (void)addUserInterfaceClientEnabler:(id)arg1;	// IMP=0x0010000000019ee9
- (struct CGRect)orientedBubbleModeElementFrameForElementFrame:(struct CGRect)arg1;	// IMP=0x0010000000019e91
- (struct CGRect)orientedContinuousScrollViewFrameForScrollViewFrame:(struct CGRect)arg1;	// IMP=0x0010000000019e3c
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0010000000019c3b
- (void)cancelDwellOnBubbleCursor;	// IMP=0x0010000000019b65
- (void)animateBubbleCursorDwellWithDuration:(double)arg1 inRocker:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001986c
- (void)overrideBubbleCursorOpacity:(double)arg1;	// IMP=0x001000000001981d
- (_Bool)inBubbleMode;	// IMP=0x00100000000197d9
- (void)showBubbleCursor;	// IMP=0x0010000000019753
- (void)hideBubbleCursor;	// IMP=0x0010000000019714
- (void)drawBubbleCursorFrame:(struct CGRect)arg1 withPath:(id)arg2;	// IMP=0x00100000000193c3
- (MISSING_TYPE *)viewPressedUp: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000018bfb
- (void)activateAssistiveTouchAction:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x0010000000018af8
- (id)rocker;	// IMP=0x0010000000018aea
- (void)viewOrbActionTriggered:(id)arg1;	// IMP=0x0010000000018952
- (void)viewPressedDown:(id)arg1;	// IMP=0x00100000000188a1
- (void)didFailToFloatApp;	// IMP=0x001000000001888b
- (void)didFailToPinApp;	// IMP=0x0010000000018875
- (void)volumeChanged;	// IMP=0x0010000000018853
- (_Bool)inNubbitMode;	// IMP=0x0010000000018837
- (void)updateRotationLockSwitch;	// IMP=0x0010000000018821
- (void)updateRingerSwitch;	// IMP=0x001000000001880b
- (void)deviceCountChanged:(long long)arg1;	// IMP=0x0010000000018672
- (void)_deviceCountChanged:(id)arg1;	// IMP=0x001000000001863e
- (void)updateMenuStyle;	// IMP=0x0010000000018573
- (void)restartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000184c5
- (_Bool)isMenuVisible;	// IMP=0x00100000000184af
- (void)showMenu:(_Bool)arg1;	// IMP=0x0010000000017e44
- (void)setVisualsHidden:(_Bool)arg1 forReason:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000017b53
- (_Bool)visualsHidden;	// IMP=0x0010000000017b03
- (struct CGPoint)_layoutPointForPoint:(struct CGPoint)arg1 screenBounds:(struct CGRect)arg2;	// IMP=0x00100000000179bf
- (struct CGPoint)_menuPointForFingerLayout;	// IMP=0x0010000000017865
- (struct CGRect)rotatedScreenBounds;	// IMP=0x001000000001782d
- (void)performPress:(int)arg1 type:(int)arg2;	// IMP=0x001000000001774d
- (void)showCircleMenu:(_Bool)arg1;	// IMP=0x0010000000017737
- (void)updateWithPrimaryFingerPoint:(struct CGPoint)arg1;	// IMP=0x0010000000017682
- (_Bool)userInteractionEnabledOnRockerDismissView;	// IMP=0x001000000001766c
- (struct CGRect)rockerFrame;	// IMP=0x0010000000017635
- (struct CGRect)screenBounds;	// IMP=0x0010000000017617
- (struct CGPoint)point;	// IMP=0x0010000000017607
- (struct CGPoint)screenPoint;	// IMP=0x00100000000175d1
- (struct CGPoint)rotatedScreenPoint;	// IMP=0x0010000000017587
- (_Bool)hoverMovedToNormalizedPoint:(struct CGPoint)arg1 shouldUpdateCurrentPoint:(_Bool)arg2;	// IMP=0x00100000000173c7
- (_Bool)initialDownMenuCanTransitionToPressDown;	// IMP=0x0010000000017387
- (_Bool)initialMenuDownHasFinished;	// IMP=0x0010000000017368
@property(readonly, nonatomic) _Bool isCurrentOrientationLandscape;
- (int)orientation;	// IMP=0x0010000000017347
- (void)setOrientation:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016a9e
- (void)_updateViewsForOrientation;	// IMP=0x0010000000016604
- (struct CGAffineTransform)_transformForOrientation;	// IMP=0x00100000000165ba
- (double)_rotationDegreesForOrientation:(int)arg1;	// IMP=0x001000000001659a
- (struct CGPoint)normalizedPointForDifference:(struct CGPoint)arg1;	// IMP=0x0010000000016563
- (double)_idleTime;	// IMP=0x00100000000164ef
- (void)_startIdleTimer;	// IMP=0x0010000000016436
- (void)_idleTimerFired;	// IMP=0x001000000001638b
- (_Bool)_shouldSetFingerContentViewToActive:(_Bool)arg1;	// IMP=0x0010000000016288
- (void)setFingerContentViewIsActive:(_Bool)arg1 withDuration:(double)arg2 options:(unsigned long long)arg3;	// IMP=0x001000000001622d
- (void)setFingerContentViewIsActive:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x00100000000161dd
@property(nonatomic) _Bool fingerContentViewIsActive;
- (void)activateDisplayItems;	// IMP=0x0010000000016138
- (void)updateNubbitForegroundImageForAction:(id)arg1;	// IMP=0x00100000000160dc
- (void)_longIdleTimerFired;	// IMP=0x0010000000015fe0
- (struct CGRect)screenBoundsForRockerButton:(id)arg1;	// IMP=0x0010000000015f4a
- (struct CGPoint)convertRotatedScreenPointToRocker:(struct CGPoint)arg1;	// IMP=0x0010000000015f30
- (struct CGPoint)convertPointFromOrientation:(struct CGPoint)arg1;	// IMP=0x0010000000015f18
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromOrientation:(int)arg2;	// IMP=0x0010000000015ec5
- (struct CGPoint)convertToNormalizedOrientation:(struct CGPoint)arg1;	// IMP=0x0010000000015e78
- (struct CGPoint)convertPointToOrientation:(struct CGPoint)arg1;	// IMP=0x0010000000015e17
- (void)updateRockersForSubstantialTransition;	// IMP=0x0010000000015e01
- (_Bool)handleRealEvent:(id)arg1;	// IMP=0x0010000000014bbb
- (void)_didHandleRealUpEvent;	// IMP=0x0010000000014b5a
- (void)resetNubbitLocation;	// IMP=0x0010000000014a2f
- (id)viewAtDisplayPoint:(struct CGPoint)arg1;	// IMP=0x0010000000014a17
- (id)ignoredWindow;	// IMP=0x0010000000014a09
- (unsigned int)displayID;	// IMP=0x0010000000014974
- (id)window;	// IMP=0x0010000000014966
- (id)viewAtDisplayPoint:(struct CGPoint)arg1 downPoint:(struct CGPoint *)arg2 window:(id)arg3;	// IMP=0x001000000001442a
- (double)_iconScaleForForce:(double)arg1;	// IMP=0x00100000000143f0
- (void)_handleNubbitMove:(struct CGPoint)arg1 event:(id)arg2;	// IMP=0x0010000000013b78
- (void)setNubbitMoving:(_Bool)arg1;	// IMP=0x0010000000013ab5
- (void)moveNubbitToPoint:(struct CGPoint)arg1;	// IMP=0x00100000000139fd
- (void)keyboardVisible:(_Bool)arg1 withFrame:(struct CGRect)arg2;	// IMP=0x0010000000013590
@property(readonly, nonatomic) struct UIEdgeInsets safeAreaInsets;
- (void)_moveNubbitForKeyboard:(struct CGRect)arg1;	// IMP=0x0010000000013514
- (struct CGPoint)_nubbitPositionForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0010000000013308
- (_Bool)_nubbitIsOverKeyboard:(struct CGRect)arg1;	// IMP=0x001000000001324e
- (_Bool)_position:(struct CGPoint)arg1 isOverKeyboard:(struct CGRect)arg2;	// IMP=0x001000000001322c
- (void)_repositionNubbitAfterLift:(struct CGPoint)arg1;	// IMP=0x0010000000013155
- (void)_moveNubbitToPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;	// IMP=0x0010000000012f51
- (void)_updateNubbitEdgePosition:(struct CGPoint)arg1;	// IMP=0x0010000000012ca7
- (void)_updateNubbitPosition;	// IMP=0x0010000000012c77
- (struct CGPoint)_nubbitPointForEdgePosition;	// IMP=0x0010000000012ba9
- (void)_moveNubbitToPosition:(struct CGPoint)arg1;	// IMP=0x0010000000012b95
- (struct CGPoint)_validateNubbitPosition:(struct CGPoint)arg1 forKeyboard:(_Bool)arg2;	// IMP=0x0010000000012a21
- (double)_xNubbitPadding:(double)arg1 x:(double)arg2;	// IMP=0x00100000000125a5
- (double)_yNubbitPadding:(double)arg1 y:(double)arg2;	// IMP=0x0010000000012294
- (struct CGPoint)nubbitPositionForFlick:(struct CGPoint)arg1;	// IMP=0x0010000000012084
- (int)_angleForDegrees:(double)arg1;	// IMP=0x0010000000011f4b
- (struct CGPoint)closestNubbitPositionForPoint:(struct CGPoint)arg1 offsetByMidpoint:(_Bool)arg2;	// IMP=0x0010000000011cc6
- (void)setMultiTouchToolBackgroundEnabled:(_Bool)arg1;	// IMP=0x001000000001194e
- (_Bool)multiTouchToolBackgroundEnabled;	// IMP=0x0010000000011940
- (void)_endHandlingReachabilityIfNeeded;	// IMP=0x001000000001187e
- (void)_startHandlingReachabilityIfNeeded;	// IMP=0x001000000001165e
- (void)_handleReachability:(id)arg1;	// IMP=0x00100000000113bb
- (void)_resetReachabilityOffset;	// IMP=0x001000000001134c
- (void)_resetCurrentPointToInitialPoint;	// IMP=0x00100000000111be
- (struct CGPoint)_rotatedNormalizedInitialPoint;	// IMP=0x0010000000011177
- (double)_currentRockerTranslateY;	// IMP=0x0010000000011060
- (void)_updateRockerReachability;	// IMP=0x0010000000010fae
- (void)dealloc;	// IMP=0x0010000000010f70
- (void)cleanup;	// IMP=0x0010000000010e65
- (void)placeNubbitAtBottomCenter;	// IMP=0x0010000000010dd5
- (void)initializeDisplayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000103ab
- (void)initializeDisplay;	// IMP=0x0010000000010397
- (void)initializeScreenBounds;	// IMP=0x001000000001027c
- (void)initializeWindowsIfNecessary;	// IMP=0x00100000000100ca
- (void)_updateSpeakScreenStatus;	// IMP=0x001000000000fdd6
- (_Bool)_shouldRunAutoHideFingersTimer;	// IMP=0x001000000000fd3b
- (void)_updatePreferences;	// IMP=0x001000000000fcdb
- (void)_updateAutoHideMousePointer;	// IMP=0x001000000000fb4c
- (void)updateAutoHideMousePointer;	// IMP=0x001000000000fb3a
- (id)initWithWindow:(id)arg1 ignoredWindow:(id)arg2;	// IMP=0x001000000000ee30
- (id)init;	// IMP=0x001000000000ee1a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXEventProcessor, NSArray, NSDictionary, NSMutableArray, NSRecursiveLock, NSString, SCRCGestureFactory, SCRCTargetSelectorTimer, SCRCThreadKey, VOTBrailleGestureManager, VOTDirectInteractionKeyboardManager, VOTElement, VOTEvent, VOTGestureEvent, VOTMapsExplorationGestureManager;
@protocol VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTEventFactoryCallbackProtocol, VOTRotorManagementProtocol;

@interface VOTEventFactory : NSObject
{
    SCRCGestureFactory *_gestureFactory;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    unsigned long long _edgePanGestureState;	// 24 = 0x18
    struct CGPoint _edgePanGestureStartPoint;	// 32 = 0x20
    double _edgePanGestureStartTime;	// 48 = 0x30
    struct CGPoint _edgePanGesturePausePoint;	// 56 = 0x38
    SCRCTargetSelectorTimer *_edgePanGestureSpeakHintTimer;	// 72 = 0x48
    long long _direction;	// 80 = 0x50
    long long _rotorSoundZone;	// 88 = 0x58
    long long _continuityZone;	// 96 = 0x60
    double _startPinchDistance;	// 104 = 0x68
    long long _fingerCount;	// 112 = 0x70
    double _travelDistance;	// 120 = 0x78
    struct CGPoint _tapHoldOffset;	// 128 = 0x80
    struct CGPoint _audiographScrubbingPreviousLocation;	// 144 = 0x90
    _Bool _canPlayBoundaryFeedback;	// 160 = 0xa0
    VOTGestureEvent *_lastDownEvent;	// 168 = 0xa8
    SCRCThreadKey *_threadKey;	// 176 = 0xb0
    NSRecursiveLock *_currentElementLock;	// 184 = 0xb8
    VOTElement *_currentElement;	// 192 = 0xc0
    VOTElement *_firstResponder;	// 200 = 0xc8
    double _lastEdgePressTime;	// 208 = 0xd0
    double _lastEchoTime;	// 216 = 0xd8
    double _rotateStartTime;	// 224 = 0xe0
    long long _rotateDirection;	// 232 = 0xe8
    SCRCTargetSelectorTimer *_tapHoldTimer;	// 240 = 0xf0
    SCRCTargetSelectorTimer *_elementSummaryTimer;	// 248 = 0xf8
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;	// 256 = 0x100
    SCRCTargetSelectorTimer *_threeFingerHoldTimer;	// 264 = 0x108
    SCRCTargetSelectorTimer *_memorizeSoundTimer;	// 272 = 0x110
    SCRCTargetSelectorTimer *_systemControlLocationTimer;	// 280 = 0x118
    double _currentTouchForce;	// 288 = 0x120
    double _previewFingerStartingForce;	// 296 = 0x128
    struct CGPoint _previewFingerLocation;	// 304 = 0x130
    NSMutableArray *_previewFingerContextId;	// 320 = 0x140
    _Bool _isInPreview;	// 328 = 0x148
    double _previewStartTime;	// 336 = 0x150
    double _previewPopDelayTime;	// 344 = 0x158
    _Bool _isPreviewPinned;	// 352 = 0x160
    long long _currentOrbGestureMode;	// 360 = 0x168
    struct CGPoint _nativeSlidingOffset;	// 368 = 0x170
    struct CGPoint _nativeSlidingCenter;	// 384 = 0x180
    double _lastTwoFingerSlideTime;	// 400 = 0x190
    double _oldVolumeChangeDistance;	// 408 = 0x198
    double _volumeChangeDistance;	// 416 = 0x1a0
    SCRCTargetSelectorTimer *_volumeChangeTimer;	// 424 = 0x1a8
    SCRCTargetSelectorTimer *_wakeTapTimer;	// 432 = 0x1b0
    unsigned long long _watchWakeTapCount;	// 440 = 0x1b8
    double _lastWatchWakeUpTime;	// 448 = 0x1c0
    NSMutableArray *_snarfedWatchWakeRecords;	// 456 = 0x1c8
    _Bool _aotEnabled;	// 464 = 0x1d0
    struct __AXObserver *_axEventObserver;	// 472 = 0x1d8
    VOTGestureEvent *_currentGestureEvent;	// 480 = 0x1e0
    NSArray *_directInteractionElements;	// 488 = 0x1e8
    NSString *_zoomListenerIdentifier;	// 496 = 0x1f0
    struct {
        long long direction;
        unsigned long long count;
        double continuityDistance;
        double distanceTraveled;
        struct CGPoint firstCountPoint;
    } _zigzag;	// 504 = 0x1f8
    double _lastNativeSlideCancel;	// 552 = 0x228
    struct os_unfair_lock_s _tapAndHoldLock;	// 560 = 0x230
    NSMutableArray *_tapAndHoldContextIds;	// 568 = 0x238
    long long _tapAndHoldFingerType;	// 576 = 0x240
    VOTElement *_tapAndHoldScribbleElement;	// 584 = 0x248
    struct CGPoint _systemControlStartPoint;	// 592 = 0x250
    int _systemControlPosition;	// 608 = 0x260
    _Bool _systemControlActivated;	// 612 = 0x264
    double _systemControlStartSwipeTime;	// 616 = 0x268
    double _systemControlFingerDownFollowupTime;	// 624 = 0x270
    double _lastScrollEventTime;	// 632 = 0x278
    long long _currentAccumulatedScroll;	// 640 = 0x280
    _Bool _scrollWheelIsActive;	// 648 = 0x288
    struct {
        _Bool tapAndHoldMode;
        _Bool tapAndHoldModeContextless;
        _Bool tapAndHoldOffsetNeedsUpdate;
        _Bool orbMode;
        _Bool firedElementSummaryTimer;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool threeFingerTapAndSlide;
        _Bool splitSlide;
        _Bool handwritingOnly;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
        _Bool audiographScrubbingMode;
    } _flags;	// 649 = 0x289
    double _gestureKeyboardShiftLockStartTime;	// 672 = 0x2a0
    VOTBrailleGestureManager *_brailleGestureManager;	// 680 = 0x2a8
    VOTMapsExplorationGestureManager *_mapsExplorationGestureManager;	// 688 = 0x2b0
    struct {
        _Bool tapDown;
        _Bool tapMoved;
        _Bool tapUp;
        _Bool heldDown;
        _Bool heldUp;
    } _audioAccButtonStates[3];	// 696 = 0x2b8
    unsigned long long _audioAccTapCount;	// 712 = 0x2c8
    double _audioAccLastDownTime;	// 720 = 0x2d0
    double _audioAccLastTapTime;	// 728 = 0x2d8
    _Bool _audioAccHoldSent;	// 736 = 0x2e0
    unsigned long long _currentSoundButton;	// 744 = 0x2e8
    unsigned long long _pendingSoundButton;	// 752 = 0x2f0
    unsigned long long _audioAccTouchGeneration;	// 760 = 0x2f8
    unsigned long long _audioAccPendingGeneration;	// 768 = 0x300
    SCRCTargetSelectorTimer *_audioAccTapTimer;	// 776 = 0x308
    struct __IOHIDEventSystemClient *_audioAccIOSystemPostBackClient;	// 784 = 0x310
    _Bool _nowPlayingState;	// 792 = 0x318
    unsigned long long _splitSlideFingerCount;	// 800 = 0x320
    NSDictionary *_handGestureCommandDict;	// 808 = 0x328
    id <VOTElementManagementProtocol> _elementManager;	// 816 = 0x330
    id <VOTRotorManagementProtocol> _rotorManager;	// 824 = 0x338
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 832 = 0x340
    id <VOTEventFactoryCallbackProtocol> _delegate;	// 840 = 0x348
    AXDispatchTimer *_handwritingCaptureTimer;	// 848 = 0x350
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;	// 856 = 0x358
    AXEventProcessor *_eventProcessor;	// 864 = 0x360
    VOTElement *_lastTouchedDirectTouchElement;	// 872 = 0x368
    VOTEvent *_lastGestureEvent;	// 880 = 0x370
}

+ (void)_updateZoomFrame:(struct CGRect)arg1;	// IMP=0x00200000000eea69
+ (void)initialize;	// IMP=0x00100000000eca6d
- (void).cxx_destruct;	// IMP=0x00200000000fd8b7
@property(retain, nonatomic) VOTEvent *lastGestureEvent; // @synthesize lastGestureEvent=_lastGestureEvent;
@property(retain, nonatomic) VOTElement *lastTouchedDirectTouchElement; // @synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement;
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXDispatchTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) __weak id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) __weak id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) __weak id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (id)_mapAXEventToVOTEvent:(id)arg1;	// IMP=0x00100000000fd6ae
- (_Bool)_handleVoiceOverGreySupportAccessibilityEvent:(id)arg1;	// IMP=0x00100000000fd5f6
- (void)_updateVoiceOverHandGesturesActionCustomizations;	// IMP=0x00100000000fd588
- (_Bool)handleVOSGesture:(id)arg1;	// IMP=0x00100000000fd446
- (_Bool)_handleAccessibilityEvent:(id)arg1;	// IMP=0x00100000000fd43e
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;	// IMP=0x00100000000fd407
- (void)brailleGestureManager:(id)arg1 setForcedOrientation:(long long)arg2 shouldAnnounce:(_Bool)arg3;	// IMP=0x00100000000fd3c0
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd35c
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00100000000fd30b
- (id)votActionForEdgePanGestureState:(unsigned long long)arg1;	// IMP=0x00100000000fd2ce
- (double)_edgePanGestureStartThreshold;	// IMP=0x00100000000fd281
- (void)_updateCurrentElementOrbGestureMode;	// IMP=0x00100000000fd026
- (_Bool)_shouldDismissPreviewOnLift;	// IMP=0x00100000000fcff2
- (void)_liftPreviewFinger;	// IMP=0x00100000000fce1b
- (void)_switchToTrackingMode;	// IMP=0x00100000000fcb75
- (void)_simulatePeekAndSwitchToTapHoldMode;	// IMP=0x00100000000fc466
- (void)_simulateEdgePress;	// IMP=0x00100000000fc33f
- (void)_simulatePop;	// IMP=0x00100000000fc06a
- (void)_reducePreviewFingerStartingForce:(double)arg1;	// IMP=0x00100000000fbdfc
- (void)_simulatePreviewActionGesture;	// IMP=0x00100000000fbb66
- (_Bool)_isPreviewElementSelected;	// IMP=0x00100000000fbaf1
- (void)directInteractionModeStatus:(_Bool)arg1;	// IMP=0x00100000000fb9b6
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
- (void)_setFingerCount:(unsigned long long)arg1;	// IMP=0x00100000000fb983
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;	// IMP=0x00100000000fb615
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;	// IMP=0x00100000000fb422
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;	// IMP=0x00100000000fb36c
- (struct CGRect)_convertFrame:(struct CGRect)arg1 toPortraitFromOrientation:(long long)arg2;	// IMP=0x00100000000fb203
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00100000000faff1
- (void)_handleKeyboardVisibilityChanged:(id)arg1;	// IMP=0x00100000000faf61
- (void)_handleElementPreviewNotification:(id)arg1;	// IMP=0x00100000000faeee
- (void)_endAudiographScrubbingMode;	// IMP=0x00100000000fae55
- (void)_handleAudiographScrubbingPositionChanged;	// IMP=0x00100000000fab7f
- (void)_beginAudiographScrubbingMode;	// IMP=0x00100000000faa4f
- (_Bool)_canScribbleWithElement:(id)arg1;	// IMP=0x00100000000faa00
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;	// IMP=0x00100000000fa8a8
- (void)_markTapAndHoldOffsetAsDirty;	// IMP=0x00100000000fa828
- (void)_scheduleUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000fa78e
- (void)_cancelUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00100000000fa701
- (void)_endScribbleTapAndHoldMode;	// IMP=0x00100000000fa5da
- (void)_startScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000fa540
- (void)_cancelScribbleTapAndHoldModeTimeout;	// IMP=0x00100000000fa4b3
- (void)_processTapAndHoldMode:(id)arg1;	// IMP=0x00100000000fa0ad
- (void)_processIdle:(struct CGPoint)arg1;	// IMP=0x00100000000f9f97
- (void)_touchLiftAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000f9d10
- (id)tapAndHoldContextNumbers;	// IMP=0x00100000000f9bd5
- (void)_touchDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000f98d8
- (void)_touchDownAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00100000000f95db
- (void)_contextlessTouchWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x00100000000f92bf
- (void)_threeFingerHoldFired;	// IMP=0x00100000000f9252
- (void)_twoFingerHoldFired;	// IMP=0x00100000000f90ec
- (void)_startTouchDownForTapAndHoldActionWithCenter:(id)arg1 force:(id)arg2 altitude:(id)arg3 azimuth:(id)arg4;	// IMP=0x00100000000f8fb4
- (struct CGPoint)_startPointForScribbleWithElement:(id)arg1 originalStartPoint:(struct CGPoint)arg2;	// IMP=0x00100000000f8f17
- (struct CGPoint)_updateTapAndHoldLocationDataForElement:(id)arg1;	// IMP=0x00100000000f8a7c
- (void)_tapHoldFired:(id)arg1;	// IMP=0x00100000000f80f4
- (_Bool)_tapAndHoldModeIsForScribble;	// IMP=0x00100000000f80e3
- (void)_edgePanGestureSpeakHintTimerFired;	// IMP=0x00100000000f806e
- (void)_stopMemorizingSession;	// IMP=0x00100000000f7f89
- (void)_startLabelElementSoundPlay;	// IMP=0x00100000000f7eda
- (void)firstResponderDidUpdate:(id)arg1;	// IMP=0x00100000000f7d8c
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x00100000000f7d28
- (_Bool)directInteractionGestureInProgress;	// IMP=0x00100000000f7d1c
- (void)directInteractionElementsUpdated:(id)arg1;	// IMP=0x00100000000f7ce9
- (void)_cancelTapAndHold:(struct CGPoint)arg1 forScribble:(_Bool)arg2;	// IMP=0x00100000000f79d3
- (void)_cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000f79bf
- (void)_cancelTapAndHoldWithValue:(id)arg1;	// IMP=0x00100000000f798e
- (void)cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00100000000f7917
- (void)_outputElementSummaryFired;	// IMP=0x00100000000f78b1
@property(nonatomic) long long orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;	// IMP=0x00100000000f76f9
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x00100000000f769f
- (id)currentElement;	// IMP=0x00100000000f7685
- (void)_commitDeferredZoomInfoIfAppropriate;	// IMP=0x00100000000f7663
- (void)_commitDeferredZoomInfo;	// IMP=0x00100000000f75e5
- (void)_processGestureEvent:(id)arg1;	// IMP=0x00100000000f4d00
- (void)_playFeedbackForGestureState:(unsigned long long)arg1 gestureComplete:(_Bool)arg2;	// IMP=0x00100000000f4bb6
- (void)_transitionToGestureState:(unsigned long long)arg1 playHaptic:(_Bool)arg2;	// IMP=0x00100000000f4a99
- (void)_transitionToGestureState:(unsigned long long)arg1;	// IMP=0x00100000000f4a82
- (id)_updateEdgePanGestureForState:(long long)arg1;	// IMP=0x00100000000f41af
- (double)_edgeGestureScaleFactor:(_Bool)arg1;	// IMP=0x00100000000f4114
- (_Bool)_willStartEdgePanGestureForEvent:(id)arg1;	// IMP=0x00100000000f3e5f
- (_Bool)_handleOrbEvent:(id)arg1;	// IMP=0x00100000000f3e57
- (id)_touchLocationsForGestureEvent:(id)arg1;	// IMP=0x00100000000f3b32
- (void)updateOrientation;	// IMP=0x00100000000f3af5
- (_Bool)_gestureEventIsInvalid:(id)arg1;	// IMP=0x00100000000f3a60
- (_Bool)directTouchElementsPresent;	// IMP=0x00100000000f3a40
- (_Bool)_handleDirectInteractionEvent:(id)arg1;	// IMP=0x00100000000f2f3d
- (_Bool)_shouldUseGesturedTextInputManager;	// IMP=0x00100000000f2f0a
- (struct CGPoint)adjustedPointForFactoryPoint:(struct CGPoint)arg1 forOrientation:(long long)arg2;	// IMP=0x00100000000f2ea8
- (void)gestureTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000f1bee
- (_Bool)_isStylusGesture;	// IMP=0x00100000000f1bab
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 originalLocation:(struct CGPoint)arg4 convertedLocation:(struct CGPoint)arg5;	// IMP=0x00100000000f19ae
- (void)gestureFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00100000000f1921
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000f1824
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;	// IMP=0x00100000000f181c
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;	// IMP=0x00100000000f13aa
- (struct CGPoint)_averagePointForLastDownEvent;	// IMP=0x00100000000f114a
- (void)_resetSystemControlStatus;	// IMP=0x00100000000f1100
- (void)_sendSystemControlEvent:(id)arg1;	// IMP=0x00100000000f102d
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;	// IMP=0x00100000000f0e37
- (void)_systemControlLocationTimer;	// IMP=0x00100000000f0d76
- (void)_volumeChangeTimer;	// IMP=0x00100000000f0c4a
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;	// IMP=0x00100000000f0498
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;	// IMP=0x00100000000f043e
- (_Bool)_isEdgePressSupportedAtPosition:(struct CGPoint)arg1;	// IMP=0x00100000000f03a6
- (_Bool)_shouldAttemptTracking;	// IMP=0x00100000000f032a
- (_Bool)_isTapAndHoldPending;	// IMP=0x00100000000f02e8
- (void)gestureTrackingCallbackWithFactory:(id)arg1;	// IMP=0x00100000000f02d4
- (void)gestureGutterUpCallbackWithFactory:(id)arg1;	// IMP=0x00100000000f02ce
- (void)processEvent:(id)arg1;	// IMP=0x00100000000f0092
- (_Bool)processEventAsGesturedTextInput:(id)arg1;	// IMP=0x00100000000f0005
- (id)_currentGesturedTextInputManager;	// IMP=0x00100000000effef
- (id)_currentGesturedTextInputManagerAndCommandResolver:(id)arg1 forCommandResolver:(_Bool)arg2;	// IMP=0x00100000000efce1
- (id)_commandResolver;	// IMP=0x00100000000efc58
- (void)_handleSOSMedicalIDShown;	// IMP=0x00100000000efbdb
- (int)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x00100000000ef95c
- (id)_notificationsToRegister;	// IMP=0x00100000000ef94f
- (_Bool)registerForEvents;	// IMP=0x00100000000ef2d2
- (void)unregisterForEvents;	// IMP=0x00100000000ef22d
- (void)resetEventFactory;	// IMP=0x00100000000ef217
- (void)_handleRotorChangedNotification:(id)arg1;	// IMP=0x00100000000ef000
- (void)screenLockOccurred;	// IMP=0x00100000000eefe5
- (void)dealloc;	// IMP=0x00100000000eed87
- (void)shutdown;	// IMP=0x00100000000eed19
- (void)_registerForZoomListener;	// IMP=0x00100000000eea85
- (void)_registerForIOHIDUsage;	// IMP=0x00100000000ee768
- (_Bool)_iosEventFilter:(id)arg1;	// IMP=0x00100000000ee21b
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x00100000000ee074
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x00100000000ed8f7
- (id)_denormalizeEventRepresentation:(id)arg1;	// IMP=0x00100000000ed8db
- (void)_wakeTapFired;	// IMP=0x00100000000ed67c
- (_Bool)shouldSnarfEventForTapWakeGesture:(id)arg1;	// IMP=0x00100000000ed5ac
- (void)_updateTapSpeedFromPreferences;	// IMP=0x00100000000ed510
- (id)init;	// IMP=0x00100000000ecaca
- (_Bool)mapsExplorationInputActive;	// IMP=0x00100000000eca4b
- (id)_mapsExplorationGestureManager;	// IMP=0x00100000000ec9ed
@property(readonly, nonatomic) _Bool brailleInputActive;
- (id)_brailleGestureManager;	// IMP=0x00100000000ec95f
- (id)gestureFactory;	// IMP=0x00100000000ec951
- (void)setGestureFactory:(id)arg1;	// IMP=0x00100000000ec940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

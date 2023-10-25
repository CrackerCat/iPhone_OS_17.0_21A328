//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FBScene, NSArray, NSString, NSTimer, NSUUID, NSXPCConnection, PGInterruptionAssistant, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackState, PGProcessAssertion;
@protocol BSInvalidatable, OS_dispatch_queue, PGPictureInPictureAnalyticsDelegate, PGPictureInPictureRemoteObjectDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureRemoteObject : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    long long _queue_outstandingRotationAnimationsCount;	// 24 = 0x18
    long long _controlsStyle;	// 32 = 0x20
    long long _currentState;	// 40 = 0x28
    PGProcessAssertion *_processAssertion;	// 48 = 0x30
    PGProcessAssertion *_startBackgroundPIPAssertion;	// 56 = 0x38
    PGProcessAssertion *_interruptionBeganFinishTaskAssertion;	// 64 = 0x40
    PGProcessAssertion *_cancelPictureInPictureFinishTaskAssertion;	// 72 = 0x48
    NSUUID *_finishTaskInvalidationUUID;	// 80 = 0x50
    NSTimer *_timerForInvalidatingIfStopOrCancelFails;	// 88 = 0x58
    NSUUID *_analyticsSourceUUID;	// 96 = 0x60
    _Bool _pictureInPictureStartedAutomatically;	// 104 = 0x68
    _Bool _isPictureInPicturePossible;	// 105 = 0x69
    _Bool _hasPendingCancellationRequest;	// 106 = 0x6a
    _Bool _hasPendingStopRequest;	// 107 = 0x6b
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;	// 108 = 0x6c
    _Bool _shouldShowAlternateActionButtonImage;	// 109 = 0x6d
    _Bool _shouldShowLoadingIndicator;	// 110 = 0x6e
    NSArray *_menuItems;	// 112 = 0x70
    NSString *_activitySessionIdentifier;	// 120 = 0x78
    PGPlaybackState *_playbackState;	// 128 = 0x80
    PGInterruptionAssistant *_interruptionAssistant;	// 136 = 0x88
    _Bool _hasBegunTwoStageStop;	// 144 = 0x90
    _Bool _stashed;	// 145 = 0x91
    unsigned long long _resourcesUsageReductionReasons;	// 152 = 0x98
    unsigned long long _UILockedResourcesUsageReductionReasons;	// 160 = 0xa0
    unsigned long long _externalResourcesUsageReductionReasons;	// 168 = 0xa8
    NSTimer *_considerStashedPlaybackAsBackgroundAudioTimer;	// 176 = 0xb0
    id <BSInvalidatable> _stateCaptureInvalidatable;	// 184 = 0xb8
    FBScene *_sourceScene;	// 192 = 0xc0
    NSString *_activitySessionIdentifierForLastActivePIPSession;	// 200 = 0xc8
    id <PGPictureInPictureRemoteObjectDelegate> _delegate;	// 208 = 0xd0
    PGPictureInPictureApplication *_pictureInPictureApplication;	// 216 = 0xd8
    PGPictureInPictureViewController *_pictureInPictureViewController;	// 224 = 0xe0
    id <PGPictureInPictureAnalyticsDelegate> _analyticsDelegate;	// 232 = 0xe8
    PGPictureInPictureRemoteObject *_tetheredRemoteObject;	// 240 = 0xf0
    PGPictureInPictureRemoteObject *_tetheringRemoteObject;	// 248 = 0xf8
    NSString *_sourceSceneSessionPersistentIdentifier;	// 256 = 0x100
    NSString *_exemptAttribution;	// 264 = 0x108
    struct CGSize _preferredContentSize;	// 272 = 0x110
    struct CGRect _initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding;	// 288 = 0x120
}

+ (void)tetherRemoteObject:(id)arg1 toRemoteObject:(id)arg2 mode:(long long)arg3;	// IMP=0x001000000001c36e
- (void).cxx_destruct;	// IMP=0x0000000000023f7d
@property(copy, nonatomic) NSString *exemptAttribution; // @synthesize exemptAttribution=_exemptAttribution;
@property(readonly, nonatomic) NSString *sourceSceneSessionPersistentIdentifier; // @synthesize sourceSceneSessionPersistentIdentifier=_sourceSceneSessionPersistentIdentifier;
@property(readonly, nonatomic) struct CGSize preferredContentSize; // @synthesize preferredContentSize=_preferredContentSize;
@property(readonly, nonatomic) struct CGRect initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding; // @synthesize initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding=_initialLayerFrameForInteractiveTransitionAnimationUponBackgrounding;
@property(readonly, nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(retain, nonatomic) PGPictureInPictureRemoteObject *tetheringRemoteObject; // @synthesize tetheringRemoteObject=_tetheringRemoteObject;
@property(retain, nonatomic) PGPictureInPictureRemoteObject *tetheredRemoteObject; // @synthesize tetheredRemoteObject=_tetheredRemoteObject;
@property(nonatomic) __weak id <PGPictureInPictureAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <PGPictureInPictureRemoteObjectDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PGPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(readonly, nonatomic) PGPictureInPictureApplication *pictureInPictureApplication; // @synthesize pictureInPictureApplication=_pictureInPictureApplication;
- (_Bool)isAssociatedWithRemoteObject:(id)arg1;	// IMP=0x0000000000023e71
- (_Bool)canPreventOrSuspendRemoteObject:(id)arg1;	// IMP=0x0000000000023e06
- (_Bool)pictureInPictureViewControllerShouldHideTetheredViewControllerAlongsideControls:(id)arg1;	// IMP=0x0000000000023dd8
- (_Bool)pictureInPictureViewControllerWantsStashTabSuppression:(id)arg1;	// IMP=0x0000000000023dc6
- (void)pictureInPictureViewController:(id)arg1 didTransitionToStashed:(_Bool)arg2;	// IMP=0x0000000000023b18
- (void)pictureInPictureViewControllerDidRequestCancel:(id)arg1;	// IMP=0x00000000000239e1
- (void)pictureInPictureViewController:(id)arg1 didReceiveCommand:(id)arg2;	// IMP=0x0000000000023688
- (void)pictureInPictureViewControllerDidRequestStop:(id)arg1;	// IMP=0x00000000000234f8
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;	// IMP=0x000000000002337c
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;	// IMP=0x0000000000023200
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;	// IMP=0x0000000000022fa5
- (void)handleCommand:(id)arg1;	// IMP=0x0000000000022f89
- (void)_queue_notifyProxyOfInterruptionEnded;	// IMP=0x0000000000022dfb
- (void)_queue_notifyProxyOfInterruptionBegan;	// IMP=0x0000000000022c99
- (void)_acquireOrInvalidateProcessAssertionIfNeeded;	// IMP=0x0000000000022995
- (_Bool)_wantsProcessAssertion;	// IMP=0x000000000002290a
- (_Bool)_currentStateAllowsProcessAssertion;	// IMP=0x00000000000228c7
- (void)_updateActiveProxyAndViewControllerOfInterruptionIfNeeded;	// IMP=0x00000000000227c6
- (oneway void)stopPictureInPictureAndRestoreUserInterface;	// IMP=0x0000000000022556
- (oneway void)setActivitySessionIdentifier:(id)arg1;	// IMP=0x00000000000221d6
- (oneway void)updateMenuItems:(id)arg1;	// IMP=0x0000000000021c1b
- (oneway void)updatePlaybackStateWithDiff:(id)arg1;	// IMP=0x00000000000218c3
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000216ee
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000213af
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020dfe
- (oneway void)setupStopAnimated:(_Bool)arg1 needsApplicationActivation:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002065c
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020263
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ffc9
- (void)_updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001fbc9
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f97e
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f6f8
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001f328
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ed24
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000001e396
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001de4f
- (void)_invalidateForFailureToStartStopOrCancel;	// IMP=0x000000000001dbb9
- (_Bool)_isInActivitySession;	// IMP=0x000000000001dadf
- (_Bool)_isAssociatedWithOtherObject:(id)arg1;	// IMP=0x000000000001d2f6
- (_Bool)_isAppICS;	// IMP=0x000000000001d2a4
- (_Bool)_isICSVideoCall;	// IMP=0x000000000001d26b
- (id)_invalidationTimerWithTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d040
- (id)_invalidationTimerWithTimeout:(double)arg1;	// IMP=0x000000000001d02c
- (void)_finishCleanup;	// IMP=0x000000000001cf1f
- (void)_invalidateAllAssertions;	// IMP=0x000000000001ce12
- (void)_invalidateInterruptionBeganFinishTaskAssertion;	// IMP=0x000000000001cdb8
- (_Bool)_canTransitionToState:(long long)arg1;	// IMP=0x000000000001cc71
- (void)_setCurrentState:(long long)arg1;	// IMP=0x000000000001c77b
- (_Bool)_isUnderLock;	// IMP=0x000000000001c75d
- (void)_stopTethering;	// IMP=0x000000000001c69a
- (_Bool)canActivateUntetheredAlongsideOtherObject:(id)arg1;	// IMP=0x000000000001c30e
- (_Bool)canTetherRemoteObjectAsMicroPIP:(id)arg1;	// IMP=0x000000000001c0c2
- (_Bool)canStartMicroPIP;	// IMP=0x000000000001c024
- (_Bool)supportsMicroPIP;	// IMP=0x000000000001bfe4
@property(readonly, nonatomic) _Bool canStartBackgroundPIPForCurrentActivitySessionIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySessionIdentifier;
- (void)_setResolvedResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001be06
- (void)_setUILockedResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001bce5
- (void)setCurrentResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x000000000001bbc4
- (void)invalidate;	// IMP=0x000000000001b91b
- (void)cancel;	// IMP=0x000000000001b6c0
- (void)resume;	// IMP=0x000000000001b3e9
- (void)suspend;	// IMP=0x000000000001b09a
- (void)_notifyProxyOfStashedOrUnderLock:(_Bool)arg1;	// IMP=0x000000000001afa9
- (void)pictureInPictureInterruptionEndedWithReason:(long long)arg1 attribution:(id)arg2;	// IMP=0x000000000001adb1
- (void)pictureInPictureInterruptionBeganWithReason:(long long)arg1 attribution:(id)arg2;	// IMP=0x000000000001ab61
- (void)startPictureInPictureFromBackground;	// IMP=0x000000000001a795
- (void)sendStartPictureInPictureTestAction;	// IMP=0x000000000001a588
- (void)endTwoStageStopPictureInPictureWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a24a
- (void)beginTwoStageStopPictureInPictureByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019e9a
- (void)stopPictureInPictureAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019b70
- (void)startPictureInPictureEnteringBackgroundAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019629
@property(readonly, nonatomic, getter=isVideoCall) _Bool videoCall;
@property(readonly, nonatomic) long long contentType;
- (void)setSourceSceneSessionPersistentIdentifier:(id)arg1;	// IMP=0x0000000000019347
@property(nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property(readonly, nonatomic, getter=isInterrupted) _Bool interrupted;
@property(readonly, nonatomic) _Bool canEndTwoStageStopPictureInPicture;
@property(readonly, nonatomic) _Bool isStartingStoppingOrCancellingPictureInPicture;
@property(readonly, nonatomic) _Bool isStoppingOrCancellingPictureInPicture;
- (_Bool)isStartingPictureInPicture;	// IMP=0x0000000000018fd8
@property(readonly, nonatomic) _Bool canCancelPictureInPicture;
@property(readonly, nonatomic) _Bool canStopPictureInPicture;
@property(readonly, nonatomic) _Bool shouldStartPictureInPictureEnteringBackground;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property(readonly, nonatomic) NSXPCConnection *connection;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000018968
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000018918
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000188fc
- (id)succinctDescription;	// IMP=0x00000000000188ac
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000018684
- (id)init;	// IMP=0x00000000000185d8
- (id)initWithConnection:(id)arg1 interruptionAssistant:(id)arg2;	// IMP=0x000000000001828b
- (_Bool)matchesSceneSessionIdentifier:(id)arg1;	// IMP=0x0000000000003ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

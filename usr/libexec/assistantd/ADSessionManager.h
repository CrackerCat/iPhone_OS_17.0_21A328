//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADAccount, AFAWDSiriRequestRecord, AFAggregator, AFInstanceContext, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SABaseCommand, SASSpeechFailure, SASSpeechRecognized;
@protocol ADSessionManagerDelegate, ADSessionManagerIntercepting, OS_dispatch_queue, OS_dispatch_source;

@interface ADSessionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    ADAccount *_account;	// 24 = 0x18
    NSString *_sharedUserIdentifier;	// 32 = 0x20
    NSString *_loggingSharedUserIdentifier;	// 40 = 0x28
    long long _sharedUserIdentifierState;	// 48 = 0x30
    long long _state;	// 56 = 0x38
    _Bool _isRegisteredForSessionDestroyingNotifications;	// 64 = 0x40
    NSString *_connectionMode;	// 72 = 0x48
    NSString *_languageCode;	// 80 = 0x50
    NSMutableArray *_sessions;	// 88 = 0x58
    id <ADSessionManagerDelegate> _delegate;	// 96 = 0x60
    _Bool _callInProcess;	// 104 = 0x68
    _Bool _hasClient;	// 105 = 0x69
    unsigned int _ioConnect;	// 108 = 0x6c
    struct IONotificationPort *_ioNotificationPortRef;	// 112 = 0x70
    unsigned int _ioNotifier;	// 120 = 0x78
    AFAggregator *_aggregator;	// 128 = 0x80
    NSString *_requestId;	// 136 = 0x88
    NSMutableDictionary *_proxiedIdMap;	// 144 = 0x90
    NSMutableDictionary *_reverseProxiedIdMap;	// 152 = 0x98
    NSMutableDictionary *_sessionOriginatedCommandTable;	// 160 = 0xa0
    NSString *_winningSessionId;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_resultObjectsEvaluationTimer;	// 176 = 0xb0
    _Bool _isQueuingResultsForDelayedEvaluation;	// 184 = 0xb8
    _Bool _timerFiredOnce;	// 185 = 0xb9
    _Bool _continueWithPreviousWinner;	// 186 = 0xba
    NSError *_lastSessionError;	// 192 = 0xc0
    int _preferredSessionType;	// 200 = 0xc8
    int _preferredRemoteSessionType;	// 204 = 0xcc
    SASSpeechRecognized *_savedSasSpeechRecognized;	// 208 = 0xd0
    _Bool _savedSasSpeechRecognizedSubmitted;	// 216 = 0xd8
    SASSpeechFailure *_savedSasSpeechFailure;	// 224 = 0xe0
    unsigned int _serverDrivenResultsHoldTime;	// 232 = 0xe8
    _Bool _serverSpeechRecognitionArrived;	// 236 = 0xec
    _Bool _hasActiveRequest;	// 237 = 0xed
    _Bool _needsResetOnRequestBoundary;	// 238 = 0xee
    NSMutableSet *_assertions;	// 240 = 0xf0
    AFAWDSiriRequestRecord *_awdRequestRecord;	// 248 = 0xf8
    id <ADSessionManagerIntercepting> _interceptor;	// 256 = 0x100
    CDUnknownBlockType _sessionResetOnRequestBoundaryCompletion;	// 264 = 0x108
    SABaseCommand *_currentRequest;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00200000000d803a
@property(nonatomic) __weak id <ADSessionManagerIntercepting> interceptor; // @synthesize interceptor=_interceptor;
@property(nonatomic) __weak id <ADSessionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)speechError:(id)arg1;	// IMP=0x00100000000d7ba9
- (void)_propagateCachedSpeechErrorToLocalSessions;	// IMP=0x00100000000d7a08
- (void)_mapAndSendSpeechFailure:(id)arg1 toLocalSession:(id)arg2;	// IMP=0x00100000000d7921
- (void)handleCommandInLocalSession:(id)arg1;	// IMP=0x00100000000d7543
- (void)sendCommandToLocalSession:(id)arg1;	// IMP=0x00100000000d73d5
- (void)_logContextForWinningSession:(id)arg1 forReason:(id)arg2 forRemoteSessionScore:(long long)arg3 forLocalSessionScore:(long long)arg4;	// IMP=0x00100000000d7164
- (void)_resetWinningState;	// IMP=0x00100000000d704e
- (_Bool)_reverseMapSessionRequestIdToADRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000d6e76
- (id)_mapADRequestIdToSessionRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000d6e13
- (id)_keyForRequestId:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000d6d68
- (_Bool)_canStartLocalSession;	// IMP=0x00100000000d6b95
- (_Bool)_hasAtleastOneActiveSessionBesides:(id)arg1;	// IMP=0x00100000000d68bd
- (void)refreshValidationData;	// IMP=0x00100000000d6779
- (void)setHasClient:(_Bool)arg1;	// IMP=0x00100000000d6770
- (_Bool)hasClient;	// IMP=0x00100000000d6767
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d64aa
- (void)setAWDRequestRecordMetrics:(id)arg1;	// IMP=0x00100000000d634b
- (void)_logMetricsForSessionFailure:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000d618e
- (void)_logCommandToMetrics:(id)arg1 forSession:(id)arg2 outbound:(_Bool)arg3;	// IMP=0x00100000000d5cab
- (void)getConnectionMetrics:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5a5b
- (void)updateConnectionSetConnectionType:(unsigned int)arg1;	// IMP=0x00100000000d5a11
- (void)updateConnectionDidFailAggdMetrics;	// IMP=0x00100000000d59d4
- (void)updateConnectionDidDropAggdMetrics;	// IMP=0x00100000000d5997
- (id)aggregator;	// IMP=0x00100000000d5950
- (id)sessionRequestIdForRefId:(id)arg1;	// IMP=0x00100000000d5783
- (void)setRequestId:(id)arg1;	// IMP=0x00100000000d4e8b
- (void)_resetSessionOnRequestBoundaryIfNeeded;	// IMP=0x00100000000d4aaf
- (void)relinquishAssertion:(id)arg1;	// IMP=0x00100000000d49d7
- (id)acquireAssertionForReason:(id)arg1;	// IMP=0x00100000000d48d7
- (void)_clearSessions;	// IMP=0x00100000000d48ba
- (void)_addSession:(id)arg1;	// IMP=0x00100000000d4860
- (_Bool)hasSessionRequiringServerConnection;	// IMP=0x00100000000d45e7
- (void)setHasActiveRequest:(_Bool)arg1;	// IMP=0x00100000000d4350
- (void)sendRawCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000d432b
- (void)sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3;	// IMP=0x00100000000d4303
- (void)setCurrentRequest:(id)arg1;	// IMP=0x00100000000d4236
- (void)_sendCommand:(id)arg1 opportunistically:(_Bool)arg2 logEvent:(_Bool)arg3 doSendPreProcessing:(_Bool)arg4 doSendPostProcessing:(_Bool)arg5;	// IMP=0x00100000000d40aa
- (void)delegateDidHandleCommand:(id)arg1;	// IMP=0x00100000000d3e09
- (void)handleCommand:(id)arg1;	// IMP=0x00100000000d3c16
- (void)_convertEmbeddedRequestIds:(id)arg1 originalCommand:(id)arg2 session:(id)arg3;	// IMP=0x00100000000d3ad4
- (_Bool)_allowWhitelistedCommands:(id)arg1;	// IMP=0x00100000000d3a74
- (_Bool)_filterUnsupportedCommands:(id)arg1 inGroup:(id)arg2 onSession:(id)arg3;	// IMP=0x00100000000d394b
- (void)assistantSessionConnectionDidClose:(id)arg1;	// IMP=0x00100000000d3914
- (void)assistantSessionRetryingRequest:(id)arg1;	// IMP=0x00100000000d3860
- (void)assistantSessionDictationHIPAAMDMStatusDidChange;	// IMP=0x00100000000d384e
- (void)assistantSession:(id)arg1 beginSessionRetryPreferringWWAN:(_Bool)arg2;	// IMP=0x00100000000d373d
- (void)assistantSession:(id)arg1 willRetryOnError:(id)arg2;	// IMP=0x00100000000d366c
- (void)assistantSession:(id)arg1 didLoadAssistantSyncRequested:(_Bool)arg2;	// IMP=0x00100000000d3629
- (void)assistantSessionDidDestroyAssistant:(id)arg1;	// IMP=0x00100000000d35f3
- (void)assistantSessionDidCreateAssistant:(id)arg1;	// IMP=0x00100000000d353f
- (void)assistantSession:(id)arg1 didChangeRequestIdFrom:(id)arg2 toId:(id)arg3;	// IMP=0x00100000000d32a3
- (id)assistantSessionCommandsToRestoreStateOnNewConnection:(id)arg1;	// IMP=0x00100000000d325a
- (_Bool)assistantSessionShouldAttemptRetry:(id)arg1;	// IMP=0x00100000000d31a2
- (void)assistantSessionConnectionDidReset:(id)arg1;	// IMP=0x00100000000d301e
- (_Bool)assistantSessionShouldRestartConnectionOnWiFi:(id)arg1;	// IMP=0x00100000000d3007
- (_Bool)assistantSessionShouldLogVisibleRequestFailure:(id)arg1 forError:(id)arg2;	// IMP=0x00100000000d2f0b
- (void)assistantSession:(id)arg1 receivedError:(id)arg2 isRetryableError:(_Bool)arg3;	// IMP=0x00100000000d2b7a
- (void)assistantSession:(id)arg1 cannotHandleRequest:(id)arg2 error:(id)arg3;	// IMP=0x00100000000d2822
- (void)assistantSession:(id)arg1 receivedCommand:(id)arg2;	// IMP=0x00100000000d2275
- (void)assistantSession:(id)arg1 didOpenConnectionWithPolicyId:(id)arg2 routeId:(id)arg3 connectionDelay:(double)arg4;	// IMP=0x00100000000d1f6f
- (void)assistantSessionWillStartConnection:(id)arg1;	// IMP=0x00100000000d1ebb
- (_Bool)assistantSessionShouldPrewarmConnetion:(id)arg1;	// IMP=0x00100000000d1e7d
- (void)sendRemoteGizmoDeviceToServer:(id)arg1;	// IMP=0x00100000000d1d1c
- (void)resetSessionsIfRequiredBasedOnOrchestrationMode:(_Bool)arg1;	// IMP=0x00100000000d1bd7
- (void)_resetWinningStateAndPurgeRequestMaps;	// IMP=0x00100000000d1ba9
- (void)resetWinningState;	// IMP=0x00100000000d1b90
- (_Bool)hasActiveSessionForSendingMetrics;	// IMP=0x00100000000d1929
- (void);	// IMP=0x00100000000d1877
- (void)_pickDefaultWinnerWithDroppingSession:(id)arg1;	// IMP=0x00100000000d1319
- (void)_cancelOtherSessionRequests:(id)arg1 forRefId:(id)arg2;	// IMP=0x00100000000d0e5b
- (_Bool)_haveUsefulness:(id)arg1 usefulnessScore:(id *)arg2;	// IMP=0x00100000000d0de9
- (_Bool)_isDestructive:(id)arg1;	// IMP=0x00100000000d0b31
- (void)_queueResultObject:(id)arg1 forSession:(id)arg2;	// IMP=0x00100000000d08e1
- (void)_resetResultObjectsTimer;	// IMP=0x00100000000d08a2
- (void)_resultObjectsTimerFired:(id)arg1;	// IMP=0x00100000000d07b1
- (void)_startResultObjectsTimer;	// IMP=0x00100000000d067e
- (unsigned int)_resultObjectsHoldTime;	// IMP=0x00100000000d05c2
- (_Bool)_evaluateResultObjects;	// IMP=0x00100000000cfc8b
- (int)_preferredSessionType;	// IMP=0x00100000000cfc5a
- (void)updateForCallIsLikelyDueToRequest:(_Bool)arg1;	// IMP=0x00100000000cfb21
- (void)updateForCallState:(_Bool)arg1;	// IMP=0x00100000000cfb13
- (void)_unregisterForSleepNotification;	// IMP=0x00100000000cfa3c
- (void)_registerForSleepNotification;	// IMP=0x00100000000cf96f
- (void)_powerChangedMessageType:(unsigned int)arg1 notificationID:(long long)arg2;	// IMP=0x00100000000cf828
- (void)_languageCodeDidChange:(id)arg1;	// IMP=0x00100000000cf762
- (void)_enabledBitsChanged:(id)arg1;	// IMP=0x00100000000cf69c
- (void)_unregisterForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000cf62a
- (void)_registerForPossibleSessionDestroyingNotifications;	// IMP=0x00100000000cf5b1
- (id)_saConnectionMode;	// IMP=0x00100000000cf541
- (void)_sharedAssistantdIdentifierDidChange:(id)arg1;	// IMP=0x00100000000cf47b
- (void)_updateSharedUserIdentifiers;	// IMP=0x00100000000cf3ac
- (id)languageCode;	// IMP=0x00100000000cf39a
- (id)_languageCode;	// IMP=0x00100000000cf321
- (void)_purgeRequestMaps;	// IMP=0x00100000000cf25c
- (void)endRetryableRequestForCommand:(id)arg1;	// IMP=0x00100000000cefc1
- (void)resetRetryManager;	// IMP=0x00100000000cee99
- (void)startRetry;	// IMP=0x00100000000ced39
- (void)resetSessionsAtNextRequestBoundaryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ceb63
- (void)resetSessionsAtNextRequestBoundary;	// IMP=0x00100000000ceb4f
- (void)resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000ceb3d
- (void)_resetSessionsAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000ce73d
- (void)cancelSessions;	// IMP=0x00100000000ce72b
- (void)cancelSynchronously;	// IMP=0x00100000000ce701
- (void)cancel;	// IMP=0x00100000000ce67e
- (void)_cancelSynchronously:(_Bool)arg1;	// IMP=0x00100000000ce4ee
- (void)beginUpdatingAssistantData;	// IMP=0x00100000000ce3aa
- (void)preheatSessions;	// IMP=0x00100000000ce393
- (void)preheatAndMakeQuiet:(_Bool)arg1;	// IMP=0x00100000000ce221
- (void)_startSession:(int)arg1 makeQuiet:(_Bool)arg2;	// IMP=0x00100000000ce004
- (void)_startSessions:(_Bool)arg1;	// IMP=0x00100000000cdcd7
- (void)dealloc;	// IMP=0x00100000000cdb86
- (id)initOnQueue:(id)arg1 account:(id)arg2 instanceContext:(id)arg3;	// IMP=0x00100000000cd981

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKDatabaseConnection, GKEntitlements, GKEventTuple, GKGameInternal, GKInviteSession, GKMatchResponse, GKPeerDiscovery, GKThreadsafeDictionary, GKViceroyNearbyDiscovery, MISSING_TYPE, NSDate, NSDictionary, NSLocale, NSMapTable, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSXPCConnection, _GKStateMachine;
@protocol GKUIViewService, OS_dispatch_queue, OS_dispatch_source;

@interface GKClientProxy : NSObject
{
    _Bool _installed;	// 8 = 0x8
    _Bool _supportsMultipleActivePlayers;	// 9 = 0x9
    _Bool _isOcelot;	// 10 = 0xa
    unsigned char _achievementsRateLimitedCurrentState;	// 11 = 0xb
    unsigned char _scoresRateLimitedCurrentState;	// 12 = 0xc
    _Bool _initialized;	// 13 = 0xd
    int _pid;	// 16 = 0x10
    unsigned int _applicationState;	// 20 = 0x14
    unsigned int _previousApplicationState;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_authQueue;	// 40 = 0x28
    NSXPCConnection *_connection;	// 48 = 0x30
    GKEntitlements *_entitlements;	// 56 = 0x38
    MISSING_TYPE *_adamID;	// 64 = 0x40
    NSNumber *_sandboxExtensionToken;	// 72 = 0x48
    NSNumber *_externalVersion;	// 80 = 0x50
    NSString *_bundleIdentifier;	// 88 = 0x58
    NSString *_originalBundleIdentifier;	// 96 = 0x60
    NSString *_bundleVersion;	// 104 = 0x68
    NSString *_bundleShortVersion;	// 112 = 0x70
    long long _environment;	// 120 = 0x78
    NSDate *_achievementsRateLimitingStartDate;	// 128 = 0x80
    long long _achievementsRateLimitingCurrentNumberOfRequests;	// 136 = 0x88
    NSDate *_scoresRateLimitingStartDate;	// 144 = 0x90
    long long _scoresRateLimitingCurrentNumberOfRequests;	// 152 = 0x98
    NSMutableDictionary *_alreadyCoalescingNetworkRequests;	// 160 = 0xa0
    NSString *_language;	// 168 = 0xa8
    GKClientProxy<GKUIViewService> *_viewService;	// 176 = 0xb0
    GKGameInternal *_currentGame;	// 184 = 0xb8
    GKViceroyNearbyDiscovery *_nearbyDiscovery;	// 192 = 0xc0
    GKPeerDiscovery *_peerDiscovery;	// 200 = 0xc8
    GKEventTuple *_launchEvent;	// 208 = 0xd0
    GKInviteSession *_inviteSession;	// 216 = 0xd8
    GKMatchResponse *_currentMatchResponse;	// 224 = 0xe0
    NSMapTable *_extensionProxies;	// 232 = 0xe8
    _GKStateMachine *_appInitStateMachine;	// 240 = 0xf0
    GKThreadsafeDictionary *_appSessions;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_delayedRequestsQueue;	// 256 = 0x100
    GKDatabaseConnection *_delayedRequestsDBConnection;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 272 = 0x110
    NSMutableSet *_pendingDataTypesForRefresh;	// 280 = 0x118
    NSDictionary *_preferencesFromBag;	// 288 = 0x120
    NSObject<OS_dispatch_source> *_checkMatchStatusTimer;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_checkMatchStatusQueue;	// 304 = 0x130
}

+ (id)syncQueue;	// IMP=0x002000000014efd8
+ (void)removeClient:(id)arg1;	// IMP=0x00100000001545d2
+ (void)enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000154504
+ (id)clientsToBeEnumerated;	// IMP=0x00100000001542ff
+ (id)clientForMatchmakingRID:(id)arg1;	// IMP=0x0010000000154126
+ (id)clientForInviteSessionToken:(id)arg1;	// IMP=0x0010000000153c09
+ (_Bool)isGameCenterDashboardForegroundRunning;	// IMP=0x0010000000153697
+ (void)checkGameCenterEnabledForegroundClients;	// IMP=0x0010000000153691
+ (id)nonGameCenterForegroundClient;	// IMP=0x0010000000153534
+ (id)foregroundClient;	// IMP=0x00100000001533d2
+ (id)clientForBundleID:(id)arg1 pid:(int)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x00100000001533b8
+ (id)clientForBundleID:(id)arg1 bundle:(id)arg2 pid:(int)arg3 createIfNecessary:(_Bool)arg4;	// IMP=0x00100000001523af
+ (_Bool)isExtensionBundleID:(id)arg1;	// IMP=0x001000000015225a
+ (id)clientForProcessIdentifier:(int)arg1;	// IMP=0x00100000001521bc
+ (id)clientForBundleID:(id)arg1;	// IMP=0x001000000015219f
+ (id)gameCenterClient;	// IMP=0x0010000000152178
+ (id)_clientLookup;	// IMP=0x0010000000152111
+ (id)factoryQueue;	// IMP=0x00100000001520ba
+ (void)saveAppInitState:(id)arg1 forBundleID:(id)arg2 pid:(int)arg3;	// IMP=0x0010000000159819
+ (id)lastKnownAppInitStateForClientWithBundleID:(id)arg1 pid:(int)arg2;	// IMP=0x001000000015930b
+ (void)authenticationDidChange;	// IMP=0x0010000000158d4e
+ (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x00100000001604c0
+ (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x001000000015f11e
+ (void)closeDatabaseFromManagedObjectContextForMOC:(id)arg1;	// IMP=0x00100000001656cf
+ (void)closeDatabaseFromManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x0010000000165683
+ (id)createPersistentStoreCoordinator;	// IMP=0x0010000000165503
+ (id)databaseURLForPlayerID:(id)arg1 bundleID:(id)arg2 language:(id)arg3 fileManager:(id)arg4;	// IMP=0x00100000001653ef
+ (id)newManagedObjectContextForPlayerID:(id)arg1 bundleID:(id)arg2 language:(id)arg3 environment:(long long)arg4;	// IMP=0x0010000000165067
+ (id)_newManagedObjectContextWithCacheURL:(id)arg1 environment:(long long)arg2 psc:(id)arg3 storeOptions:(id)arg4;	// IMP=0x001000000016439c
+ (void)migrateInsecureDatabaseToSecureDatabaseURL:(id)arg1 usingPersistantStoreCoordinator:(id)arg2 fileManager:(id)arg3 options:(id)arg4 playerID:(id)arg5 bundleID:(id)arg6 language:(id)arg7;	// IMP=0x001000000016426e
+ (id)cacheFileQueue;	// IMP=0x0010000000164217
+ (id)managedObjectModel;	// IMP=0x0010000000164002
+ (void)removeAllCaches;	// IMP=0x0010000000163a1a
+ (void)removeCacheForPlayerID:(id)arg1;	// IMP=0x00100000001633da
+ (id)insecureDatabaseFileURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3;	// IMP=0x0010000000163381
+ (id)insecureDatabaseDirectoryURLForBundleID:(id)arg1 language:(id)arg2 playerID:(id)arg3;	// IMP=0x0010000000163066
+ (id)cacheDirectoryForBundleID:(id)arg1;	// IMP=0x0010000000162fcd
+ (id)_existingManagedObjectContextForPlayerID:(id)arg1;	// IMP=0x0010000000162c2d
+ (id)contextKeyForPlayerID:(id)arg1;	// IMP=0x0010000000162c15
- (void).cxx_destruct;	// IMP=0x0010000000151f16
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkMatchStatusQueue; // @synthesize checkMatchStatusQueue=_checkMatchStatusQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *checkMatchStatusTimer; // @synthesize checkMatchStatusTimer=_checkMatchStatusTimer;
@property(copy, nonatomic) NSDictionary *preferencesFromBag; // @synthesize preferencesFromBag=_preferencesFromBag;
@property(retain, nonatomic) NSMutableSet *pendingDataTypesForRefresh; // @synthesize pendingDataTypesForRefresh=_pendingDataTypesForRefresh;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) GKDatabaseConnection *delayedRequestsDBConnection; // @synthesize delayedRequestsDBConnection=_delayedRequestsDBConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayedRequestsQueue; // @synthesize delayedRequestsQueue=_delayedRequestsQueue;
@property(retain, nonatomic) GKThreadsafeDictionary *appSessions; // @synthesize appSessions=_appSessions;
@property(retain) _GKStateMachine *appInitStateMachine; // @synthesize appInitStateMachine=_appInitStateMachine;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property(retain, nonatomic) NSMapTable *extensionProxies; // @synthesize extensionProxies=_extensionProxies;
@property(retain) GKMatchResponse *currentMatchResponse; // @synthesize currentMatchResponse=_currentMatchResponse;
@property(retain) GKInviteSession *inviteSession; // @synthesize inviteSession=_inviteSession;
@property(retain, nonatomic) GKEventTuple *launchEvent; // @synthesize launchEvent=_launchEvent;
@property unsigned int previousApplicationState; // @synthesize previousApplicationState=_previousApplicationState;
@property unsigned int applicationState; // @synthesize applicationState=_applicationState;
@property(retain, nonatomic) GKPeerDiscovery *peerDiscovery; // @synthesize peerDiscovery=_peerDiscovery;
@property(retain, nonatomic) GKViceroyNearbyDiscovery *nearbyDiscovery; // @synthesize nearbyDiscovery=_nearbyDiscovery;
@property(retain, nonatomic) GKGameInternal *currentGame; // @synthesize currentGame=_currentGame;
@property(nonatomic) __weak GKClientProxy<GKUIViewService> *viewService; // @synthesize viewService=_viewService;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(retain, nonatomic) NSMutableDictionary *alreadyCoalescingNetworkRequests; // @synthesize alreadyCoalescingNetworkRequests=_alreadyCoalescingNetworkRequests;
@property(nonatomic) unsigned char scoresRateLimitedCurrentState; // @synthesize scoresRateLimitedCurrentState=_scoresRateLimitedCurrentState;
@property(nonatomic) long long scoresRateLimitingCurrentNumberOfRequests; // @synthesize scoresRateLimitingCurrentNumberOfRequests=_scoresRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *scoresRateLimitingStartDate; // @synthesize scoresRateLimitingStartDate=_scoresRateLimitingStartDate;
@property(nonatomic) unsigned char achievementsRateLimitedCurrentState; // @synthesize achievementsRateLimitedCurrentState=_achievementsRateLimitedCurrentState;
@property(nonatomic) long long achievementsRateLimitingCurrentNumberOfRequests; // @synthesize achievementsRateLimitingCurrentNumberOfRequests=_achievementsRateLimitingCurrentNumberOfRequests;
@property(retain, nonatomic) NSDate *achievementsRateLimitingStartDate; // @synthesize achievementsRateLimitingStartDate=_achievementsRateLimitingStartDate;
@property _Bool isOcelot; // @synthesize isOcelot=_isOcelot;
@property(nonatomic) _Bool supportsMultipleActivePlayers; // @synthesize supportsMultipleActivePlayers=_supportsMultipleActivePlayers;
@property(nonatomic) _Bool installed; // @synthesize installed=_installed;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *bundleShortVersion; // @synthesize bundleShortVersion=_bundleShortVersion;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *originalBundleIdentifier; // @synthesize originalBundleIdentifier=_originalBundleIdentifier;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSNumber *externalVersion; // @synthesize externalVersion=_externalVersion;
@property(retain, nonatomic) NSNumber *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;
@property(retain, nonatomic) NSNumber *adamID; // @synthesize adamID=_adamID;
@property(retain) GKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authQueue; // @synthesize authQueue=_authQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
- (void)receivedData:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x0010000000151899
- (void)playerLost:(id)arg1 deviceID:(id)arg2;	// IMP=0x00100000001516e7
- (void)playerFound:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x0010000000151518
- (void)deleteInviteSession;	// IMP=0x00100000001512d8
- (id)fetchOrCreateInviteSession;	// IMP=0x0010000000150e0b
- (void)cancelInvitationForSession:(id)arg1 playerID:(id)arg2 pushTokens:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x001000000015077a
- (void)cancelOutstandingCheckMatchStatus;	// IMP=0x00100000001506f1
- (_Bool)processMatchResponse:(id)arg1;	// IMP=0x001000000014f762
- (void)checkMatchStatus;	// IMP=0x001000000014f26b
- (void)performAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000014f205
- (void)performSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000014f02f
- (void)setLaunchEvent:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x001000000014ed78
- (void)updatePreferencesFromBag:(id)arg1;	// IMP=0x001000000014ed23
- (void)setExtensionProxy:(id)arg1 forBundleID:(id)arg2;	// IMP=0x001000000014ebf5
@property(readonly, nonatomic) NSString *protocolVersion;
- (_Bool)conformsToMultiUserRestrictions;	// IMP=0x001000000014eb8e
- (_Bool)isExtension;	// IMP=0x001000000014eb86
- (_Bool)isUIService;	// IMP=0x001000000014eb7e
- (_Bool)isGameCenter;	// IMP=0x001000000014eb30
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014e67f
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)credentialForPlayer:(id)arg1;	// IMP=0x001000000014e38a
- (id)transportWithCredential:(id)arg1;	// IMP=0x001000000014e2d6
- (void)dealloc;	// IMP=0x001000000014e1e2
- (void)updateIfRecentlyInstalled;	// IMP=0x001000000014de0f
- (id)initWithBundleIdentifier:(id)arg1 bundleOrNil:(id)arg2 pid:(int)arg3;	// IMP=0x001000000014d48f
- (void)initializeInitializationStateMachine;	// IMP=0x001000000014d326
- (void)handleCloudKitShareMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000158af7
- (oneway void)resetLoginCancelCount;	// IMP=0x001000000015885b
- (oneway void)loadRemoteImageDataForURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001587c9
- (oneway void)localizedMessageFromDictionary:(id)arg1 forBundleID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001586b7
- (oneway void)getAuthenticatedPlayerIDWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001585ec
- (oneway void)getAccountNameWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000158364
- (oneway void)getAuthenticatedLocalPlayersWithStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001574ec
- (oneway void)getGamedFiredUpWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000001572a6
- (oneway void)getAuthenticatedPlayerCredential:(CDUnknownBlockType)arg1;	// IMP=0x0010000000156e7c
- (oneway void)getAuthenticatedPlayerInfo:(CDUnknownBlockType)arg1;	// IMP=0x0010000000156ac2
- (oneway void)getPrivateServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001565f3
- (oneway void)getServicesForPID:(int)arg1 localPlayer:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000155fed
- (oneway void)getPrivateServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000155b3c
- (oneway void)getServicesWithTransport:(id)arg1 forClient:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000001555a4
- (oneway void)setTestGame:(id)arg1 protocolVersion:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000015558d
- (oneway void)messagesDidReceiveGameCenterURL:(id)arg1 senderHandle:(id)arg2 contactID:(id)arg3;	// IMP=0x0010000000154a4b
- (oneway void)setHostPID:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000154a34
- (id)serviceForClass:(Class)arg1 transport:(id)arg2 client:(id)arg3 credential:(id)arg4;	// IMP=0x0010000000154796
- (void)didEnterForeground;	// IMP=0x0010000000159f4a
- (void)updateAppInitState;	// IMP=0x0010000000159e5d
- (id)verifyAuthorized;	// IMP=0x00100000001591f8
- (id)appInitState;	// IMP=0x00100000001591df
- (_Bool)setAppInitState:(id)arg1;	// IMP=0x00100000001591c6
- (void)stateDidChange;	// IMP=0x001000000015914b
- (id)missingTransitionFromState:(id)arg1 toState:(id)arg2;	// IMP=0x0010000000159008
- (void)sendAuthenticationDidChangeNotificationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000158d89
- (void)bgInitializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015ec87
- (void)initializeWithCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015e676
- (void)removeAppSessionForPlayer:(id)arg1;	// IMP=0x001000000015e65d
- (id)appSessionForPlayer:(id)arg1;	// IMP=0x001000000015e5d6
- (void)addAppSession:(id)arg1 forCredential:(id)arg2;	// IMP=0x001000000015e4be
- (void)backgroundWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000015dd0f
- (void)terminateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000015d5ee
- (oneway void)setLogBits:(int)arg1;	// IMP=0x001000000015d4e1
- (oneway void)authenticatedPlayersDidChange:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000015cd6b
- (oneway void)completedOptimisticAuthenticationWithResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000015ccbf
- (oneway void)setCurrentGame:(id)arg1 serverEnvironment:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000015c6a7
- (oneway void)getPreferenceForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000015c637
- (oneway void)setPreferencesValues:(id)arg1;	// IMP=0x001000000015c4d6
- (oneway void)refreshPendingDataTypes;	// IMP=0x001000000015c3b3
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;	// IMP=0x001000000015bf1b
- (oneway void)setBadgeCount:(unsigned long long)arg1 forType:(unsigned long long)arg2;	// IMP=0x001000000015bec3
- (oneway void)session:(id)arg1 didReceiveMessage:(id)arg2 withData:(id)arg3 fromPlayer:(id)arg4;	// IMP=0x001000000015bdfb
- (oneway void)session:(id)arg1 didReceiveData:(id)arg2 fromPlayer:(id)arg3;	// IMP=0x001000000015bd57
- (oneway void)session:(id)arg1 player:(id)arg2 didSaveData:(id)arg3;	// IMP=0x001000000015bcb3
- (oneway void)session:(id)arg1 player:(id)arg2 didChangeConnectionState:(long long)arg3;	// IMP=0x001000000015bc20
- (oneway void)session:(id)arg1 removedPlayer:(id)arg2;	// IMP=0x001000000015bb8e
- (oneway void)session:(id)arg1 addedPlayer:(id)arg2;	// IMP=0x001000000015bafc
- (oneway void)didReceiveData:(id)arg1 reliably:(_Bool)arg2 forRecipients:(id)arg3 fromSender:(id)arg4;	// IMP=0x001000000015ba5a
- (oneway void)didDisconnectFromParticipantWithID:(id)arg1;	// IMP=0x001000000015b9ea
- (oneway void)didConnectToParticipantWithID:(id)arg1;	// IMP=0x001000000015b97a
- (oneway void)relayPushNotification:(id)arg1;	// IMP=0x001000000015b842
- (oneway void)nearbyDataReceivedForPlayerID:(id)arg1 deviceID:(id)arg2 data:(id)arg3;	// IMP=0x001000000015b79e
- (oneway void)nearbyPlayerLostForPlayerID:(id)arg1 deviceID:(id)arg2;	// IMP=0x001000000015b70c
- (oneway void)nearbyPlayerFoundForPlayerID:(id)arg1 deviceID:(id)arg2 discoveryInfo:(id)arg3;	// IMP=0x001000000015b668
- (oneway void)cancelGameInvite:(id)arg1;	// IMP=0x001000000015b530
- (oneway void)cancelInviteWithNotification:(id)arg1;	// IMP=0x001000000015b3f8
- (oneway void)updateInviteWithNotification:(id)arg1;	// IMP=0x001000000015b12b
- (oneway void)declineInviteWithNotification:(id)arg1;	// IMP=0x001000000015aff3
- (oneway void)acceptInviteWithNotification:(id)arg1;	// IMP=0x001000000015aebb
- (oneway void)acceptMultiplayerGameInvite;	// IMP=0x001000000015adec
- (oneway void)fetchTurnBasedData;	// IMP=0x001000000015ad88
- (oneway void)achievementSelected:(id)arg1;	// IMP=0x001000000015ad18
- (oneway void)scoreSelected:(id)arg1;	// IMP=0x001000000015aca8
- (oneway void)challengeCompleted:(id)arg1;	// IMP=0x001000000015ac38
- (oneway void)challengeReceived:(id)arg1;	// IMP=0x001000000015abc8
- (oneway void)completedChallengeSelected:(id)arg1;	// IMP=0x001000000015ab58
- (oneway void)receivedChallengeSelected:(id)arg1;	// IMP=0x001000000015aae8
- (oneway void)friendRequestSelected:(id)arg1;	// IMP=0x001000000015aa38
- (oneway void)respondedToNearbyInvite:(id)arg1;	// IMP=0x001000000015a9c8
- (oneway void)resetNetworkActivity;	// IMP=0x001000000015a984
- (oneway void)endNetworkActivity;	// IMP=0x001000000015a940
- (oneway void)beginNetworkActivity;	// IMP=0x001000000015a8fc
- (oneway void)requestSandboxExtension:(CDUnknownBlockType)arg1;	// IMP=0x001000000015a82e
- (oneway void)metricsValuesChanged;	// IMP=0x001000000015a7ea
- (id)connectionProxyForUseCase:(id)arg1;	// IMP=0x001000000015a5da
- (void)performDelayedRequestsForCredential:(id)arg1;	// IMP=0x0010000000160b0a
- (void)performDelayedRequestsForEnvironment:(long long)arg1;	// IMP=0x0010000000160a3b
- (id)removeGameWriterWithCredential:(id)arg1;	// IMP=0x001000000016042e
- (id)deletePlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x001000000016039c
- (id)setPlayerPhotoWriterWithCredential:(id)arg1;	// IMP=0x001000000016030a
- (id)setPlayerStatusWriterWithCredential:(id)arg1;	// IMP=0x0010000000160278
- (id)_delayedRequestWriterWithCacheWriterClass:(Class)arg1 cacheReaderClass:(Class)arg2 networkWriterClass:(Class)arg3 bagKey:(id)arg4 batchSubmissionInterval:(long long)arg5 credential:(id)arg6;	// IMP=0x001000000015fe07
- (void)_removeDelayedRequestStore;	// IMP=0x001000000015f6cc
- (void)_setupDelayedRequestsWriters;	// IMP=0x001000000015f49f
- (id)requestsCacheForEnvironment:(long long)arg1;	// IMP=0x001000000015f27b
- (id)storeAndForwardDirectoryPathForEnvironment:(long long)arg1;	// IMP=0x001000000015f20d
- (id)transactionGroupIfCacheExistsForPlayerID:(id)arg1;	// IMP=0x0010000000162f3c
- (id)transactionGroupForPlayerID:(id)arg1;	// IMP=0x0010000000162ed4
- (id)_managedObjectContextForPlayerID:(id)arg1;	// IMP=0x0010000000162cb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

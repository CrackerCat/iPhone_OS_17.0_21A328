//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACXAvailableApplicationManager, ACXDevice, ACXGizmoState, ACXInstallQueue, ACXLocalAppStoreInstallQueue, ACXRemoteAppList, ACXRemoteSystemAppList, MISSING_TYPE, NSString;
@protocol OS_dispatch_queue;

@interface ACXCompanionSyncConnection : NSObject
{
    _Bool _reunionSyncRunning;	// 8 = 0x8
    _Bool _needsAvailableSystemAppFetch;	// 9 = 0x9
    _Bool _availableSystemAppFetchRunning;	// 10 = 0xa
    ACXDevice *_device;	// 16 = 0x10
    ACXGizmoState *_gizmoState;	// 24 = 0x18
    ACXRemoteAppList *_remoteAppList;	// 32 = 0x20
    ACXRemoteSystemAppList *_availableSystemAppList;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
    ACXInstallQueue *_installQueue;	// 56 = 0x38
    ACXAvailableApplicationManager *_applicationManager;	// 64 = 0x40
    ACXLocalAppStoreInstallQueue *_appStoreLocalQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000003375e
@property(nonatomic) _Bool availableSystemAppFetchRunning; // @synthesize availableSystemAppFetchRunning=_availableSystemAppFetchRunning;
@property(nonatomic) _Bool needsAvailableSystemAppFetch; // @synthesize needsAvailableSystemAppFetch=_needsAvailableSystemAppFetch;
@property(nonatomic) _Bool reunionSyncRunning; // @synthesize reunionSyncRunning=_reunionSyncRunning;
@property(readonly, nonatomic) ACXLocalAppStoreInstallQueue *appStoreLocalQueue; // @synthesize appStoreLocalQueue=_appStoreLocalQueue;
@property(readonly, nonatomic) ACXAvailableApplicationManager *applicationManager; // @synthesize applicationManager=_applicationManager;
@property(readonly, nonatomic) ACXInstallQueue *installQueue; // @synthesize installQueue=_installQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(readonly, nonatomic) ACXRemoteSystemAppList *availableSystemAppList; // @synthesize availableSystemAppList=_availableSystemAppList;
@property(readonly, nonatomic) ACXRemoteAppList *remoteAppList; // @synthesize remoteAppList=_remoteAppList;
@property(readonly, nonatomic) ACXGizmoState *gizmoState; // @synthesize gizmoState=_gizmoState;
@property(readonly, nonatomic) ACXDevice *device; // @synthesize device=_device;
- (void)noteCompanionAppDatabaseRebuild;	// IMP=0x001000000003366e
- (void)noteNewCompanionApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3 forDBUUID:(id)arg4 endingSequenceNumber:(unsigned long long)arg5;	// IMP=0x0010000000032cab
- (void)_processSystemAppChangesForNewApps:(id)arg1 updatedApps:(id)arg2 removedApps:(id)arg3;	// IMP=0x00100000000323d3
- (void)resyncCompleted;	// IMP=0x00100000000322ff
- (void)applicationsRemoved:(id)arg1;	// IMP=0x00100000000320cf
- (void)applicationsUpdated:(id)arg1;	// IMP=0x0010000000031e90
- (void)applicationsAdded:(id)arg1;	// IMP=0x0010000000031a83
- (void)_setLocallyAvailableForRemoteApplicationInstances:(id)arg1;	// IMP=0x001000000003186b
- (void)acknowledgeAppEventsForDBUUID:(id)arg1 throughSequenceNumber:(unsigned long long)arg2;	// IMP=0x001000000003178e
- (void)fetchOutstandingAppEvents;	// IMP=0x00100000000316ab
- (void)fetchBundleIDList;	// IMP=0x00100000000315c8
- (void)fetchAppInfoForBundleIDs:(id)arg1;	// IMP=0x00100000000314ca
- (_Bool)supportsRemoteAppList;	// IMP=0x0010000000031497
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 writingToPreferencesLocation:(unsigned long long)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000030dd6
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003083a
- (void)fetchProvisioningProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000030823
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000003025c
- (void)installProvisioningProfileWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002fc95
- (void)acknowledgeTestFlightInstallBegunForWatchApp:(id)arg1;	// IMP=0x001000000002fc28
- (void)noteInstallFailure:(id)arg1 forWatchAppWithBundleID:(id)arg2 wasUserInitiated:(_Bool)arg3;	// IMP=0x001000000002faf4
- (void)performReunionSyncWithReason:(id)arg1;	// IMP=0x001000000002f9a7
- (void)processPendingStateWithReason:(id)arg1;	// IMP=0x001000000002f89c
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x001000000002f031
- (void)_onQueue_handleAppInstallFailureMessage:(id)arg1;	// IMP=0x001000000002ec80
- (void)_onQueue_handleIconForWatchAppMessage:(id)arg1;	// IMP=0x001000000002e6b5
- (void)_onQueue_handleCompatibleWatchAppsOnCompanionMessage:(id)arg1;	// IMP=0x001000000002e21a
- (void)_onQueue_handleInstallAppMessage:(id)arg1;	// IMP=0x001000000002dde2
- (void)_onQueue_handleAppDeleteMessage:(id)arg1;	// IMP=0x001000000002d8c7
- (id)_onQueue_availableCompanionAppBundleIDForWatchApp:(id)arg1;	// IMP=0x001000000002d7de
- (id)_onQueue_applicationForWatchAppWithBundleID:(id)arg1;	// IMP=0x001000000002d6d5
- (void)_onQueue_handleAppInstallMessage:(id)arg1;	// IMP=0x001000000002d66a
- (void)_onQueue_handleAppInstallMessage:(id)arg1 withAppManager:(id)arg2;	// IMP=0x001000000002ceeb
- (void)_onQueue_processPendingGizmoState;	// IMP=0x001000000002b743
- (_Bool)_onQueue_appNeedsInstall:(id)arg1;	// IMP=0x001000000002b571
- (void)_onQueue_triggerLocalAppStoreInstallForWatchApp:(id)arg1 userInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002b2be
- (void)_onQueue_sendRemoveMessageForBundleIDs:(id)arg1 isUserInitiated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002aa1e
- (void)_onQueue_sendInstallOnGizmoMessageForSystemAppBundleIDs:(id)arg1 appsWithStoreMetadata:(id)arg2 isUserInitiated:(_Bool)arg3 exclusiveInstall:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000002a414
- (void)_onQueue_beginReunionSyncWithRetryCount:(unsigned long long)arg1;	// IMP=0x0010000000029e55
- (void)_onQueue_beginReunionSync;	// IMP=0x0010000000029c37
- (void)_onQueue_processReunionSyncMessage:(id)arg1 withAppManager:(id)arg2;	// IMP=0x001000000002615b
- (void)_onQueue_processReunionSyncMessage:(id)arg1;	// IMP=0x00100000000260f0
- (_Bool)_value:(id)arg1 isDifferentFrom:(id)arg2;	// IMP=0x00100000000260e0
- (void)_onQueue_handleSADAppInfoResponse:(id)arg1;	// IMP=0x0010000000025abe
- (void)_onQueue_fetchAvailableSystemAppsWithRetryCount:(unsigned long long)arg1;	// IMP=0x001000000002554c
- (void)_onQueue_fetchAvailableSystemApps;	// IMP=0x001000000002544a
- (MISSING_TYPE *)removeWatchAppWithBundleID:completion: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000024f5d
- (id)remoteAppWithBundleID:(id)arg1;	// IMP=0x0010000000024cb9
- (void)_installQueuedOrCompletedForWatchBundleID:(id)arg1 companionAppBundleID:(id)arg2 withName:(id)arg3 userInitiated:(_Bool)arg4 withError:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000024820
- (void)installWatchAppAtURL:(id)arg1 installOptions:(id)arg2 size:(long long)arg3 completionWithError:(CDUnknownBlockType)arg4;	// IMP=0x0010000000023ba3
- (id)_appBundleFromURL:(id)arg1;	// IMP=0x00100000000237fb
- (void)_installWatchAppWithBundleID:(id)arg1 withProvisioningProfileInfo:(id)arg2 installationPendingBlock:(CDUnknownBlockType)arg3 completionWithError:(CDUnknownBlockType)arg4;	// IMP=0x0010000000022991
- (void)installWatchAppWithBundleID:(id)arg1 withProvisioningProfileInfo:(id)arg2 completionWithError:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022979
- (void)installSystemApplicationsWithBundleIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022803
- (_Bool)_onQueue_installFailedForWatchAppBundleID:(id)arg1 companionBundleID:(id)arg2 withError:(id)arg3 appName:(id)arg4 userInitiated:(_Bool)arg5 userPresentableError:(id *)arg6;	// IMP=0x0010000000022522
- (void)cancelPendingInstallations;	// IMP=0x00100000000223ff
- (void)markAllApplicationsAsRemoved;	// IMP=0x00100000000220a1
- (void)installAllApplications;	// IMP=0x0010000000021a81
- (void)reachabilityChangedForDevice:(id)arg1;	// IMP=0x0010000000021856
- (void)_onQueue_configureRemoteAppListsAndFetchSystemAppsIfNeeded;	// IMP=0x00100000000214c3
- (id)messager;	// IMP=0x0010000000021473
- (void)dealloc;	// IMP=0x0010000000021405
- (id)initWithDevice:(id)arg1;	// IMP=0x00100000000210b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

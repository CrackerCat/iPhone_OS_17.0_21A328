//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDActiveXPCClientConnectionsPeriodicTimer, HMDCameraClipFeedbackManager, HMDCameraClipsQuotaManager, HMDCameraSignificantEventFaceClassificationResolver, HMDDatabaseZoneManager, HMDFeaturesDataSource, HMFMessageDispatcher, NSDate, NSObject, NSString, NSUUID;
@protocol HMDCameraClipManagerDelegate, HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraClipManager : HMFObject
{
    _Bool _hasWriteAccess;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    id <HMDCameraClipManagerDelegate> _delegate;	// 24 = 0x18
    HMBLocalZone *_localZone;	// 32 = 0x20
    HMBCloudZone *_cloudZone;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    HMDDatabaseZoneManager *_zoneManager;	// 56 = 0x38
    HMDCameraClipsQuotaManager *_quotaManager;	// 64 = 0x40
    HMDCameraSignificantEventFaceClassificationResolver *_faceClassificationResolver;	// 72 = 0x48
    HMDActiveXPCClientConnectionsPeriodicTimer *_clientConnectionsTimer;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    NSUUID *_cameraProfileUUID;	// 96 = 0x60
    id <HMDFileManager> _fileManager;	// 104 = 0x68
    HMDFeaturesDataSource *_featuresDataSource;	// 112 = 0x70
    HMDCameraClipFeedbackManager *_feedbackManager;	// 120 = 0x78
    NSDate *_suppressNotificationsBeforeDate;	// 128 = 0x80
    unsigned long long _fetchBatchLimit;	// 136 = 0x88
    CDUnknownBlockType _fetchServerFactory;	// 144 = 0x90
}

+ (id)logCategory;	// IMP=0x00100000008ab240
+ (double)maximumClipDuration;	// IMP=0x00100000008ab199
- (void).cxx_destruct;	// IMP=0x00000000008a6b71
@property(copy) CDUnknownBlockType fetchServerFactory; // @synthesize fetchServerFactory=_fetchServerFactory;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(copy) NSDate *suppressNotificationsBeforeDate; // @synthesize suppressNotificationsBeforeDate=_suppressNotificationsBeforeDate;
@property(retain) HMDCameraClipFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly) HMDFeaturesDataSource *featuresDataSource; // @synthesize featuresDataSource=_featuresDataSource;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // @synthesize clientConnectionsTimer=_clientConnectionsTimer;
@property(readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // @synthesize faceClassificationResolver=_faceClassificationResolver;
@property(readonly) HMDCameraClipsQuotaManager *quotaManager; // @synthesize quotaManager=_quotaManager;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(nonatomic) _Bool hasWriteAccess; // @synthesize hasWriteAccess=_hasWriteAccess;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property __weak id <HMDCameraClipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000008a68e4
- (void)clientConnectionsTimerDidFire:(id)arg1;	// IMP=0x00000000008a688a
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000008a672c
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000008a65cb
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000008a5f2a
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000008a5eb9
- (_Bool)areShareModificationsEnabledForManager:(id)arg1;	// IMP=0x00000000008a5e66
- (_Bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;	// IMP=0x00000000008a5df5
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000008a5d84
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000008a5cca
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000008a5c10
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000008a5b56
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000008a5a83
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000008a5a12
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000008a59a1
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x00000000008a5930
- (void)handleImportClipsMessage:(id)arg1;	// IMP=0x00000000008a52c6
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008a4da0
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000008a43cd
- (void)handleDeleteAllClipsMessage:(id)arg1;	// IMP=0x00000000008a409f
- (void)handleDeleteClipMessage:(id)arg1;	// IMP=0x00000000008a3c3c
- (void)handleFetchSignificantEventsMessage:(id)arg1;	// IMP=0x00000000008a335b
- (void)handleFetchFaceCropURLMessage:(id)arg1;	// IMP=0x00000000008a2d1b
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008a2689
- (void)handleFetchHeroFrameURLMessage:(id)arg1;	// IMP=0x00000000008a20c8
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;	// IMP=0x00000000008a1a59
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;	// IMP=0x00000000008a1881
- (void)handleFetchCountOfClipsMessage:(id)arg1;	// IMP=0x00000000008a1131
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;	// IMP=0x00000000008a0665
- (void)handleFetchClipsMessage:(id)arg1;	// IMP=0x000000000089fe3a
- (void)handleFetchClipMessage:(id)arg1;	// IMP=0x000000000089f848
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x000000000089f63e
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x000000000089f360
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x000000000089efbf
- (void)_removeAllFaceClassificationModels;	// IMP=0x000000000089eeac
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x000000000089edeb
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;	// IMP=0x000000000089e8d7
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;	// IMP=0x000000000089e3cc
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000089e15f
- (void)_handleChangedFaceClassificationModel:(id)arg1;	// IMP=0x000000000089df26
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x000000000089dd3e
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(_Bool)arg2 mirrorOutputFuture:(id)arg3;	// IMP=0x000000000089d8bd
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;	// IMP=0x000000000089d4ef
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;	// IMP=0x000000000089cea6
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;	// IMP=0x000000000089c85d
- (void)_cleanUpExpiredClips;	// IMP=0x000000000089c519
- (void)_cleanUpIncompleteClipsForInitialStartup:(_Bool)arg1;	// IMP=0x000000000089c10d
- (void)_cleanUpClipsForInitialStartup:(_Bool)arg1;	// IMP=0x000000000089c066
- (id)_performCloudPull;	// IMP=0x000000000089bdb5
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;	// IMP=0x000000000089ba94
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;	// IMP=0x000000000089b6d6
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;	// IMP=0x000000000089b1f3
- (_Bool)_fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 isAscending:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x000000000089ad56
- (_Bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(_Bool)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000089aa4c
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;	// IMP=0x000000000089a87d
- (id)_significantEventsWithUUIDs:(id)arg1;	// IMP=0x000000000089a7ed
- (id)_significantEventFromSignificantEventModel:(id)arg1;	// IMP=0x000000000089a6d4
- (id)_significantEventModelsForClipWithUUID:(id)arg1;	// IMP=0x000000000089a51b
- (id)_significantEventModelsWithUUIDs:(id)arg1;	// IMP=0x000000000089a196
- (id)home;	// IMP=0x000000000089a146
- (id)significantEventsForClipContainingDate:(id)arg1;	// IMP=0x0000000000899c67
- (id)performCloudPull;	// IMP=0x0000000000899b9c
- (void)cleanUpClips;	// IMP=0x0000000000899b47
- (id)disableCloudStorage;	// IMP=0x0000000000899827
- (id)enableCloudStorage;	// IMP=0x000000000089955c
- (id)remove;	// IMP=0x000000000089941e
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000008991f8
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x0000000000898ff3
- (void)configure;	// IMP=0x00000000008986a9
@property(readonly) _Bool hasStartedUpCloudZone;
- (id)significantEventsWithDateInterval:(id)arg1;	// IMP=0x000000000089839f
- (id)significantEventsForClipWithUUID:(id)arg1;	// IMP=0x000000000089830f
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 featuresDataSource:(id)arg9;	// IMP=0x0000000000897f86
- (id)initWithHome:(id)arg1 zoneUUID:(id)arg2 messageDispatcher:(id)arg3 workQueue:(id)arg4 cameraProfileUUID:(id)arg5;	// IMP=0x0000000000897caf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

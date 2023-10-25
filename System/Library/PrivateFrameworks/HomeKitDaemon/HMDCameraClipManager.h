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

+ (id)logCategory;	// IMP=0x00100000009d363a
+ (double)maximumClipDuration;	// IMP=0x00100000009d3593
- (void).cxx_destruct;	// IMP=0x00000000009cefae
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
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000009ced21
- (void)clientConnectionsTimerDidFire:(id)arg1;	// IMP=0x00000000009cecc7
- (void)zoneManager:(id)arg1 didReceiveMessageWithUserInfo:(id)arg2;	// IMP=0x00000000009ceb69
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000009cea08
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000009ce367
- (_Bool)zoneManager:(id)arg1 shouldRequestShareInvitationFromUser:(id)arg2;	// IMP=0x00000000009ce2f6
- (_Bool)areShareModificationsEnabledForManager:(id)arg1;	// IMP=0x00000000009ce2a3
- (_Bool)manager:(id)arg1 shouldGrantWriteAccessToUser:(id)arg2;	// IMP=0x00000000009ce232
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000009ce1c1
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x00000000009ce107
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x00000000009ce04d
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x00000000009cdf93
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg1;	// IMP=0x00000000009cdec0
- (void)handleUserRemoteAccessDidChangeNotification:(id)arg1;	// IMP=0x00000000009cde4f
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg1;	// IMP=0x00000000009cddde
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x00000000009cdd6d
- (void)handleImportClipsMessage:(id)arg1;	// IMP=0x00000000009cd703
- (void)handleRemoteHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000009cd1dd
- (void)handleHandleFaceMisclassificationMessage:(id)arg1;	// IMP=0x00000000009cc80a
- (void)handleDeleteAllClipsMessage:(id)arg1;	// IMP=0x00000000009cc4dc
- (void)handleDeleteClipMessage:(id)arg1;	// IMP=0x00000000009cc079
- (void)handleFetchSignificantEventsMessage:(id)arg1;	// IMP=0x00000000009cb798
- (void)handleFetchFaceCropURLMessage:(id)arg1;	// IMP=0x00000000009cb158
- (void)handleFetchFaceCropDataRepresentationMessage:(id)arg1;	// IMP=0x00000000009caac6
- (void)handleFetchHeroFrameURLMessage:(id)arg1;	// IMP=0x00000000009ca505
- (void)handleFetchHeroFrameDataRepresentationMessage:(id)arg1;	// IMP=0x00000000009c9e96
- (void)handleFetchVideoSegmentsAssetContextMessage:(id)arg1;	// IMP=0x00000000009c9cbe
- (void)handleFetchCountOfClipsMessage:(id)arg1;	// IMP=0x00000000009c956e
- (void)handleFetchClipForSignificantEventMessage:(id)arg1;	// IMP=0x00000000009c8aa2
- (void)handleFetchClipsMessage:(id)arg1;	// IMP=0x00000000009c8277
- (void)handleFetchClipMessage:(id)arg1;	// IMP=0x00000000009c7c85
- (void)handlePerformCloudPullMessage:(id)arg1;	// IMP=0x00000000009c7a7b
- (void)handleUnsubscribeMessage:(id)arg1;	// IMP=0x00000000009c779d
- (void)handleSubscribeMessage:(id)arg1;	// IMP=0x00000000009c73fc
- (void)_removeAllFaceClassificationModels;	// IMP=0x00000000009c72e9
- (id)_removeClipsWithUUIDs:(id)arg1 options:(id)arg2;	// IMP=0x00000000009c7228
- (void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3;	// IMP=0x00000000009c6d14
- (id)_handleFaceMisclassificationForFaceCropURL:(id)arg1 personUUID:(id)arg2 personManagerUUID:(id)arg3 significantEventModel:(id)arg4;	// IMP=0x00000000009c6809
- (void)_notifyForChangedSignificantEventModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000009c659c
- (void)_handleChangedFaceClassificationModel:(id)arg1;	// IMP=0x00000000009c6363
- (void)_handleChangedSignificantEventNotificationModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000009c617b
- (void)_handleChangedClipModel:(id)arg1 wasCreated:(_Bool)arg2 mirrorOutputFuture:(id)arg3;	// IMP=0x00000000009c5cfa
- (void)_fetchAssetContextForMessage:(id)arg1 propertyName:(id)arg2;	// IMP=0x00000000009c592c
- (void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg1 removedSignificantEventUUIDs:(id)arg2;	// IMP=0x00000000009c52e3
- (void)_notifyTransportsOfUpdatedClips:(id)arg1 removedClipUUIDs:(id)arg2;	// IMP=0x00000000009c4c9a
- (void)_cleanUpExpiredClips;	// IMP=0x00000000009c4956
- (void)_cleanUpIncompleteClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000009c454a
- (void)_cleanUpClipsForInitialStartup:(_Bool)arg1;	// IMP=0x00000000009c44a3
- (id)_performCloudPull;	// IMP=0x00000000009c41f2
- (id)_fetchFaceCropURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000009c3ed1
- (id)_fetchHeroFrameURLForSignificantEventModel:(id)arg1;	// IMP=0x00000000009c3b13
- (id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg1;	// IMP=0x00000000009c3630
- (_Bool)_fetchClipsWithDateInterval:(id)arg1 quality:(long long)arg2 isAscending:(_Bool)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000000009c3193
- (_Bool)_fetchSignificantEventsWithDateInterval:(id)arg1 isAscending:(_Bool)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009c2e89
- (id)_faceClassificationsForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000009c2cba
- (id)_significantEventsWithUUIDs:(id)arg1;	// IMP=0x00000000009c2c2a
- (id)_significantEventFromSignificantEventModel:(id)arg1;	// IMP=0x00000000009c2b11
- (id)_significantEventModelsForClipWithUUID:(id)arg1;	// IMP=0x00000000009c2958
- (id)_significantEventModelsWithUUIDs:(id)arg1;	// IMP=0x00000000009c25d3
- (id)home;	// IMP=0x00000000009c2583
- (id)significantEventsForClipContainingDate:(id)arg1;	// IMP=0x00000000009c20a4
- (id)performCloudPull;	// IMP=0x00000000009c1fd9
- (void)cleanUpClips;	// IMP=0x00000000009c1f84
- (id)disableCloudStorage;	// IMP=0x00000000009c1c64
- (id)enableCloudStorage;	// IMP=0x00000000009c1999
- (id)remove;	// IMP=0x00000000009c185b
- (id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000009c1635
- (id)heroFrameURLForSignificantEventWithUUID:(id)arg1;	// IMP=0x00000000009c1430
- (void)configure;	// IMP=0x00000000009c0aab
@property(readonly) _Bool hasStartedUpCloudZone;
- (id)significantEventsWithDateInterval:(id)arg1;	// IMP=0x00000000009c07a1
- (id)significantEventsForClipWithUUID:(id)arg1;	// IMP=0x00000000009c0711
- (id)initWithZoneManager:(id)arg1 quotaManager:(id)arg2 faceClassificationResolver:(id)arg3 clientConnectionsTimer:(id)arg4 messageDispatcher:(id)arg5 workQueue:(id)arg6 cameraProfileUUID:(id)arg7 fileManager:(id)arg8 featuresDataSource:(id)arg9;	// IMP=0x00000000009c0388
- (id)initWithHome:(id)arg1 zoneUUID:(id)arg2 messageDispatcher:(id)arg3 workQueue:(id)arg4 cameraProfileUUID:(id)arg5;	// IMP=0x00000000009c00b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

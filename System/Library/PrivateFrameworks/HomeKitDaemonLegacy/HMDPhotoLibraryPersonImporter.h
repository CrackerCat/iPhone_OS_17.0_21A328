//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCloudPhotosSettingObserver, HMDPhotoLibrary, HMDPhotoLibraryObserver, HMIExternalPersonManager, HMIHomePersonManager, NSObject, NSString, NSUUID;
@protocol HMDPersonDataSource, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPhotoLibraryPersonImporter : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDPhotoLibrary *_photoLibrary;	// 24 = 0x18
    HMDCloudPhotosSettingObserver *_cloudPhotosSettingObserver;	// 32 = 0x20
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 40 = 0x28
    id <HMDPersonDataSource> _dataSource;	// 48 = 0x30
    HMDPhotoLibraryObserver *_photoLibraryObserver;	// 56 = 0x38
    CDUnknownBlockType _photoLibraryObserverFactory;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x001000000066c5a8
- (void).cxx_destruct;	// IMP=0x000000000066bcba
@property(copy) CDUnknownBlockType photoLibraryObserverFactory; // @synthesize photoLibraryObserverFactory=_photoLibraryObserverFactory;
@property(retain) HMDPhotoLibraryObserver *photoLibraryObserver; // @synthesize photoLibraryObserver=_photoLibraryObserver;
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) HMDCloudPhotosSettingObserver *cloudPhotosSettingObserver; // @synthesize cloudPhotosSettingObserver=_cloudPhotosSettingObserver;
@property(readonly) HMDPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)logIdentifier;	// IMP=0x000000000066bb81
- (void)observerDidObserveMajorChange:(id)arg1;	// IMP=0x000000000066bb29
- (void)observerDidObserveMinorChange:(id)arg1;	// IMP=0x000000000066bad4
- (void)handleCloudPhotosEnabledDidChangeNotification:(id)arg1;	// IMP=0x000000000066ba63
- (void)configureWithDataSource:(id)arg1 home:(id)arg2;	// IMP=0x000000000066b9ab
- (void)_handleUpdatedCloudPhotosSetting;	// IMP=0x000000000066b837
- (void)_unconfigure;	// IMP=0x000000000066b6fc
- (void)_configure;	// IMP=0x000000000066b545
- (void)_registerForNotifications;	// IMP=0x000000000066b492
- (void)_submitLogEventForFaceCrops:(id)arg1;	// IMP=0x000000000066b39e
- (void)_submitLogEventsForUpdatedPersonsWithCurrentPersons:(id)arg1 previousPersons:(id)arg2;	// IMP=0x000000000066afed
- (void)_updateFaceCropsWithCurrentPhotoLibraryFaceCrops:(id)arg1 forPersonWithUUID:(id)arg2 usingBatchChange:(id)arg3;	// IMP=0x000000000066a666
- (void)_updateFaceCropsForPersons:(id)arg1 usingBatchChange:(id)arg2;	// IMP=0x000000000066a231
- (void)_updateFaceCropsForPersonsWithUpdatedPhotosFaceCropsUsingCurrentPersons:(id)arg1 batchChange:(id)arg2;	// IMP=0x000000000066a09c
- (void)_updateFaceCropsForAllPersonsUsingCurrentPersons:(id)arg1 batchChange:(id)arg2;	// IMP=0x0000000000669f5d
- (id)_updatePersonsUsingBatchChange:(id)arg1;	// IMP=0x000000000066914b
- (void)_updatePersonsAndFaceCrops:(_Bool)arg1;	// IMP=0x0000000000668e5d
- (id)initWithUUID:(id)arg1 photoLibrary:(id)arg2 workQueue:(id)arg3 cloudPhotosSettingObserver:(id)arg4 logEventSubmitter:(id)arg5;	// IMP=0x0000000000668ca9
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000668b94

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMIHomePersonManager *homePersonManager;
@property(readonly) HMIExternalPersonManager *photosPersonManager;
@property(readonly) Class superclass;

@end

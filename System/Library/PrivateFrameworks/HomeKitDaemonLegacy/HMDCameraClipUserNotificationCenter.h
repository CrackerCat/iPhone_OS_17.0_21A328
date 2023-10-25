//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString;
@protocol HMDCameraBulletinBoard, HMDFileManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraClipUserNotificationCenter : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    id <HMDCameraBulletinBoard> _bulletinBoard;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    id <HMDFileManager> _fileManager;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000a0933a
- (void).cxx_destruct;	// IMP=0x0000000000a0906f
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDCameraBulletinBoard> bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000a08d9c
- (id)_writeHeroFrameData:(id)arg1;	// IMP=0x0000000000a089c8
- (void)_insertClipSignificantEventBulletin:(id)arg1;	// IMP=0x0000000000a08810
- (void)removeCachedHeroFrameImages;	// IMP=0x0000000000a086d0
- (void)removeEventNotificationsForCameraProfile:(id)arg1;	// IMP=0x0000000000a08580
- (void)removeEventNotificationForClipWithUUID:(id)arg1;	// IMP=0x0000000000a0840e
- (void)postNotificationForBulletin:(id)arg1 significantEvent:(id)arg2;	// IMP=0x0000000000a081a2
- (id)bulletinForClipSignificantEvent:(id)arg1 cameraProfile:(id)arg2;	// IMP=0x0000000000a07c49
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 fileManager:(id)arg4;	// IMP=0x0000000000a07b4c
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;	// IMP=0x0000000000a07aad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

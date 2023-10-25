//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNotificationCenter, NSRecursiveLock, NSString, VNMTLDeviceWisdomParameters, VNWeakTypeWrapperCollection, VisionCoreObjectCache;
@protocol NSLocking;

__attribute__((visibility("hidden")))
@interface VNFrameworkManager : NSObject
{
    NSNotificationCenter *_notificationCenter;	// 8 = 0x8
    VisionCoreObjectCache *_detectorDescriptorsCache;	// 16 = 0x10
    NSRecursiveLock *_detectorAccessingLock;	// 24 = 0x18
    NSRecursiveLock *_trackerResourcesAccessingLock;	// 32 = 0x20
    struct os_unfair_lock_s _sessionsAccessLock;	// 40 = 0x28
    VNWeakTypeWrapperCollection *_sessions;	// 48 = 0x30
    struct os_unfair_lock_s _wisdomParametersLock;	// 56 = 0x38
    VNMTLDeviceWisdomParameters *_wisdomParameters;	// 64 = 0x40
}

+ (id)manager;	// IMP=0x00100000000923dc
- (void).cxx_destruct;	// IMP=0x0000000000092388
@property(readonly) VisionCoreObjectCache *detectorDescriptorsCache; // @synthesize detectorDescriptorsCache=_detectorDescriptorsCache;
- (void)legacyForcedCleanupOfJunkPipelineWithLevel:(id)arg1;	// IMP=0x00000000000921de
- (void)legacyForcedCleanupOfSmartCamPipelineWithLevel:(id)arg1;	// IMP=0x0000000000092048
- (void)legacyForcedCleanupOfScenePipelineWithLevel:(id)arg1;	// IMP=0x0000000000091eb2
- (void)legacyForcedCleanupOfFacePipelineWithLevel:(id)arg1;	// IMP=0x0000000000091d1c
- (void)legacyForcedCleanupWithOptions:(id)arg1;	// IMP=0x0000000000091b86
- (id)wisdomParameterForMTLDeviceWithName:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000091aba
- (id)wisdomParameterForMTLDevice:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000919ee
- (void)releaseMetalDeviceWisdomParameters;	// IMP=0x00000000000919ba
- (id)loadedDetectors;	// IMP=0x000000000009176f
- (id)trackerResourcesConfiguredWithOptions:(id)arg1 forSession:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009165d
- (id)detectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 forSession:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000913e8
@property(readonly) id <NSLocking> trackerResourcesAccessingLock;
@property(readonly) id <NSLocking> detectorAccessingLock;
@property(readonly, copy) NSArray *allSessions;
- (void)registerSession:(id)arg1;	// IMP=0x00000000000912a6
@property(readonly) NSNotificationCenter *notificationCenter;
- (id)_locateTrackerResourcesConfiguredWithOptions:(id)arg1 inSessions:(id)arg2 excludingSession:(id)arg3;	// IMP=0x00000000000910b7
- (id)_locateDetectorOfClass:(Class)arg1 configuredWithOptions:(id)arg2 inSessions:(id)arg3 excludingSession:(id)arg4;	// IMP=0x0000000000090ecb
- (id)init;	// IMP=0x0000000000090dd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

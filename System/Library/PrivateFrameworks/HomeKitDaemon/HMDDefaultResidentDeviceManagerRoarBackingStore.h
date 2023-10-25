//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDAppleAccountManager, HMDHome, NSMapTable, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDDefaultResidentDeviceManagerRoarBackingStore : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _hasAnyResident;	// 12 = 0xc
    NSObject<OS_os_log> *_logger;	// 16 = 0x10
    HMDHome *_home;	// 24 = 0x18
    HMDAppleAccountManager *_appleAccountManager;	// 32 = 0x20
    NSString *_logIdentifier;	// 40 = 0x28
    NSMapTable *_residentDeviceByObjectID;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x0010000000a286e4
- (void).cxx_destruct;	// IMP=0x0000000000a25c2e
@property(readonly) NSMapTable *residentDeviceByObjectID; // @synthesize residentDeviceByObjectID=_residentDeviceByObjectID;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) __weak HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly) __weak HMDHome *home; // @synthesize home=_home;
- (id)residentsRequiringReachabilityUpdate:(id)arg1;	// IMP=0x0000000000a259fd
- (void)updateReachabilityForResidents:(id)arg1;	// IMP=0x0000000000a25913
- (void)_mapResidentsToMKFResidents:(id)arg1 operation:(CDUnknownBlockType)arg2 finished:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a25723
- (void)updateIdentifiersForAvailableResidentDevices:(id)arg1;	// IMP=0x0000000000a25609
- (_Bool)_addDeviceIdentifiersIfNecessary:(id)arg1 fromResidentDevice:(id)arg2;	// IMP=0x0000000000a25438
- (_Bool)_shouldUpdateDeviceIdentifiersForResident:(id)arg1 fromResidentDevice:(id)arg2;	// IMP=0x0000000000a252e1
- (id)handleCloudResidentChange:(id)arg1 currentResidents:(id)arg2 isCurrentDevicePrimaryResident:(_Bool)arg3 currentDevice:(id)arg4;	// IMP=0x0000000000a24afd
- (_Bool)residentModel:(id)arg1 isTheSameAs:(id)arg2;	// IMP=0x0000000000a249f3
- (id)pruneDuplicateResidentModelsFrom:(id)arg1;	// IMP=0x0000000000a246f2
- (id)findResidents:(id)arg1 outHasResidents:(_Bool *)arg2;	// IMP=0x0000000000a24586
- (void)_updateHasAnyResident;	// IMP=0x0000000000a24220
@property(nonatomic) _Bool hasAnyResident;
- (id)_deviceFromModel:(id)arg1 currentDevice:(id)arg2;	// IMP=0x0000000000a23f6a
- (id)_deviceFromModel:(id)arg1;	// IMP=0x0000000000a23c1a
- (id)_deviceWithIdsDestination:(id)arg1 fromAccount:(id)arg2;	// IMP=0x0000000000a23b93
- (id)_deviceWithIdsIdentifier:(id)arg1 fromAccount:(id)arg2;	// IMP=0x0000000000a23b0c
@property(readonly) NSString *cloudChangeUpdateNotificationName;
- (id)initWithHome:(id)arg1 appleAccountManager:(id)arg2;	// IMP=0x0000000000a2393d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

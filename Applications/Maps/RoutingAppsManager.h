//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RoutingAppLaunchRecord;

@interface RoutingAppsManager : NSObject
{
    RoutingAppLaunchRecord *_routingAppLaunchRecord;	// 8 = 0x8
}

+ (id)defaultManager;	// IMP=0x004000000087d52a
- (void).cxx_destruct;	// IMP=0x002000000087ec51
@property(retain, nonatomic) RoutingAppLaunchRecord *routingAppLaunchRecord; // @synthesize routingAppLaunchRecord=_routingAppLaunchRecord;
- (void)loadRelevantRoutingAppsForSource:(struct CLLocationCoordinate2D)arg1 destination:(struct CLLocationCoordinate2D)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000087e601
- (void)updateCoverageFiles;	// IMP=0x001000000087e081
- (void)_updateCoverageFileForAppProxy:(id)arg1 libraryItem:(id)arg2;	// IMP=0x001000000087d8fc
- (id)_appIdsStringWithApplicationProxies:(id)arg1;	// IMP=0x001000000087d72b
- (id)_installedApps;	// IMP=0x001000000087d6d4
- (void)recordAppLaunch:(id)arg1;	// IMP=0x001000000087d5f8

@end

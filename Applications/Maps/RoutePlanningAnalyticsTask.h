//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RouteCollection, RoutePlanningSession;

@interface RoutePlanningAnalyticsTask : NSObject
{
    RoutePlanningSession *_routePlanningSession;	// 8 = 0x8
    RouteCollection *_routeCollection;	// 16 = 0x10
}

+ (long long)creationPreference;	// IMP=0x0020000000a85dc1
- (void).cxx_destruct;	// IMP=0x0020000000a85dfd
@property(retain, nonatomic) RouteCollection *routeCollection; // @synthesize routeCollection=_routeCollection;
@property(nonatomic) __weak RoutePlanningSession *routePlanningSession; // @synthesize routePlanningSession=_routePlanningSession;
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x0010000000a85dbb
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x0010000000a85db5
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2 userInitiated:(_Bool)arg3;	// IMP=0x0010000000a85daf
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x0010000000a85da9
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x0010000000a85892
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000a8588c
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000a85818
- (int)analyticsTarget;	// IMP=0x0010000000a8563d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

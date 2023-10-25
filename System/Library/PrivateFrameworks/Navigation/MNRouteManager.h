//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOCommonOptions, GEOComposedRoute, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsResponse, GEORouteAttributes, GEORoutePreloader, MNActiveRouteInfo, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MNRouteManager : NSObject
{
    MNActiveRouteInfo *_currentRouteInfo;	// 8 = 0x8
    NSMutableArray *_alternateRoutes;	// 16 = 0x10
    NSArray *_allRoutes;	// 24 = 0x18
    NSArray *_previewRoutes;	// 32 = 0x20
    unsigned long long _selectedRouteIndex;	// 40 = 0x28
    GEORouteAttributes *_routeAttributes;	// 48 = 0x30
    GEODirectionsRequest *_directionsRequest;	// 56 = 0x38
    GEODirectionsResponse *_directionsResponse;	// 64 = 0x40
    GEOCommonOptions *_commonOptions;	// 72 = 0x48
    NSString *_requestingAppIdentifier;	// 80 = 0x50
    GEOComposedWaypoint *_originalDestination;	// 88 = 0x58
    MNActiveRouteInfo *_originalRouteInfo;	// 96 = 0x60
    GEORoutePreloader *_preloader;	// 104 = 0x68
    NSString *_tileLoaderClientIdentifier;	// 112 = 0x70
    GEOApplicationAuditToken *_auditToken;	// 120 = 0x78
    NSArray *_contingencyRouteSegments;	// 128 = 0x80
    GEOComposedRoute *_originalRoute;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000dbd2f
@property(readonly, nonatomic) GEOComposedRoute *originalRoute; // @synthesize originalRoute=_originalRoute;
@property(readonly, nonatomic) GEOComposedWaypoint *originalDestination; // @synthesize originalDestination=_originalDestination;
@property(readonly, nonatomic) NSString *requestingAppIdentifier; // @synthesize requestingAppIdentifier=_requestingAppIdentifier;
@property(readonly, nonatomic) GEOCommonOptions *commonOptions; // @synthesize commonOptions=_commonOptions;
@property(readonly, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(readonly, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes; // @synthesize routeAttributes=_routeAttributes;
@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(readonly, nonatomic) NSArray *previewRoutes; // @synthesize previewRoutes=_previewRoutes;
@property(readonly, nonatomic) NSArray *contingencyRouteSegments; // @synthesize contingencyRouteSegments=_contingencyRouteSegments;
@property(readonly, nonatomic) NSArray *alternateRoutes; // @synthesize alternateRoutes=_alternateRoutes;
@property(readonly, nonatomic) MNActiveRouteInfo *currentRouteInfo; // @synthesize currentRouteInfo=_currentRouteInfo;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dbca1
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dbc9b
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000dbc95
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dbc8f
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dbc87
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000dbc81
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000dbc7b
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000dbc06
- (void)_updatePreloaderForRoute:(id)arg1;	// IMP=0x00000000000dba1b
- (void)_clearPreloader;	// IMP=0x00000000000db9d8
- (void)clearCurrentRoute;	// IMP=0x00000000000db9be
- (void)updateWithAlternateRoutes:(id)arg1;	// IMP=0x00000000000db97d
- (void)updateForLocation:(id)arg1;	// IMP=0x00000000000db92d
- (void)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;	// IMP=0x00000000000db6da
- (void)updateWithStartNavigationDetails:(id)arg1;	// IMP=0x00000000000dae4d
- (void)updateWithPreviewRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000dadb2
- (void)close;	// IMP=0x00000000000dacc4
- (void)open;	// IMP=0x00000000000dabdc
- (void)dealloc;	// IMP=0x00000000000dab9e
@property(readonly, nonatomic) NSArray *allRoutes;
@property(readonly, nonatomic) GEOComposedRoute *currentRoute;
- (id)initWithAuditToken:(id)arg1;	// IMP=0x00000000000daa62
- (id)init;	// IMP=0x00000000000daa4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

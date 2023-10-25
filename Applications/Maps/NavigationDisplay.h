//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ChromeViewController, GEOComposedRoute, GEOComposedWaypoint, MKMapView, MNLocation, MapViewResponder, MapsSuggestionsRouteGeniusEntry, NSString, NavCameraController, NavCameraDriveProvider, NavigationDebugAnnotationsProvider, UserLocationView;
@protocol NavigationDisplayDelegate;

@interface NavigationDisplay : NSObject
{
    NavigationDebugAnnotationsProvider *_debugAnnotationsProvider;	// 8 = 0x8
    MapViewResponder *_mapViewResponder;	// 16 = 0x10
    MNLocation *_matchedLocation;	// 24 = 0x18
    unsigned long long _navigationCameraMode;	// 32 = 0x20
    _Bool _observingChrome;	// 40 = 0x28
    GEOComposedRoute *_route;	// 48 = 0x30
    NavCameraDriveProvider *_driveCameraProvider;	// 56 = 0x38
    _Bool _tracking;	// 64 = 0x40
    int _transportType;	// 68 = 0x44
    id <NavigationDisplayDelegate> _delegate;	// 72 = 0x48
    MKMapView *_mapView;	// 80 = 0x50
    ChromeViewController *_chromeViewController;	// 88 = 0x58
    UserLocationView *_userLocationAnnotationView;	// 96 = 0x60
    long long _sky;	// 104 = 0x68
    NavCameraController *_cameraController;	// 112 = 0x70
    GEOComposedWaypoint *_destinationWaypoint;	// 120 = 0x78
    MapsSuggestionsRouteGeniusEntry *_routeGeniusEntry;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000048e8f5
@property(readonly, nonatomic, getter=isTracking) _Bool tracking; // @synthesize tracking=_tracking;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) MapsSuggestionsRouteGeniusEntry *routeGeniusEntry; // @synthesize routeGeniusEntry=_routeGeniusEntry;
@property(retain, nonatomic) GEOComposedWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
@property(readonly, nonatomic) NavCameraController *cameraController; // @synthesize cameraController=_cameraController;
@property(nonatomic) long long sky; // @synthesize sky=_sky;
@property(retain, nonatomic) UserLocationView *userLocationAnnotationView; // @synthesize userLocationAnnotationView=_userLocationAnnotationView;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) __weak id <NavigationDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x001000000048e7c5
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x000000000048e719
- (void)mapViewNavigationCameraDidReturnToDefaultZoom:(id)arg1;	// IMP=0x001000000048e694
- (void)mapViewNavigationCameraDidLeaveDefaultZoom:(id)arg1;	// IMP=0x001000000048e60f
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x001000000048e58a
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x001000000048e505
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;	// IMP=0x001000000048e45c
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x001000000048e3b3
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x001000000048e300
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 zoomGestureType:(long long)arg4 didDecelerate:(_Bool)arg5 tiltDirection:(long long)arg6;	// IMP=0x001000000048e0c0
- (id)mapViewCurrentRouteMatch:(id)arg1;	// IMP=0x001000000048e075
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x001000000048e004
- (void)mapView:(id)arg1 didUpdateYaw:(double)arg2;	// IMP=0x001000000048df70
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;	// IMP=0x001000000048dee6
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x001000000048ded0
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x001000000048deba
- (void)_shouldUseModernMapDidUpdate:(id)arg1;	// IMP=0x001000000048dea8
- (void)_stopObservingChromeIfNeeded;	// IMP=0x001000000048de03
- (void)_startObservingChromeIfNeeded;	// IMP=0x001000000048dd10
- (void)pauseCameraMotion;	// IMP=0x001000000048dcdf
- (void)stopCameraMotion;	// IMP=0x001000000048dcae
- (void)startMotion:(_Bool)arg1;	// IMP=0x001000000048d9b1
- (void)setNavigationDestinationState:(unsigned long long)arg1;	// IMP=0x001000000048d98a
- (void)_updateDestinationBuildingId;	// IMP=0x001000000048d826
- (void)_updateMapViewAndCameraController;	// IMP=0x001000000048d649
- (void)setNavigationCameraMode:(unsigned long long)arg1;	// IMP=0x001000000048d633
- (void)_setTracking:(_Bool)arg1;	// IMP=0x001000000048d54b
- (void)_updateRoadDescription:(id)arg1;	// IMP=0x001000000048d458
- (void)clearCache;	// IMP=0x001000000048d417
- (void)_updateUserAnnotationViewForCurrentTransportTypeAnimated:(_Bool)arg1;	// IMP=0x001000000048d3e4
- (void)setTransportType:(int)arg1 animated:(_Bool)arg2;	// IMP=0x001000000048d22e
- (void)_updateCartographicConfiguration;	// IMP=0x001000000048d168
- (CDStruct_f97336e6)cartographicConfigurationForTransportType:(int)arg1;	// IMP=0x001000000048cff3
- (void)clearAllAnnotations;	// IMP=0x001000000048cfdd
- (void)updateWithRoute:(id)arg1;	// IMP=0x001000000048cf21
- (void)updateWithLocation:(id)arg1;	// IMP=0x001000000048ce92
- (void)_updateSky;	// IMP=0x001000000048c9e3
- (void)dealloc;	// IMP=0x001000000048c9a5
- (id)init;	// IMP=0x001000000048c948

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

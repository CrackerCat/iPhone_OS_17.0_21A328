//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEORouteMatch, NSString, NSUUID, RAPAuxiliaryControlsRecorder, RAPDirectionsRecording;
@protocol OS_dispatch_queue;

@interface RAPGraphDirectionsRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *_recordingQueue;	// 8 = 0x8
    RAPAuxiliaryControlsRecorder *_auxiliaryControlsRecorder;	// 16 = 0x10
    RAPDirectionsRecording *_recording;	// 24 = 0x18
    unsigned long long _numRecordedRoutes;	// 32 = 0x20
    _Bool _hasAuxiliaryControlsOrigin;	// 40 = 0x28
    long long _auxiliaryControlsOrigin;	// 48 = 0x30
    _Bool _switchedTransportTypeWaitingForLocation;	// 56 = 0x38
    _Bool _isRecording;	// 57 = 0x39
    NSUUID *_historyItemIdentifier;	// 64 = 0x40
    GEOComposedRoute *_observedRoute;	// 72 = 0x48
    GEORouteMatch *_lastGoodLocation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000466cf3
@property(retain, nonatomic) GEORouteMatch *lastGoodLocation; // @synthesize lastGoodLocation=_lastGoodLocation;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) __weak GEOComposedRoute *observedRoute; // @synthesize observedRoute=_observedRoute;
@property(retain, nonatomic) NSUUID *historyItemIdentifier; // @synthesize historyItemIdentifier=_historyItemIdentifier;
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 traffic:(id)arg4;	// IMP=0x0010000000466c36
- (void)navigationService:(id)arg1 didReroute:(id)arg2 rerouteReason:(unsigned long long)arg3;	// IMP=0x0010000000466b97
- (void)_handleNewRoute:(id)arg1 fromStepIndex:(unsigned long long)arg2;	// IMP=0x0010000000466a84
- (id)_userPathEntryWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2;	// IMP=0x00100000004668d8
- (void)_replaceUserPathWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2 traversal:(int)arg3;	// IMP=0x0010000000466607
- (void)_storeUserPathWithRouteIndex:(unsigned long long)arg1 stepIndex:(unsigned long long)arg2;	// IMP=0x0010000000466459
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x0010000000466338
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000004661b8
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0010000000465f24
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x0010000000465f1e
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x0010000000465f18
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x0010000000465f12
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0010000000465eaa
- (void)_dispatch:(CDUnknownBlockType)arg1;	// IMP=0x0010000000465d55
- (void)recordNewSessionID:(struct GEOSessionID)arg1;	// IMP=0x0010000000465cdc
- (void)clearAll;	// IMP=0x0010000000465bb9
- (void)recordNewRoute:(id)arg1 fromStepIndex:(unsigned long long)arg2;	// IMP=0x0010000000465933
- (void)recordNewRoute:(id)arg1;	// IMP=0x001000000046591f
- (void)recordNewResponse:(id)arg1;	// IMP=0x00100000004657ad
- (void)recordNewRequest:(id)arg1;	// IMP=0x001000000046566c
- (void)recordWaypoints:(id)arg1 startWaypointSearchTicket:(id)arg2 endWaypointSearchTicket:(id)arg3;	// IMP=0x001000000046537b
- (id)_userSearchInputForWaypoint:(id)arg1;	// IMP=0x0010000000465082
- (void)updateRideSelectionsWithComposedRoute:(id)arg1;	// IMP=0x0010000000464fd3
- (void)_updateRideSelectionsWithComposedRoute:(id)arg1;	// IMP=0x0010000000464f16
- (void)setSelectedRoute:(id)arg1 fromRouteList:(id)arg2;	// IMP=0x0010000000464b07
- (_Bool)_bucketHasOnlyMissedStep:(id)arg1;	// IMP=0x0010000000464935
- (_Bool);	// IMP=0x00100000004647e5
- (void)_optimizeRecordingData;	// IMP=0x0010000000463c58
- (void)stopRecording;	// IMP=0x0010000000463bc7
- (void)savePartialRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000463773
- (void)_savePartialRecording;	// IMP=0x001000000046375f
- (void)setOriginatingDeviceFromOrigin:(long long)arg1;	// IMP=0x001000000046373a
- (void)_immediatelyUpdateRecording:(id)arg1 withAuxiliaryControlsRecording:(id)arg2;	// IMP=0x001000000046364b
- (id)copyCurrentPartialRecording;	// IMP=0x0010000000463463
- (void)startRecording;	// IMP=0x00100000004633a0
- (void)dealloc;	// IMP=0x001000000046330a
- (id)init;	// IMP=0x0010000000463233

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

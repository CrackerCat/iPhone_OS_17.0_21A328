//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORouteMatcher.h"

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher : GEORouteMatcher
{
    double _differentLegScorePenalty;	// 8 = 0x8
}

- (double)_courseFromLocation:(id)arg1;	// IMP=0x000000000149f67d
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;	// IMP=0x000000000149f59d
- (_Bool)_supportsSnapping;	// IMP=0x000000000149f4f2
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000149f08c
- (id)_startStepForPreviousRouteMatch:(id)arg1;	// IMP=0x000000000149efed
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;	// IMP=0x000000000149ee1a
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;	// IMP=0x000000000149eb9e
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2;	// IMP=0x000000000149eb65
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;	// IMP=0x000000000149ea9d
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;	// IMP=0x000000000149e9a2
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;	// IMP=0x000000000149de3e
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;	// IMP=0x000000000149dd4d

@end

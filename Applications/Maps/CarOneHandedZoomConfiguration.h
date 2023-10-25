//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MKOneHandedZoomGestureRecognizer;

@interface CarOneHandedZoomConfiguration : NSObject
{
    double _decelerationThreshold;	// 8 = 0x8
    double _maximumZoomInVelocity;	// 16 = 0x10
    double _maximumZoomOutVelocity;	// 24 = 0x18
    double _zoomOutFrictionScale;	// 32 = 0x20
    double _zoomDraggingResistance;	// 40 = 0x28
    _MKOneHandedZoomGestureRecognizer *_gestureRecognizer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000671379
@property(readonly, nonatomic) double zoomDraggingResistance; // @synthesize zoomDraggingResistance=_zoomDraggingResistance;
@property(readonly, nonatomic) double zoomOutFrictionScale; // @synthesize zoomOutFrictionScale=_zoomOutFrictionScale;
@property(readonly, nonatomic) double maximumZoomOutVelocity; // @synthesize maximumZoomOutVelocity=_maximumZoomOutVelocity;
@property(readonly, nonatomic) double maximumZoomInVelocity; // @synthesize maximumZoomInVelocity=_maximumZoomInVelocity;
@property(readonly, nonatomic) double decelerationThreshold; // @synthesize decelerationThreshold=_decelerationThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000006712f2
- (double)valueWithKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x0010000000671222
- (void)_refreshSetting;	// IMP=0x0010000000671109
- (void)dealloc;	// IMP=0x0010000000671094
- (id)initWithGestureRecongizer:(id)arg1;	// IMP=0x0010000000670fcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLPKStroke;

@interface CRLPKStrokePoint : NSObject
{
    _Bool _inflight;	// 8 = 0x8
    CRLPKStroke *_stroke;	// 16 = 0x10
    void *_point;	// 24 = 0x18
    _Bool _pointOwned;	// 32 = 0x20
}

+ (struct _CRLPKStrokePoint)decompressStrokePoint:(struct CRLPKCompressedStrokePoint)arg1 withTimestamp:(double)arg2;	// IMP=0x004000000008b100
+ (struct CRLPKCompressedStrokePoint)compressStrokePoint:(struct _CRLPKStrokePoint)arg1 withTimestamp:(double)arg2;	// IMP=0x001000000008afa6
- (void).cxx_destruct;	// IMP=0x002000000008babc
- (void)dealloc;	// IMP=0x001000000008ba74
- (id)_stringFromPoint:(struct CGPoint)arg1;	// IMP=0x001000000008ba5d
- (id)description;	// IMP=0x001000000008b6af
- (double)_aspectRatio;	// IMP=0x001000000008b688
- (void)_setAspectRatio:(double)arg1;	// IMP=0x001000000008b651
- (double)_edgeWidth;	// IMP=0x001000000008b62a
- (void)_setEdgeWidth:(double)arg1;	// IMP=0x001000000008b5f3
- (double)_opacity;	// IMP=0x001000000008b5cc
- (void)_setOpacity:(double)arg1;	// IMP=0x001000000008b59a
- (double)_radius;	// IMP=0x001000000008b573
- (void)_setRadius:(double)arg1;	// IMP=0x001000000008b53c
- (double)_length;	// IMP=0x001000000008b522
- (void)_setLength:(double)arg1;	// IMP=0x001000000008b50d
- (long long)_estimationUpdateIndex;	// IMP=0x001000000008b4f0
- (void)_setEstimationUpdateIndex:(long long)arg1;	// IMP=0x001000000008b4dc
- (_Bool)_hasEstimatedVelocity;	// IMP=0x001000000008b4c1
- (void)_setHasEstimatedVelocity:(_Bool)arg1;	// IMP=0x001000000008b4ae
@property(readonly) double velocity;
- (_Bool)_hasEstimatedAzimuthAndAltitude;	// IMP=0x001000000008b48a
- (void)_setHasEstimatedAzimuthAndAltitude:(_Bool)arg1;	// IMP=0x001000000008b477
@property double altitude;
@property double azimuth;
- (_Bool)_hasEstimatedForce;	// IMP=0x001000000008b3c2
- (void)_setHasEstimatedForce:(_Bool)arg1;	// IMP=0x001000000008b3af
@property double force;
- (_Bool)_hasEstimatedLocation;	// IMP=0x001000000008b349
- (void)_setHasEstimatedLocation:(_Bool)arg1;	// IMP=0x001000000008b336
@property struct CGPoint location;
@property double timestamp;
- (void *)_strokePoint;	// IMP=0x001000000008b295
- (id)initWithStroke:(id)arg1 strokePoint:(void *)arg2 inflight:(_Bool)arg3;	// IMP=0x001000000008b20f
- (id)init;	// IMP=0x001000000008b195

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapCamera, MNLocation;

@interface NavigationCameraSnapshot : NSObject
{
    MNLocation *_puckLocation;	// 8 = 0x8
    MKMapCamera *_camera;	// 16 = 0x10
    double _tracePlaybackTimeFraction;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000cf33e7
- (void).cxx_destruct;	// IMP=0x0020000000cf3938
@property(readonly, nonatomic) double tracePlaybackTimeFraction; // @synthesize tracePlaybackTimeFraction=_tracePlaybackTimeFraction;
@property(readonly, copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
@property(readonly, nonatomic) MNLocation *puckLocation; // @synthesize puckLocation=_puckLocation;
@property(readonly, nonatomic) double puckToCenterY;
@property(readonly, nonatomic) double puckToCenterX;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000cf35f6
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000cf3514
- (id)init;	// IMP=0x0010000000cf34b5
- (id)initWithCamera:(id)arg1 tracePlaybackTimeFraction:(double)arg2 puckLocation:(id)arg3;	// IMP=0x0010000000cf33ef

@end

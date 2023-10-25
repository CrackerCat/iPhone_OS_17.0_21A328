//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSMutableArray, NSMutableDictionary;

@interface NavDebugLocationManager : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
    NSMutableDictionary *_overlays;	// 16 = 0x10
    NSMutableArray *_annotations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000003526a0
- (id);	// IMP=0x0010000000352696
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000003524b9
- (id)viewForAnnotation:(id)arg1;	// IMP=0x00100000003523e7
- (id)rendererForOverlay:(id)arg1;	// IMP=0x0010000000352245
- (void)addLocation:(id)arg1;	// IMP=0x0010000000352112
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)dealloc;	// IMP=0x0010000000351a78
- (id)init;	// IMP=0x001000000035199f

@end

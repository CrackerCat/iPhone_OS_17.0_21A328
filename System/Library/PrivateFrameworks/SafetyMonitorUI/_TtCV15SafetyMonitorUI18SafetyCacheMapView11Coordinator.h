//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV15SafetyMonitorUI18SafetyCacheMapView11Coordinator : NSObject
{
    MISSING_TYPE *parent;	// 0 = 0x0
    MISSING_TYPE *priorityDistanceBetweenEnrouteAnnotations;	// 11008 = 0x2b00
    MISSING_TYPE *contactImageRenderingContext;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000000a8870
- (id)init;	// IMP=0x00000000000a8820
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x00000000000a7ca0
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;	// IMP=0x00000000000a7b80
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;	// IMP=0x00000000000a7b10
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00000000000a7990
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x00000000000a7910

@end

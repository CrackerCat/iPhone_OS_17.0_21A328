//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtCV15SafetyMonitorUI7MapView11Coordinator : NSObject
{
    MISSING_TYPE *geocoder;	// 8 = 0x8
    MISSING_TYPE *parent;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000511a0
- (id)init;	// IMP=0x0000000000051140
- (void)longPressActionWithSender:(id)arg1;	// IMP=0x0000000000050220
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;	// IMP=0x000000000004f9e0
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;	// IMP=0x000000000004f960
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x000000000004f8e0
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;	// IMP=0x000000000004f870
- (void)mapViewDidChangeVisibleRegion:(id)arg1;	// IMP=0x000000000004f610

@end

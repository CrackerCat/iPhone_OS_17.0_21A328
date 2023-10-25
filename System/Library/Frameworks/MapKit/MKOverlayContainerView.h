//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MKMapView, NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet;
@protocol MKOverlayContainerViewDelegate;

__attribute__((visibility("hidden")))
@interface MKOverlayContainerView : UIView
{
    NSMutableOrderedSet *_overlays[2];	// 8 = 0x8
    NSMapTable *_internalOverlayToProvider;	// 24 = 0x18
    NSMapTable *_overlayToDrawable[2];	// 32 = 0x20
    NSMutableArray *_drawables[2];	// 48 = 0x30
    NSMutableArray *_vkOverlays[2];	// 64 = 0x40
    UIView *_viewContainers[2];	// 80 = 0x50
    id <MKOverlayContainerViewDelegate> _delegate;	// 96 = 0x60
    double _mapZoomScale;	// 104 = 0x68
    MKMapView *_mapView;	// 112 = 0x70
}

+ (long long)_defaultOverlayLevel;	// IMP=0x006000000008d4f2
- (void).cxx_destruct;	// IMP=0x000000000008f26f
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic) double mapZoomScale; // @synthesize mapZoomScale=_mapZoomScale;
@property(nonatomic) __weak id <MKOverlayContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_allOverlays;	// IMP=0x000000000008f127
- (_Bool)_overlaySpansGlobeAndReplacesMapContent;	// IMP=0x000000000008ee84
- (void)_updateShowsAppleLogoIfNeeded;	// IMP=0x000000000008ee29
- (void)_unFlexTerrainIfNeeded;	// IMP=0x000000000008edec
- (void)_flexTerrainIfNeeded;	// IMP=0x000000000008edaf
@property(readonly, nonatomic) _Bool requiresModernMap;
@property(readonly, nonatomic) _Bool supportsElevation;
- (void)didMoveToWindow;	// IMP=0x000000000008eb55
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;	// IMP=0x000000000008e708
- (void)_updateContentScale:(id)arg1;	// IMP=0x000000000008e584
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;	// IMP=0x000000000008e2a5
@property(readonly, nonatomic) NSArray *allDrawables;
- (id)drawableForOverlay:(id)arg1;	// IMP=0x000000000008e111
- (id)overlaysInLevel:(long long)arg1;	// IMP=0x000000000008e0b0
@property(readonly, nonatomic) NSArray *overlays;
- (unsigned long long)_overlayCount;	// IMP=0x000000000008df7e
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;	// IMP=0x000000000008deb9
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;	// IMP=0x000000000008ddf3
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;	// IMP=0x000000000008dcad
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008dc60
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;	// IMP=0x000000000008da8d
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008da2d
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;	// IMP=0x000000000008d8ca
- (void)removeOverlays:(id)arg1;	// IMP=0x000000000008d7a0
- (void)removeOverlay:(id)arg1;	// IMP=0x000000000008d694
- (long long)_levelForOverlay:(id)arg1 exists:(_Bool *)arg2;	// IMP=0x000000000008d5f3
- (void)addOverlays:(id)arg1;	// IMP=0x000000000008d598
- (void)addOverlay:(id)arg1;	// IMP=0x000000000008d53d
- (void)addOverlays:(id)arg1 level:(long long)arg2;	// IMP=0x000000000008d1eb
- (void)addInternalOverlay:(id)arg1 level:(long long)arg2 provider:(id)arg3;	// IMP=0x000000000008d04a
- (void)addOverlay:(id)arg1 level:(long long)arg2;	// IMP=0x000000000008ce82
- (void)addAndRemoveOverlayViews;	// IMP=0x000000000008c7e4
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(CDStruct_02837cd9)arg2 level:(long long)arg3;	// IMP=0x000000000008c5c1
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;	// IMP=0x000000000008c453
- (CDStruct_02837cd9)_mapRectWithFractionOfVisible:(double)arg1;	// IMP=0x000000000008c29e
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;	// IMP=0x000000000008c0ba
- (id)_viewContainerForLevel:(long long)arg1;	// IMP=0x000000000008bf9b
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000008bf93
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000008be51

@end

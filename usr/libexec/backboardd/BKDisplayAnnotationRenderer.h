//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKDisplayAnnotation, CALayer;

@interface BKDisplayAnnotationRenderer : NSObject
{
    _Bool _shouldReapplyStyles;	// 8 = 0x8
    BKDisplayAnnotation *_annotation;	// 16 = 0x10
    CALayer *_layer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003333a
@property(retain, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(nonatomic) __weak BKDisplayAnnotation *annotation; // @synthesize annotation=_annotation;
- (void)regenerateLayerTree;	// IMP=0x0010000000033110
- (void)sizeLayerToFitAtScale:(double)arg1;	// IMP=0x001000000003307a
- (void)styleSheetDidChange;	// IMP=0x0010000000032dbe
- (void)didRemoveSubannotations;	// IMP=0x0010000000032dac
- (void)didRemoveAnnotation;	// IMP=0x0010000000032d75
- (void)locationDidChange;	// IMP=0x0010000000032a1e
- (void)didAddAnnotation;	// IMP=0x0010000000032a0c
@property(readonly, nonatomic) _Bool shouldRenderWithSupernode;

@end

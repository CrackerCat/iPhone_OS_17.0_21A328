//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLCanvasLayout, CRLCanvasRep, CRLCanvasShapeRenderable, NSArray, NSString;
@protocol CRLShapeControlLayout, CRLShapeControlRep;

@interface CRLShapeControlKnobTracker
{
    CRLCanvasShapeRenderable *mGuideRenderable;	// 8 = 0x8
    _Bool mNeedsDecoratorUpdate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000271830
- (void)p_hideHUD;	// IMP=0x00100000002717dd
- (void)p_updateHUDAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000002714fa
- (void)p_hideGuideRenderable;	// IMP=0x001000000027148c
- (void)p_updateGuideRenderable;	// IMP=0x0010000000270f1b
- (void)endMovingKnob;	// IMP=0x0010000000270c5c
- (void)beginMovingKnob;	// IMP=0x0010000000270aff
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;	// IMP=0x0010000000270a43
- (_Bool)wantsAutoscroll;	// IMP=0x0010000000270a3b
@property(readonly, nonatomic) NSArray *decoratorOverlayRenderables;
@property(readonly, nonatomic) CRLCanvasRep<CRLShapeControlRep> *shapeControlRep;
@property(readonly, nonatomic) CRLCanvasLayout<CRLShapeControlLayout> *shapeControlLayout;
- (id)initWithRep:(id)arg1 knob:(id)arg2;	// IMP=0x001000000027028f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

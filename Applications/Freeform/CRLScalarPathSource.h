//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CRLScalarPathSource
{
    _Bool mIsCurveContinuous;	// 8 = 0x8
    _Bool mShouldShowKnob;	// 9 = 0x9
    unsigned long long mType;	// 16 = 0x10
    double mScalar;	// 24 = 0x18
    struct CGSize mNaturalSize;	// 32 = 0x20
}

+ (id)pathSourceWithType:(unsigned long long)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3;	// IMP=0x00200000004336cf
+ (id)chevronWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;	// IMP=0x0010000000433679
+ (id)regularPolygonWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2;	// IMP=0x0010000000433623
+ (id)roundedRectangleWithScalar:(double)arg1 naturalSize:(struct CGSize)arg2 continuousCurve:(_Bool)arg3;	// IMP=0x00100000004335cc
+ (id)rectangleWithNaturalSize:(struct CGSize)arg1;	// IMP=0x00100000004335a8
@property(nonatomic) _Bool shouldShowKnob; // @synthesize shouldShowKnob=mShouldShowKnob;
@property(nonatomic) _Bool isCurveContinuous; // @synthesize isCurveContinuous=mIsCurveContinuous;
- (void)setNaturalSize:(struct CGSize)arg1;	// IMP=0x0010000000436514
- (struct CGSize)naturalSize;	// IMP=0x00100000004364fc
@property(nonatomic) double scalar; // @synthesize scalar=mScalar;
@property(nonatomic) unsigned long long type; // @synthesize type=mType;
- (id)crlaxCommandForAccessibilityIncrementDecrement:(_Bool)arg1 forKnobTag:(unsigned long long)arg2 usingLayout:(id)arg3 andCanvasController:(id)arg4;	// IMP=0x001000000043634c
- (_Bool)crlaxOffersMoveActionsForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000436344
- (_Bool)crlaxIsAdjustableForKnobTag:(unsigned long long)arg1;	// IMP=0x001000000043632a
- (id)crlaxUserInputLabelForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000436318
- (id)crlaxValueForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000436049
- (id)crlaxLabelComponentForKnobTag:(unsigned long long)arg1;	// IMP=0x0010000000435d98
- (id)inferredLocalizedAccessibilityDescriptionPlaceholder;	// IMP=0x0010000000435a0c
- (id)inferredAccessibilityDescription;	// IMP=0x001000000043567e
- (id)inferredAccessibilityDescriptionNoShapeNames;	// IMP=0x001000000043560a
- (struct CGPoint)p_getControlKnobPointForChevron;	// IMP=0x00100000004355ac
- (void)p_setControlKnobPointForChevron:(struct CGPoint)arg1;	// IMP=0x0010000000435557
- (struct CGPoint)p_getControlKnobPointForRegularPolygon;	// IMP=0x001000000043541c
- (void)p_setControlKnobPointForRegularPolygon:(struct CGPoint)arg1;	// IMP=0x001000000043523f
- (struct CGPoint)p_getControlKnobPointForRoundedRect;	// IMP=0x0010000000435185
- (void)p_setControlKnobPointForRoundedRect:(struct CGPoint)arg1;	// IMP=0x00100000004350de
- (struct CGPath *)p_newChevronPath;	// IMP=0x0010000000434f6e
- (struct CGPath *)p_newRegularPolygonPath;	// IMP=0x0010000000434db7
- (struct CGPath *)p_newRoundedRectPath;	// IMP=0x0010000000434c62
- (id)name;	// IMP=0x0010000000434b72
- (_Bool)isCircular;	// IMP=0x0010000000434b6a
- (_Bool)isRectangular;	// IMP=0x0010000000434b23
- (id)bezierPathWithoutFlips;	// IMP=0x0010000000434ab2
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;	// IMP=0x0010000000434973
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;	// IMP=0x00100000004346ad
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;	// IMP=0x0010000000434656
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;	// IMP=0x0010000000434600
@property(readonly) unsigned long long numberOfControlKnobs;
@property(readonly, nonatomic) unsigned long long numberOfSides;
@property(readonly, nonatomic) double maxCornerRadius;
@property(readonly, nonatomic) double cornerRadius;
@property(readonly, nonatomic) double maxScalar;
- (void)setScalarValue:(id)arg1;	// IMP=0x0010000000433eda
- (void)scaleToNaturalSize:(struct CGSize)arg1;	// IMP=0x0010000000433e64
- (id)description;	// IMP=0x0010000000433ae5
- (unsigned long long)hash;	// IMP=0x0010000000433aa2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004338e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000433812
- (id)init;	// IMP=0x00100000004337e6
- (id)initWithType:(unsigned long long)arg1 scalar:(double)arg2 naturalSize:(struct CGSize)arg3 continuousCurve:(_Bool)arg4;	// IMP=0x0010000000433728

// Remaining properties
@property(readonly, nonatomic) struct CGPoint fixedPointForControlKnobChange;

@end

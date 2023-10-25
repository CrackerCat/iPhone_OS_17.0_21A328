//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCRCMathExpression.h"

__attribute__((visibility("hidden")))
@interface SCRCMathFractionExpression : SCRCMathExpression
{
    SCRCMathExpression *_numerator;	// 24 = 0x18
    SCRCMathExpression *_denominator;	// 32 = 0x20
    SCRCMathExpression *_operator;	// 40 = 0x28
    double _lineThickness;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001474f
@property(nonatomic) double lineThickness; // @synthesize lineThickness=_lineThickness;
@property(retain, nonatomic) SCRCMathExpression *operator; // @synthesize operator=_operator;
@property(retain, nonatomic) SCRCMathExpression *denominator; // @synthesize denominator=_denominator;
@property(retain, nonatomic) SCRCMathExpression *numerator; // @synthesize numerator=_numerator;
- (id)latexMathModeDescription;	// IMP=0x0000000000014604
- (id)mathMLString;	// IMP=0x000000000001445d
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(_Bool)arg1 orMixedNumberFraction:(_Bool)arg2 withNumberOfOuterRadicals:(unsigned long long)arg3 treePosition:(id)arg4;	// IMP=0x0000000000014170
- (id)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(id)arg1 numberOfOuterRadicals:(unsigned long long)arg2;	// IMP=0x0000000000014151
- (id)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(id)arg1;	// IMP=0x0000000000014132
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2;	// IMP=0x0000000000014116
- (id)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x00000000000140fe
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;	// IMP=0x00000000000140e9
- (id)_speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 asBinomialCoefficient:(_Bool)arg4;	// IMP=0x0000000000013c6a
- (id)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(long long)arg1;	// IMP=0x0000000000013c50
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2;	// IMP=0x0000000000013c0c
- (id)_speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(_Bool)arg2 asBinomialCoefficient:(_Bool)arg3;	// IMP=0x0000000000013ab6
- (_Bool)isSimpleNumericalFraction;	// IMP=0x0000000000013a28
- (unsigned long long)fractionLevel;	// IMP=0x0000000000013a12
- (_Bool)isUnlinedFraction;	// IMP=0x00000000000139ee
- (id)subExpressions;	// IMP=0x0000000000013968
- (id)description;	// IMP=0x0000000000013872
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000013572

@end

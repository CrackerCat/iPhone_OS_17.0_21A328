//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNPredicateUtils : NSObject
{
}

+ (_Bool)ensurePredicateMeetsDetectSoundRequestRequirements:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000040df2
+ (_Bool)ensurePredicate:(id)arg1 isComparisonWithOperatorFromOptions:(id)arg2 withRightConstantNumberAndLeftKeyPathFromOptions:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000040b2c
+ (_Bool)ensurePredicateOperatorType:(unsigned long long)arg1 isOneOfOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00800000000408ba
+ (_Bool)ensurePredicate:(id)arg1 isComparisonWithOperatorTypePredicate:(CDUnknownBlockType)arg2 leftPredicate:(CDUnknownBlockType)arg3 rightPredicate:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x008000000004061d
+ (_Bool)ensureExpression:(id)arg1 isKeyPathMatchingOneOfOptions:(id)arg2 error:(id *)arg3;	// IMP=0x008000000004038f
+ (_Bool)ensureExpression:(id)arg1 isKeyPathSatisfyingPredicate:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0080000000040179
+ (_Bool)ensureExpressionIsConstantNumberValue:(id)arg1 error:(id *)arg2;	// IMP=0x008000000003ff5d
+ (_Bool)ensureExpression:(id)arg1 isConstantValueSatisfyingPredicate:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x008000000003ff3e
+ (_Bool)ensureExpression:(id)arg1 hasType:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x008000000003fc4e
- (id)init;	// IMP=0x0000000000040eb6

@end

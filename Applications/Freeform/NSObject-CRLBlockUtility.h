//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableArray, UIView;

@interface NSObject (CRLBlockUtility)
+ (_Bool)crl_object:(id)arg1 isEqualToObject:(id)arg2;	// IMP=0x001000000028463c
+ (_Bool)crl_overridesClassSelector:(SEL)arg1 ofBaseClass:(Class)arg2;	// IMP=0x00100000002840ff
+ (_Bool)crl_overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;	// IMP=0x00100000002840c8
- (void)crl_runBlock;	// IMP=0x00200000000ceb5b
- (id)_crlaxValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 possibleExpectedTypeEncodings:(const char *)arg3;	// IMP=0x001000000014d984
- (id)_crlaxValidatedValueForKey:(id)arg1 expectedClass:(Class)arg2 expectedTypeEncoding:(const char *)arg3;	// IMP=0x001000000014d969
- (void *)crlaxIvarForKey:(id)arg1;	// IMP=0x001000000014e596
- (void)crlaxStructValue:(void *)arg1 forKey:(id)arg2 ofExpectedType:(const char *)arg3 fallbackValue:(const void *)arg4;	// IMP=0x001000000014e4f7
- (struct CGAffineTransform)crlaxCGAffineTransformValueForKey:(id)arg1;	// IMP=0x001000000014e486
- (struct CGRect)crlaxCGRectValueForKey:(id)arg1;	// IMP=0x001000000014e419
- (struct CGSize)crlaxCGSizeValueForKey:(id)arg1;	// IMP=0x001000000014e3c3
- (struct CGPoint)crlaxCGPointValueForKey:(id)arg1;	// IMP=0x001000000014e36d
- (double)crlaxCGFloatValueForKey:(id)arg1;	// IMP=0x001000000014e35b
- (struct _NSRange)crlaxRangeValueForKey:(id)arg1;	// IMP=0x001000000014e305
- (double)crlaxTimeIntervalValueForKey:(id)arg1;	// IMP=0x001000000014e2f3
- (double)crlaxDoubleValueForKey:(id)arg1;	// IMP=0x001000000014e29d
- (float)crlaxFloatValueForKey:(id)arg1;	// IMP=0x001000000014e247
- (unsigned long long)crlaxUnsignedIntegerValueForKey:(id)arg1;	// IMP=0x001000000014e1da
- (long long)crlaxIntegerValueForKey:(id)arg1;	// IMP=0x001000000014e177
- (unsigned int)crlaxUnsignedIntValueForKey:(id)arg1;	// IMP=0x001000000014e110
- (int)crlaxIntValueForKey:(id)arg1;	// IMP=0x001000000014e0ba
- (_Bool)crlaxBoolValueForKey:(id)arg1;	// IMP=0x001000000014e04c
- (id)crlaxValueForKey:(id)arg1;	// IMP=0x001000000014df38
@property(nonatomic, getter=_crlaxIsBuildingChildrenCache, setter=_crlaxSetBuildingChildrenCache:) _Bool _crlaxBuildingChildrenCache;
@property(retain, nonatomic, setter=_crlaxSetChildrenCache:) NSMutableArray *_crlaxChildrenCache;
- (void)crlaxSetIsSpeakThisElement:(_Bool)arg1;	// IMP=0x00100000002668fe
- (void)crlaxHandleTextOperationAction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000026676c
- (id)_crlaxElementAccessibilityChildren;	// IMP=0x001000000026667e
- (void)crlaxInvalidateChildren;	// IMP=0x001000000026640d
- (void)crlaxEnsureChildrenAreLoaded;	// IMP=0x00100000002663f2
- (id)crlaxChildren;	// IMP=0x001000000026610e
- (id)crlaxFindDescendantPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000265ed5
- (_Bool)crlaxIsDescendantOfElement:(id)arg1;	// IMP=0x0010000000265e2d
- (id)crlaxViewAncestorOfType:(Class)arg1;	// IMP=0x0010000000265d87
- (id)crlaxAncestorOfType:(Class)arg1;	// IMP=0x0010000000265cda
@property(readonly, nonatomic) __weak UIView *crlaxAncestorView;
- (void)crlaxAccessibilityUnregister;	// IMP=0x0010000000265c10
- (void)crl_removeObserverForToken:(id)arg1;	// IMP=0x00100000002848f2
- (id)crl_addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;	// IMP=0x00100000002846bf
- (void)crl_performSelector:(SEL)arg1 withValue:(id)arg2;	// IMP=0x0010000000284136
@property(readonly, nonatomic) double crlaxScreenScale;
- (struct CGPoint)crlaxFramePointFromBoundsPoint:(struct CGPoint)arg1;	// IMP=0x0010000000398647
- (struct CGRect)crlaxFrameFromBounds:(struct CGRect)arg1;	// IMP=0x001000000039862f
- (_Bool)crlaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2;	// IMP=0x001000000039861a
- (MISSING_TYPE *)crlaxRespondsToSelector:fromOptionalExtrasProtocol: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000398602
- (void)crlaxLoadAccessibilityInformation;	// IMP=0x00100000003985fc
- (_Bool)_crlaxRespondsToSelector:(SEL)arg1 fromExtrasProtocol:(id)arg2 skipAssertions:(_Bool)arg3;	// IMP=0x001000000039865b
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CRLSwappableAxesGeometry : NSObject
{
    NSDictionary *mAdditionalOrientationIndependentValues;	// 8 = 0x8
    _Bool mFlipped;	// 16 = 0x10
}

+ (id)geometryWithXAxisAlongEdge:(int)arg1;	// IMP=0x004000000000f3eb
+ (id)swappedAxesGeometry;	// IMP=0x001000000000f399
+ (id)standardAxesGeometry;	// IMP=0x001000000000f34a
- (void).cxx_destruct;	// IMP=0x002000000000f8dd
@property(readonly, nonatomic) _Bool isFlipped; // @synthesize isFlipped=mFlipped;
- (id)description;	// IMP=0x001000000000f899
- (struct CGPoint)makePointWithX:(double)arg1 Y:(double)arg2;	// IMP=0x001000000000f87c
- (double)pointY:(struct CGPoint)arg1;	// IMP=0x001000000000f86a
- (double)pointX:(struct CGPoint)arg1;	// IMP=0x001000000000f85b
- (struct CGRect)makeVerticalSpacingRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;	// IMP=0x001000000000f7e3
- (struct CGRect)makeHorizontalSpacingRectBetweenRect:(struct CGRect)arg1 andRect:(struct CGRect)arg2;	// IMP=0x001000000000f76b
- (struct CGRect)makeRectWithX:(double)arg1 Y:(double)arg2 width:(double)arg3 height:(double)arg4;	// IMP=0x001000000000f735
- (double)rectHeight:(struct CGRect)arg1;	// IMP=0x001000000000f71f
- (double)rectWidth:(struct CGRect)arg1;	// IMP=0x001000000000f709
- (double)rectMaxY:(struct CGRect)arg1;	// IMP=0x001000000000f6f3
- (double)rectMaxX:(struct CGRect)arg1;	// IMP=0x001000000000f6dd
- (double)rectMidY:(struct CGRect)arg1;	// IMP=0x001000000000f6c7
- (double)rectMidX:(struct CGRect)arg1;	// IMP=0x001000000000f6b1
- (double)rectMinY:(struct CGRect)arg1;	// IMP=0x001000000000f69b
- (double)rectMinX:(struct CGRect)arg1;	// IMP=0x001000000000f685
- (_Bool)rect:(struct CGRect)arg1 verticallyOverlapsRect:(struct CGRect)arg2;	// IMP=0x001000000000f66f
- (_Bool)rect:(struct CGRect)arg1 horizontallyOverlapsRect:(struct CGRect)arg2;	// IMP=0x001000000000f659
@property(readonly, nonatomic) int verticalOrientation;
@property(readonly, nonatomic) int horizontalOrientation;
- (int)edgeForStandardRectEdge:(int)arg1;	// IMP=0x001000000000f619
- (unsigned long long)knobTagForStandardKnobTag:(unsigned long long)arg1;	// IMP=0x001000000000f42a
- (id)initFlipped:(_Bool)arg1;	// IMP=0x001000000000f30f

@end

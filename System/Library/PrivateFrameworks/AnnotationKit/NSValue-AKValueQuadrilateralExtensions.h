//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (AKValueQuadrilateralExtensions)
+ (id)valueWithQuadrilateral:(struct AKQuadrilateral)arg1;	// IMP=0x002000000000c681
+ (id)akValueWithRect:(struct CGRect)arg1;	// IMP=0x0020000000020057
+ (id)akValueWithSize:(struct CGSize)arg1;	// IMP=0x002000000002003e
+ (id)akValueWithPoint:(struct CGPoint)arg1;	// IMP=0x0020000000020025
+ (id)valueWithCGRect:(struct CGRect)arg1;	// IMP=0x0020000000080590
@property(readonly) struct AKQuadrilateral quadrilateralValue;
- (struct CGRect)akRectValue;	// IMP=0x0010000000020094
- (struct CGSize)akSizeValue;	// IMP=0x0010000000020082
- (struct CGPoint)akPointValue;	// IMP=0x0010000000020070
- (struct CGRect)CGRectValue;	// IMP=0x00100000000805c4
@end

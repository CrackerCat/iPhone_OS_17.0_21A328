//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (NSDataExtras)
+ (id)dataWithCGPoint:(struct CGPoint)arg1;	// IMP=0x005000000000787b
+ (id)dataWithCGSize:(struct CGSize)arg1;	// IMP=0x00500000000077f5
+ (id)dataWithCGRect:(struct CGRect)arg1;	// IMP=0x005000000000776f
+ (id)dataWithPSN:(struct ProcessSerialNumber)arg1;	// IMP=0x00500000000076f4
+ (id)dataWithRange:(struct _NSRange)arg1;	// IMP=0x005000000000766c
- (struct CGPoint)CGPointValue;	// IMP=0x00100000000078b7
- (struct CGSize)CGSizeValue;	// IMP=0x0010000000007831
- (struct CGRect)CGRectValue;	// IMP=0x001000000000779a
- (struct ProcessSerialNumber)psn;	// IMP=0x001000000000772d
- (struct _NSRange)range;	// IMP=0x00100000000076a9
@end

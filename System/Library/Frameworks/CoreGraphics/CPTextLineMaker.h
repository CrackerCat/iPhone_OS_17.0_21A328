//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMaker : NSObject
{
    NSMutableArray *textLines;	// 8 = 0x8
}

- (unsigned int)makeTextLines:(id)arg1;	// IMP=0x00000000000bb5f2
- (void)zOrderSplitLines:(id)arg1;	// IMP=0x00000000000bb507
- (void)splitByGraphic:(id)arg1 with:(struct CPPDFContext *)arg2;	// IMP=0x00000000000bb4e1
- (id)textLines;	// IMP=0x00000000000bb4d7
- (void)dealloc;	// IMP=0x00000000000bb49c

@end

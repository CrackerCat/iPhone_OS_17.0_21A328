//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQHTrbl : NSObject
{
    int mTop;	// 8 = 0x8
    int mRight;	// 12 = 0xc
    int mBottom;	// 16 = 0x10
    int mLeft;	// 20 = 0x14
}

- (struct __CFString *)createStringRef;	// IMP=0x0000000000032bc2
- (int)left;	// IMP=0x0000000000032bb9
- (void)setLeft:(int)arg1;	// IMP=0x0000000000032bb0
- (int)bottom;	// IMP=0x0000000000032ba7
- (void)setBottom:(int)arg1;	// IMP=0x0000000000032b9e
- (int)right;	// IMP=0x0000000000032b95
- (void)setRight:(int)arg1;	// IMP=0x0000000000032b8c
- (int)top;	// IMP=0x0000000000032b83
- (void)setTop:(int)arg1;	// IMP=0x0000000000032b7a
- (void)setTop:(int)arg1 right:(int)arg2 bottom:(int)arg3 left:(int)arg4;	// IMP=0x0000000000032b66
- (id)init;	// IMP=0x0000000000032b2b

@end

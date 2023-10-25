//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIImageRowReader : NSObject
{
    unsigned long long height;	// 8 = 0x8
    unsigned long long width;	// 16 = 0x10
    unsigned long long bpr;	// 24 = 0x18
    void *data;	// 32 = 0x20
    short red;	// 40 = 0x28
    short green;	// 42 = 0x2a
    short blue;	// 44 = 0x2c
    short alpha;	// 46 = 0x2e
    struct CGColorSpace *cs;	// 48 = 0x30
}

+ (id)forImage:(id)arg1 usingContext:(id)arg2 colorspace:(struct CGColorSpace *)arg3;	// IMP=0x00100000000ffdc8
+ (id)forImage:(id)arg1 usingContext:(id)arg2;	// IMP=0x00100000000ffd6b
+ (id)withDictionary:(id)arg1;	// IMP=0x00100000000ffbdf
+ (id)forImage:(id)arg1 downscaleToMax:(unsigned int)arg2 colorspace:(struct CGColorSpace *)arg3 usingContext:(id)arg4;	// IMP=0x00100000000ff8c0
+ (id)fromImage:(struct CGImage *)arg1;	// IMP=0x00100000000ff4ab
+ (id)fromImageFile:(id)arg1;	// IMP=0x00100000000ff3f0
- (unsigned int)bytesPerPixel;	// IMP=0x0000000000100048
- (const char *)rowAtIndex:(unsigned int)arg1;	// IMP=0x000000000010002b
- (short)alpha;	// IMP=0x0000000000100021
- (short)blue;	// IMP=0x0000000000100017
- (short)green;	// IMP=0x000000000010000d
- (short)red;	// IMP=0x0000000000100003
- (unsigned long long)height;	// IMP=0x00000000000ffff9
- (unsigned long long)width;	// IMP=0x00000000000fffef
- (void)dealloc;	// IMP=0x00000000000fffa2
- (id)init;	// IMP=0x00000000000fff63
- (void)dumpImageAsDict:(id)arg1;	// IMP=0x00000000000ffa29
- (void)dumpImageAsDeviceRGB:(id)arg1;	// IMP=0x00000000000ff880
- (void)dumpImage:(id)arg1;	// IMP=0x00000000000ff813
- (void)_dumpImage:(id)arg1 colorspace:(struct CGColorSpace *)arg2;	// IMP=0x00000000000ff63f

@end

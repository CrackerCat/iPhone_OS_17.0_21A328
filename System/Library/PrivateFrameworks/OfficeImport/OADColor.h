//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADColor : NSObject
{
    NSMutableArray *mTransforms;	// 8 = 0x8
}

+ (int)mapSchemeColorID:(int)arg1 colorMap:(id)arg2;	// IMP=0x0010000000308c8e
+ (id)tsuColorWithRgbColor:(id)arg1;	// IMP=0x0010000000308ba5
+ (id)tsuColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3;	// IMP=0x0010000000308b78
+ (id)tsuColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a7547
+ (float)alphaWithColor:(id)arg1;	// IMP=0x00100000000a8101
+ (id)rgbColorWithColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a7672
+ (id)mapAdjustedColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x001000000010c4dc
+ (id)basicMapOfColor:(id)arg1 colorMap:(id)arg2 colorScheme:(id)arg3 colorPalette:(id)arg4;	// IMP=0x00100000000a7761
- (void).cxx_destruct;	// IMP=0x0000000000308d19
- (id)description;	// IMP=0x0000000000308c50
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032b28
- (unsigned long long)hash;	// IMP=0x0000000000032b12
- (id)colorForStyleColor:(id)arg1;	// IMP=0x0000000000195b39
- (void)addTransformOfType:(int)arg1 value:(float)arg2;	// IMP=0x00000000002095de
- (void)addTransformOfType:(int)arg1;	// IMP=0x0000000000308b0b
- (void)setTransforms:(id)arg1;	// IMP=0x0000000000026870
- (id)transforms;	// IMP=0x0000000000032c7a
- (void)addTransform:(id)arg1;	// IMP=0x000000000010d55c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000308b00

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface RSGeometryMeta : NSObject
{
    _Bool _isCenterScaleUpdated;	// 8 = 0x8
    float _pixelSize;	// 12 = 0xc
    float _floorHeight;	// 16 = 0x10
    float _ceilingHeight;	// 20 = 0x14
    float _supportHeight;	// 24 = 0x18
    int _imageSize;	// 28 = 0x1c
    int _zSlice;	// 32 = 0x20
    float _visualFloorHeight;	// 36 = 0x24
    float _visualCeilingHeight;	// 40 = 0x28
    MISSING_TYPE *_floorCeilingCount;	// 48 = 0x30
    MISSING_TYPE *_center;	// 64 = 0x40
    MISSING_TYPE *_scale;	// 80 = 0x50
    MISSING_TYPE *_shift;	// 112 = 0x70
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b82a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b8214
- (id)init;	// IMP=0x00000000001b81e5

@end

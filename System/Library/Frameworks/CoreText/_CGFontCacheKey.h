//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _CGFontCacheKey : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    double _opticalSize;	// 24 = 0x18
}

@property(readonly, nonatomic) double opticalSize; // @synthesize opticalSize=_opticalSize;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;	// IMP=0x000000000013e330
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e254
- (unsigned long long)hash;	// IMP=0x000000000013e24a
- (void)dealloc;	// IMP=0x000000000013e20f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013e204

@end

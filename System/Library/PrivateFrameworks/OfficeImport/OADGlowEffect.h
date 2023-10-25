//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADGlowEffect
{
    OADColor *mColor;	// 16 = 0x10
    float mRadius;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000003125cc
- (id)description;	// IMP=0x000000000031258e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000312471
- (unsigned long long)hash;	// IMP=0x00000000003123e9
- (void)setRadius:(float)arg1;	// IMP=0x00000000001ec37e
- (float)radius;	// IMP=0x00000000003123d7
- (void)setColor:(id)arg1;	// IMP=0x00000000001ec390
- (id)color;	// IMP=0x00000000003123c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f7eb9
- (id)init;	// IMP=0x00000000001ec34a

@end

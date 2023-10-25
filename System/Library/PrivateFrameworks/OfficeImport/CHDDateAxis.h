//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CHDDateAxis
{
    _Bool mAutomatic;	// 184 = 0xb8
    double mMajorUnitValue;	// 192 = 0xc0
    double mMinorUnitValue;	// 200 = 0xc8
    int mMinorTimeUnit;	// 208 = 0xd0
    int mMajorTimeUnit;	// 212 = 0xd4
    int mBaseTimeUnit;	// 216 = 0xd8
}

- (void)setBaseTimeUnit:(int)arg1;	// IMP=0x00000000001fece2
- (int)baseTimeUnit;	// IMP=0x000000000038d99f
- (void)setMinorTimeUnit:(int)arg1;	// IMP=0x00000000001fecc2
- (int)minorTimeUnit;	// IMP=0x000000000038d98f
- (void)setMajorTimeUnit:(int)arg1;	// IMP=0x00000000001fecd2
- (int)majorTimeUnit;	// IMP=0x000000000038d97f
- (void)setMinorUnitValue:(double)arg1;	// IMP=0x00000000001fecb0
- (double)minorUnitValue;	// IMP=0x000000000038d96d
- (void)setMajorUnitValue:(double)arg1;	// IMP=0x00000000001fec90
- (double)majorUnitValue;	// IMP=0x000000000038d95b
- (void)setAutomatic:(_Bool)arg1;	// IMP=0x000000000020fd4c
- (_Bool)isAutomatic;	// IMP=0x000000000038d94b
- (_Bool)isDate;	// IMP=0x000000000038d943
- (id)initWithResources:(id)arg1;	// IMP=0x00000000001febfc

@end

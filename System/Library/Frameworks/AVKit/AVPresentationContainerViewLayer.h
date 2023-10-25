//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class AVPresentationContainerViewAppearanceProxy;

__attribute__((visibility("hidden")))
@interface AVPresentationContainerViewLayer : CALayer
{
    _Bool _wantsAppearanceConfigValues;	// 8 = 0x8
    AVPresentationContainerViewAppearanceProxy *_appearanceProxy;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000113898
@property(nonatomic) _Bool wantsAppearanceConfigValues; // @synthesize wantsAppearanceConfigValues=_wantsAppearanceConfigValues;
- (void)setCornerRadius:(double)arg1;	// IMP=0x00000000001137bf
- (double)cornerRadius;	// IMP=0x000000000011376f
- (void)setCornerCurve:(id)arg1;	// IMP=0x000000000011368e
- (id)cornerCurve;	// IMP=0x000000000011363e
- (void)setMasksToBounds:(_Bool)arg1;	// IMP=0x0000000000113596
- (_Bool)masksToBounds;	// IMP=0x0000000000113552
- (void)setMaskedCorners:(unsigned long long)arg1;	// IMP=0x0000000000113486
- (unsigned long long)maskedCorners;	// IMP=0x0000000000113442
@property(readonly, nonatomic) AVPresentationContainerViewAppearanceProxy *appearanceProxy; // @synthesize appearanceProxy=_appearanceProxy;

@end

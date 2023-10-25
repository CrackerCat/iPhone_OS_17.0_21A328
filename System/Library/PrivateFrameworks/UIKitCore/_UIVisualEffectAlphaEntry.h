//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UIVisualEffectViewEntry.h"

__attribute__((visibility("hidden")))
@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry
{
    double _initialAlpha;	// 16 = 0x10
    double _finalAlpha;	// 24 = 0x18
}

- (id)description;	// IMP=0x00000000001a772f
- (id)copyForTransitionOut;	// IMP=0x00000000001a76ec
- (id)copyForTransitionToEffect:(id)arg1;	// IMP=0x00000000001a7675
- (void)removeEffectFromView:(id)arg1;	// IMP=0x00000000001a7658
- (void)applyRequestedEffectToView:(id)arg1;	// IMP=0x00000000001a7637
- (void)applyIdentityEffectToView:(id)arg1;	// IMP=0x00000000001a7616
- (void)addEffectToView:(id)arg1;	// IMP=0x00000000001a7610
- (id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2;	// IMP=0x00000000001a75b0

@end

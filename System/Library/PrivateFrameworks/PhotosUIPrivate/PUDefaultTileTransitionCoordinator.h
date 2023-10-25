//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileTransitionCoordinator.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface PUDefaultTileTransitionCoordinator : PUTileTransitionCoordinator
{
    NSNumber *_animationDuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001e1979
@property(copy, nonatomic) NSNumber *animationDuration; // @synthesize animationDuration=_animationDuration;
- (struct CGAffineTransform)_adjustDefaultDisappearanceTransform:(struct CGAffineTransform)arg1;	// IMP=0x00000000001e184e
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;	// IMP=0x00000000001e16df
- (void)configureOptions:(id)arg1 forSpringAnimationsZommingIn:(_Bool)arg2;	// IMP=0x00000000001e149c
- (id)optionsForAnimatingTileController:(id)arg1 toLayoutInfo:(id)arg2 withAnimationType:(long long)arg3;	// IMP=0x00000000001e12d4
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;	// IMP=0x00000000001e12bf
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;	// IMP=0x00000000001e12aa

@end

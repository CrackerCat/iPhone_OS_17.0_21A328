//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAContext, CALayer;

@interface BKDisplayRenderOverlayPinkForTesting
{
    CAContext *_context;	// 8 = 0x8
    CALayer *_layer;	// 16 = 0x10
}

+ (void)doItHide;	// IMP=0x00400000000617a1
+ (void)doItShow;	// IMP=0x00100000000616d4
+ (void)doItShowKernel;	// IMP=0x00100000000615c0
+ (id)overlayWithLevel:(float)arg1 display:(id)arg2;	// IMP=0x00100000000614f0
- (void).cxx_destruct;	// IMP=0x00200000000614bf
- (_Bool)_applyProgressIndicatorPropertiesToKernelIfNecessary;	// IMP=0x001000000006112a
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0010000000061043
- (void)_dismissWithAnimationSettings:(id)arg1;	// IMP=0x0010000000060fd8
- (void)_freeze;	// IMP=0x0010000000060fd2
- (_Bool)_presentWithAnimationSettings:(id)arg1;	// IMP=0x0010000000060bf3
- (_Bool)disablesDisplayUpdates;	// IMP=0x0010000000060beb
- (void)dealloc;	// IMP=0x0010000000060ba2
- (id)initWithOverlayDescriptor:(id)arg1 level:(float)arg2;	// IMP=0x0010000000060b51

@end

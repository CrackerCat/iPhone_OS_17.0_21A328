//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TIImageCacheClient, _UIActionWhenIdle;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject
{
    TIImageCacheClient *_store;	// 8 = 0x8
    NSSet *_layouts;	// 16 = 0x10
    NSMutableSet *_activeRenderers;	// 24 = 0x18
    _UIActionWhenIdle *_idleAction;	// 32 = 0x20
}

+ (_Bool)enabledForTraitCollection:(id)arg1;	// IMP=0x0060000000bc6c12
+ (_Bool)enabled;	// IMP=0x0060000000bc6ab3
+ (id)sharedInstance;	// IMP=0x0060000000bc6a76
- (void).cxx_destruct;	// IMP=0x0000000000bc9718
@property(retain, nonatomic) _UIActionWhenIdle *idleAction; // @synthesize idleAction=_idleAction;
- (void)decrementExpectedRender:(id)arg1;	// IMP=0x0000000000bc961d
- (void)incrementExpectedRender:(id)arg1;	// IMP=0x0000000000bc959f
- (void)updateCacheForInputModes:(id)arg1;	// IMP=0x0000000000bc9424
- (id)uniqueLayoutsFromInputModes:(id)arg1;	// IMP=0x0000000000bc927e
- (void)_didIdleAndShouldWait;	// IMP=0x0000000000bc9209
- (void)_didIdle;	// IMP=0x0000000000bc91d8
- (id)displayImagesForView:(id)arg1 fromLayout:(id)arg2 imageFlags:(id)arg3;	// IMP=0x0000000000bc7ae1
- (void)drawCachedImage:(id)arg1 alpha:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x0000000000bc7981
- (struct CGImage *)cachedCompositeImageForCacheKeys:(id)arg1 fromLayout:(id)arg2 opacities:(id)arg3;	// IMP=0x0000000000bc722e
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2 traitCollection:(id)arg3;	// IMP=0x0000000000bc7153
- (struct CGImage *)cachedImageForKey:(id)arg1 fromLayout:(id)arg2;	// IMP=0x0000000000bc6fbd
- (void)purge;	// IMP=0x0000000000bc6fa7
- (void)clearNonPersistentCache;	// IMP=0x0000000000bc6f8e
- (void)commitTransaction;	// IMP=0x0000000000bc6f75
- (void)dealloc;	// IMP=0x0000000000bc6eea
- (id)init;	// IMP=0x0000000000bc6cf6

@end

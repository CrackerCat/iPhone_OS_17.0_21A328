//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardFlipTransitionView
{
    CALayer *_container;	// 160 = 0xa0
    CALayer *_frontFace;	// 168 = 0xa8
    CALayer *_backFace;	// 176 = 0xb0
    CALayer *_frontDarkening;	// 184 = 0xb8
    CALayer *_backDarkening;	// 192 = 0xc0
    CALayer *_backDarkeningLeft;	// 200 = 0xc8
    CALayer *_backDarkeningRight;	// 208 = 0xd0
    _Bool _showingFrontFace;	// 216 = 0xd8
    UIKBCacheToken *_startKeyplaneToken;	// 224 = 0xe0
    UIKBCacheToken *_endKeyplaneToken;	// 232 = 0xe8
    NSMutableDictionary *_controlKeys;	// 240 = 0xf0
    struct {
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x0000000000e58832
@property(nonatomic, getter=isShowingFrontFace) _Bool showingFrontFace; // @synthesize showingFrontFace=_showingFrontFace;
- (_Bool)transitionIsVisible;	// IMP=0x0000000000e5881a
- (void)rebuildControlKeys:(unsigned long long)arg1;	// IMP=0x0000000000e587f9
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;	// IMP=0x0000000000e587e7
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;	// IMP=0x0000000000e587e1
- (void)updateTransition;	// IMP=0x0000000000e587db
- (void)_delayedUpdateTransition;	// IMP=0x0000000000e58584
- (void)rebuildMoreIntlKeys;	// IMP=0x0000000000e57da1
- (void)updateMoreIntlKey:(id)arg1 asStart:(_Bool)arg2 withRect:(struct CGRect)arg3 showIntl:(_Bool)arg4 showDictKey:(_Bool)arg5;	// IMP=0x0000000000e57baf
- (void)rebuildReturnSlices;	// IMP=0x0000000000e57b80
- (void)rebuildShiftSlices;	// IMP=0x0000000000e57b51
- (void)rebuildControlSlicesForKeyName:(id)arg1;	// IMP=0x0000000000e577ea
- (void)rebuildTransition;	// IMP=0x0000000000e577e4
- (void)rebuildBackgroundTransition;	// IMP=0x0000000000e56fa5
- (struct CGImage *)splitKeyboardImage;	// IMP=0x0000000000e56f9d
- (struct CGImage *)defaultKeyboardImage;	// IMP=0x0000000000e56f95
- (void)_flipToFront:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000e55d67
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000e55a9b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000e55538

@end

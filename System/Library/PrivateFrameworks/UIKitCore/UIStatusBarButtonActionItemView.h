//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView
{
    UIButton *_button;	// 128 = 0x80
    UIButton *_externalButton;	// 136 = 0x88
    _Bool _selected;	// 144 = 0x90
    CALayer *_ringLayer;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000010d65f7
@property(retain, nonatomic) CALayer *ringLayer; // @synthesize ringLayer=_ringLayer;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
- (void)setLayerHighlightImage:(id)arg1;	// IMP=0x00000000010d6229
- (struct CGRect)_contentsImageFrame;	// IMP=0x00000000010d60ff
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010d6062
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010d5fc5
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000010d5f25
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000010d5e57
- (_Bool)canBecomeFocused;	// IMP=0x00000000010d5e4f
- (_Bool)usesAdvancedActions;	// IMP=0x00000000010d5e47
- (_Bool)showsTouchWhenHighlighted;	// IMP=0x00000000010d5e3f
- (long long)buttonType;	// IMP=0x00000000010d5e37
- (void)_pressAndHoldButton:(id)arg1;	// IMP=0x00000000010d5df6
- (void)_doubleTapButton:(id)arg1;	// IMP=0x00000000010d5db5
- (void)_pressButton:(id)arg1;	// IMP=0x00000000010d5da1
- (void)_triggerButtonWithAction:(long long)arg1;	// IMP=0x00000000010d5c5d
- (void)layoutSubviews;	// IMP=0x00000000010d5b2b
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000010d5b19
- (double)updateContentsAndWidth;	// IMP=0x00000000010d587b
- (_Bool)allowsUserInteraction;	// IMP=0x00000000010d5873
- (id)highlightImage;	// IMP=0x00000000010d586b
- (id)_createButton;	// IMP=0x00000000010d562d
@property(readonly, nonatomic) _Bool extendsHitTestingFrame;

@end

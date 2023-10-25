//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIColor, UIImage, UILabel;
@protocol CNStarkActionViewDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkActionView : UIView
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _selected;	// 9 = 0x9
    _Bool _disabledButtonFocused;	// 10 = 0xa
    NSString *_actionType;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    id <CNStarkActionViewDelegate> _delegate;	// 32 = 0x20
    double _actionPlatterSize;	// 40 = 0x28
    double _actionLabelOffset;	// 48 = 0x30
    double _actionBorderWidth;	// 56 = 0x38
    UIColor *_disabledStrokeColor;	// 64 = 0x40
    UIColor *_disabledFillColor;	// 72 = 0x48
    UIColor *_disabledGlyphColor;	// 80 = 0x50
    UIColor *_enabledStrokeColor;	// 88 = 0x58
    UIColor *_enabledFillColor;	// 96 = 0x60
    UIColor *_enabledGlyphColor;	// 104 = 0x68
    UIColor *_selectedStrokeColor;	// 112 = 0x70
    UIColor *_selectedFillColor;	// 120 = 0x78
    UIColor *_selectedGlyphColor;	// 128 = 0x80
    UIImage *_image;	// 136 = 0x88
    UIButton *_button;	// 144 = 0x90
    UILabel *_label;	// 152 = 0x98
}

+ (id)propertyTransportButtonWithDelegate:(id)arg1;	// IMP=0x00100000001ec18b
+ (id)quickActionButtonWithDelegate:(id)arg1;	// IMP=0x00100000001ebee8
- (void).cxx_destruct;	// IMP=0x00000000001ebddc
@property(nonatomic) _Bool disabledButtonFocused; // @synthesize disabledButtonFocused=_disabledButtonFocused;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *selectedGlyphColor; // @synthesize selectedGlyphColor=_selectedGlyphColor;
@property(retain, nonatomic) UIColor *selectedFillColor; // @synthesize selectedFillColor=_selectedFillColor;
@property(retain, nonatomic) UIColor *selectedStrokeColor; // @synthesize selectedStrokeColor=_selectedStrokeColor;
@property(retain, nonatomic) UIColor *enabledGlyphColor; // @synthesize enabledGlyphColor=_enabledGlyphColor;
@property(retain, nonatomic) UIColor *enabledFillColor; // @synthesize enabledFillColor=_enabledFillColor;
@property(retain, nonatomic) UIColor *enabledStrokeColor; // @synthesize enabledStrokeColor=_enabledStrokeColor;
@property(retain, nonatomic) UIColor *disabledGlyphColor; // @synthesize disabledGlyphColor=_disabledGlyphColor;
@property(retain, nonatomic) UIColor *disabledFillColor; // @synthesize disabledFillColor=_disabledFillColor;
@property(retain, nonatomic) UIColor *disabledStrokeColor; // @synthesize disabledStrokeColor=_disabledStrokeColor;
@property(nonatomic) double actionBorderWidth; // @synthesize actionBorderWidth=_actionBorderWidth;
@property(nonatomic) double actionLabelOffset; // @synthesize actionLabelOffset=_actionLabelOffset;
@property(nonatomic) double actionPlatterSize; // @synthesize actionPlatterSize=_actionPlatterSize;
@property(readonly, nonatomic) __weak id <CNStarkActionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void)stateUpdated;	// IMP=0x00000000001eb4cb
- (void)updateForFocusedState:(_Bool)arg1;	// IMP=0x00000000001eb49d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001eb3f1
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000001eb34b
- (void)notifyDelegateAboutUserChoice;	// IMP=0x00000000001eb2e0
- (void)choose;	// IMP=0x00000000001eb2ce
- (void)deselect;	// IMP=0x00000000001eb29e
- (void)select;	// IMP=0x00000000001eb252
- (void)clickGestureDidUpdate:(id)arg1;	// IMP=0x00000000001eb1cd
- (void)actionViewTouchUp:(id)arg1;	// IMP=0x00000000001eb1bb
- (void)actionViewTouchDown:(id)arg1;	// IMP=0x00000000001eb1a9
- (void)actionViewTapped:(id)arg1;	// IMP=0x00000000001eb197
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001eb185
- (_Bool)canBecomeFocused;	// IMP=0x00000000001eb173
- (void)setupClickGestureRecognizer;	// IMP=0x00000000001eb0ee
- (void)setupConstraints;	// IMP=0x00000000001eab7b
- (void)setupButton;	// IMP=0x00000000001ea8f2
- (void)setupLabel;	// IMP=0x00000000001ea82e
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000001ea7b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

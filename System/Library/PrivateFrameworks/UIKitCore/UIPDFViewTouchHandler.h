//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIResponder.h"

@class NSString, UILongPressGestureRecognizer, UIMenuController, UIPDFMagnifierController, UIPDFPageView, UIPDFSelectionController, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIPDFViewTouchHandler : UIResponder
{
    UIPDFPageView *_pdfPageView;	// 8 = 0x8
    UITapGestureRecognizer *_doubleTapRecognizer;	// 16 = 0x10
    UITapGestureRecognizer *_singleTapRecognizer;	// 24 = 0x18
    UILongPressGestureRecognizer *_briefPressRecognizer;	// 32 = 0x20
    UILongPressGestureRecognizer *_longPressRecognizer;	// 40 = 0x28
    UITapGestureRecognizer *_twoFingerTapRecognizer;	// 48 = 0x30
    UIMenuController *_menuController;	// 56 = 0x38
    UIPDFSelectionController *_selectionController;	// 64 = 0x40
    UIPDFMagnifierController *_magnifyController;	// 72 = 0x48
    _Bool _trackingSelection;	// 80 = 0x50
    _Bool _showMagnifier;	// 81 = 0x51
    _Bool _showLoupe;	// 82 = 0x52
    _Bool _firstTouch;	// 83 = 0x53
    _Bool _useDelegateForLinks;	// 84 = 0x54
    _Bool _allowMenu;	// 85 = 0x55
}

+ (void)releaseViewManager;	// IMP=0x0010000001124b35
@property _Bool allowMenu; // @synthesize allowMenu=_allowMenu;
- (void)hideMenu;	// IMP=0x0000000001126102
- (void)showMenu;	// IMP=0x0000000001125ca2
- (void)selectAll:(id)arg1;	// IMP=0x0000000001125c23
- (void)copy:(id)arg1;	// IMP=0x0000000001125be1
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0000000001125b1b
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000001125b13
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000112597d
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000112591c
- (void)twoFingerTapRecognized:(id)arg1;	// IMP=0x00000000011257fb
- (void)singleTapRecognized:(id)arg1;	// IMP=0x0000000001125750
- (void)doubleTapRecognized:(id)arg1;	// IMP=0x00000000011256b8
- (void)longPressRecognized:(id)arg1;	// IMP=0x00000000011254c0
- (void)briefPressRecognized:(id)arg1;	// IMP=0x0000000001125246
- (_Bool)delegateGesture:(id)arg1 kind:(int)arg2;	// IMP=0x0000000001125180
- (void)setFirstTouch;	// IMP=0x0000000001125164
- (_Bool)resignFirstResponder;	// IMP=0x0000000001125106
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000011250fe
- (id)nextResponder;	// IMP=0x00000000011250ed
- (void)disableRecognizers;	// IMP=0x0000000001125057
- (void)enableRecognizers;	// IMP=0x0000000001124fc1
- (void)dealloc;	// IMP=0x0000000001124e23
- (id)initWithView:(id)arg1;	// IMP=0x0000000001124b53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

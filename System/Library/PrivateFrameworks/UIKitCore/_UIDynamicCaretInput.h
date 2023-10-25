//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    struct CGContext *_bitmapContext;	// 8 = 0x8
    long long _fadeCount;	// 16 = 0x10
    struct CGPoint _lastViewLoc;	// 24 = 0x18
    struct CGRect _inkedAreaOfBitmapContext;	// 40 = 0x28
    NSTimer *_fadeTimer;	// 72 = 0x48
    TIHandwritingStrokes *_accumulatedStrokes;	// 80 = 0x50
    UIDelayedAction *_committedAction;	// 88 = 0x58
    _UIDynamicCaretDot *_dotView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000013a7dd8
@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a7d11
- (void)endTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a7c1d
- (void)addTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a7b77
- (void)startTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a79e5
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;	// IMP=0x00000000013a77c5
- (void)send;	// IMP=0x00000000013a7705
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x00000000013a75e4
- (void)committedStrokes;	// IMP=0x00000000013a75b1
- (void)log;	// IMP=0x00000000013a7275
- (void)drawPoint:(struct CGPoint)arg1;	// IMP=0x00000000013a708e
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000013a6fed
- (void)_fadeInk;	// IMP=0x00000000013a6f18
- (void)clearFadeTimer;	// IMP=0x00000000013a6ebe
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x00000000013a6e61
- (double)inkWidth;	// IMP=0x00000000013a6e53
@property(readonly, nonatomic) _Bool isInking;
@property(readonly, nonatomic) _Bool hasInk;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000013a6c38
- (void)dealloc;	// IMP=0x00000000013a6bf7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000013a68c9

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView : UIKBKeyView
{
    UIDictationView *_dictationView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b4e351
@property(retain, nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
- (void)removeFromSuperview;	// IMP=0x0000000000b4e223
- (void)prepareForDisplay;	// IMP=0x0000000000b4e085
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x0000000000b4e041
- (void)updateDictationColor;	// IMP=0x0000000000b4df86
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000b4df45
- (void)dealloc;	// IMP=0x0000000000b4de78
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000b4de16

@end

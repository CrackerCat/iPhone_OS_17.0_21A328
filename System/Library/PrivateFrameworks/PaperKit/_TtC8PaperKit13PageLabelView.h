//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit13PageLabelView : UIView
{
    MISSING_TYPE *blurEffect;	// 8 = 0x8
    MISSING_TYPE *blurView;	// 16 = 0x10
    MISSING_TYPE *label;	// 24 = 0x18
    MISSING_TYPE *timer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000171a0
- (void)fadeOut;	// IMP=0x0000000000017880
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000175e0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000174e0
- (void)dealloc;	// IMP=0x0000000000017110
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017080
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000017050

@end

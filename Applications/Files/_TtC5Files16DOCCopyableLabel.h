//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@class MISSING_TYPE, UIColor;

@interface _TtC5Files16DOCCopyableLabel : UILabel
{
    MISSING_TYPE *supportsCopy;	// 8 = 0x8
    MISSING_TYPE *behaveAsLink;	// 9 = 0x9
    MISSING_TYPE *textColorIfStaticText;	// 16 = 0x10
    MISSING_TYPE *copyableText;	// 24 = 0x18
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_tapGesture;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_menuInteraction;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00400000001590d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000159070
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000158f40
- (void)tintColorDidChange;	// IMP=0x0010000000158d20
- (void)copyDetail;	// IMP=0x0010000000158c10
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)handleTapWithSender:(id)arg1;	// IMP=0x0010000000158a30
@property(nonatomic, retain) UIColor *textColor;

@end

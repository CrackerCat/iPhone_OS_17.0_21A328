//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIStackView.h>

@class UIImageView, UILabel;

@interface CheckmarkChoiceView : UIStackView
{
    UILabel *_label;	// 8 = 0x8
    UIImageView *_checkmark;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003e124
@property(retain, nonatomic) UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)setSelected:(_Bool)arg1;	// IMP=0x001000000003dff1
- (id)initWithTitle:(id)arg1;	// IMP=0x001000000003dc2f

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface AMSUIApplePayButton : UIView
{
    UIButton *_button;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000e351
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void)layoutSubviews;	// IMP=0x000000000000e296
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000e23c
- (id)initWithButtonType:(long long)arg1;	// IMP=0x000000000000e180

@end

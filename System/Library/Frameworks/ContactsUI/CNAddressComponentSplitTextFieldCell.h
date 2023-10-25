//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNAddressComponentSplitTextFieldCell
{
    UITextField *_textFieldLeft;	// 8 = 0x8
    UITextField *_textFieldRight;	// 16 = 0x10
    CNRepeatingGradientSeparatorView *_separator;	// 24 = 0x18
}

+ (id)cellIdentifier;	// IMP=0x00100000000d4b83
+ (Class)containerViewClass;	// IMP=0x00100000000d4b72
- (void).cxx_destruct;	// IMP=0x00000000000d4b30
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *textFieldRight; // @synthesize textFieldRight=_textFieldRight;
@property(retain, nonatomic) UITextField *textFieldLeft; // @synthesize textFieldLeft=_textFieldLeft;
- (id)textAttributes;	// IMP=0x00000000000d4a71
- (void)setTextAttributes:(id)arg1;	// IMP=0x00000000000d4985
- (id)textFields;	// IMP=0x00000000000d48c2
- (void)setupTextFields;	// IMP=0x00000000000d46ae
- (id)newSeparatorView;	// IMP=0x00000000000d45e2
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;	// IMP=0x00000000000d450a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000d445e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNRepeatingGradientSeparatorView, NSString, UIButton;

__attribute__((visibility("hidden")))
@interface CNPropertyEditingCell
{
    UIButton *_labelButton;	// 56 = 0x38
    CNRepeatingGradientSeparatorView *_vseparator;	// 64 = 0x40
}

+ (_Bool)wantsStandardConstraints;	// IMP=0x00100000001e104f
+ (_Bool)wantsChevron;	// IMP=0x00100000001e1047
- (void).cxx_destruct;	// IMP=0x00000000001e0fea
@property(retain, nonatomic) CNRepeatingGradientSeparatorView *vseparator; // @synthesize vseparator=_vseparator;
@property(readonly, nonatomic) UIButton *labelButton; // @synthesize labelButton=_labelButton;
- (void)regainFocus;	// IMP=0x00000000001e0f77
- (void)picker:(id)arg1 didDeleteItem:(id)arg2;	// IMP=0x00000000001e0ec0
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x00000000001e0da4
- (void)pickerDidCancel:(id)arg1;	// IMP=0x00000000001e0d00
- (id)variableConstraints;	// IMP=0x00000000001e05bd
- (id)constantConstraints;	// IMP=0x00000000001e02f5
- (void)setVseparatorHidden:(_Bool)arg1;	// IMP=0x00000000001e02d8
- (double)effectiveLabelWidth;	// IMP=0x00000000001e0232
- (double)minCellHeight;	// IMP=0x00000000001e0224
- (double)leftValueMargin;	// IMP=0x00000000001e01fb
- (id)valueString;	// IMP=0x00000000001e01ab
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x00000000001dffe8
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x00000000001dfd80
- (void)labelButtonClicked:(id)arg1;	// IMP=0x00000000001dfc26
- (id)labelView;	// IMP=0x00000000001dfaae
- (void)dealloc;	// IMP=0x00000000001dfa39
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000001df963

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

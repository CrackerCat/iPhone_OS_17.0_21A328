//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AccessibilityUIUtilities/AXUIPlatterContainerView.h>

@class FKATypeaheadTextField, UITextField;

@interface FKATypeaheadView : AXUIPlatterContainerView
{
    FKATypeaheadTextField *_textField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000010b53
@property(retain, nonatomic) FKATypeaheadTextField *textField; // @synthesize textField=_textField;
- (double)platterWidth;	// IMP=0x0010000000010b25
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000102c2
@property(readonly, nonatomic) UITextField *typeaheadTextField;

@end

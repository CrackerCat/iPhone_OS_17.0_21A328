//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITextField.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC9PassKitUI19CurrencyUITextField : UITextField
{
    MISSING_TYPE *_amount;	// 8 = 0x8
    MISSING_TYPE *formatter;	// 48 = 0x30
    MISSING_TYPE *isEditable;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002eabd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002eab70
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000002eab60
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000002eab40
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x00000000002eaaa0
- (void)resetSelection;	// IMP=0x00000000002ea1c0
- (void)editingChanged;	// IMP=0x00000000002ea190
- (void)deleteBackward;	// IMP=0x00000000002e9eb0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002e9d30

@end

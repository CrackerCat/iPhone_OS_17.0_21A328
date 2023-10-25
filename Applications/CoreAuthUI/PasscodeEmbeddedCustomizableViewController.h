//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol PasscodeEmbeddedViewControllerDelegate;

@interface PasscodeEmbeddedCustomizableViewController
{
    unsigned long long _passcodeLength;	// 72 = 0x48
    _Bool _hasAlphanumericPasscode;	// 80 = 0x50
    id <PasscodeEmbeddedViewControllerDelegate> _delegate;	// 88 = 0x58
    NSString *_placeholderText;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0020000000020a94
@property(retain, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak id <PasscodeEmbeddedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_verifyTextField:(id)arg1;	// IMP=0x001000000002074b
- (_Bool)verifyPasscode:(id)arg1;	// IMP=0x0010000000020743
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00100000000206a9
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0010000000020478
- (long long)alphanumericFieldTextAlignment;	// IMP=0x001000000002046d
- (id)alphanumericFieldPlaceholder;	// IMP=0x00100000000202cb
- (void)setPasscodeFocused:(_Bool)arg1;	// IMP=0x001000000002029c
- (_Bool)hasAlphaNumericPasscode;	// IMP=0x001000000002028c
- (unsigned long long)passcodeLength;	// IMP=0x001000000002027b
- (id)initWithPasscodeLength:(long long)arg1 alphanumeric:(_Bool)arg2;	// IMP=0x0010000000020195

@end

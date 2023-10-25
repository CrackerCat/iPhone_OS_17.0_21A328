//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKCurrencyAmount;

@interface PDPeerPaymentBalanceReminderUserNotification
{
    PKCurrencyAmount *_currentBalance;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000027d053
- (void).cxx_destruct;	// IMP=0x002000000027d2f6
@property(readonly, nonatomic) PKCurrencyAmount *currentBalance; // @synthesize currentBalance=_currentBalance;
- (id)_messageString;	// IMP=0x001000000027d2d4
- (id)_titleString;	// IMP=0x001000000027d272
- (unsigned long long)notificationType;	// IMP=0x001000000027d267
- (_Bool)isValid;	// IMP=0x001000000027d1e2
- (void)updateWithNewBalance:(id)arg1 andNewReminderDate:(id)arg2;	// IMP=0x001000000027d173
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000027d0f6
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000027d05b
- (id)initWithPassUniqueIdentifier:(id)arg1 currentBalance:(id)arg2 reminderDate:(id)arg3;	// IMP=0x001000000027cf58

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKAccount;

@interface PDAccountOverdrawnBalanceUserNotification
{
    PKAccount *_account;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000028f27e
- (void).cxx_destruct;	// IMP=0x002000000028f3af
@property(readonly, nonatomic) PKAccount *account; // @synthesize account=_account;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028f321
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028f286
- (id)applicationMessageContent;	// IMP=0x001000000028f0d8
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x001000000028efcf
- (_Bool)isValid;	// IMP=0x001000000028efc2
- (unsigned long long)notificationType;	// IMP=0x001000000028efb7
- (id)initWithAccount:(id)arg1;	// IMP=0x001000000028eeb2

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PDShareActivationRequiredUserNotification
{
    NSString *_shareIdentifier;	// 152 = 0x98
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000028caea
- (void).cxx_destruct;	// IMP=0x002000000028cb03
@property(readonly, nonatomic) NSString *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000028ca6d
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000028c9d2
- (id)description;	// IMP=0x001000000028c8f6
- (unsigned long long)notificationType;	// IMP=0x001000000028c8eb
- (id)initWithTitle:(id)arg1 message:(id)arg2 shareIdentifier:(id)arg3;	// IMP=0x001000000028c811

@end

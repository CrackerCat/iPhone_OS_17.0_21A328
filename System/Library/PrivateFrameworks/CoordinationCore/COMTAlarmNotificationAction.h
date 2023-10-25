//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface COMTAlarmNotificationAction
{
    NSString *_reason;	// 8 = 0x8
    NSArray *_alarms;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000077abd
- (void).cxx_destruct;	// IMP=0x0000000000077c38
@property(readonly, copy, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077ad0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077ac5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000779e9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007773f
- (id)initWithReason:(id)arg1 alarms:(id)arg2;	// IMP=0x0000000000077678

@end

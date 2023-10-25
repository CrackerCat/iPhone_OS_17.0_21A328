//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface AFAssertionContext : NSObject
{
    unsigned long long _timestamp;	// 8 = 0x8
    NSString *_reason;	// 16 = 0x10
    NSDate *_effectiveDate;	// 24 = 0x18
    double _expirationDuration;	// 32 = 0x20
    NSDictionary *_userInfo;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d3c45
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d3bf8
- (void).cxx_destruct;	// IMP=0x00200000001d390f
@property(readonly, copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *effectiveDate; // @synthesize effectiveDate=_effectiveDate;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (id)buildDictionaryRepresentation;	// IMP=0x00100000001d37ae
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x00100000001d351c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d341b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d315f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001d3154
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001d2fb7
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001d2e43
@property(readonly, copy) NSString *description;
- (id)initWithTimestamp:(unsigned long long)arg1 reason:(id)arg2 effectiveDate:(id)arg3 expirationDuration:(double)arg4 userInfo:(id)arg5;	// IMP=0x00100000001d2d29
- (id)init;	// IMP=0x00100000001d2d15
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d2b77
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d3c4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

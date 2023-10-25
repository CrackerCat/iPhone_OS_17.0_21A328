//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HAPTLVUnsignedNumberValue, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterAccessViolation : NSObject
{
    HAPTLVUnsignedNumberValue *_clientIdentifier;	// 8 = 0x8
    HAPTLVUnsignedNumberValue *_lastViolationTimestamp;	// 16 = 0x10
    HAPTLVUnsignedNumberValue *_lastResetTimestamp;	// 24 = 0x18
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cdc72
- (void).cxx_destruct;	// IMP=0x00000000004cdc3f
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastResetTimestamp; // @synthesize lastResetTimestamp=_lastResetTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *lastViolationTimestamp; // @synthesize lastViolationTimestamp=_lastViolationTimestamp;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cd85f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cd7a7
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004cd3d9
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004ccfb9
- (id)initWithClientIdentifier:(id)arg1 lastViolationTimestamp:(id)arg2 lastResetTimestamp:(id)arg3;	// IMP=0x00000000004ccf01
- (id)init;	// IMP=0x00000000004cced2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

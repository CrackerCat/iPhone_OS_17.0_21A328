//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDSleepConfigurationWakeUpTypeWrapper : NSObject
{
    long long _value;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000002ac345
@property(nonatomic) long long value; // @synthesize value=_value;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ac1ed
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ac19c
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000002ac182
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ac05e
- (id)initWithValue:(long long)arg1;	// IMP=0x00000000002ac021
- (id)init;	// IMP=0x00000000002abfe5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

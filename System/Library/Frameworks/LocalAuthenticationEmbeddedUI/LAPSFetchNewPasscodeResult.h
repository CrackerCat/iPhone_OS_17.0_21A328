//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAPSPasscode;

__attribute__((visibility("hidden")))
@interface LAPSFetchNewPasscodeResult : NSObject
{
    _Bool _isPasscodeRecoveryEnabled;	// 8 = 0x8
    LAPSPasscode *_passcode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001a937
@property(readonly, nonatomic) _Bool isPasscodeRecoveryEnabled; // @synthesize isPasscodeRecoveryEnabled=_isPasscodeRecoveryEnabled;
@property(readonly, nonatomic) LAPSPasscode *passcode; // @synthesize passcode=_passcode;
- (id)initWithRawPasscode:(id)arg1;	// IMP=0x000000000001a8a4
- (id)initWithRawPasscode:(id)arg1 isPasscodeRecoveryEnabled:(_Bool)arg2;	// IMP=0x000000000001a822
- (id)initWithPasscode:(id)arg1 isPasscodeRecoveryEnabled:(_Bool)arg2;	// IMP=0x000000000001a7ac

@end

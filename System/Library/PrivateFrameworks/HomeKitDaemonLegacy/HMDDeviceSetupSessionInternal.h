//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDDeviceSetupSessionInternal : HMFObject
{
    unsigned long long _state;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSData *_sessionData;	// 24 = 0x18
    NSDictionary *_userInfo;	// 32 = 0x20
}

+ (id)allowedClasses;	// IMP=0x0060000000282f0a
+ (_Bool)isSupported;	// IMP=0x0060000000282e62
+ (long long)role;	// IMP=0x0060000000282dba
- (void).cxx_destruct;	// IMP=0x0000000000283194
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSData *sessionData; // @synthesize sessionData=_sessionData;
@property(readonly) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)processSessionData:(id)arg1 fromBundle:(id)arg2 outAccessoryUUID:(id *)arg3 outAccessoryIDSIdentifier:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000028304b
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000282fd5

@end

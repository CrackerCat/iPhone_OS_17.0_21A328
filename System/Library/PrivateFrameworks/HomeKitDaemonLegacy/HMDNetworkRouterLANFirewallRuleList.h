//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterLANFirewallRuleList : NSObject
{
    NSMutableArray *_multicastBridgingRules;	// 8 = 0x8
    NSMutableArray *_staticPortRules;	// 16 = 0x10
    NSMutableArray *_dynamicPortRules;	// 24 = 0x18
    NSMutableArray *_staticICMPRules;	// 32 = 0x20
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004db527
- (void).cxx_destruct;	// IMP=0x00000000004d3050
@property(retain, nonatomic) NSMutableArray *staticICMPRules; // @synthesize staticICMPRules=_staticICMPRules;
@property(retain, nonatomic) NSMutableArray *dynamicPortRules; // @synthesize dynamicPortRules=_dynamicPortRules;
@property(retain, nonatomic) NSMutableArray *staticPortRules; // @synthesize staticPortRules=_staticPortRules;
@property(retain, nonatomic) NSMutableArray *multicastBridgingRules; // @synthesize multicastBridgingRules=_multicastBridgingRules;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004d2b2a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004d2a4b
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004d2174
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004d1ba9
- (id)initWithMulticastBridgingRules:(id)arg1 staticPortRules:(id)arg2 dynamicPortRules:(id)arg3 staticICMPRules:(id)arg4;	// IMP=0x00000000004d1ac1
- (id)init;	// IMP=0x00000000004d1a92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

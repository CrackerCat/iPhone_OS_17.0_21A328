//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDNetworkRouterFirewallRuleAccessoryIdentifier, NSArray, NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterFirewallRuleCloudNetworkDeclarations : HMFObject
{
    HMDNetworkRouterFirewallRuleAccessoryIdentifier *_baseAccessoryIdentifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSDate *_lastModifiedTime;	// 24 = 0x18
    NSArray *_ruleConfigurations;	// 32 = 0x20
    NSDictionary *_ruleConfigurationsByVersionString;	// 40 = 0x28
}

+ (id)__decodeRuleConfigurationWithVersionString:(id)arg1 ruleConfigurationValue:(id)arg2 baseAccessoryIdentifier:(id)arg3;	// IMP=0x0010000000b1e07f
+ (id)__decodeRuleConfigurationsFromJSONDictionary:(id)arg1 baseAccessoryIdentifier:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x0010000000b1da17
+ (id)logCategory;	// IMP=0x0010000000b1d9e7
- (void).cxx_destruct;	// IMP=0x0000000000b1d983
@property(readonly, copy) NSDictionary *ruleConfigurationsByVersionString; // @synthesize ruleConfigurationsByVersionString=_ruleConfigurationsByVersionString;
@property(readonly, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) HMDNetworkRouterFirewallRuleAccessoryIdentifier *baseAccessoryIdentifier; // @synthesize baseAccessoryIdentifier=_baseAccessoryIdentifier;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)attributeDescriptions;	// IMP=0x0000000000b1d3fa
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b1d0ad
@property(readonly, nonatomic) NSArray *ruleConfigurations; // @synthesize ruleConfigurations=_ruleConfigurations;
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2 allowUnzippedData:(_Bool)arg3;	// IMP=0x0000000000b1ccf8
- (id)initWithBaseAccessoryIdentifier:(id)arg1 data:(id)arg2;	// IMP=0x0000000000b1cce3
- (id)initWithBaseAccessoryIdentifier:(id)arg1 name:(id)arg2 lastModifiedTime:(id)arg3 ruleConfigurationsByVersionString:(id)arg4;	// IMP=0x0000000000b1cbc5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

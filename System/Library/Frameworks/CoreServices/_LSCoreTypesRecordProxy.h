//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class LSBundleRecord;

__attribute__((visibility("hidden")))
@interface _LSCoreTypesRecordProxy : NSProxy
{
    LSBundleRecord *_realRecord;	// 8 = 0x8
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x0010000000079d27
+ (id)classFallbacksForKeyedArchiver;	// IMP=0x0010000000079d1a
+ (id)description;	// IMP=0x0010000000079b2b
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000079994
- (void).cxx_destruct;	// IMP=0x0000000000079d30
- (id)replacementObjectForKeyedArchiver:(id)arg1;	// IMP=0x0000000000079d08
- (Class)classForKeyedArchiver;	// IMP=0x0000000000079cf6
- (id)awakeAfterUsingCoder:(id)arg1;	// IMP=0x0000000000079ced
- (id)replacementObjectForCoder:(id)arg1;	// IMP=0x0000000000079ce4
- (Class)classForCoder;	// IMP=0x0000000000079cda
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0000000000079c90
- (_Bool)isMemberOfClass:(Class)arg1;	// IMP=0x0000000000079c59
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000079c11
- (id)debugDescription;	// IMP=0x0000000000079b84
- (id)description;	// IMP=0x0000000000079b38
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000079aa3
- (unsigned long long)hash;	// IMP=0x0000000000079a4b
- (void)detach;	// IMP=0x00000000000799ab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000799a2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007999c
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000007997b
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000798f5
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000000798e3
- (id)supportedIntentMediaCategories;	// IMP=0x00000000000798d6
- (id)intentsRestrictedWhileProtectedDataUnavailable;	// IMP=0x00000000000798c9
- (id)intentsRestrictedWhileLocked;	// IMP=0x00000000000798bc
- (id)supportedIntents;	// IMP=0x00000000000798af
- (id)intentDefinitionURLs;	// IMP=0x00000000000798a2
- (_Bool)supportsNowPlaying;	// IMP=0x000000000007989a
- (id)WKBackgroundModes;	// IMP=0x000000000007988d
- (id)accentColorName;	// IMP=0x0000000000079885
- (id)UIBackgroundModes;	// IMP=0x0000000000079878
- (id)_personasWithAttributes;	// IMP=0x0000000000079870
- (id)associatedPersonas;	// IMP=0x0000000000079868
- (id)managedPersonas;	// IMP=0x0000000000079860
- (_Bool)isFreeProfileValidated;	// IMP=0x0000000000079858
- (_Bool)isUPPValidated;	// IMP=0x0000000000079850
- (_Bool)isProfileValidated;	// IMP=0x0000000000079848
- (id)signerIdentity;	// IMP=0x0000000000079840
- (id)signerOrganization;	// IMP=0x0000000000079838
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1 preferredLocalizations:(id)arg2;	// IMP=0x0000000000079830
- (id)localizedUsageDescriptionForFeature:(unsigned long long)arg1;	// IMP=0x0000000000079828
- (id)localizedShortNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000007981b
- (id)localizedNameWithPreferredLocalizations:(id)arg1;	// IMP=0x000000000007980e
- (id)localizedShortName;	// IMP=0x0000000000079801
- (id)localizedName;	// IMP=0x00000000000797f4
- (id)dataContainerURL;	// IMP=0x00000000000797ec
- (id)entitlements;	// IMP=0x00000000000797e2
- (id)serviceRecords;	// IMP=0x00000000000797c9
- (_Bool)wasBuiltWithThreadSanitizer;	// IMP=0x00000000000797c1
- (unsigned int)platform;	// IMP=0x00000000000797b9
- (id)SDKVersion;	// IMP=0x00000000000797b1
- (id)machOUUIDs;	// IMP=0x00000000000797a4
- (BOOL)developerType;	// IMP=0x0000000000079799
- (id)executableURL;	// IMP=0x0000000000079791
- (id)URL;	// IMP=0x0000000000079751
- (id)teamIdentifier;	// IMP=0x0000000000079744
- (id)applicationIdentifier;	// IMP=0x000000000007973c
- (id)bundleIdentifier;	// IMP=0x000000000007972f
@property(readonly, nonatomic) LSBundleRecord *_realRecord; // @synthesize _realRecord;
- (id)_loadRealRecord;	// IMP=0x0000000000079273
- (id)init;	// IMP=0x000000000007926a

@end

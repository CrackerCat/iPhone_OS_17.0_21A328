//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface MILaunchServicesSetPersonasOperation
{
    NSString *_bundleID;	// 8 = 0x8
    unsigned long long _domain;	// 16 = 0x10
    NSSet *_personaUniqueStrings;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000004ccb6
- (void).cxx_destruct;	// IMP=0x002000000004d478
@property(readonly, nonatomic) NSSet *personaUniqueStrings; // @synthesize personaUniqueStrings=_personaUniqueStrings;
@property(readonly, nonatomic) unsigned long long domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000004d2bc
- (unsigned long long)hash;	// IMP=0x001000000004d1f3
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004d061
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000004cf41
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000004ccbe
- (id)initWithBundleID:(id)arg1 domain:(unsigned long long)arg2 personas:(id)arg3 registrationUUID:(id)arg4 serialNumber:(unsigned long long)arg5;	// IMP=0x001000000004cbd2

@end

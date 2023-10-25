//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementBooleanUserDefaultEvaluator
{
    NSString *_userDefaultsKey;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ac349
+ (id)requirementIdentifier;	// IMP=0x00100000002a012d
- (void).cxx_destruct;	// IMP=0x00000000000ac424
@property(readonly, copy, nonatomic) NSString *userDefaultsKey; // @synthesize userDefaultsKey=_userDefaultsKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac37b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ac351
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac2ca
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x00000000000ac247
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x00000000000abf30
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000abe60
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)whichUserDefaultsDataSourceInDataSource:(id)arg1;	// IMP=0x00000000002a00aa
- (_Bool)isSatisfiedForBoolValue:(_Bool)arg1;	// IMP=0x00000000002a0083
@property(readonly, nonatomic) _Bool defaultValueWhenKeyIsMissing;
- (id)initWithUserDefaultsKey:(id)arg1;	// IMP=0x00000000000abde6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

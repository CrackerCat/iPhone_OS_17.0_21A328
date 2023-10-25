//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValueTransformer.h>

__attribute__((visibility("hidden")))
@interface VSSubscriptionValueTransformer : NSValueTransformer
{
}

+ (id)_subscriptionForUserAccount:(id)arg1;	// IMP=0x008000000001fefc
+ (void)_updateUserAccount:(id)arg1 fromJSONWithSubscription:(id)arg2;	// IMP=0x008000000001fbcc
+ (id)_userAccountWithLegacySubscriptionPrimitives:(id)arg1;	// IMP=0x008000000001f951
+ (id)_legacySubscriptionInfoForUserAccount:(id)arg1;	// IMP=0x008000000001f714
+ (_Bool)_subscriptionIsCoreSpotlight:(id)arg1;	// IMP=0x008000000001f684
+ (_Bool)allowsReverseTransformation;	// IMP=0x008000000001f3e7
+ (Class)transformedValueClass;	// IMP=0x008000000001f3d6
- (id)reverseTransformedValue:(id)arg1;	// IMP=0x000000000001f4dd
- (id)transformedValue:(id)arg1;	// IMP=0x000000000001f3ef

@end

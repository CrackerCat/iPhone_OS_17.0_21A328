//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy
{
    NSString *_accessibilityDescription;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004d95
+ (id)policyWithAccessibilityDescription:(id)arg1;	// IMP=0x0010000000004d4c
- (void).cxx_destruct;	// IMP=0x002000000000515c
@property(copy) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
- (id)processMetadata:(id)arg1;	// IMP=0x0010000000004fb4
- (_Bool)metadataNeedsProcessing:(id)arg1;	// IMP=0x0010000000004ea5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000004e35
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000004d9d

@end

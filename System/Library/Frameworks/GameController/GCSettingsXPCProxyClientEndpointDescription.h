//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GCSProfile, GCSettingsXPCProxyClientEndpoint, NSString;
@protocol NSObject><NSCopying><NSSecureCoding;

__attribute__((visibility("hidden")))
@interface GCSettingsXPCProxyClientEndpointDescription : NSObject
{
    GCSProfile *_initialProfile;	// 8 = 0x8
    GCSettingsXPCProxyClientEndpoint *_materializedObject;	// 16 = 0x10
    id <NSObject><NSCopying><NSSecureCoding> _identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000084d99
- (void).cxx_destruct;	// IMP=0x00000000000852b1
@property(readonly) id <NSObject><NSCopying><NSSecureCoding> identifier; // @synthesize identifier=_identifier;
- (id)materializeWithContext:(id)arg1;	// IMP=0x0000000000084fc2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000084f55
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000084e6c
- (id)init;	// IMP=0x0000000000084e49
- (id)initWithIdentifier:(id)arg1 initialValueForProfile:(id)arg2;	// IMP=0x0000000000084da1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

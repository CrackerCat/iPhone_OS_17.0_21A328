//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, _GCGamepadEventFusion, _GCGamepadEventFusionConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionDescription : NSObject
{
    _GCGamepadEventFusionConfig *_config;	// 8 = 0x8
    NSArray *_sourcesDescription;	// 16 = 0x10
    _GCGamepadEventFusion *_materializedObject;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b8749
- (void).cxx_destruct;	// IMP=0x00000000000b8c05
- (id)materializeWithContext:(id)arg1;	// IMP=0x00000000000b89a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b893b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b881f
- (id)init;	// IMP=0x00000000000b87fc
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;	// IMP=0x00000000000b8751

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC26AuthenticationServicesCore39ASPasskeyConfigurationSubscriberAdapter : NSObject
{
    MISSING_TYPE *currentConfiguration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000373a0
- (id)declarationKeyForConfiguration:(id)arg1;	// IMP=0x00000000000372c0
- (_Bool)removeDeclarationKey:(id)arg1 scope:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000037220
- (_Bool)applyConfiguration:(id)arg1 scope:(long long)arg2 returningReasons:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000369d0
- (id)allDeclarationKeys;	// IMP=0x00000000000367f0
- (id)configurationClasses;	// IMP=0x0000000000036510
- (id)init;	// IMP=0x00000000000364f0

@end

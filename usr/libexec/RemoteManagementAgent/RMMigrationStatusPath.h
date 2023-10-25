//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RMMigrationStatusPath : NSObject
{
}

- (_Bool)_moveDirectoryFromURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x002000000006435d
- (id)_transformName:(id)arg1;	// IMP=0x00100000000641b2
- (id)_configurationTypePrefixes;	// IMP=0x0010000000063d12
- (void)_migrateURL:(id)arg1;	// IMP=0x0010000000063875
- (_Bool)_migrateStatusDirectory:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006359d
- (_Bool)executeReturningError:(id *)arg1;	// IMP=0x0000000000063480
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

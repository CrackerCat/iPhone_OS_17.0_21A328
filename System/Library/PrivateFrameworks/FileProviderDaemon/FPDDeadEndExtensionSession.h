//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPDDeadEndExtensionSession : NSObject
{
    _Bool hasFileProviderPresenceTCCAccess;	// 8 = 0x8
    _Bool hasFileProviderAttributionMDMAccess;	// 9 = 0x9
}

@property(readonly, nonatomic) _Bool hasFileProviderAttributionMDMAccess; // @synthesize hasFileProviderAttributionMDMAccess;
@property(nonatomic) _Bool hasFileProviderPresenceTCCAccess; // @synthesize hasFileProviderPresenceTCCAccess;
- (void)dumpStateTo:(id)arg1;	// IMP=0x00000000000bca4a
- (void)invalidate;	// IMP=0x00000000000bca44
- (void)cancelAsync;	// IMP=0x00000000000bca3e
- (void)terminateWithReason:(id)arg1;	// IMP=0x00000000000bca38
- (void)start;	// IMP=0x00000000000bca32
- (void)asyncUnregisterLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000bca2c
- (void)unregisterLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000bca26
- (void)registerLifetimeExtensionForObject:(id)arg1;	// IMP=0x00000000000bca20
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00000000000bca1a
- (id)newFileProviderProxyWithTimeout:(double)arg1 pid:(int)arg2;	// IMP=0x00000000000bc97f
- (id)existingFileProviderProxyWithTimeout:(double)arg1 onlyAlreadyLifetimeExtended:(_Bool)arg2 pid:(int)arg3;	// IMP=0x00000000000bc963

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

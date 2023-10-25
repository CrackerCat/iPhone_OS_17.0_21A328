//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDProfile, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDStaticSyncStore : NSObject
{
    long long _syncProvenance;	// 8 = 0x8
    HDProfile *_profile;	// 16 = 0x10
    NSUUID *_storeIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001cefe1
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly) long long syncStoreType;
- (id)databaseIdentifier;	// IMP=0x00000000001cefb8
- (id)syncStoreIdentifier;	// IMP=0x00000000001cefaa
- (id)syncStoreDefaultSourceBundleIdentifier;	// IMP=0x00000000001cef9d
- (long long)syncProvenance;	// IMP=0x00000000001cef93
- (long long)syncEpoch;	// IMP=0x00000000001cef8b
- (id)syncEntityDependenciesForSyncEntity:(Class)arg1;	// IMP=0x00000000001cef71
- (_Bool)supportsSpeculativeChangesForSyncEntityClass:(Class)arg1;	// IMP=0x00000000001cef69
- (_Bool)shouldEnforceSequenceOrdering;	// IMP=0x00000000001cef61
- (_Bool)shouldContinueAfterAnchorValidationError:(id)arg1;	// IMP=0x00000000001cef59
- (void)setExpectedSequenceNumber:(long long)arg1 forSyncEntityClass:(Class)arg2;	// IMP=0x00000000001cef53
- (id)orderedSyncEntities;	// IMP=0x00000000001ceee2
- (long long)expectedSequenceNumberForSyncEntityClass:(Class)arg1;	// IMP=0x00000000001ceeda
- (_Bool)enforceSyncEntityOrdering;	// IMP=0x00000000001ceed2
- (_Bool)canRecieveSyncObjectsForEntityClass:(Class)arg1;	// IMP=0x00000000001ceeca
@property(readonly) int protocolVersion;
@property(readonly, copy) NSString *description;
- (id)initWithProfile:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001cecf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

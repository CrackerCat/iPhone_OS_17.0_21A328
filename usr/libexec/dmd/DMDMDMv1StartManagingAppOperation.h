//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DMDAppMetadata;

@interface DMDMDMv1StartManagingAppOperation
{
    DMDAppMetadata *_metadata;	// 8 = 0x8
}

+ (id)requiredEntitlements;	// IMP=0x004000000006acbc
+ (id)whitelistedClassesForRequest;	// IMP=0x001000000006ac14
- (void).cxx_destruct;	// IMP=0x001000000006acee
@property(retain, nonatomic) DMDAppMetadata *metadata; // @synthesize metadata=_metadata;
- (void)_setTapToPayScreenLock:(id)arg1;	// IMP=0x001000000006c22c
- (void)_setRemovability:(id)arg1;	// IMP=0x001000000006c0bc
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x001000000006c008
- (void)_attemptSINFSwap;	// IMP=0x001000000006beaf
- (void)_setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000006bdcd
- (void)_manageApp;	// IMP=0x001000000006b80c
- (void)_promptToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006b4ab
- (void)_promptIfPermittedByPolicyToManageApp:(id)arg1 appDisplayName:(id)arg2 originator:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000006b323
- (void)_runWithRequest:(id)arg1;	// IMP=0x001000000006ae76
- (void)runWithRequest:(id)arg1;	// IMP=0x001000000006ad01

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSPropertyList;

__attribute__((visibility("hidden")))
@interface __HMDBundleApplicationInfo
{
    LSPropertyList *_entitlements;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000005bb731
- (_Bool)isEntitledForSPIAccess;	// IMP=0x00000000005bb65b
- (_Bool)isEntitledForAPIAccess;	// IMP=0x00000000005bb5f3
- (id)initWithRecord:(id)arg1;	// IMP=0x00000000005bb448
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000005bb3c5

@end

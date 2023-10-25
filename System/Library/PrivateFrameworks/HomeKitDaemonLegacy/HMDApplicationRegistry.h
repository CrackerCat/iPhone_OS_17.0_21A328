//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class LSApplicationWorkspace, NSArray, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDApplicationRegistry : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_applications;	// 16 = 0x10
    LSApplicationWorkspace *_workspace;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000742487
+ (id)sharedRegistry;	// IMP=0x0010000000742457
- (void).cxx_destruct;	// IMP=0x0000000000741fc4
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0000000000741e6c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0000000000741b69
- (id)applicationInfoForBundleIdentifier:(id)arg1;	// IMP=0x0000000000741a4e
- (id)applicationInfoForBundleURL:(id)arg1;	// IMP=0x000000000074195d
@property(readonly, copy) NSArray *applications;
- (void)dealloc;	// IMP=0x00000000007418a9
- (id)init;	// IMP=0x00000000007417ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

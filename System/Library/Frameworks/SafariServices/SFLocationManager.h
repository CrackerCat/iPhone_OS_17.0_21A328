//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, CLInUseAssertion, NSCountedSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface SFLocationManager : NSObject
{
    CLInUseAssertion *_assertion;	// 8 = 0x8
    NSCountedSet *_clients;	// 16 = 0x10
    NSMutableSet *_foregroundApplications;	// 24 = 0x18
    BKSApplicationStateMonitor *_stateMonitor;	// 32 = 0x20
}

+ (void)setDefaultEffectiveBundleIdentifier:(id)arg1;	// IMP=0x0060000000081a05
+ (id)sharedLocationManager;	// IMP=0x00600000000819b0
- (void).cxx_destruct;	// IMP=0x000000000008207f
- (void)removeClientForApplication:(id)arg1;	// IMP=0x0000000000081fda
- (void)addClientForApplication:(id)arg1;	// IMP=0x0000000000081f33
- (void)_updateApplicationsToMonitor;	// IMP=0x0000000000081ec0
- (void)_setApplication:(id)arg1 isForeground:(_Bool)arg2;	// IMP=0x0000000000081e2c
- (void)_handleApplicationStateChange:(id)arg1;	// IMP=0x0000000000081caf
- (void)_updateAssertion;	// IMP=0x0000000000081c2b
- (id)init;	// IMP=0x0000000000081a1e

@end

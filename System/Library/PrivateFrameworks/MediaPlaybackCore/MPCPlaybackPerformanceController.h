//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlaybackPerformanceController : NSObject
{
    NSMutableDictionary *_trialExperiments;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSDate *_lastCDNWarming;	// 24 = 0x18
}

+ (id)sharedController;	// IMP=0x00400000001d8d3d
- (void).cxx_destruct;	// IMP=0x00000000001d8bad
@property(retain, nonatomic) NSDate *lastCDNWarming; // @synthesize lastCDNWarming=_lastCDNWarming;
- (void)loadAVAssetWithURL:(id)arg1;	// IMP=0x00000000001d8a56
- (void)markCDNConnectionWarmed;	// IMP=0x00000000001d89f0
- (void)warmCDNConnection;	// IMP=0x00000000001d87a6
- (id)trialExperimentWithNamespaceName:(id)arg1;	// IMP=0x00000000001d86ac
@property(readonly, copy, nonatomic) NSString *deploymentID;
@property(readonly, copy, nonatomic) NSString *treatmentID;
@property(readonly, copy, nonatomic) NSString *experimentID;
- (id)sortedExperiments;	// IMP=0x00000000001d844b
- (id)init;	// IMP=0x00000000001d83de

@end

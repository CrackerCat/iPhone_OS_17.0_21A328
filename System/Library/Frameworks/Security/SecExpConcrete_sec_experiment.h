//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SecExperiment;

__attribute__((visibility("hidden")))
@interface SecExpConcrete_sec_experiment : NSObject
{
    SecExperiment *innerExperiment;	// 8 = 0x8
    unsigned long long numRuns;	// 16 = 0x10
    unsigned long long successRuns;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000016102
- (id)copyExperimentConfiguration;	// IMP=0x00000000000160ec
- (_Bool)isSamplingDisabled;	// IMP=0x00000000000160d6
- (_Bool)isSamplingDisabledWithDefault:(_Bool)arg1;	// IMP=0x00000000000160c0
- (_Bool)experimentIsAllowedForProcess;	// IMP=0x00000000000160aa
- (const char *)identifier;	// IMP=0x000000000001605a
- (const char *)name;	// IMP=0x000000000001600a
- (id)initWithInnerExperiment:(id)arg1;	// IMP=0x0000000000015f75
- (id)initWithName:(const char *)arg1;	// IMP=0x0000000000015ee5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

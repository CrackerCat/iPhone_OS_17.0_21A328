//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, OCPPackage;

__attribute__((visibility("hidden")))
@interface OCXDelayedMediaContext : NSObject
{
    OCPPackage *mPackage;	// 8 = 0x8
    NSURL *mTargetLocation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000373b74
@property(readonly, copy) NSString *description;
- (id)dataRep;	// IMP=0x0000000000373b2e
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;	// IMP=0x0000000000373b26
- (_Bool)loadDelayedNode:(id)arg1;	// IMP=0x0000000000373b1e
- (id)initWithTargetLocation:(id)arg1 package:(id)arg2;	// IMP=0x00000000001aa9f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

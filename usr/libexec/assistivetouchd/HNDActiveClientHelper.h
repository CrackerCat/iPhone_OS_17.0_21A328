//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAssertionCoordinator, NSString;

@interface HNDActiveClientHelper : NSObject
{
    AXAssertionCoordinator *_assertionCoordinator;	// 8 = 0x8
    _Bool _hasActiveClients;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000aceee
@property(readonly, nonatomic) _Bool hasActiveClients; // @synthesize hasActiveClients=_hasActiveClients;
- (void)assertionCoordinator:(id)arg1 assertionsDidBecomeActive:(_Bool)arg2;	// IMP=0x00100000000acec9
- (id)addActiveClientWithReason:(id)arg1;	// IMP=0x00100000000aceb3
- (id)init;	// IMP=0x00100000000ace13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

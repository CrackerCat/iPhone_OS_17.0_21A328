//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLLocationAwarenessProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0040000000bad43d
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bad424
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000bad3c7
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bad62a
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000bad5fd
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000bad5d5
- (void *)adaptee;	// IMP=0x0010000000bad5a2
- (void)endService;	// IMP=0x0010000000bad587
- (void)beginService;	// IMP=0x0010000000bad4d6
- (id)init;	// IMP=0x0010000000bad499
- (void)onScenarioTrigger:(id)arg1;	// IMP=0x0010000000bad825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

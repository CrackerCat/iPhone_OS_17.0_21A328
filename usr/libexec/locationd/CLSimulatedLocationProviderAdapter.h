//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSimulatedLocationProviderAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000597f96
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000597f7d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000597f20
+ (_Bool)isSupported;	// IMP=0x00100000005981aa
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0020000000598182
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000598155
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000059812d
- (void *)adaptee;	// IMP=0x00100000005980fa
- (void)endService;	// IMP=0x00100000005980df
- (void)beginService;	// IMP=0x001000000059802f
- (id)init;	// IMP=0x0010000000597ff2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

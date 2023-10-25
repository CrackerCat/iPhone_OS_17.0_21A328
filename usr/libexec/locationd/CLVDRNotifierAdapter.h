//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLVDRNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000006983ca
+ (id)getSilo;	// IMP=0x00100000006981b6
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000069819d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000698140
- (void)unregisterForVdr2DofMeasurements:(byref id)arg1;	// IMP=0x002000000069843e
- (void)registerForVdr2DofMeasurements:(byref id)arg1;	// IMP=0x0010000000698410
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000006983a2
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000698375
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000069834d
- (void *)adaptee;	// IMP=0x001000000069831a
- (void)endService;	// IMP=0x00100000006982ff
- (void)beginService;	// IMP=0x001000000069824f
- (id)init;	// IMP=0x0010000000698212

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

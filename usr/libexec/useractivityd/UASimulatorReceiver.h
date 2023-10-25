//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UASimulator;

@interface UASimulatorReceiver
{
    UASimulator *_simulator;	// 8 = 0x8
    NSArray *_receivedItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000006ae0
@property(readonly, copy) NSArray *receivedItems; // @synthesize receivedItems=_receivedItems;
@property(readonly, retain) UASimulator *simulator; // @synthesize simulator=_simulator;
- (id)statusString;	// IMP=0x0010000000006847
- (_Bool)active;	// IMP=0x00100000000067ef
- (_Bool)fetchAdvertisedItems:(_Bool)arg1;	// IMP=0x00100000000056b9
- (_Bool)doSetReceivedItems:(id)arg1;	// IMP=0x001000000000513f
- (_Bool)receiving;	// IMP=0x00100000000050b8
- (id)initWithSimulator:(id)arg1;	// IMP=0x0010000000004fb0

@end

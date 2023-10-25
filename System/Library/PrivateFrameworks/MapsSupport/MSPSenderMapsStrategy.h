//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MSPSenderMapsStrategy
{
    NSMutableDictionary *_lastEtaUpdateDates;	// 32 = 0x20
    NSMutableDictionary *_participantsByCapabilities;	// 40 = 0x28
    NSMutableDictionary *_capabilitiesByParticipant;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000101d4
@property(retain, nonatomic) NSMutableDictionary *capabilitiesByParticipant; // @synthesize capabilitiesByParticipant=_capabilitiesByParticipant;
@property(retain, nonatomic) NSMutableDictionary *participantsByCapabilities; // @synthesize participantsByCapabilities=_participantsByCapabilities;
@property(retain, nonatomic) NSMutableDictionary *lastEtaUpdateDates; // @synthesize lastEtaUpdateDates=_lastEtaUpdateDates;
- (void)sessionStopped:(id)arg1;	// IMP=0x00000000000100f0
- (void)resumingToNextDestination:(id)arg1;	// IMP=0x000000000001007e
- (void)destinationReached:(id)arg1;	// IMP=0x0000000000010009
- (void)_sendTrafficUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000fe38
- (void)_sendRouteUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000fc67
- (void)_sendETAUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000f94c
- (void)_sendStoppedUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000f77b
- (void)_sendResumingToNextDestinationUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000f5aa
- (void)_sendDestinationReachedUpdate:(id)arg1 to:(id)arg2;	// IMP=0x000000000000f3d9
- (void)_sendUpdatedWaypoints:(id)arg1 to:(id)arg2;	// IMP=0x000000000000efd0
- (void)_sendCompatibleInstancesOfState:(id)arg1 to:(id)arg2;	// IMP=0x000000000000ec4f
- (void)didFetchCapabilitiesForParticipants:(id)arg1;	// IMP=0x000000000000ec49
- (void)addParticipants:(id)arg1;	// IMP=0x000000000000e5f3
- (void)restoreState:(id)arg1;	// IMP=0x000000000000e421
- (id)initWithGroupSession:(id)arg1;	// IMP=0x000000000000e380

@end

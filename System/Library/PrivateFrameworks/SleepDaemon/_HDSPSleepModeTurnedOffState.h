//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _HDSPSleepModeTurnedOffState
{
}

- (void)sleepScheduleStateChangedToBedtime:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x0000000000048260
- (void)sleepScheduleStateChangedToWindDown:(unsigned long long)arg1 fromState:(unsigned long long)arg2;	// IMP=0x00000000000481ff
- (_Bool)_shouldUpdateSleepModeStateForState:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 previousState:(unsigned long long)arg3;	// IMP=0x0000000000047f18
- (void)stateDidExpire;	// IMP=0x0000000000047f06
- (void)updateState;	// IMP=0x0000000000047d8e
- (id)expirationDate;	// IMP=0x0000000000047b89

@end

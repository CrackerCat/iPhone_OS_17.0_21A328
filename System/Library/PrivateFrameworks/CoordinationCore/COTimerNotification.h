//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "COMeshNotification.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface COTimerNotification : COMeshNotification
{
    NSArray *_timers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000078e5b
- (void).cxx_destruct;	// IMP=0x0000000000078e74
@property(readonly, copy, nonatomic) NSArray *timers; // @synthesize timers=_timers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000078dc6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000078b3e
- (id)initWithTimers:(id)arg1;	// IMP=0x0000000000078ada

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLContextManagerWaterSubmersionDemo
{
    CLTimer *_measurementTimer;	// 152 = 0x98
}

+ (double)boundedIncrementBetweenStart:(double)arg1 andStop:(double)arg2 withCurrent:(double)arg3 withIncrement:(double *)arg4;	// IMP=0x0040000000667616
+ (double)settleToTemperatureFromStart:(double)arg1 toStop:(double)arg2 withCurrent:(double)arg3 withDecrement:(double)arg4;	// IMP=0x00100000006675d6
- (void)stopUpdates;	// IMP=0x0020000000667685
- (void)startUpdates;	// IMP=0x0010000000667658
- (void)retrieveCachedSubmersionState;	// IMP=0x0010000000667530
- (void)resumeEvent_bounce;	// IMP=0x00100000006674a6
- (void)pauseEvent_bounce;	// IMP=0x001000000066741c
- (void)updateEvent_bounce:(shared_ptr_85043445)arg1;	// IMP=0x0010000000667263
- (void)dealloc;	// IMP=0x0010000000667211
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x0010000000666366

@end

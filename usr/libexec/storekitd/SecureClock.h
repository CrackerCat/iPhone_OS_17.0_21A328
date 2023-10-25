//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, UnfairLock;

@interface SecureClock : NSObject
{
    UnfairLock *_lock;	// 8 = 0x8
    NSDate *_lastServerDate;	// 16 = 0x10
    double _uptimeAtLastServerResponse;	// 24 = 0x18
}

+ (id)_persistentStatePath;	// IMP=0x0040000000041bb2
+ (id)_hashForServerDate:(double)arg1 systemUptime:(double)arg2;	// IMP=0x0010000000041a8f
+ (id)_dateFromHeaderValue:(id)arg1;	// IMP=0x0010000000041a15
+ (id)_dateFormatter;	// IMP=0x00100000000419a5
+ (id)_global;	// IMP=0x00100000000418d1
+ (void)synchronizeWithURLResult:(id)arg1;	// IMP=0x0010000000041868
+ (id)now;	// IMP=0x0010000000041818
- (void).cxx_destruct;	// IMP=0x00200000000428ab
- (void)_logState;	// IMP=0x0010000000042717
- (double)_timeIntervalSinceLastServerResponse;	// IMP=0x00100000000426b7
- (id)_currentTimeSynchronized;	// IMP=0x001000000004256b
- (id)_currentTime;	// IMP=0x001000000004253c
- (void)_readState;	// IMP=0x00100000000421c5
- (void)_writeState;	// IMP=0x0010000000041f9d
- (void)_synchronizeWithURLResult:(id)arg1;	// IMP=0x0010000000041cb7
- (id)_init;	// IMP=0x0010000000041c3c

@end

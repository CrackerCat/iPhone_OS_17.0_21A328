//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSTimer.h"

__attribute__((visibility("hidden")))
@interface __NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00800000000665eb
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00800000000665e8
- (id)init;	// IMP=0x0000000000066a97
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(_Bool)arg6;	// IMP=0x00000000000668fd
- (unsigned long long)_cfTypeID;	// IMP=0x00000000000668f8
- (void)fire;	// IMP=0x000000000006683f
- (id)userInfo;	// IMP=0x0000000000066676
- (void)setFireDate:(id)arg1;	// IMP=0x000000000006664f
- (id)fireDate;	// IMP=0x0000000000066627
- (void)invalidate;	// IMP=0x0000000000066622
- (void)setTolerance:(double)arg1;	// IMP=0x000000000006661d
- (double)tolerance;	// IMP=0x0000000000066618
- (double)timeInterval;	// IMP=0x0000000000066613
- (_Bool)isValid;	// IMP=0x0000000000066603
- (unsigned long long)retainCount;	// IMP=0x00000000000665e3
- (_Bool)_isDeallocating;	// IMP=0x00000000000665d3
- (_Bool)_tryRetain;	// IMP=0x00000000000665c2
- (oneway void)release;	// IMP=0x00000000000665bd
- (id)retain;	// IMP=0x00000000000665b8
- (unsigned long long)hash;	// IMP=0x00000000000665b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000066590

@end

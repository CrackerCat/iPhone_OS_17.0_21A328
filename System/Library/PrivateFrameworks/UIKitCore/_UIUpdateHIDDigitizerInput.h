//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIUpdateHIDDigitizerInput : NSObject
{
    struct _UIUpdateInputInternal _input;	// 8 = 0x8
    struct _UIUpdateInputTimingProfile *_profile;	// 104 = 0x68
    NSMutableArray *_events;	// 112 = 0x70
    NSMutableSet *_touches;	// 120 = 0x78
    long long _eventModelTimeDifferenceMin;	// 128 = 0x80
    long long _eventModelTimeDifferenceMax;	// 136 = 0x88
    _Bool _nextEventExpected;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000114d7cc
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1 alignment:(int)arg2;	// IMP=0x000000000114d689
- (void)removeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000114d5f4
- (void)addEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x000000000114d1ce
- (void)dealloc;	// IMP=0x000000000114d194

@end

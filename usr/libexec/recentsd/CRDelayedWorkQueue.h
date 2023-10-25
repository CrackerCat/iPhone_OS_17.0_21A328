//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CRDelayedWorkQueue : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_requests;	// 24 = 0x18
}

- (void)flush;	// IMP=0x002000000000254e
- (void)cancel;	// IMP=0x0010000000002405
- (_Bool)scheduleWorkForKey:(id)arg1 afterDelay:(double)arg2 work:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002026
- (void)cancelWorkForKey:(id)arg1;	// IMP=0x0010000000001fc3
- (void)dealloc;	// IMP=0x0010000000001f79
- (id)init;	// IMP=0x0010000000001ed4

@end

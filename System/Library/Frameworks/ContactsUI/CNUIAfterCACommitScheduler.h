//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNSuspendableSchedulerDecorator, NSString;

__attribute__((visibility("hidden")))
@interface CNUIAfterCACommitScheduler : NSObject
{
    CNSuspendableSchedulerDecorator *_scheduler;	// 8 = 0x8
    struct __CFRunLoopObserver *_runLoopObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000022b6b8
@property(readonly, nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x000000000022b570
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000022b48b
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000022b3b1
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b2d6
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000022b214
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000022b151
- (void)dealloc;	// IMP=0x000000000022b0ed
- (id)initWithSchedulerProvider:(id)arg1;	// IMP=0x000000000022afd1
- (id)init;	// IMP=0x000000000022af77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NRQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)delayPairingRequestQueue;	// IMP=0x00400000000247be
+ (id)firstUnlockQueue;	// IMP=0x00100000000246c9
+ (id)switchCompletionBlockQueue;	// IMP=0x0010000000024605
+ (id)nearbyWatchBulletinQueue;	// IMP=0x00100000000245fd
+ (id)xpcPairingQueue;	// IMP=0x00100000000244f7
+ (id)registryDaemonQueue;	// IMP=0x0010000000024433
+ (id)newQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2 withAttributes:(id)arg3;	// IMP=0x0010000000024240
+ (id)serialQueueWithLabel:(id)arg1 withTargetQueue:(id)arg2;	// IMP=0x0010000000024223
+ (id)newQueueWithLabel:(id)arg1 withAttributes:(id)arg2;	// IMP=0x001000000002420c
+ (id)serialQueueWithLabel:(id)arg1;	// IMP=0x00100000000241ed
+ (id)globalQueueWithIdentifier:(long long)arg1;	// IMP=0x001000000002416c
+ (id)mainQueue;	// IMP=0x001000000002410e
- (void).cxx_destruct;	// IMP=0x00200000000249be
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)resume;	// IMP=0x00100000000249a6
- (void)suspend;	// IMP=0x0010000000024998
- (void)dispatchAfter:(double)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024936
- (void)dispatchSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000248f9
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000000248e2
@property(readonly, nonatomic) NSString *label;
- (void)dealloc;	// IMP=0x0010000000024098
- (id)initWithDispatchQueue:(id)arg1;	// IMP=0x001000000002402d

@end

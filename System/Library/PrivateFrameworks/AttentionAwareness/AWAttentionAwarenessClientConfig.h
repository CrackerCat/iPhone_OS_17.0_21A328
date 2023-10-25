//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWAttentionAwarenessClientConfig : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _notifyToken;	// 16 = 0x10
    NSMutableDictionary *_notifyQueues;	// 24 = 0x18
    NSMutableDictionary *_notifyBlocks;	// 32 = 0x20
    unsigned long long _supportedEvents;	// 40 = 0x28
    _Bool _supportedEventsValid;	// 48 = 0x30
    unsigned long long _nextTagIndex;	// 56 = 0x38
    NSMutableDictionary *_tagMap;	// 64 = 0x40
    NSMutableDictionary *_tagRefCount;	// 72 = 0x48
}

+ (id)sharedClientConfig;	// IMP=0x0060000000023f9c
- (void).cxx_destruct;	// IMP=0x0000000000022c06
- (void)decrementTagIndexRefCount:(unsigned long long)arg1;	// IMP=0x0000000000022bb2
- (void)incrementTagIndexRefCount:(unsigned long long)arg1;	// IMP=0x0000000000022b5e
- (id)tagForIndex:(unsigned long long)arg1;	// IMP=0x0000000000022a93
- (unsigned long long)addTag:(id)arg1;	// IMP=0x00000000000229bf
- (void)cancelNotification:(struct AWNotification_s *)arg1;	// IMP=0x0000000000022970
- (struct AWNotification_s *)notifySupportedEventsChangedWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002286f
- (void)updateState:(_Bool)arg1;	// IMP=0x0000000000022536
- (unsigned long long)supportedEvents;	// IMP=0x00000000000224aa
- (void)dealloc;	// IMP=0x0000000000022471
- (id)init;	// IMP=0x00000000000222a7

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface TransactionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    unsigned long long _handle;	// 16 = 0x10
    long long _holdTime;	// 24 = 0x18
    NSCountedSet *_transactionCount;	// 32 = 0x20
    NSMutableDictionary *_transactionStore;	// 40 = 0x28
}

+ (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x004000000006dbd2
+ (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x001000000006db69
+ (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006dade
+ (id)globalStore;	// IMP=0x001000000006d397
- (void).cxx_destruct;	// IMP=0x002000000006e111
- (void)releaseKeepAliveTransaction:(id)arg1;	// IMP=0x001000000006def6
- (void)takeKeepAliveTransaction:(id)arg1;	// IMP=0x001000000006dcc9
- (void)holdKeepAliveTransaction:(id)arg1 whilePerformingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006dc3b
@property(readonly) unsigned long long transactionCount;
@property(readonly, copy) NSCountedSet *activeTransactions;
- (void)dealloc;	// IMP=0x001000000006d8cf
- (id)initWithHoldTime:(double)arg1;	// IMP=0x001000000006d41e
- (id)init;	// IMP=0x001000000006d404

@end

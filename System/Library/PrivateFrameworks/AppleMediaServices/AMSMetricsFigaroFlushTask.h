//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSTask.h"

@class AMSPromise, AMSURLSession, NSString;
@protocol AMSBagProtocol, AMSMetricsDataSource;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroFlushTask : AMSTask
{
    AMSPromise *_currentCancellableDataTaskPromise;	// 8 = 0x8
    struct os_unfair_lock_s _currentCancellableDataTaskPromiseLock;	// 16 = 0x10
    AMSURLSession *_URLSession;	// 24 = 0x18
    long long _maxBatchSize;	// 32 = 0x20
    long long _maxRequestCount;	// 40 = 0x28
    NSString *_topic;	// 48 = 0x30
    id <AMSBagProtocol> _bag;	// 56 = 0x38
    id <AMSMetricsDataSource> _dataSource;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000031a142
@property(readonly, nonatomic) id <AMSMetricsDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(nonatomic) long long maxRequestCount; // @synthesize maxRequestCount=_maxRequestCount;
@property(nonatomic) long long maxBatchSize; // @synthesize maxBatchSize=_maxBatchSize;
- (_Bool)_shouldClearEventsDespiteError:(id)arg1 result:(id)arg2;	// IMP=0x0000000000319e9e
- (id)_postBatch:(id)arg1;	// IMP=0x000000000031944f
- (id)_nextBatchWithConfig:(id)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3;	// IMP=0x000000000031871c
- (id)_mescalSignatureWithBodyData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000031857e
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)arg1 topic:(id)arg2 maxBatchSize:(long long)arg3 requestCount:(unsigned long long)arg4 flushedEventCount:(unsigned long long)arg5 config:(id)arg6;	// IMP=0x0000000000317c27
- (id)performFlush;	// IMP=0x0000000000317919
- (_Bool)cancel;	// IMP=0x0000000000317782
@property(readonly, nonatomic) AMSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (id)initWithDataSource:(id)arg1 bag:(id)arg2;	// IMP=0x00000000003175a5

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;

@end

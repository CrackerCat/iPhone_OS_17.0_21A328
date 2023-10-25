//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VKImageAnalyzerInProcessMadInterface
{
    int _queueRequestID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_housekeepingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_tempMadProcessingQueue;	// 24 = 0x18
    NSMutableOrderedSet *_tempMadRequestQueueWaiting;	// 32 = 0x20
    NSMutableOrderedSet *_tempMadRequestQueueProcessing;	// 40 = 0x28
    NSMutableSet *_tempMadRequestQueueCancelling;	// 48 = 0x30
    NSMutableDictionary *_idsToRequests;	// 56 = 0x38
}

+ (id)sharedInterface;	// IMP=0x00600000000b6595
- (void).cxx_destruct;	// IMP=0x00000000000b85c9
@property(nonatomic) int queueRequestID; // @synthesize queueRequestID=_queueRequestID;
@property(retain, nonatomic) NSMutableDictionary *idsToRequests; // @synthesize idsToRequests=_idsToRequests;
@property(retain, nonatomic) NSMutableSet *tempMadRequestQueueCancelling; // @synthesize tempMadRequestQueueCancelling=_tempMadRequestQueueCancelling;
@property(retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueProcessing; // @synthesize tempMadRequestQueueProcessing=_tempMadRequestQueueProcessing;
@property(retain, nonatomic) NSMutableOrderedSet *tempMadRequestQueueWaiting; // @synthesize tempMadRequestQueueWaiting=_tempMadRequestQueueWaiting;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *tempMadProcessingQueue; // @synthesize tempMadProcessingQueue=_tempMadProcessingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *housekeepingQueue; // @synthesize housekeepingQueue=_housekeepingQueue;
- (id)mrcElementsFromImage:(struct CGImage *)arg1 symbologies:(id)arg2;	// IMP=0x00000000000b81d2
- (void)didFinishRequest:(id)arg1 withAnalysisResult:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b7edc
- (void)_processRequest:(id)arg1;	// IMP=0x00000000000b786c
- (void)request:(id)arg1 didCompleteWithAnalysis:(id)arg2 error:(id)arg3;	// IMP=0x00000000000b7703
- (void)addRequestForProcessing:(id)arg1;	// IMP=0x00000000000b75fe
- (id)cancelledError;	// IMP=0x00000000000b7516
- (void)clearCompletedRequest:(id)arg1;	// IMP=0x00000000000b7376
- (unsigned long long)_statusForRequestID:(int)arg1;	// IMP=0x00000000000b720f
- (void)removeAndNotifyOfCancelledRequest:(id)arg1;	// IMP=0x00000000000b714e
- (void)_cancelRequest:(id)arg1;	// IMP=0x00000000000b6fce
- (void)cancelAllRequests;	// IMP=0x00000000000b6da6
- (void)cancelRequestID:(int)arg1;	// IMP=0x00000000000b6c7e
- (unsigned long long)statusForRequestID:(int)arg1;	// IMP=0x00000000000b6b74
- (void)processNextItemIfNecessary;	// IMP=0x00000000000b69f6
- (int)nextRequestID;	// IMP=0x00000000000b68f1
- (int)processRequest:(id)arg1;	// IMP=0x00000000000b66fa
@property(readonly, nonatomic) NSString *errorDomain;
- (id)init;	// IMP=0x00000000000b65ea

@end

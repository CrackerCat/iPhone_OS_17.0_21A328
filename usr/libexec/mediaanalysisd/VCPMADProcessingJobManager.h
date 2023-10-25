//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface VCPMADProcessingJobManager : NSObject
{
    NSMutableDictionary *_queueNameToQueueGroup;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_inProcessAssetBudget;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x00400000000b8288
- (void).cxx_destruct;	// IMP=0x00200000000b87d1
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *inProcessAssetBudget; // @synthesize inProcessAssetBudget=_inProcessAssetBudget;
- (CDUnknownBlockType)getJobScheduler;	// IMP=0x00100000000b86d5
- (void)registerQueueGroupWithName:(id)arg1 andNumberOfQueues:(unsigned long long)arg2;	// IMP=0x00100000000b82dd
- (id)init;	// IMP=0x00100000000b8205

@end

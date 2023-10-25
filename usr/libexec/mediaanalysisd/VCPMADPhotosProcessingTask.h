//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPMADPhotosProcessingTask : VCPMABaseTask
{
    NSObject<OS_dispatch_group> *_publishGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_publishQueue;	// 16 = 0x10
    int _publishError;	// 24 = 0x18
}

+ (id)fetchPropertySets;	// IMP=0x00200000000dea83
+ (unsigned long long)taskID;	// IMP=0x00100000000dea5f
+ (id)name;	// IMP=0x00100000000dea3b
+ (void)unimplementedExceptionForMethodName:(id)arg1;	// IMP=0x00100000000de9cc
- (void).cxx_destruct;	// IMP=0x00100000000de99b
- (int)waitForPublishing;	// IMP=0x00100000000de96a
- (int)processAssetsInFetchResult:(id)arg1 withAnalysisDatabase:(id)arg2 allowDownload:(_Bool)arg3 progress:(id)arg4;	// IMP=0x00100000000ddb80
- (int)_processAssetsInBatch:(id)arg1;	// IMP=0x00100000000dd880
- (_Bool)_isAssetEligible:(id)arg1 withAnalysisDatabase:(id)arg2 previousStatus:(unsigned long long *)arg3 previousAttempts:(int *)arg4 lastAttemptDate:(id *)arg5 allowDownload:(_Bool)arg6;	// IMP=0x00100000000dd48e
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dd410
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000deb11
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000deaed

@end

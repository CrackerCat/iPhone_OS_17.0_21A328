//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUBrowsingViewModel, PXVisualIntelligenceManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUOneUpVisualImageAnalyzingController : NSObject
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PXVisualIntelligenceManager *_visualImageManager;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_loadVideoFrameQueue;	// 24 = 0x18
}

+ (void)_setVisualImageAnalysis:(id)arg1 forAssetViewModel:(id)arg2;	// IMP=0x00100000000ca2d7
- (void).cxx_destruct;	// IMP=0x00000000000c8f31
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loadVideoFrameQueue; // @synthesize loadVideoFrameQueue=_loadVideoFrameQueue;
@property(readonly, nonatomic) PXVisualIntelligenceManager *visualImageManager; // @synthesize visualImageManager=_visualImageManager;
@property(readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)_cancelVKImageAnalysisForAssetViewModel:(id)arg1;	// IMP=0x00000000000c8db6
- (void)_requestVKImageAnalysisByCurrentVideoFrameForAssetViewModel:(id)arg1;	// IMP=0x00000000000c8b0d
- (void)_requestVKImageAnalysisForAssetViewModel:(id)arg1;	// IMP=0x00000000000c88bb
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000000c84e1
- (id)initWithBrowsingViewModel:(id)arg1;	// IMP=0x00000000000c8379
- (id)init;	// IMP=0x00000000000c82ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

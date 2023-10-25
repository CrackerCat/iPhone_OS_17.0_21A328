//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface VCPMADPhotosLibraryProcessingTask
{
    NSArray *_photoLibraries;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000acf67
- (_Bool)run:(id *)arg1;	// IMP=0x00100000000ac17b
- (int)_processPhotoLibrary:(id)arg1 withProgress:(id)arg2;	// IMP=0x00100000000aba94
- (int)_processFailedAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000aaf4b
- (int)_processChangesToPhotoLibrary:(id)arg1 withChangeToken:(id)arg2 analysisDatabase:(id)arg3 andProgress:(id)arg4;	// IMP=0x00100000000a9539
- (int)_processDownloadEligibleAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000a8af2
- (int)_processAllAssetsInPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2 andProgress:(id)arg3;	// IMP=0x00100000000a8492
- (id)assetPriorityPredicates;	// IMP=0x00100000000a848a
- (int)_checkHardFailuresForPhotoLibrary:(id)arg1 withAnalysisDatabase:(id)arg2;	// IMP=0x00100000000a7d09
- (int)completeSceneProcessingWithProgress:(id)arg1;	// IMP=0x00100000000a79b9
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a77fa

@end

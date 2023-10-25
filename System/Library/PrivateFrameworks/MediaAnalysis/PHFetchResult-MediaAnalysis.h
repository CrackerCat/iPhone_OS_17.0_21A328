//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHFetchResult.h>

@class NSArray, PHPhotoLibrary;

@interface PHFetchResult (MediaAnalysis)
- (id)resultsAsSet;	// IMP=0x00200000001512ad
- (id)resultsAsArray;	// IMP=0x00200000001511ba
- (id)allObjects;	// IMP=0x002000000022b58d

// Remaining properties
@property(readonly, nonatomic) unsigned long long count;
@property(readonly) NSArray *fetchedObjectIDs;
@property(readonly, nonatomic) NSArray *fetchedObjects;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICMusicLibraryArtistAffinityAnalyzer : NSObject
{
}

- (id)_requestItemProperties;	// IMP=0x004000000002c49f
- (id)aggregateLibraryRecommendationMetricsFromSnapshots:(id)arg1;	// IMP=0x001000000002bd95
- (void)performLibraryAnalysisWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000002bc0b
- (id)createFeatureProviderDictionaryFromNewContentResponse:(id)arg1 withLibraryArtistSnapshots:(id)arg2;	// IMP=0x001000000002a701
- (void)performLibraryAnalysisFromResponse:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a558

@end

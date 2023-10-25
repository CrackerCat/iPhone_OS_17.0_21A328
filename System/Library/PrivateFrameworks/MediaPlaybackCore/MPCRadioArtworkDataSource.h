//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

@class MSVLRUDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
    unsigned long long _backgroundCacheSize;	// 8 = 0x8
    unsigned long long _cacheSize;	// 16 = 0x10
    MSVLRUDictionary *_cachedArtworkRepresentations;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;	// 32 = 0x20
    long long _resumeToForegroundCacheSize;	// 40 = 0x28
}

+ (id)sharedRadioArtworkDataSource;	// IMP=0x0060000000221028
- (void).cxx_destruct;	// IMP=0x00000000002206cd
- (void)_setCacheSize:(unsigned long long)arg1 preserveExisting:(_Bool)arg2;	// IMP=0x0000000000220662
- (void)_clearCache;	// IMP=0x0000000000220610
- (void)_cacheArtworkRepresentation:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000220552
- (void)_handleWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000220529
- (void)_handleDidReceiveMemoryWarningNotification:(id)arg1;	// IMP=0x0000000000220517
- (void)_handleDidEnterBackgroundNotification:(id)arg1;	// IMP=0x000000000022048e
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;	// IMP=0x0000000000220479
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x0000000000220473
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002202a5
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000002201bb
- (id)existingRepresentationForArtworkCatalog:(id)arg1;	// IMP=0x000000000021fdf8
- (_Bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;	// IMP=0x000000000021fcf1
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x000000000021fc7c
- (void)dealloc;	// IMP=0x000000000021fbc1
- (id)init;	// IMP=0x000000000021fa7c

@end

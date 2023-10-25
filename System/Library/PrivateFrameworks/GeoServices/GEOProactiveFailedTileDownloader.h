//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileDB, GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOProactiveFailedTileDownloader
{
    GEOTileDB *_diskCache;	// 144 = 0x90
    GEOTileKeyList *_keysRemaining;	// 152 = 0x98
    unsigned long long _numberOfTilesOriginallyConsidered;	// 160 = 0xa0
    unsigned long long _batchSize;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000121edbd
- (void)_addMoreKeysToListIfNeeded:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000121eb14
- (void)determineNextBatchWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000121e8c6
- (unsigned long long)numberOfTilesConsidered;	// IMP=0x000000000121e8b5
- (_Bool)cancelKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000121e76c
- (void)_determineKeysToUpdate;	// IMP=0x000000000121e656
- (id)initWithDiskCache:(id)arg1 tileRequesterCreationBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000121e4d0
- (unsigned char)reason;	// IMP=0x000000000121e4c5

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBatchTileRequester, GEORequestCounter, GEOResourceManifestManager, GEOTileDB, NSString;
@protocol GEOOpportunisticDataSourceDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOBatchTileRequesterOpportunisticAdapter : NSObject
{
    NSString *_sessionIdentifier;	// 8 = 0x8
    GEOBatchTileRequester *_requester;	// 16 = 0x10
    GEOResourceManifestManager *_manifestManager;	// 24 = 0x18
    GEOTileDB *_diskCache;	// 32 = 0x20
    GEORequestCounter *_requestCounter;	// 40 = 0x28
    unsigned char _requestCounterPolicy;	// 48 = 0x30
    struct GEOOnce_s _started;	// 52 = 0x34
    id <GEOOpportunisticDataSourceDelegate> _delegate;	// 64 = 0x40
}

+ (unsigned long long)policy;	// IMP=0x00100000011cff8e
- (void).cxx_destruct;	// IMP=0x00000000011d055b
@property(nonatomic) __weak id <GEOOpportunisticDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)batchTileRequesterDidFinish:(id)arg1;	// IMP=0x00000000011d0453
- (void)batchTileRequester:(id)arg1 failedToLoadKey:(struct _GEOTileKey)arg2 error:(id)arg3;	// IMP=0x00000000011d044d
- (void)batchTileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(CDUnion_20bcf645)arg4 etag:(id)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(id)arg7;	// IMP=0x00000000011d023e
@property(readonly, nonatomic) unsigned long long bytesDownloaded;
- (void)cancel;	// IMP=0x00000000011d0212
- (void)pause;	// IMP=0x00000000011d01fc
- (void)resume;	// IMP=0x00000000011d017c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
- (id)initWithSessionIdentifier:(id)arg1 batchTileRequester:(id)arg2 manifestManager:(id)arg3 diskCache:(id)arg4 requestCounter:(id)arg5 requestCounterPolicy:(unsigned char)arg6;	// IMP=0x00000000011cffc3
- (id)init;	// IMP=0x00000000011cff99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

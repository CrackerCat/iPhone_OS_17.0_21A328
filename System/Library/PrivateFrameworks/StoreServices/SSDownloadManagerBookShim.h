//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SSDownloadManagerAppShim.h"

@protocol SSBookDownloadQueue;

__attribute__((visibility("hidden")))
@interface SSDownloadManagerBookShim : SSDownloadManagerAppShim
{
    id <SSBookDownloadQueue> _downloadQueue;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000015d2d2
- (id)__book_downloadsForStati:(id)arg1 overrideFinished:(_Bool)arg2 overrideFailed:(_Bool)arg3;	// IMP=0x000000000015d07b
- (id)__book_getAllDownloads;	// IMP=0x000000000015d00c
- (void)__book_resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015cd5d
- (void)__book_pauseDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015caae
- (void)__book_cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015c7ff
- (void)_pauseDownloads:(id)arg1 forced:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015c580
- (id)bookDownloads;	// IMP=0x000000000015c56e
- (id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2;	// IMP=0x000000000015c4e2
- (void)restartDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015c2be
- (void)resumeDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015c05d
- (void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015bf50
- (void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000015be43
- (void)cancelDownloads:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000015bbe2
- (void)__book_filterDownloads:(id)arg1 withResult:(CDUnknownBlockType)arg2;	// IMP=0x000000000015b989
- (void)__book_dispatchBlock:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x000000000015b8a4
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000015b434
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;	// IMP=0x000000000015ac5a
- (id)initWithManagerOptions:(id)arg1;	// IMP=0x000000000015a772

@end

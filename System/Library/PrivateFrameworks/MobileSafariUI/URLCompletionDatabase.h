//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariSharedUI/WBSURLCompletionDatabase.h>

#import <MobileSafariUI/WBSURLCompletionDataSource-Protocol.h>

@class NSArray, NSCache, NSObject, NSString;
@protocol OS_dispatch_queue, WBBookmarkProvider, WBSCloudTabDeviceProvider;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource>
{
    id <WBSCloudTabDeviceProvider> _cloudTabStore;	// 8 = 0x8
    NSArray *_cloudDevices;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cloudTabsAccessQueue;	// 24 = 0x18
    NSCache *_bookmarksCache;	// 32 = 0x20
    id <WBBookmarkProvider> _bookmarkProvider;	// 40 = 0x28
    NSString *_profileIdentifier;	// 48 = 0x30
    int _searchableCollectionsMask;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001ab87f
@property(nonatomic) int searchableCollectionsMask; // @synthesize searchableCollectionsMask=_searchableCollectionsMask;
- (id)fakeBookmarkMatchDataWithURLString:(id)arg1 title:(id)arg2 shouldPreload:(_Bool)arg3;	// IMP=0x00000000001ab789
- (void)enumerateMatchDataForTypedStringHint:(id)arg1 filterResultsUsingProfileIdentifier:(id)arg2 options:(unsigned long long)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000001aa4a9
- (void)cloudTabDeviceProvider:(id)arg1 didUpdateCloudTabsInProfileWithIdentifier:(id)arg2;	// IMP=0x00000000001aa495
- (void)_updateCloudDevices:(id)arg1;	// IMP=0x00000000001aa3b1
- (void)clearBookmarksCache;	// IMP=0x00000000001aa394
- (void)dealloc;	// IMP=0x00000000001aa2e1
- (id)initWithCloudTabStore:(id)arg1 profileIdentifier:(id)arg2 searchableCollectionsMask:(int)arg3 bookmarkProvider:(id)arg4;	// IMP=0x00000000001aa054

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

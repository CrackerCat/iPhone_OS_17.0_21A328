//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "QLItemFetcher.h"

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, NSURL, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLUbiquitousItemFetcher : QLItemFetcher
{
    FPSandboxingURLWrapper *_sandboxingWrapper;	// 8 = 0x8
    NSFileCoordinator *_fileCoordinator;	// 16 = 0x10
    NSMutableArray *_updateBlocks;	// 24 = 0x18
    id _progressSubscriber;	// 32 = 0x20
    NSNumber *_sizeTotalUnitCount;	// 40 = 0x28
    QLURLHandler *_zipPackageUrlHandler;	// 48 = 0x30
    _Bool _shouldZipPackageIfNeeded;	// 56 = 0x38
    _Bool _isAccessingURL;	// 57 = 0x39
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000001c382
- (void).cxx_destruct;	// IMP=0x000000000001c588
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001c449
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001c38a
- (void)_deleteTempraryZipPackageFileIfNeeded;	// IMP=0x000000000001c1a7
- (id)_createURLForPackageIfNeeded;	// IMP=0x000000000001baa9
- (void)_removeUpdateBlockIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ba0d
- (id)newItemProvider;	// IMP=0x000000000001b8f3
@property(readonly, nonatomic) NSURL *fileURL;
- (id)fetchedContent;	// IMP=0x000000000001b891
- (id)shareableItem;	// IMP=0x000000000001b87f
- (id)itemSize;	// IMP=0x000000000001b78e
- (_Bool)isLongFetchOperation;	// IMP=0x000000000001b6ce
- (void)dealloc;	// IMP=0x000000000001b622
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001b307
- (void)cancelFetch;	// IMP=0x000000000001b2ea
- (_Bool)canBeCanceled;	// IMP=0x000000000001b2e2
- (void)subscribeToPreviewItemProgress;	// IMP=0x000000000001af29
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001a816
- (id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;	// IMP=0x000000000001a6ac
- (id)initWithZippingPackageIfNeeded:(_Bool)arg1;	// IMP=0x000000000001a62b
- (id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;	// IMP=0x000000000001a5b6

@end

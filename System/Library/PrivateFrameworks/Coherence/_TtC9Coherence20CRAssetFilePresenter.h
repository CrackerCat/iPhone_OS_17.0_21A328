//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSOperationQueue, NSURL;

__attribute__((visibility("hidden")))
@interface _TtC9Coherence20CRAssetFilePresenter : NSObject
{
    MISSING_TYPE *presentedItemURL;	// 0 = 0x0
    MISSING_TYPE *presentedItemOperationQueue;	// 0 = 0x0
    MISSING_TYPE *assetManager;	// 2004049759 = 0x77735f5f
}

- (void).cxx_destruct;	// IMP=0x0000000000330490
- (id)init;	// IMP=0x0000000000330430
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003303d0
- (void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003302d0
- (void)presentedSubitemDidChangeAtURL:(id)arg1;	// IMP=0x00000000003300c0
- (void)presentedSubitemDidAppearAtURL:(id)arg1;	// IMP=0x00000000003300b0
@property(nonatomic, readonly) NSOperationQueue *presentedItemOperationQueue; // @synthesize presentedItemOperationQueue;
@property(nonatomic, readonly) NSURL *presentedItemURL;

@end

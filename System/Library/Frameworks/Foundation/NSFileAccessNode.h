//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileProviderProxy, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject
{
    NSFileAccessNode *_parent;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_normalizedName;	// 24 = 0x18
    NSFileAccessNode *_symbolicLinkDestination;	// 32 = 0x20
    unsigned long long _symbolicLinkReferenceCount;	// 40 = 0x28
    NSMutableDictionary *_childrenByNormalizedName;	// 48 = 0x30
    id _presenterOrPresenters;	// 56 = 0x38
    NSFileProviderProxy *_provider;	// 64 = 0x40
    id _accessClaimOrClaims;	// 72 = 0x48
    _Bool _isArbitrationBoundary;	// 80 = 0x50
    _Bool _isFilePackageIsFigured;	// 81 = 0x51
    _Bool _isFilePackage;	// 82 = 0x52
    _Bool _symbolicLinkIsFirmlink;	// 83 = 0x53
    NSString *_lastRequestedChildName;	// 88 = 0x58
    NSFileAccessNode *_lastRequestedChild;	// 96 = 0x60
    id _progressPublisherOrPublishers;	// 104 = 0x68
    id _progressSubscriberOrSubscribers;	// 112 = 0x70
}

- (id)subarbiterDescription;	// IMP=0x00000000007f9758
- (id)sensitiveSubarbiterDescription;	// IMP=0x00000000007f9737
- (id)description;	// IMP=0x00000000007f9719
- (id)sensitiveDescription;	// IMP=0x00000000007f96f8
- (id)descriptionWithIndenting:(id)arg1 excludingExcessNodes:(_Bool)arg2 excludingReactors:(_Bool)arg3;	// IMP=0x00000000007f8df6
- (id)_childrenExcludingExcessNodes:(_Bool)arg1 excludingReactors:(_Bool)arg2;	// IMP=0x00000000007f8bfa
- (_Bool)_mayContainCriticalDebuggingInformationExcludingReactors:(_Bool)arg1;	// IMP=0x00000000007f8ba4
- (void)assertDescendantsLive;	// IMP=0x00000000007f8b31
- (void)assertLive;	// IMP=0x00000000007f8a65
- (void)assertDead;	// IMP=0x00000000007f8995
- (id)parent;	// IMP=0x00000000007f898b
- (void)forEachProgressThingOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f8767
- (void)forEachProgressSubscriberOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f8687
- (void)forEachProgressSubscriberOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f8561
- (void)forEachProgressPublisherOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f841b
- (void)forEachProgressPublisherOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f82e5
- (void)removeProgressSubscriber:(id)arg1;	// IMP=0x00000000007f8269
- (void)addProgressSubscriber:(id)arg1;	// IMP=0x00000000007f81d0
- (void)removeProgressPublisher:(id)arg1;	// IMP=0x00000000007f8154
- (void)addProgressPublisher:(id)arg1;	// IMP=0x00000000007f80bb
- (id)urlOfSubitemAtPath:(id)arg1 plusPath:(id)arg2;	// IMP=0x00000000007f7fc7
- (id)name;	// IMP=0x00000000007f7fbd
- (id)standardizedURL;	// IMP=0x00000000007f7f05
- (id)pathExceptPrivate;	// IMP=0x00000000007f7e71
- (id)url;	// IMP=0x00000000007f7db7
- (void)removeAccessClaim:(id)arg1;	// IMP=0x00000000007f7d3b
- (void)addAccessClaim:(id)arg1;	// IMP=0x00000000007f7ca1
- (void)removeProvider:(id)arg1;	// IMP=0x00000000007f7c7a
- (_Bool)setProvider:(id)arg1;	// IMP=0x00000000007f7a8c
- (void)removePresenter:(id)arg1;	// IMP=0x00000000007f7a10
- (void)addPresenter:(id)arg1;	// IMP=0x00000000007f7977
- (_Bool)itemIsInItemAtLocation:(id)arg1;	// IMP=0x00000000007f795d
- (_Bool)itemIsItemAtLocation:(id)arg1;	// IMP=0x00000000007f7915
- (_Bool)itemIsSubarbitrable;	// IMP=0x00000000007f78f1
- (void)setArbitrationBoundary;	// IMP=0x00000000007f78e7
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f777f
- (void)forEachPresenterOfContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f76cf
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f7618
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f75db
- (void)forEachPresenterOfContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f74e1
- (void)forEachPresenterOfItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f73ab
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f72df
- (id)itemProvider;	// IMP=0x00000000007f72c3
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f71e8
- (void)forEachRelevantAccessClaimPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f71d1
- (void)forEachRelevantAccessClaimForEvaluatingAgainstClaim:(id)arg1 performProcedure:(CDUnknownBlockType)arg2;	// IMP=0x00000000007f718e
- (void)_forEachRelevantAccessClaimExcludingClaimsFromSuperarbiter:(_Bool)arg1 performProcedure:(CDUnknownBlockType)arg2;	// IMP=0x00000000007f6ffd
- (void)forEachAccessClaimOnItemPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f6ec7
- (void)forEachDescendantPerformProcedure:(CDUnknownBlockType)arg1;	// IMP=0x00000000007f6d66
- (id)biggestFilePackageLocation;	// IMP=0x00000000007f6d1b
- (_Bool)itemIsFilePackage;	// IMP=0x00000000007f6b07
- (void)setParent:(id)arg1 name:(id)arg2;	// IMP=0x00000000007f6a5e
- (id)pathFromAncestor:(id)arg1;	// IMP=0x00000000007f69ea
- (id)descendantForFileURL:(id)arg1;	// IMP=0x00000000007f675a
- (id)childForRange:(struct _NSRange)arg1 ofPath:(id)arg2;	// IMP=0x00000000007f65d5
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 forAddingLeafNode:(id)arg3 create:(_Bool)arg4;	// IMP=0x00000000007f63c8
- (id)descendantAtPath:(id)arg1 componentRange:(struct _NSRange)arg2 create:(_Bool)arg3;	// IMP=0x00000000007f63a6
- (id)normalizationOfChildName:(id)arg1;	// IMP=0x00000000007f639d
- (void)removeSelfIfUseless;	// IMP=0x00000000007f6325
- (void)removeChildForNormalizedName:(id)arg1;	// IMP=0x00000000007f62a3
- (void)setChild:(id)arg1 forName:(id)arg2 normalizedName:(id)arg3;	// IMP=0x00000000007f6211
- (id)pathToDescendantForFileURL:(id)arg1 componentRange:(struct _NSRange *)arg2;	// IMP=0x00000000007f5ff1
- (void)dealloc;	// IMP=0x00000000007f5f45
- (void)setFirmlinkDestination:(id)arg1;	// IMP=0x00000000007f5f1e
- (void)setSymbolicLinkDestination:(id)arg1;	// IMP=0x00000000007f5efd
- (void)_setLinkDestination:(id)arg1;	// IMP=0x00000000007f5e7a
- (id)initWithParent:(id)arg1 name:(id)arg2 normalizedName:(id)arg3;	// IMP=0x00000000007f5dd6

@end

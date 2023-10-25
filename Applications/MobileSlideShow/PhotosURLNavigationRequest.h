//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, PHPhotoLibrary;
@protocol PXRootLibraryNavigationController;

@interface PhotosURLNavigationRequest : NSObject
{
    CDUnknownBlockType _navigationCompletionHandler;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    id <PXRootLibraryNavigationController> _rootController;	// 24 = 0x18
    PHPhotoLibrary *_photoLibrary;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000415f5
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(readonly, nonatomic) id <PXRootLibraryNavigationController> rootController; // @synthesize rootController=_rootController;
@property(readonly, copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void)_rootUpdatedAvailableDestinations:(id)arg1;	// IMP=0x00100000000415aa
- (void)_contextDidFinishMerge:(id)arg1;	// IMP=0x0010000000041598
- (void)_finishNavigationSuccessfully:(_Bool)arg1;	// IMP=0x0010000000041528
- (void)_processPendingNavigation;	// IMP=0x00100000000414ba
- (void)_schedulePendingNavigation;	// IMP=0x001000000004138d
- (void)cancelPendingNavigation;	// IMP=0x0010000000041330
- (void)navigateAllowingRetry:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000412e4
- (id)_uuidFromURLParams:(id)arg1 prefix:(id)arg2;	// IMP=0x0010000000041116
- (void)_navigateAllowingRetry:(_Bool)arg1;	// IMP=0x001000000003fc14
- (id)_albumForKnownName:(id)arg1 orUUID:(id)arg2 requestIsValid:(_Bool *)arg3;	// IMP=0x001000000003f984
- (void)dealloc;	// IMP=0x001000000003f7d5
- (id)initWithDestinationURL:(id)arg1 rootController:(id)arg2;	// IMP=0x001000000003f606

@end

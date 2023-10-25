//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PHCollectionList, PUAlbumListViewController, PUAlbumPickerSessionInfo, PUAlbumPickerViewControllerSpec, UINavigationController;

__attribute__((visibility("hidden")))
@interface PUAlbumPickerViewController : UIViewController
{
    _Bool _didLoadSubviews;	// 8 = 0x8
    UINavigationController *_contentNavigationController;	// 16 = 0x10
    PHCollectionList *_collectionList;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
    PUAlbumPickerViewControllerSpec *_spec;	// 40 = 0x28
    PUAlbumPickerSessionInfo *_albumPickerSessionInfo;	// 48 = 0x30
    PUAlbumListViewController *__albumListViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000156325
@property(retain, nonatomic, setter=_setAlbumListViewController:) PUAlbumListViewController *_albumListViewController; // @synthesize _albumListViewController=__albumListViewController;
@property(nonatomic) _Bool didLoadSubviews; // @synthesize didLoadSubviews=_didLoadSubviews;
@property(retain, nonatomic, setter=_setSessionInfo:) PUAlbumPickerSessionInfo *albumPickerSessionInfo; // @synthesize albumPickerSessionInfo=_albumPickerSessionInfo;
@property(retain, nonatomic, setter=_setSpec:) PUAlbumPickerViewControllerSpec *spec; // @synthesize spec=_spec;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic, setter=_setContentNavigationController:) UINavigationController *contentNavigationController; // @synthesize contentNavigationController=_contentNavigationController;
- (void)sessionInfoStatusDidChange:(id)arg1;	// IMP=0x000000000015616a
- (void)_loadSubviewsIfNeeded;	// IMP=0x0000000000155d08
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000155cc4
- (_Bool)shouldAutorotate;	// IMP=0x0000000000155cbc
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000155c7b
- (void)viewDidLoad;	// IMP=0x0000000000155c20
- (void)dealloc;	// IMP=0x0000000000155bd4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000155b51
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000155ac1
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00000000001559e6
- (id)initWithSessionInfo:(id)arg1;	// IMP=0x00000000001559cf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

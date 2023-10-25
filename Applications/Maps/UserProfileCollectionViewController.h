//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class ACAccount, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, VGVirtualGarage;
@protocol UserProfileContentViewDelegate;

@interface UserProfileCollectionViewController : UIViewController
{
    ACAccount *_account;	// 8 = 0x8
    VGVirtualGarage *_virtualGarage;	// 16 = 0x10
    NSMutableArray *_userProfilePersonalizationSections;	// 24 = 0x18
    NSMutableDictionary *_linkDictionaryByType;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    id <UserProfileContentViewDelegate> _contentViewDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000bfae64
@property(nonatomic) __weak id <UserProfileContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate=_contentViewDelegate;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)_captureAvailableActions:(id)arg1;	// IMP=0x0010000000bfad27
- (id)_generateAvailableActionsForAnalytics;	// IMP=0x0010000000bfab96
- (void)countryConfigurationDidChange:(id)arg1;	// IMP=0x0010000000bfab3a
- (void)dataDidUpdateForUserProfileLinkType:(long long)arg1;	// IMP=0x0010000000bfa8a5
- (void)userDataDidUpdate;	// IMP=0x0010000000bfa858
- (void)userProfileLinkCellTapped:(id)arg1;	// IMP=0x0010000000bfa79e
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000bfa68c
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000bfa66f
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000bfa514
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000bfa509
- (id)_createModelForType:(long long)arg1;	// IMP=0x0010000000bfa43b
- (void)_addRowContent;	// IMP=0x0010000000bfa078
- (void)_setupConstraints;	// IMP=0x0010000000bf9cef
- (void)_createLayout;	// IMP=0x0010000000bf9893
- (void)viewDidLoad;	// IMP=0x0010000000bf93d8
- (void)_loadGarage;	// IMP=0x0010000000bf930a
- (id)initWithAccount:(id)arg1 contentViewDelegate:(id)arg2;	// IMP=0x0010000000bf9243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

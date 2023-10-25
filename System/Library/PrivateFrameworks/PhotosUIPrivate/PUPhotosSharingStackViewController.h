//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PHAsset, PHFetchResult, PXMessagesStackView;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingStackViewController : UIViewController
{
    PXMessagesStackView *_cardsView;	// 8 = 0x8
    PHFetchResult *_assetFetchResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000d3d48
@property(readonly, nonatomic) PHFetchResult *assetFetchResult; // @synthesize assetFetchResult=_assetFetchResult;
- (void)stackView:(id)arg1 didSelectAssetReference:(id)arg2;	// IMP=0x00000000000d3d31
- (void)viewDidLoad;	// IMP=0x00000000000d3b35
@property(readonly, nonatomic) PHAsset *currentAsset;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d3a3e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000d39ae
- (id)initWithAssetFetchResult:(id)arg1;	// IMP=0x00000000000d393c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

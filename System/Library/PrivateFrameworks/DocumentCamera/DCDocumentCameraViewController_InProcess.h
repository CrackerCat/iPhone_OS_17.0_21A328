//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DCDocumentCameraViewController.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController
{
    UIViewController *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004aa75
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)_autoDismiss;	// IMP=0x000000000004aa0c
- (void)remoteDocumentCameraController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000004a960
- (void)remoteDocumentCameraController:(id)arg1 didFinishWithInfoCollection:(id)arg2;	// IMP=0x000000000004a832
- (void)remoteDocumentCameraControllerDidCancel:(id)arg1;	// IMP=0x000000000004a786
- (id)scanDataDelegateWithIdentifier:(id)arg1;	// IMP=0x000000000004a77e
- (void)documentCameraControllerDidCancel:(id)arg1;	// IMP=0x000000000004a6d2
- (void)documentCameraController:(id)arg1 didFinishWithImage:(id)arg2;	// IMP=0x000000000004a634
- (void)documentCameraController:(id)arg1 didFinishWithDocInfoCollection:(id)arg2 imageCache:(id)arg3 warnUser:(_Bool)arg4;	// IMP=0x000000000004a52c
- (id)documentCameraControllerCreateDataCryptorIfNecessary;	// IMP=0x000000000004a524
- (_Bool)documentCameraController:(id)arg1 canAddImages:(unsigned long long)arg2;	// IMP=0x000000000004a511
- (long long)_preferredModalPresentationStyle;	// IMP=0x000000000004a509
- (void)didReceiveMemoryWarning;	// IMP=0x000000000004a4da
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000004a30f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

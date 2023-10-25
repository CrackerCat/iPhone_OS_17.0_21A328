//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFSetWallpaperActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    long long _locations;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ad7d
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) long long locations; // @synthesize locations=_locations;
- (void)modalRemoteViewController:(id)arg1 didDismissWithResponse:(id)arg2;	// IMP=0x000000000005ac76
- (void)wallpaperPreviewViewControllerSetButtonPressed:(id)arg1;	// IMP=0x000000000005ab9c
- (void)wallpaperPreviewViewControllerCancelButtonPressed:(id)arg1;	// IMP=0x000000000005ab13
- (_Bool)isiPad;	// IMP=0x000000000005aac3
- (void)finishWithError:(id)arg1;	// IMP=0x000000000005a9e0
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a93d
- (void)showPreviewWithInput:(id)arg1 key:(id)arg2 wallpaperLocation:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005a71d
- (void)showPreviewForConfiguration:(id)arg1 selectedPoster:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a550

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

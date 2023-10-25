//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafari/SFWebExtensionsController.h>

@interface SFWebExtensionsController (SafariServicesExtras)
- (void)dismissDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;	// IMP=0x0070000000190ded
- (void)presentDialogView:(id)arg1 withAdditionalAnimations:(CDUnknownBlockType)arg2 forDialogController:(id)arg3;	// IMP=0x0070000000190dc1
- (int)webProcessIDForDialogController:(id)arg1;	// IMP=0x0070000000190db6
- (long long)dialogController:(id)arg1 presentationPolicyForDialog:(id)arg2;	// IMP=0x0070000000190d7d
- (void)dialogController:(id)arg1 dismissViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;	// IMP=0x0070000000190ce4
- (void)dialogController:(id)arg1 presentViewController:(id)arg2 withAdditionalAnimations:(CDUnknownBlockType)arg3;	// IMP=0x0070000000190c44
- (void)createNewTabFromBackgroundPageWithURL:(id)arg1;	// IMP=0x0070000000190bb3
- (id)_dialogController;	// IMP=0x0070000000190b2c
- (void)cancelPresentedDialogIfNecessaryAndUnqueuePendingWebExtensionDialogs;	// IMP=0x0070000000190aab
- (void)_showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)arg1 extensionIdentifier:(id)arg2;	// IMP=0x0070000000190983
- (void)showPromptForExpiredExtension:(id)arg1 extensionName:(id)arg2;	// IMP=0x0070000000190875
- (void)showPromptForBlocklistedExtension:(id)arg1 extensionName:(id)arg2;	// IMP=0x0070000000190703
- (void)showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)arg1 extensionIdentifier:(id)arg2;	// IMP=0x007000000019062f
- (void)showAlwaysAllowConfirmationDialogForExtension:(id)arg1 domains:(id)arg2 includeDenyButton:(_Bool)arg3 responseBlock:(CDUnknownBlockType)arg4;	// IMP=0x007000000019052d
- (void)showAccessRequestDialogForExtension:(id)arg1 domains:(id)arg2 callingAPIName:(id)arg3 showMoreOptionsForAlwaysAllow:(_Bool)arg4 includeDenyButton:(_Bool)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x0070000000190357
- (void)showAccessRequestDialogForExtension:(id)arg1 URLs:(id)arg2 callingAPIName:(id)arg3 showMoreOptionsForAlwaysAllow:(_Bool)arg4 includeDenyButton:(_Bool)arg5 responseBlock:(CDUnknownBlockType)arg6;	// IMP=0x007000000019023e
- (_Bool)showOptionsForExtension:(id)arg1 requestingWebView:(id)arg2;	// IMP=0x007000000019015e
- (_Bool)_createTabWithURL:(id)arg1 inWindow:(id)arg2;	// IMP=0x007000000018ffce
@end

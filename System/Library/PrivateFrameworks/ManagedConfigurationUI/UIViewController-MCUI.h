//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (MCUI)
+ (id)_MCUIUnwrapViewController:(id)arg1;	// IMP=0x00800000000295df
- (void)MCUIReturnToSender:(_Bool)arg1 returnToAccountSettings:(_Bool)arg2 viewControllerDismissalBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000293eb
- (void)MCUIPresentViewController:(id)arg1;	// IMP=0x0010000000029309
- (id)MCUITopViewController;	// IMP=0x001000000002925e
- (_Bool)MCUIIsVisibleViewController;	// IMP=0x00100000000291d6
- (_Bool)MCUIIsShowingProgress;	// IMP=0x0010000000029151
- (void)MCUIHideProgressInNavBarShowBackButton:(_Bool)arg1;	// IMP=0x0010000000028fde
- (void)MCUIShowProgressInNavBar;	// IMP=0x0010000000028e78
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SSSDittoRootViewController, SSSViewControllerManager;

@protocol SSSDittoViewController
@property(nonatomic) __weak SSSViewControllerManager *viewControllerManager;
@property(readonly, nonatomic) SSSDittoRootViewController *rootViewController;
- (void)cleanupRootViewController;
- (void)stopBeingParentOfDittoRootViewController:(SSSDittoRootViewController *)arg1;
- (void)becomeParentOfDittoRootViewController:(SSSDittoRootViewController *)arg1;
@end

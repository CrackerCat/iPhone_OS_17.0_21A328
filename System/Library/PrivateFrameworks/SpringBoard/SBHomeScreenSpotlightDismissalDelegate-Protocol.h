//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHomeScreenSpotlightViewController;

@protocol SBHomeScreenSpotlightDismissalDelegate <NSObject>
- (unsigned long long)defaultSearchViewPresentationSourceForViewController:(SBHomeScreenSpotlightViewController *)arg1;
- (void)handleSpotlightDismissalFromViewController:(SBHomeScreenSpotlightViewController *)arg1;
- (void)handleSpotlightPresentationFromViewController:(SBHomeScreenSpotlightViewController *)arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardUI/NSObject-Protocol.h>

@class PRUIInlinePosterEditingViewController, PRUIModalEntryPointResponse;

@protocol PRUIInlinePosterEditingViewControllerDelegate <NSObject>

@optional
- (void)inlineEditingViewController:(PRUIInlinePosterEditingViewController *)arg1 didDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
- (void)inlineEditingViewController:(PRUIInlinePosterEditingViewController *)arg1 willDismissWithResponse:(PRUIModalEntryPointResponse *)arg2;
@end

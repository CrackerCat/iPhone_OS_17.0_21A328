//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class NSArray, WFGiphyViewController;

@protocol WFGiphyViewControllerDelegate <NSObject>

@optional
- (void)giphyViewController:(WFGiphyViewController *)arg1 didSelectObjects:(NSArray *)arg2;
- (void)giphyViewControllerDidCancel:(WFGiphyViewController *)arg1;
@end

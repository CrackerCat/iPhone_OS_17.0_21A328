//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKApplicationMessageKey, PKApplicationMessageNode, PKApplicationMessageView;

@protocol PKApplicationMessageViewDelegate
- (void)applicationMessageView:(PKApplicationMessageView *)arg1 tappedApplicationMessageWithKey:(PKApplicationMessageKey *)arg2;
- (void)applicationMessageView:(PKApplicationMessageView *)arg1 requestsContentDismissal:(PKApplicationMessageNode *)arg2;
- (void)applicationMessageViewNeedsRemoval:(PKApplicationMessageView *)arg1;
- (void)applicationMessageViewNeedsSizeUpdate:(PKApplicationMessageView *)arg1;
@end

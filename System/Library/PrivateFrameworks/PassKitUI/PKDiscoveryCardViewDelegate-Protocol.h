//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKDiscoveryCallToAction, PKDiscoveryCardView, UIView;

@protocol PKDiscoveryCardViewDelegate <NSObject>
- (void)discoveryCardViewCTATapped:(UIView *)arg1 callToAction:(PKDiscoveryCallToAction *)arg2 itemIdentifier:(NSString *)arg3;

@optional
- (void)discoveryCardViewRemoveTapped:(PKDiscoveryCardView *)arg1;
- (void)discoveryCardViewTapped:(PKDiscoveryCardView *)arg1;
@end

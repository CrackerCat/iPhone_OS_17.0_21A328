//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CardPresentationProtocol-Protocol.h"
#import "ContaineeMapInteractionProtocol-Protocol.h"
#import "ContaineePresentationProtocol-Protocol.h"
#import "ContainerEventProtocol-Protocol.h"

@class UIView;

@protocol ContaineeProtocol <ContaineeMapInteractionProtocol, CardPresentationProtocol, ContainerEventProtocol, ContaineePresentationProtocol>
@property(readonly, nonatomic) unsigned long long retainedLayout;
@property(readonly, nonatomic) double headerHeight;
- (void)handleDismissAction:(id)arg1;
- (void)willDismissByGesture;
- (void)didDismissByGesture;
- (void)shouldDismissForHorizontalSwipe_nonUIKitCardsOnly;
- (void)shoulDismissForVerticalSwipe_nonUIKitCardsOnly;
- (UIView *)contentView;
- (UIView *)headerView;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class CNComposeRecipient, SKUIGiftContactSearchController;

@protocol SKUIGiftContactSearchDelegate <NSObject>

@optional
- (void)searchControllerDidFinishSearch:(SKUIGiftContactSearchController *)arg1;
- (void)searchController:(SKUIGiftContactSearchController *)arg1 didSelectRecipient:(CNComposeRecipient *)arg2;
@end

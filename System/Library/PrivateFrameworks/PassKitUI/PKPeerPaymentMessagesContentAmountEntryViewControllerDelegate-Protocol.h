//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber, PKCurrencyAmount;

@protocol PKPeerPaymentMessagesContentAmountEntryViewControllerDelegate <NSObject>
- (double)percentExpanded;
- (PKCurrencyAmount *)currentBalance;
- (NSDecimalNumber *)maximumTransferAmount;
- (NSDecimalNumber *)minimumTransferAmount;
- (void)handleAction:(unsigned long long)arg1 completion:(void (^)(_Bool))arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSString, PKContact, PKPayment, PKPaymentAuthorizationController, PKPaymentMethod, PKShippingMethod, UIWindow;

@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;

@optional
- (UIWindow *)presentationWindowForPaymentAuthorizationController:(PKPaymentAuthorizationController *)arg1;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingContact:(PKContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingContact:(PKContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didChangeCouponCode:(NSString *)arg2 handler:(void (^)(PKPaymentRequestCouponCodeUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didRequestMerchantSessionUpdate:(void (^)(PKPaymentRequestMerchantSessionUpdate *))arg2;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
@end

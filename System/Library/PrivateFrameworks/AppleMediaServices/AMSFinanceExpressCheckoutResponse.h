//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AMSFinancePaymentSheetResponse.h"

@class AMSBuyParams, AMSURLRequestProperties, AMSURLSession, NSString;

__attribute__((visibility("hidden")))
@interface AMSFinanceExpressCheckoutResponse : AMSFinancePaymentSheetResponse
{
    long long _expressCheckoutMode;	// 8 = 0x8
    AMSURLRequestProperties *_parentProperties;	// 16 = 0x10
    AMSURLSession *_session;	// 24 = 0x18
    AMSBuyParams *_buyParams;	// 32 = 0x20
}

+ (_Bool)_isFlagEnabled;	// IMP=0x00100000002ab282
+ (_Bool)_isExpressCheckoutRecordUserChoiceEnabledForBag:(id)arg1;	// IMP=0x00100000002aaecd
+ (_Bool)_isExpressCheckoutEnabledForBag:(id)arg1;	// IMP=0x00100000002aaab5
+ (_Bool)isExpressCheckoutShouldCheckForWalletBiometricsForBag:(id)arg1;	// IMP=0x00100000002aa721
+ (_Bool)isExpressCheckoutPayload:(id)arg1;	// IMP=0x00100000002aa4fc
+ (_Bool)isEligibleForBag:(id)arg1;	// IMP=0x00100000002aa49e
- (void).cxx_destruct;	// IMP=0x00000000002ab32b
@property(retain, nonatomic) AMSBuyParams *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AMSURLRequestProperties *parentProperties; // @synthesize parentProperties=_parentProperties;
@property(nonatomic) long long expressCheckoutMode; // @synthesize expressCheckoutMode=_expressCheckoutMode;
- (void)removeExpressCheckoutSession;	// IMP=0x00000000002aa34d
- (id)_buyParamFromPayload:(id)arg1;	// IMP=0x00000000002aa1e1
- (long long)_expressCheckoutModeFromPayload:(id)arg1;	// IMP=0x00000000002aa0fb
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleEngagementRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a9fbc
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleDialogRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a9e7d
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002a9d3e
- (id)_createPageEventForPaymentChoices:(id)arg1;	// IMP=0x00000000002a9ab4
- (id)_createClientDataForPaymentChoices:(id)arg1;	// IMP=0x00000000002a98d4
- (id)_recordUserChoiceRequest;	// IMP=0x00000000002a96b7
- (id)_recordUserChoiceForEngagementResult:(id)arg1;	// IMP=0x00000000002a8fdd
- (id)_presentEngagementForPaymentChoices:(id)arg1;	// IMP=0x00000000002a8923
- (id)_paymentChoicesBodyForCardData:(id)arg1;	// IMP=0x00000000002a85e4
- (id)_paymentChoicesRequestForCardData:(id)arg1;	// IMP=0x00000000002a83c3
- (id)_paymentChoicesForCardData:(id)arg1;	// IMP=0x00000000002a8243
- (id)_fetchCardDataForMerchantIdentifier:(id)arg1 countryCode:(id)arg2;	// IMP=0x00000000002a7f6e
- (id)performWithTaskInfo:(id)arg1;	// IMP=0x00000000002a718d
- (id)initWithResponseDictionary:(id)arg1 taskInfo:(id)arg2;	// IMP=0x00000000002a6f7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

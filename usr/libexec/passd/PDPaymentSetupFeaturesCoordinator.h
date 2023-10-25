//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PDAccountManager, PDDatabaseManager, PDDiscoveryManager, PDFamilyCircleManager, PDUserNotificationManager, PKPaymentWebService;
@protocol OS_dispatch_queue, PDPaymentWebServiceCoordinatorProtocol;

@interface PDPaymentSetupFeaturesCoordinator : NSObject
{
    PKPaymentWebService *_webService;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_webServiceQueue;	// 16 = 0x10
    PDDatabaseManager *_databaseManager;	// 24 = 0x18
    id <PDPaymentWebServiceCoordinatorProtocol> _paymentWebServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyCircleManager;	// 40 = 0x28
    PDDiscoveryManager *_discoveryManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_replyQueue;	// 56 = 0x38
    _Bool _isFetchingPaymentSetupFeatures;	// 64 = 0x40
    _Bool;	// 65 = 0x41
    NSMutableArray *_paymentSetupFeatures;	// 72 = 0x48
    NSMutableArray *_pendingPaymentSetupFeatureBlocks;	// 80 = 0x50
    NSMutableArray *_pendingProductRequests;	// 88 = 0x58
    PDAccountManager *_accountManager;	// 96 = 0x60
    PDUserNotificationManager *_userNotificationManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000002ff0b7
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
@property(retain, nonatomic) PDAccountManager *accountManager; // @synthesize accountManager=_accountManager;
- (void)clearPaymentSetupFeatures;	// IMP=0x00100000002ff042
- (void)markProductsDirty;	// IMP=0x00100000002fee9c
- (void)_removeNotificationForProduct:(id)arg1;	// IMP=0x00100000002fee51
- (void)_notificationForNewProduct:(id)arg1 oldProduct:(id)arg2;	// IMP=0x00100000002fe109
- (_Bool)_productsNeedUpdating:(id *)arg1 ignoreCache:(_Bool *)arg2;	// IMP=0x00100000002fdd27
- (void)_storeServerPaymentSetupFeatures:(id)arg1 productsResponse:(id)arg2 priorDirtyStateIdentifier:(id)arg3;	// IMP=0x00100000002fcde2
- (id)_paymentSetupFeaturesForFilteredProducts:(id)arg1;	// IMP=0x00100000002fc653
- (void)_applyRegionFilteringAndAgeCheckToProductsResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fc199
- (void)_processPaymentSetupProductsResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fc012
- (void)_productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fb941
- (void)_performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fb61e
- (void)_runNextProductsRequest;	// IMP=0x00100000002fb245
- (void)handleWebServiceRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fb195
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fb09c
- (void)staticFilteredProductsWithDiagnosticReason:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fad22
- (void)productsWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002fac4a
- (void)_cachedPaymentSetupFeaturesForSourceApplicationID:(id)arg1 useStaticContent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002fa5aa
- (id)_staticAvailableProductsRequest:(_Bool *)arg1;	// IMP=0x00100000002fa540
- (void)_fetchAccountFeaturesWithSupportedFeatureIdentifiers:(id)arg1 paymentSetupFeatures:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f9da0
- (void)_fetchPaymentSetupFeaturesForSourceApplicationID:(id)arg1 useStaticContent:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002f8cf7
- (void)staticPaymentSetupFeaturesForSourceApplicationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f8cd6
- (void)paymentSetupFeaturesForSourceApplicationID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f8870
- (id)initWithWebService:(id)arg1 webServiceQueue:(id)arg2 databaseManager:(id)arg3 paymentWebServiceCoordinator:(id)arg4 accountManager:(id)arg5 familyCircleManager:(id)arg6 discoveryManager:(id)arg7;	// IMP=0x00100000002f83e8

@end

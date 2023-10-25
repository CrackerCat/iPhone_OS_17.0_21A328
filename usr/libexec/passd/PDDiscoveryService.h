//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PDXPCService.h>

@class NSString, PDDiscoveryManager, PDRuleManager, PKEntitlementWhitelist;

@interface PDDiscoveryService : PDXPCService
{
    PKEntitlementWhitelist *_whitelist;	// 8 = 0x8
    _Bool _entitledForDiscoveryUse;	// 16 = 0x10
    PDDiscoveryManager *_discoveryManager;	// 24 = 0x18
    PDRuleManager *_ruleManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000039f1cd
@property(retain, nonatomic) PDRuleManager *ruleManager; // @synthesize ruleManager=_ruleManager;
@property(retain, nonatomic) PDDiscoveryManager *discoveryManager; // @synthesize discoveryManager=_discoveryManager;
- (void)fireEngagementEventNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039f034
- (void)fetchUserProperties:(id)arg1 withParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039eeb9
- (void)removeDiscoveryUserNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039ed33
- (void)evaluateRulesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039ebdf
- (void)deleteRuleWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039ea81
- (void)insertRule:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039e923
- (void)rulesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039e798
- (void)endReportingDiscoveryAnalyticsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039e667
- (void)beginReportingDiscoveryAnalyticsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039e536
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 wasScrolledToTheBottom:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000039e3af
- (void)discoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 isScrollable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000039e228
- (void)discoveryItemWithIdentifier:(id)arg1 launchedWithReferralSource:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039e0c3
- (void)completedDiscoveryItemCTAWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039df92
- (void)tappedDiscoveryItemCTA:(long long)arg1 itemIdentifier:(id)arg2 cardSize:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000039de0c
- (void)removedAllDiscoveryItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039dcdb
- (void)dismissedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 cardSize:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000039db55
- (void)expandedDiscoveryItemWithIdentifier:(id)arg1 callToAction:(long long)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 cardSize:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000039d9aa
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1 isWelcomeCard:(_Bool)arg2 afterSwipingToCard:(_Bool)arg3 multipleStoryCardsAvailable:(_Bool)arg4 callToAction:(long long)arg5 cardSize:(long long)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000039d7f2
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039d694
- (void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039d4da
- (void)insertDiscoveryEngagementMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039d320
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039d0fe
- (void)dialogRequestsForPlacement:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039cf3f
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039cd6c
- (void)processDiscoveryItemsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039cbe6
- (void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039c9ea
- (void)discoveryItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039c85f
- (void)updateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039c759
- (void)manifestAllowsMiniCardsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039c651
- (void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000039c409
- (void)dismissedDiscoveryItems:(CDUnknownBlockType)arg1;	// IMP=0x001000000039c280
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000039c0c3
- (void)discoveryArticleLayoutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000039bf38
- (void)dispatchDiscoveryRequestBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000039bcff
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000039bcc1
- (id)remoteObjectProxy;	// IMP=0x001000000039bc83
- (void)sendDiscoveryEngagementMessagesUpdated;	// IMP=0x001000000039bc34
- (void)dialogRequestsChangedForPlacement:(id)arg1;	// IMP=0x001000000039bbb5
- (void)completedCTAForItem:(id)arg1;	// IMP=0x001000000039bb36
- (void)sendDiscoveryArticleLayoutsUpdated:(id)arg1;	// IMP=0x001000000039bab7
- (id)initWithConnection:(id)arg1 server:(id)arg2;	// IMP=0x001000000039b99f
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000039b991

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

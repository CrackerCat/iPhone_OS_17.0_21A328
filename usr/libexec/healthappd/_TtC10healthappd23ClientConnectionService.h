//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC10healthappd23ClientConnectionService
{
    MISSING_TYPE *longRunningProcessOracle;	// 48 = 0x30
    MISSING_TYPE *countryOracle;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_healthWelcomeFlowSignalManager;	// 64 = 0x40
    MISSING_TYPE *backgroundGenerationActivities;	// 72 = 0x48
    MISSING_TYPE *commitTransactionCancellable;	// 80 = 0x50
    MISSING_TYPE *schedulerDispatchQueue;	// 88 = 0x58
    MISSING_TYPE *_appFirstLaunchDate;	// 0 = 0x0
    MISSING_TYPE *_appLastOpenedDate;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000205c0
- (id)runLaunchGenerationIfIdleWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021fd0
- (void)dealloc;	// IMP=0x0010000000020560
- (void)cancelAllGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e960
- (void)cancelAllGenerationAndRunBackgroundGenerationForGenerationType:(unsigned long long)arg1 commitUrgentTransaction:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001e860
- (void)runOrRequestBackgroundGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e7f0
- (void)requestBackgroundGenerationForAllModelsAfterUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e390
- (void)requestBackgroundGenerationForFeedItemsAfterUnlockWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001e380
- (void)handleJournaledSharingEntries:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e310
- (void)commitSharedSummaryTransactionAsUrgent:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001e2a0
- (void)updateFavoritesWithFavoriteIdentifiers:(id)arg1 isFavorite:(_Bool)arg2 replaceExistingFavorites:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001cec0
- (id)startInteractiveFeedItemGenerationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a500
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifiers:(id)arg2 commitUrgentTransaction:(_Bool)arg3 generationType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000171a0
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifiers:(id)arg2 commitUrgentTransaction:(_Bool)arg3 feedItemsOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000156e0
- (id)runBackgroundGenerationFor:(id)arg1 pluginIdentifier:(id)arg2 commitUrgentTransaction:(_Bool)arg3 feedItemsOnly:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015500

@end

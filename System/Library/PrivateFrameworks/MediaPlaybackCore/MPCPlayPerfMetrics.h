//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface MPCPlayPerfMetrics : NSObject
{
    NSMutableDictionary *_data;	// 8 = 0x8
}

+ (id)playMetricsWithErrorSignature:(id)arg1 event:(id)arg2 cursor:(id)arg3;	// IMP=0x00600000002f4ccb
+ (id)playMetricsWithFirstFrameEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00600000002f1e52
- (void).cxx_destruct;	// IMP=0x00000000002f13da
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
- (void)addEnvironmentInfoWithCursor:(id)arg1;	// IMP=0x00000000002f1313
- (void)addAssetSelectionWithCursor:(id)arg1 itemIDPayload:(id)arg2;	// IMP=0x00000000002f09af
- (void)addSessionActivationTimesWithScopedCursor:(id)arg1;	// IMP=0x00000000002f06c4
- (void)addNetworkTimesWithScopedCursor:(id)arg1;	// IMP=0x00000000002f0439
- (void)addSharePlayWithCursor:(id)arg1;	// IMP=0x00000000002f0351
- (void)addPlaybackBehaviorWithCursor:(id)arg1;	// IMP=0x00000000002f0160
- (void)addQueueMetadata:(id)arg1;	// IMP=0x00000000002f00ac
- (id)jsonObject;	// IMP=0x00000000002eed7a
- (id)description;	// IMP=0x00000000002eeb6a
- (id)dictionaryRepresentation;	// IMP=0x00000000002eeb22
@property(readonly, nonatomic) NSNumber *avTime;
@property(readonly, nonatomic) NSNumber *networkTime;
@property(readonly, nonatomic) NSNumber *mediaPlayerTime;
@property(readonly, nonatomic) NSNumber *musicWaitTime;
@property(readonly, nonatomic) NSNumber *musicTotalTime;
- (id)init;	// IMP=0x00000000002ee020
@property(retain, nonatomic, setter=set_checkpointFirstAudioFrame:) NSNumber *checkpointFirstAudioFrame; // @dynamic checkpointFirstAudioFrame;
@property(retain, nonatomic, setter=set_checkpointRateOne:) NSNumber *checkpointRateOne; // @dynamic checkpointRateOne;
@property(retain, nonatomic, setter=set_checkpointReadyToPlay:) NSNumber *checkpointReadyToPlay; // @dynamic checkpointReadyToPlay;
@property(retain, nonatomic, setter=set_checkpointLikelyToKeepUp:) NSNumber *checkpointLikelyToKeepUp; // @dynamic checkpointLikelyToKeepUp;
@property(retain, nonatomic, setter=set_checkpointAssetLoadEnd:) NSNumber *checkpointAssetLoadEnd; // @dynamic checkpointAssetLoadEnd;
@property(retain, nonatomic, setter=set_checkpointAssetLoadBegin:) NSNumber *checkpointAssetLoadBegin; // @dynamic checkpointAssetLoadBegin;
@property(retain, nonatomic, setter=set_checkpointPlay:) NSNumber *checkpointPlay; // @dynamic checkpointPlay;
@property(retain, nonatomic, setter=set_checkpointMRPlay:) NSNumber *checkpointMRPlay; // @dynamic checkpointMRPlay;
@property(retain, nonatomic, setter=set_checkpointSetQueueEnd:) NSNumber *checkpointSetQueueEnd; // @dynamic checkpointSetQueueEnd;
@property(retain, nonatomic, setter=set_checkpointRateZero:) NSNumber *checkpointRateZero; // @dynamic checkpointRateZero;
@property(retain, nonatomic, setter=set_checkpointSetQueueBegin:) NSNumber *checkpointSetQueueBegin; // @dynamic checkpointSetQueueBegin;
@property(retain, nonatomic, setter=set_checkpointMRSetQueueBegin:) NSNumber *checkpointMRSetQueueBegin; // @dynamic checkpointMRSetQueueBegin;
@property(retain, nonatomic, setter=set_sessionActivationClientTime:) NSNumber *sessionActivationClientTime; // @dynamic sessionActivationClientTime;
@property(retain, nonatomic, setter=set_sessionActivationAVTime:) NSNumber *sessionActivationAVTime; // @dynamic sessionActivationAVTime;
@property(retain, nonatomic, setter=set_sessionActivationWaitTime:) NSNumber *sessionActivationWaitTime; // @dynamic sessionActivationWaitTime;
@property(retain, nonatomic, setter=set_hlsMetadataWaitTime:) NSNumber *hlsMetadataWaitTime; // @dynamic hlsMetadataWaitTime;
@property(retain, nonatomic, setter=set_mediaRedownloadWaitTime:) NSNumber *mediaRedownloadWaitTime; // @dynamic mediaRedownloadWaitTime;
@property(retain, nonatomic, setter=set_subscriptionAssetLoadWaitTime:) NSNumber *subscriptionAssetLoadWaitTime; // @dynamic subscriptionAssetLoadWaitTime;
@property(retain, nonatomic, setter=set_suzeLeaseWaitTime:) NSNumber *suzeLeaseWaitTime; // @dynamic suzeLeaseWaitTime;
@property(retain, nonatomic, setter=set_leaseWaitTime:) NSNumber *leaseWaitTime; // @dynamic leaseWaitTime;
@property(retain, nonatomic, setter=set_bagWaitTime:) NSNumber *bagWaitTime; // @dynamic bagWaitTime;
@property(retain, nonatomic, setter=set_lookupWaitTime:) NSNumber *lookupWaitTime; // @dynamic lookupWaitTime;
@property(retain, nonatomic, setter=set_nextItemWaitTime:) NSNumber *nextItemWaitTime; // @dynamic nextItemWaitTime;
@property(retain, nonatomic, setter=set_firstAudioFrameWaitTime:) NSNumber *firstAudioFrameWaitTime; // @dynamic firstAudioFrameWaitTime;
@property(retain, nonatomic, setter=set_rateChangeWaitTime:) NSNumber *rateChangeWaitTime; // @dynamic rateChangeWaitTime;
@property(retain, nonatomic, setter=set_playCommandWaitTime:) NSNumber *playCommandWaitTime; // @dynamic playCommandWaitTime;
@property(retain, nonatomic, setter=set_readyToPlayStatusWaitTime:) NSNumber *readyToPlayStatusWaitTime; // @dynamic readyToPlayStatusWaitTime;
@property(retain, nonatomic, setter=set_assetLoadWaitTime:) NSNumber *assetLoadWaitTime; // @dynamic assetLoadWaitTime;
@property(retain, nonatomic, setter=set_queueLoadWaitTime:) NSNumber *queueLoadWaitTime; // @dynamic queueLoadWaitTime;
@property(retain, nonatomic, setter=set_playCommandSendTime:) NSNumber *playCommandSendTime; // @dynamic playCommandSendTime;
@property(retain, nonatomic, setter=set_setQueueCommandSendTime:) NSNumber *setQueueCommandSendTime; // @dynamic setQueueCommandSendTime;
@property(retain, nonatomic, setter=set_assetProtectionType:) NSNumber *assetProtectionType; // @dynamic assetProtectionType;
@property(retain, nonatomic, setter=set_vocalsControlActive:) NSNumber *vocalsControlActive; // @dynamic vocalsControlActive;
@property(retain, nonatomic, setter=set_treatmentID:) NSString *treatmentID; // @dynamic treatmentID;
@property(retain, nonatomic, setter=set_experimentID:) NSString *experimentID; // @dynamic experimentID;
@property(retain, nonatomic, setter=set_storefront:) NSString *storefront; // @dynamic storefront;
@property(retain, nonatomic, setter=set_queueCommandType:) NSNumber *queueCommandType; // @dynamic queueCommandType;
@property(retain, nonatomic, setter=set_seekBeforePlaying:) NSNumber *seekBeforePlaying; // @dynamic seekBeforePlaying;
@property(retain, nonatomic, setter=set_isActiveAccount:) NSNumber *isActiveAccount; // @dynamic isActiveAccount;
@property(retain, nonatomic, setter=set_hasAccountInfo:) NSNumber *hasAccountInfo; // @dynamic hasAccountInfo;
@property(retain, nonatomic, setter=set_errorSignature:) NSString *errorSignature; // @dynamic errorSignature;
@property(retain, nonatomic, setter=set_errorResolution:) NSNumber *errorResolution; // @dynamic errorResolution;
@property(retain, nonatomic, setter=set_isReplacingPlayback:) NSNumber *isReplacingPlayback; // @dynamic isReplacingPlayback;
@property(retain, nonatomic, setter=set_isFirstPlay:) NSNumber *isFirstPlay; // @dynamic isFirstPlay;
@property(retain, nonatomic, setter=set_networkType:) NSNumber *networkType; // @dynamic networkType;
@property(retain, nonatomic, setter=set_routeInfo:) NSDictionary *routeInfo; // @dynamic routeInfo;
@property(retain, nonatomic, setter=set_formatInfo:) NSDictionary *formatInfo; // @dynamic formatInfo;
@property(retain, nonatomic, setter=set_hasOfflinePlaybackKeys:) NSNumber *hasOfflinePlaybackKeys; // @dynamic hasOfflinePlaybackKeys;
@property(retain, nonatomic, setter=set_hasOnlinePlaybackKeys:) NSNumber *hasOnlinePlaybackKeys; // @dynamic hasOnlinePlaybackKeys;
@property(retain, nonatomic, setter=set_isDelegatedPlayback:) NSNumber *isDelegatedPlayback; // @dynamic isDelegatedPlayback;
@property(retain, nonatomic, setter=set_subscriptionType:) NSNumber *subscriptionType; // @dynamic subscriptionType;
@property(retain, nonatomic, setter=set_endpointType:) NSNumber *endpointType; // @dynamic endpointType;
@property(retain, nonatomic, setter=set_assetCacheAge:) NSNumber *assetCacheAge; // @dynamic assetCacheAge;
@property(retain, nonatomic, setter=set_assetLocation:) NSNumber *assetLocation; // @dynamic assetLocation;
@property(retain, nonatomic, setter=set_assetSource:) NSNumber *assetSource; // @dynamic assetSource;
@property(retain, nonatomic, setter=set_assetType:) NSNumber *assetType; // @dynamic assetType;
@property(retain, nonatomic, setter=set_isSharePlay:) NSNumber *isSharePlay; // @dynamic isSharePlay;
@property(retain, nonatomic, setter=set_isAutoPlayEnabled:) NSNumber *isAutoPlayEnabled; // @dynamic isAutoPlayEnabled;
@property(retain, nonatomic, setter=set_isShuffled:) NSNumber *isShuffled; // @dynamic isShuffled;
@property(retain, nonatomic, setter=set_isRemoteSetQueue:) NSNumber *isRemoteSetQueue; // @dynamic isRemoteSetQueue;
@property(retain, nonatomic, setter=set_queueType:) NSString *queueType; // @dynamic queueType;
@property(retain, nonatomic, setter=set_siriRefId:) NSString *siriRefId; // @dynamic siriRefId;
@property(retain, nonatomic, setter=set_featureName:) NSString *featureName; // @dynamic featureName;
@property(retain, nonatomic, setter=set_itemMetadata:) NSDictionary *itemMetadata; // @dynamic itemMetadata;
@property(retain, nonatomic, setter=set_itemIdentifier:) NSString *itemIdentifier; // @dynamic itemIdentifier;
@property(retain, nonatomic, setter=set_sectionIdentifier:) NSString *sectionIdentifier; // @dynamic sectionIdentifier;
@property(retain, nonatomic, setter=set_eventTime:) NSNumber *eventTime; // @dynamic eventTime;
@property(retain, nonatomic, setter=set_eventType:) NSString *eventType; // @dynamic eventType;

@end

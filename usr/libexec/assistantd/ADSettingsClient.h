//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreEmbeddedSpeechRecognizer, NSString, NSXPCConnection;

@interface ADSettingsClient : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    CoreEmbeddedSpeechRecognizer *_localSpeechRecognizer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000002da3e4
- (void)createRadarForCrashWithReason:(id)arg1 process:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002da0ba
- (oneway void)readSyncTokenForAceHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9f94
- (oneway void)setSyncToken:(id)arg1 forAceHost:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d9eea
- (oneway void)getCurrentActiveLanguageCodesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9e50
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9ddf
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9d2f
- (oneway void)areSiriUODAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9c48
- (oneway void)dumpAssistantState:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9bba
- (oneway void)setAllowJustSiriHomeKitSetting:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9b41
- (oneway void)isJustSiriEnabledInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9ad4
- (oneway void)availableLanguagesInTheHome:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9a67
- (oneway void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x00100000002d9a16
- (oneway void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d995b
- (void)JSCapableHomeDevices:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d98ee
- (void)adSyncVerificationServerReport:(id)arg1;	// IMP=0x00100000002d9885
- (void)adSyncVerificationPartialResult:(id)arg1;	// IMP=0x00100000002d981c
- (oneway void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d96ec
- (oneway void)getPlatformBiasValue:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d967f
- (oneway void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d95f0
- (oneway void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9561
- (oneway void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d94f4
- (oneway void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d9487
- (oneway void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002d93e0
- (oneway void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d9351
- (oneway void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d931d
- (oneway void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d92e7
- (void)_postWatchNotificationWithContext:(id)arg1 withError:(id)arg2;	// IMP=0x00100000002d91c3
- (oneway void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x00100000002d9172
- (oneway void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d8c38
- (oneway void)shouldSuppressSiriDataSharingOptInAlertWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d8c04
- (oneway void)sendSampledAudioToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d8bbb
- (oneway void)setIsHomePodInHH2Mode:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d8af4
- (oneway void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d8a03
- (oneway void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d89cd
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002d86ec
- (oneway void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d8600
- (oneway void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002d84e3
- (oneway void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x00100000002d84d9
- (oneway void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x00100000002d84cc
- (oneway void)clearShowAppsBehindSiriInCarPlayEnabled;	// IMP=0x00100000002d84c2
- (oneway void)setShowAppsBehindSiriInCarPlayEnabled:(_Bool)arg1;	// IMP=0x00100000002d84b6
- (oneway void)getShowAppsBehindSiriInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d8485
- (oneway void)clearMessageWithoutConfirmationHeadphonesEnabled;	// IMP=0x00100000002d847b
- (oneway void)setMessageWithoutConfirmationHeadphonesEnabled:(_Bool)arg1;	// IMP=0x00100000002d846f
- (oneway void)getMessageWithoutConfirmationHeadphonesEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d843e
- (oneway void)clearMessageWithoutConfirmationInCarPlayEnabled;	// IMP=0x00100000002d8434
- (oneway void)setMessageWithoutConfirmationInCarPlayEnabled:(_Bool)arg1;	// IMP=0x00100000002d8428
- (oneway void)getMessageWithoutConfirmationInCarPlayEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d83f7
- (oneway void)clearMessageWithoutConfirmationEnabled;	// IMP=0x00100000002d83ed
- (oneway void)setMessageWithoutConfirmationEnabled:(_Bool)arg1;	// IMP=0x00100000002d83e1
- (oneway void)getMessageWithoutConfirmationEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d83b0
- (oneway void)setAnnounceNotificationsOnBuiltInSpeakerEnabled:(_Bool)arg1;	// IMP=0x00100000002d83a4
- (oneway void)updateAnnounceNotificationsOnHearingAidSupportedStatus;	// IMP=0x00100000002d839a
- (oneway void)setAnnounceNotificationsOnHearingAidsSupported:(_Bool)arg1;	// IMP=0x00100000002d838e
- (oneway void)setAnnounceNotificationsOnHearingAidsEnabled:(_Bool)arg1;	// IMP=0x00100000002d8382
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x00100000002d82d9
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x00100000002d81e9
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d81b8
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x00100000002d812e
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x00100000002d808b
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d805a
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x00100000002d8047
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d7fec
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x00100000002d7fdc
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7f86
- (oneway void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x00100000002d7f7c
- (oneway void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x00100000002d7f70
- (oneway void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7f3f
- (oneway void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x00100000002d7f33
- (oneway void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7f02
- (oneway void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x00100000002d7ef6
- (oneway void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7ec5
- (oneway void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x00100000002d7ebb
- (oneway void)stopObservingBluetoothInEarDetectionStateForObserverID:(unsigned long long)arg1;	// IMP=0x00100000002d7e68
- (oneway void)startObservingBluetoothInEarDetectionStateForBTAddress:(id)arg1 forObserverID:(unsigned long long)arg2;	// IMP=0x00100000002d7ded
- (oneway void)postJSDiscoveryNotificationForBTDeviceWithInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7de7
- (id)_localizedBodyWithFormat:(id)arg1 forTriggerPhrase:(id)arg2 andName:(id)arg3;	// IMP=0x00100000002d7d54
- (oneway void)getInEarDetectionStateForBTAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7bb7
- (oneway void)stopObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000002d7b73
- (oneway void)startObservingBluetoothWirelessSplitterSession;	// IMP=0x00100000002d7b2f
- (oneway void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7a49
- (oneway void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7a3c
- (oneway void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d795a
- (oneway void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d785a
- (oneway void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d775a
- (oneway void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d7677
- (oneway void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d75a3
- (oneway void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d74ea
- (oneway void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d7431
- (oneway void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d735a
- (oneway void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d72a1
- (oneway void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d71e8
- (oneway void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7098
- (oneway void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d7024
- (oneway void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d700e
- (oneway void)getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6f53
- (oneway void)updateMultiUserWithSharedUserId:(id)arg1 companionInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d6e73
- (oneway void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6daf
- (oneway void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6ceb
- (oneway void)updateVoiceIdScoreToUser:(id)arg1 score:(id)arg2 reset:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d6c27
- (oneway void)showHomeProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6bf4
- (oneway void)resetProfileNames:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6bc1
- (oneway void)showLocalProfileNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6b8e
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6b0f
- (oneway void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6a92
- (oneway void)showMultiUserCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d69c4
- (oneway void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6947
- (oneway void)removeMultiUserUserWithSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6875
- (oneway void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d67a3
- (oneway void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 iCloudAltDSID:(id)arg4 enrollmentName:(id)arg5 isPrimary:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00100000002d664d
- (oneway void)getPersonalMultiUserDeviceIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d62b6
- (oneway void)getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6245
- (oneway void)setNanoAlwaysShowRecognizedSpeech:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6233
- (oneway void)setNanoSiriResponseShouldAlwaysPrint:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6221
- (oneway void)setNanoMessageWithoutConfirmationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d620f
- (oneway void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61fd
- (oneway void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61eb
- (oneway void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61d9
- (oneway void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61c7
- (oneway void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61b5
- (oneway void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d61a3
- (oneway void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d6191
- (oneway void)setNanoDictationAutoPunctuationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d617f
- (oneway void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d616d
- (oneway void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d615b
- (oneway void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d60ea
- (oneway void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d6079
- (oneway void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d5fc0
- (oneway void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d5f52
- (oneway void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d5ee4
- (oneway void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d5e76
- (oneway void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d5e08
- (oneway void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d5d9c
- (oneway void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d5d30
- (oneway void)postTestResultSelectedWithRcId:(id)arg1;	// IMP=0x00100000002d5cc3
- (oneway void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00100000002d5c34
- (oneway void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d5b30
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x00100000002d5abb
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00100000002d5a25
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d5979
- (oneway void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d577e
- (oneway void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d55b6
- (void)_createMockServerIfNeededAndSetActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d54df
- (oneway void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d53e8
- (oneway void)dismissUI;	// IMP=0x00100000002d53a4
- (oneway void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x00100000002d5245
- (oneway void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002d4fcb
- (oneway void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d4eb9
- (oneway void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d4de5
- (oneway void)setSpeechProfileExternalOfflineModelRootPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d4d51
- (oneway void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d4cbd
- (oneway void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d4bfc
- (oneway void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d4ae6
- (oneway void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d49d0
- (id)_localSpeechRecognizer;	// IMP=0x00100000002d497c
- (oneway void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d4827
- (oneway void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d46f3
- (oneway void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d45ff
- (oneway void)getAvailableVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d453d
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d431e
- (oneway void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d4289
- (oneway void)getCurrentNWActivityIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d41d0
- (oneway void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d4141
- (oneway void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d40d4
- (oneway void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d3ff4
- (oneway void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3eef
- (oneway void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3e26
- (oneway void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3db9
- (oneway void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x00100000002d3d87
- (oneway void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3cbc
- (oneway void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d3c2d
- (oneway void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3bc0
- (oneway void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3b53
- (oneway void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d3b3d
- (oneway void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3b25
- (oneway void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d3b0f
- (oneway void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3a64
- (oneway void)_runServiceMaintenance;	// IMP=0x00100000002d3a1e
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002d3838
- (oneway void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d37c9
- (oneway void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000002d3547
- (oneway void)_isDisablingDictationOnlySyncSupported:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d34c3
- (oneway void)_isSiriVocabularyNotificationForAddressBookSyncSupported:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d343f
- (oneway void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x00100000002d33a5
- (oneway void)_setSyncNeededForReason:(id)arg1;	// IMP=0x00100000002d3398
- (oneway void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d3300
- (oneway void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002d3268
- (oneway void)barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d325d
- (oneway void)_shutdownSessionIfIdle;	// IMP=0x00100000002d319b
- (oneway void)_killDaemon;	// IMP=0x00100000002d30d9
- (oneway void)setEnableAssistantLogging:(_Bool)arg1;	// IMP=0x00100000002d2f7c
- (oneway void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x00100000002d2f03
- (oneway void)setDictationAutoPunctuationEnabled:(_Bool)arg1;	// IMP=0x00100000002d2eb2
- (oneway void)setDictationEnabled:(_Bool)arg1;	// IMP=0x00100000002d2c17
- (oneway void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x00100000002d2b15
- (oneway void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d2a5a
- (oneway void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000002d29ed
- (oneway void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x00100000002d2980
- (void)_saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000002d28d6
- (oneway void)saveAccountWithMessageDictionary:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00100000002d2632
- (oneway void)retrieveAccountMessageDictionariesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d24ea
- (oneway void)fetchSupportedLanguagesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d240b
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000002d23f5
- (id)_serviceDelegate;	// IMP=0x00100000002d23df
- (void)connectionDisconnected;	// IMP=0x00100000002d2395
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000002d232a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

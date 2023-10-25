//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (Json)
+ (id)_readValuesInNestedDictionary:(id)arg1 keyword:(id)arg2 depth:(long long)arg3 limitedDepth:(long long)arg4;	// IMP=0x0020000000001da9
+ (id)readValuesFromJsonFile:(id)arg1 keyword:(id)arg2;	// IMP=0x0010000000001c65
+ (id)getInputoriginFromRecordType:(id)arg1 withAsset:(id)arg2;	// IMP=0x001000000001ae48
+ (id)timeStampString;	// IMP=0x001000000001ad80
+ (void)logMitigationFeatures:(id)arg1 forTask:(id)arg2 withModelOutput:(id)arg3 forMHRequestId:(id)arg4 forRequestId:(id)arg5;	// IMP=0x001000000001a177
+ (_Bool)isRemoteDarwinWithDeviceId:(id)arg1;	// IMP=0x001000000008a5f2
+ (_Bool)hasRemoteBuiltInMic;	// IMP=0x001000000008a5ea
+ (void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008a602
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x001000000008a5fa
+ (id)recordContextString:(id)arg1;	// IMP=0x0010000000097b76
+ (_Bool)isValidRecordContext:(id)arg1;	// IMP=0x0010000000097b6e
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;	// IMP=0x0010000000097b0e
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;	// IMP=0x0010000000097aae
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;	// IMP=0x0010000000097a4e
+ (_Bool)isRecordContextHearstDoubleTap:(id)arg1;	// IMP=0x00100000000979ee
+ (_Bool)isRecordContextHearstVoiceTrigger:(id)arg1;	// IMP=0x001000000009798e
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;	// IMP=0x000000000009792e
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;	// IMP=0x00100000000978ce
+ (_Bool)isRecordContextHomeButtonPress:(id)arg1;	// IMP=0x001000000009786e
+ (_Bool)isRecordContextRemoraVoiceTrigger:(id)arg1;	// IMP=0x001000000009780e
+ (_Bool)isRecordContextDarwinVoiceTrigger:(id)arg1;	// IMP=0x00100000000977ae
+ (_Bool)isRecordContextBuiltInVoiceTrigger:(id)arg1;	// IMP=0x001000000009774e
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;	// IMP=0x0010000000097690
+ (_Bool)extractArchiveFromDirectory:(id)arg1 toDir:(id)arg2;	// IMP=0x00100000000a63e6
+ (id)getSiriLanguageWithEndpointId:(id)arg1 fallbackLanguage:(id)arg2;	// IMP=0x00100000000a777d
+ (id)getSiriLanguageWithFallback:(id)arg1;	// IMP=0x00100000000a7632
+ (_Bool)xpcConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00100000000e0c31
+ (id)distributionDictionary:(id)arg1;	// IMP=0x001000000012b931
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000012f434
+ (_Bool)machXPCConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x001000000013d311
@end

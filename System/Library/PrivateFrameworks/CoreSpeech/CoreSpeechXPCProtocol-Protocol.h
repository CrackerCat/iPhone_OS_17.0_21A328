//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSVoiceTriggerRTModelRequestOptions, NSArray, NSString;

@protocol CoreSpeechXPCProtocol
- (void)voiceTriggerJarvisLanguageList:(NSArray *)arg1 jarvisSelectedLanguage:(NSString *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)voiceTriggerRTModelWithRequestOptions:(CSVoiceTriggerRTModelRequestOptions *)arg1 downloadedModels:(NSArray *)arg2 preinstalledModels:(NSArray *)arg3 completion:(void (^)(CSVoiceTriggerRTModel *, CSVoiceTriggerRTModel *, NSError *))arg4;
- (void)fetchRemoteVoiceTriggerAssetForLanguageCode:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)installedVoiceTriggerAssetForLanguageCode:(NSString *)arg1 completion:(void (^)(NSString *, NSString *, NSError *))arg2;
@end

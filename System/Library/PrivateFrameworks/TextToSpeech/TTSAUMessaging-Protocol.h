//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSNumber, NSObject, NSString;

@protocol TTSAUMessaging
- (NSObject *)echo:(NSObject *)arg1;
- (NSNumber *)voicesExternallyManaged;
- (NSNumber *)requireFirstUnlockForVoiceLoad;
- (NSArray *)hiddenParametersForVoice:(NSString *)arg1;
- (NSDictionary *)defaultSettingsForVoice:(NSString *)arg1;
@end

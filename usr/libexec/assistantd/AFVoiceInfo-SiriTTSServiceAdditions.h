//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFVoiceInfo.h>

@interface AFVoiceInfo (SiriTTSServiceAdditions)
+ (long long)genderForVSSpeechGender:(long long)arg1;	// IMP=0x00200000001e62c4
- (_Bool)isMatchForSiriVoice:(id)arg1;	// IMP=0x002000000014e3b6
- (_Bool)isMatchForVoiceAsset:(id)arg1;	// IMP=0x00100000001e601a
- (id)VSVoiceAsset;	// IMP=0x00100000001e5e64
- (long long)VSSpeechType;	// IMP=0x00100000001e5e48
- (long long)VSSpeechFootprint;	// IMP=0x00100000001e5e24
- (long long)VSSpeechGender;	// IMP=0x00100000001e5e03
@end

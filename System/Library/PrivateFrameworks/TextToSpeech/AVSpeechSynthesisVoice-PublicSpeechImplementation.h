//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisVoice.h>

@class NSString;

@interface AVSpeechSynthesisVoice (PublicSpeechImplementation)
+ (id)voiceWithLanguage:(id)arg1;	// IMP=0x0020000000025a3f
+ (void)test_setInternalSpeechVoices:(id)arg1;	// IMP=0x0020000000025771
+ (void)test_setSpeechVoices:(id)arg1;	// IMP=0x00200000000254a3
+ (id)test_speechVoices;	// IMP=0x0020000000025492
+ (id)currentLanguageCode;	// IMP=0x0020000000025479
+ (id)_speechVoicesIncludingSiri:(_Bool)arg1;	// IMP=0x00200000000248c2
+ (id)speechVoices;	// IMP=0x00200000000248ae
+ (id)speechVoicesIncludingSuperCompact;	// IMP=0x00200000000247fc
+ (id)_speechVoicesIncludingSiriAndSuperCompact;	// IMP=0x002000000002474c
+ (id)_speechVoicesIncludingSiri;	// IMP=0x0020000000024735
+ (id)_voiceWithIdentifier:(id)arg1 includingSiri:(_Bool)arg2;	// IMP=0x00200000000232f7
+ (id)_remapOldIdentifierIfNecessary:(id)arg1;	// IMP=0x00200000000232de
+ (id)voiceWithIdentifier:(id)arg1;	// IMP=0x0020000000023273
+ (id)_voiceFromInternalVoiceListWithIdentifier:(id)arg1;	// IMP=0x002000000002325c
- (unsigned long long)voiceTraits;	// IMP=0x001000000001dda5
@property(retain, nonatomic) NSString *language;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000026cbe
@property(retain, nonatomic) NSString *identifier;
- (_Bool)isInstalled;	// IMP=0x0010000000026c55
- (void)setIsInstalled:(_Bool)arg1;	// IMP=0x0010000000026c08
- (_Bool)isFallbackDefault;	// IMP=0x0010000000026bc6
- (void)setIsFallbackDefault:(_Bool)arg1;	// IMP=0x0010000000026b79
- (_Bool)isDefault;	// IMP=0x0010000000026b37
- (void)setIsDefault:(_Bool)arg1;	// IMP=0x0010000000026aea
@property(nonatomic) _Bool isNoveltyVoice;
- (_Bool)canBeDownloaded;	// IMP=0x0010000000026a19
- (void)setCanBeDownloaded:(_Bool)arg1;	// IMP=0x00100000000269cc
- (id)nonCombinedVoiceId;	// IMP=0x00100000000269bb
- (void)setNonCombinedVoiceId:(id)arg1;	// IMP=0x00100000000269a5
- (long long)assetSize;	// IMP=0x0010000000026963
- (void)setAssetSize:(long long)arg1;	// IMP=0x0010000000026916
- (_Bool)isCombinedVoice;	// IMP=0x00100000000268d4
- (void)setIsCombinedVoice:(_Bool)arg1;	// IMP=0x0010000000026887
@property(readonly, nonatomic) NSString *nonLocalizedName;
- (long long)gender;	// IMP=0x0010000000026651
- (void)setGender:(long long)arg1;	// IMP=0x0010000000026604
@property(readonly, nonatomic) NSString *nameWithoutQuality;
@property(readonly, nonatomic) NSString *nonLocalizedNameWithoutQuality;
- (void)setNonLocalizedNameWithoutQuality:(id)arg1;	// IMP=0x001000000002641a
- (_Bool)isSystemVoice;	// IMP=0x00100000000263c5
- (id)backupName;	// IMP=0x00100000000263b4
- (void)setBackupName:(id)arg1;	// IMP=0x001000000002639e
@property(nonatomic) long long quality;
- (id)description;	// IMP=0x00100000000260bd
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000025d57
@property(nonatomic) _Bool supportsSSML;
- (_Bool)isSynthesisProviderVoice;	// IMP=0x0010000000025d12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000025a8c
- (id)_premiumLocalizedNameFormat;	// IMP=0x001000000002463b
- (id)_enhancedLocalizedNameFormat;	// IMP=0x0010000000024541
@property(retain, nonatomic) NSString *name;
- (id)siriDisplayName;	// IMP=0x00100000000243e2
- (id)initWithLanguage:(id)arg1;	// IMP=0x00100000000235fb
- (id)synthesisProviderVoice;	// IMP=0x00100000000235ea
- (void)setSynthesisProviderVoice:(id)arg1;	// IMP=0x00100000000235d4
- (id)audioFileSettings;	// IMP=0x00100000000231f9
@end

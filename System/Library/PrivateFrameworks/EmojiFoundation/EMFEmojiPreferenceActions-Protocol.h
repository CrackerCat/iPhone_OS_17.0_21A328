//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmojiFoundation/NSObject-Protocol.h>

@class EMFEmojiToken, NSNumber, NSString;

@protocol EMFEmojiPreferenceActions <NSObject>
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageSource:(unsigned long long)arg2 replacementContext:(NSString *)arg3 searchQuery:(NSString *)arg4 resultPosition:(NSNumber *)arg5 numberSearchQueriesRun:(NSNumber *)arg6 wasPositiveEngagement:(_Bool)arg7;
- (void)didUseEmojiInEmojiKeyboardSearch:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInEmojiKeyboardPalette:(EMFEmojiToken *)arg1 wasFromRecentsSection:(_Bool)arg2;
- (void)didUseEmojiInCharacterPickerExtended:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInCharacterPickerPopover:(EMFEmojiToken *)arg1 finalQuery:(NSString *)arg2 resultIndex:(NSNumber *)arg3;
- (void)didUseEmojiInCharacterPickerLightweight:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInDFRBar:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInHandwriting:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInDictation:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didUseEmojiInKeyboardCandidateBar:(EMFEmojiToken *)arg1 replacementContext:(NSString *)arg2;
- (void)didDisplaySkinToneHelp;
- (void)didViewEmojiIndex:(long long)arg1 forCategory:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2 typingName:(NSString *)arg3;
- (void)didUseEmoji:(EMFEmojiToken *)arg1 usageMode:(NSString *)arg2;
- (void)didUseEmoji:(EMFEmojiToken *)arg1;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCharacterSet;
@protocol OS_dispatch_queue;

@interface CHCharacterSetRules : NSObject
{
    NSCharacterSet *_lowercaseCharSet;	// 8 = 0x8
    NSCharacterSet *_uppercaseCharSet;	// 16 = 0x10
    NSCharacterSet *_digitCharSet;	// 24 = 0x18
    NSCharacterSet *_startPunctuationCharSet;	// 32 = 0x20
    NSCharacterSet *_middlePunctuationCharSet;	// 40 = 0x28
    NSCharacterSet *_endOfWordPunctuationCharSet;	// 48 = 0x30
    NSCharacterSet *_endOfSentencePunctuationCharSet;	// 56 = 0x38
    NSCharacterSet *_digitStartPunctuationCharSet;	// 64 = 0x40
    NSCharacterSet *_digitEndPunctuationCharSet;	// 72 = 0x48
    NSCharacterSet *_arithmeticOperatorCharSet;	// 80 = 0x50
    NSCharacterSet *_dateTimeSeparatorCharSet;	// 88 = 0x58
    NSCharacterSet *_dateTimeEndLetterCharSet;	// 96 = 0x60
    NSCharacterSet *_numeralEndLetterCharSet;	// 104 = 0x68
    NSCharacterSet *_lexiconSkipCharSet;	// 112 = 0x70
    NSCharacterSet *_containsDotCharSet;	// 120 = 0x78
    NSCharacterSet *_containsTwoDotsCharSet;	// 128 = 0x80
    NSCharacterSet *_prefixCapitalizationExceptionCharSet;	// 136 = 0x88
    NSCharacterSet *_selfLoopPunctuationCharSet;	// 144 = 0x90
    NSCharacterSet *_emoticonTopCharSet;	// 152 = 0x98
    NSCharacterSet *_emoticonMiddleCharSet;	// 160 = 0xa0
    NSCharacterSet *_emoticonBottomCharSet;	// 168 = 0xa8
    NSCharacterSet *_emailAtCharSet;	// 176 = 0xb0
    NSCharacterSet *_emailPunctuationCharSet;	// 184 = 0xb8
    NSCharacterSet *_urlPunctuationCharSet;	// 192 = 0xc0
    NSCharacterSet *_nonSpaceSeparatorCharSet;	// 200 = 0xc8
    NSCharacterSet *_punctuationThatNeedSpaceCleanup;	// 208 = 0xd0
    NSCharacterSet *_currencySymbols;	// 216 = 0xd8
    NSCharacterSet *_symbolsRequiringSpaceBeforeInFrench;	// 224 = 0xe0
    NSCharacterSet *_sentenceStartPunctuationInSpanish;	// 232 = 0xe8
    NSCharacterSet *_commonJapaneseSymbols;	// 240 = 0xf0
    NSCharacterSet *_CJKPairedPunctuationsCharSet;	// 248 = 0xf8
    NSCharacterSet *_alphaNumericCharSet;	// 256 = 0x100
    NSObject<OS_dispatch_queue> *__charSetRulesQueue;	// 264 = 0x108
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> _strokeMaxPenalties;	// 272 = 0x110
    struct map<unsigned int, int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, int>>> _signatureUniChar;	// 296 = 0x128
}

+ (unsigned long long)characterTypeFromString:(id)arg1;	// IMP=0x00600000001b3d50
+ (unsigned long long)characterType:(unsigned int)arg1;	// IMP=0x00600000001b3570
+ (unsigned long long)expectedMaxDotCount:(unsigned int)arg1;	// IMP=0x00600000001b3400
+ (unsigned long long)expectedMinStrokeCount:(unsigned int)arg1;	// IMP=0x00600000001b2d20
+ (unsigned long long)expectedMaxStrokeCount:(unsigned int)arg1;	// IMP=0x00600000001b2430
- (id).cxx_construct;	// IMP=0x00000000001b47d0
- (void).cxx_destruct;	// IMP=0x00000000001b4600
- (id)init;	// IMP=0x00000000001b3ec0

@end

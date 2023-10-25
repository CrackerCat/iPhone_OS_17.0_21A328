//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, UITextChecker;

@interface VOTBrailleGestureSpellingSuggestionHandler : NSObject
{
    UITextChecker *_textChecker;	// 8 = 0x8
    NSArray *_spellingSuggestions;	// 16 = 0x10
    struct _NSRange _rangeToReplace;	// 24 = 0x18
    long long _spellingSuggestionIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000004ae9e
- (void)clearSpellingSuggestions;	// IMP=0x001000000004ae68
- (id)applySpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000004acb4
- (id)currentSpellingSuggestion;	// IMP=0x001000000004ac5e
- (void)selectNextSpellingSuggestionInDirection:(long long)arg1 responder:(id)arg2 languageCode:(id)arg3;	// IMP=0x001000000004ab62
- (id)_generateSpellingSuggestionsForResponder:(id)arg1 languageCode:(id)arg2;	// IMP=0x001000000004a978
- (MISSING_TYPE *)_spellingSuggestionsForWord:languageCode: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004a81b
- (id)_updateRangeToReplaceInContext:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x001000000004a60a

@end

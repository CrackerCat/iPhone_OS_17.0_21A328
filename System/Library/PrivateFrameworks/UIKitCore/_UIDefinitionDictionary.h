//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MAAsset, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionDictionary : NSObject
{
    struct __DCSDictionary *_dictionary;	// 8 = 0x8
    _Bool _activated;	// 16 = 0x10
    MAAsset *_rawAsset;	// 24 = 0x18
    NSString *_definitionLanguage;	// 32 = 0x20
    MAAsset *_assetToUpgrade;	// 40 = 0x28
}

+ (id)_normalizedLanguageStringForLanguageCode:(id)arg1;	// IMP=0x006000000057bfb4
- (void).cxx_destruct;	// IMP=0x000000000057ca38
@property(retain) MAAsset *assetToUpgrade; // @synthesize assetToUpgrade=_assetToUpgrade;
@property _Bool activated; // @synthesize activated=_activated;
@property(readonly) NSString *definitionLanguage; // @synthesize definitionLanguage=_definitionLanguage;
@property(readonly) MAAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
- (id)description;	// IMP=0x000000000057c90d
- (_Bool)_isTTYDictionary;	// IMP=0x000000000057c88d
- (id)_definitionValueForTerm:(id)arg1;	// IMP=0x000000000057c792
- (id)_attributedDefinitionForTerm:(id)arg1;	// IMP=0x000000000057c6de
- (id)_fullHTMLDefinitionForTerm:(id)arg1;	// IMP=0x000000000057c6c7
- (id)_shortHTMLDefinitionForTerm:(id)arg1;	// IMP=0x000000000057c6b0
- (id)_HTMLDefinitionForTerm:(id)arg1 type:(long long)arg2;	// IMP=0x000000000057c4de
- (_Bool)_hasDefinitionForTerm:(id)arg1;	// IMP=0x000000000057c315
@property(readonly) NSString *localizedDictionaryName;
@property(readonly) NSString *localizedLanguageName;
- (void)dealloc;	// IMP=0x000000000057bc51
- (_Bool)assetIsDeletable;	// IMP=0x000000000057bc3b
- (_Bool)assetIsLocal;	// IMP=0x000000000057bc25
- (void)updateAsset;	// IMP=0x000000000057ba6d
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000057b999

@end

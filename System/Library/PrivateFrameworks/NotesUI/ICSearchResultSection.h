//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface ICSearchResultSection : NSObject
{
    NSMutableOrderedSet *_searchResults;	// 8 = 0x8
    NSMutableDictionary *_identifierToSearchResult;	// 16 = 0x10
    NSMutableDictionary *_hiddenSearchResults;	// 24 = 0x18
    NSMutableDictionary *_unhiddenSearchResults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000060a0c
@property(retain, nonatomic) NSMutableDictionary *unhiddenSearchResults; // @synthesize unhiddenSearchResults=_unhiddenSearchResults;
@property(retain, nonatomic) NSMutableDictionary *hiddenSearchResults; // @synthesize hiddenSearchResults=_hiddenSearchResults;
@property(retain, nonatomic) NSMutableDictionary *identifierToSearchResult; // @synthesize identifierToSearchResult=_identifierToSearchResult;
@property(retain, nonatomic) NSMutableOrderedSet *searchResults; // @synthesize searchResults=_searchResults;
- (void)resetToSearchResults:(id)arg1;	// IMP=0x0000000000060902
- (void)addSearchResults:(id)arg1;	// IMP=0x00000000000605ad
- (_Bool)removeSearchResultForIdentifier:(id)arg1 forHiding:(_Bool)arg2;	// IMP=0x00000000000603d9
- (id)hiddenIdentifiers;	// IMP=0x000000000006034f
- (id)identifiers;	// IMP=0x00000000000602c5
- (id)description;	// IMP=0x0000000000060275
- (id)init;	// IMP=0x0000000000060187

@end

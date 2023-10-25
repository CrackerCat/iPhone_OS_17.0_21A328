//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AutocompleteContext, GEOMapServiceTraits, NSArray, NSNumber;

@interface AutocompleteItemManager
{
    _Bool _topSectionIsQuerySuggestions;	// 8 = 0x8
    _Bool _shouldUseDistanceFeatureServerResults;	// 9 = 0x9
    _Bool _clientRankingScoreInfluencedResults;	// 10 = 0xa
    _Bool _mapsSuggestionsIsTouristHereScoreValid;	// 11 = 0xb
    AutocompleteContext *_autocompleteContext;	// 16 = 0x10
    GEOMapServiceTraits *_traits;	// 24 = 0x18
    NSArray *_sections;	// 32 = 0x20
    NSArray *_completionSections;	// 40 = 0x28
    double _mapsSuggestionsIsTouristHereScore;	// 48 = 0x30
    NSNumber *_interleavedSectionIndex;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000586b2d
@property(retain, nonatomic) NSNumber *interleavedSectionIndex; // @synthesize interleavedSectionIndex=_interleavedSectionIndex;
@property(nonatomic) double mapsSuggestionsIsTouristHereScore; // @synthesize mapsSuggestionsIsTouristHereScore=_mapsSuggestionsIsTouristHereScore;
@property(nonatomic) _Bool mapsSuggestionsIsTouristHereScoreValid; // @synthesize mapsSuggestionsIsTouristHereScoreValid=_mapsSuggestionsIsTouristHereScoreValid;
@property(readonly, nonatomic) _Bool clientRankingScoreInfluencedResults; // @synthesize clientRankingScoreInfluencedResults=_clientRankingScoreInfluencedResults;
@property(nonatomic) _Bool shouldUseDistanceFeatureServerResults; // @synthesize shouldUseDistanceFeatureServerResults=_shouldUseDistanceFeatureServerResults;
@property(nonatomic) _Bool topSectionIsQuerySuggestions; // @synthesize topSectionIsQuerySuggestions=_topSectionIsQuerySuggestions;
@property(copy, nonatomic) NSArray *completionSections; // @synthesize completionSections=_completionSections;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(retain, nonatomic) AutocompleteContext *autocompleteContext; // @synthesize autocompleteContext=_autocompleteContext;
- (id)excludingRuleWithClientOnlyAutocompleteType:(int)arg1;	// IMP=0x0010000000586884
- (id)ruleWithClientOnlyAutocompleteType:(int)arg1;	// IMP=0x0010000000586703
- (id)excludingRulesWithTypes:(id)arg1;	// IMP=0x00100000005865c0
- (id)includingRulesWithTypes:(id)arg1;	// IMP=0x001000000058647d
- (id)defaultSectionsWithCompletionSections:(id)arg1;	// IMP=0x0010000000585ab8
- (id)indexOfSectionWithItem:(id)arg1;	// IMP=0x001000000058542f
- (void)sortWrappedItems:(id)arg1;	// IMP=0x0010000000585222
- (void)logSortedItemsWithSections:(id)arg1;	// IMP=0x0010000000584d3f
- (void)logClientRankingScore:(double)arg1 forItem:(id)arg2 withSignalPack:(id)arg3 serverScore:(id)arg4;	// IMP=0x001000000058479f
- (double)clientRankingScoreOfFirstItemInSection:(id)arg1 wrappedItems:(id)arg2;	// IMP=0x00100000005845b1
- (_Bool);	// IMP=0x00100000005843d3
- (double)clientRankingScoreForItem:(id)arg1 withSuggestionEntry:(id)arg2 hasContributionsFromDiscreteFeaturesResult:(_Bool *)arg3;	// IMP=0x0010000000584272
- (void)computeClientRankingScoresForResolvedItemsIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000058312e
- (id)sectionsWithWrappedItems:(id)arg1;	// IMP=0x0010000000582888
- (id)wrappedItems:(id)arg1;	// IMP=0x00100000005825f1
- (_Bool)usePriority;	// IMP=0x001000000058258c
- (_Bool)useClientRankingScore;	// IMP=0x0010000000582559
- (void)_gatherItemsWithShouldCancel:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000581bce
- (void)autocompleteSessionDidEnd;	// IMP=0x0010000000581bba
- (void)setPriorityFunction:(id)arg1;	// IMP=0x0010000000581b34
- (id)init;	// IMP=0x0010000000581aab

@end

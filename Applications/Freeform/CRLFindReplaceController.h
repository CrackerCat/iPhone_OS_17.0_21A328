//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface CRLFindReplaceController
{
    _Bool _shouldSetSelectionPathToFindResult;	// 8 = 0x8
    _Bool _searchHighlightsEnabled;	// 9 = 0x9
    _Bool _returnFirstVisibleResultIfPossible;	// 10 = 0xa
    _Bool _isReplacingText;	// 11 = 0xb
    _Bool _isReplacingAll;	// 12 = 0xc
    NSString *_searchString;	// 16 = 0x10
    unsigned long long _searchOptions;	// 24 = 0x18
    long long _lastFindPasteboardChangeCount;	// 32 = 0x20
    NSDictionary *_visibleResults;	// 40 = 0x28
    struct _NSRange _highlightsRange;	// 48 = 0x30
}

+ (id)escapeFindQuery:(id)arg1;	// IMP=0x002000000042105e
+ (id)unescapeFindQuery:(id)arg1;	// IMP=0x0010000000420e71
+ (void)_recursiveSearchWithSearchTarget:(id)arg1 forString:(id)arg2 options:(unsigned long long)arg3 hitBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000041e8a9
- (void).cxx_destruct;	// IMP=0x00200000004212fd
@property(retain, nonatomic) NSDictionary *visibleResults; // @synthesize visibleResults=_visibleResults;
@property(nonatomic) _Bool isReplacingAll; // @synthesize isReplacingAll=_isReplacingAll;
@property(nonatomic) _Bool isReplacingText; // @synthesize isReplacingText=_isReplacingText;
@property(nonatomic) long long lastFindPasteboardChangeCount; // @synthesize lastFindPasteboardChangeCount=_lastFindPasteboardChangeCount;
@property(nonatomic) _Bool returnFirstVisibleResultIfPossible; // @synthesize returnFirstVisibleResultIfPossible=_returnFirstVisibleResultIfPossible;
@property(nonatomic) _Bool searchHighlightsEnabled; // @synthesize searchHighlightsEnabled=_searchHighlightsEnabled;
@property(nonatomic) struct _NSRange highlightsRange; // @synthesize highlightsRange=_highlightsRange;
@property(nonatomic) _Bool shouldSetSelectionPathToFindResult; // @synthesize shouldSetSelectionPathToFindResult=_shouldSetSelectionPathToFindResult;
@property(nonatomic) unsigned long long searchOptions; // @synthesize searchOptions=_searchOptions;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)resetCollaborativeTimer;	// IMP=0x0010000000420e6b
- (void)didProcessAllChanges;	// IMP=0x0010000000420e59
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;	// IMP=0x0010000000420e53
- (void)clearCurrentSelectionPath;	// IMP=0x0010000000420d95
- (void)setSelectionPathToSearchReference:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0010000000420c3d
- (id)searchReferenceAfterReference:(id)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x0010000000420b1f
- (void)locateSearchReference:(id)arg1 nearestPoint:(struct CGPoint)arg2;	// IMP=0x001000000042092c
- (void)locateSearchReference:(id)arg1;	// IMP=0x00100000004207c9
- (void)endSearchSession;	// IMP=0x001000000042072a
- (void)replaceWithString:(id)arg1 findAgain:(_Bool)arg2;	// IMP=0x0010000000420005
- (void)willScrollToReference:(id)arg1;	// IMP=0x001000000041ff8d
- (void)findNextResultInDirection:(unsigned long long)arg1 shouldPulse:(_Bool)arg2;	// IMP=0x001000000041f8fb
- (void)findNextResultInDirection:(unsigned long long)arg1;	// IMP=0x001000000041f8e4
- (void)updateHighlights;	// IMP=0x001000000041f6f5
- (void)invalidateSearchHighlights;	// IMP=0x001000000041f5b0
- (void)invalidateSearchResults;	// IMP=0x001000000041f4ed
- (void)pulseSearchResult:(id)arg1 autohiding:(_Bool)arg2;	// IMP=0x001000000041f407
- (unsigned long long)nextRootSearchTargetFromIndex:(unsigned long long)arg1 inDirection:(unsigned long long)arg2;	// IMP=0x001000000041f134
- (void)performSearchWithSearchTarget:(id)arg1 resultsArray:(id)arg2;	// IMP=0x001000000041ede4
- (id)searchReferencesToHighlightInVisibleRootObjectRange:(struct _NSRange)arg1;	// IMP=0x000000000041eac9
- (void)continueSearch;	// IMP=0x001000000041e839
- (id)getNextSearchFromCurrentSearchable;	// IMP=0x001000000041e735
- (_Bool)respondsToSearch;	// IMP=0x001000000041e4ef
- (_Bool)searchCriteriaIsValid;	// IMP=0x001000000041e4a7
- (unsigned long long)replaceAllOccurrencesOfString:(id)arg1 withString:(id)arg2;	// IMP=0x001000000041dcb7
- (id)replaceSearchReference:(id)arg1 withString:(id)arg2 shouldSetSelectionForCommitPath:(_Bool)arg3;	// IMP=0x001000000041d86d
- (id)initWithEditingCoordinator:(id)arg1 delegate:(id)arg2 modelSearchesRunSynchronously:(_Bool)arg3;	// IMP=0x001000000041d561
- (id)initWithEditingCoordinator:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000041d54c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

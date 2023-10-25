//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PUAssetReference, PUBrowsingViewModel, PUOneUpSuggestionsProvider;
@protocol PUOneUpSuggestionsControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUOneUpSuggestionsController : NSObject
{
    _Bool _willPerformUpdates;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    struct {
        _Bool focusedAssetReference;
        _Bool focusedLongEnough;
        _Bool activeSuggestionsWindow;
    } _needsUpdateFlags;	// 10 = 0xa
    struct {
        _Bool suggestionAvailable;
        _Bool canShowSuggestion;
    } _delegateRespondsTo;	// 13 = 0xd
    _Bool _viewVisible;	// 15 = 0xf
    _Bool _inFocus;	// 16 = 0x10
    _Bool _focusedLongEnough;	// 17 = 0x11
    PUOneUpSuggestionsProvider *_suggestionsProvider;	// 24 = 0x18
    PUBrowsingViewModel *_browsingViewModel;	// 32 = 0x20
    id <PUOneUpSuggestionsControllerDelegate> _delegate;	// 40 = 0x28
    PUAssetReference *_focusedAssetReference;	// 48 = 0x30
    double _lastFocusedAssetReferenceChangeTime;	// 56 = 0x38
    NSMutableDictionary *_suggestionInfos;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000361700
@property(readonly, nonatomic) NSMutableDictionary *suggestionInfos; // @synthesize suggestionInfos=_suggestionInfos;
@property(nonatomic, getter=isFocusedLongEnough) _Bool focusedLongEnough; // @synthesize focusedLongEnough=_focusedLongEnough;
@property(nonatomic) double lastFocusedAssetReferenceChangeTime; // @synthesize lastFocusedAssetReferenceChangeTime=_lastFocusedAssetReferenceChangeTime;
@property(retain, nonatomic) PUAssetReference *focusedAssetReference; // @synthesize focusedAssetReference=_focusedAssetReference;
@property(nonatomic, getter=isInFocus) _Bool inFocus; // @synthesize inFocus=_inFocus;
@property(nonatomic, getter=isViewVisible) _Bool viewVisible; // @synthesize viewVisible=_viewVisible;
@property(nonatomic) __weak id <PUOneUpSuggestionsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
@property(readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider; // @synthesize suggestionsProvider=_suggestionsProvider;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x0000000000361594
- (void)_dismissSuggestionInfo:(id)arg1;	// IMP=0x00000000003614be
- (void)_invalidateSuggestionsVisibility;	// IMP=0x0000000000361440
- (void)_updateInFocus;	// IMP=0x00000000003613d1
- (void)_invalidateInFocus;	// IMP=0x00000000003613bf
- (void)_updateActiveSuggestionsWindowIfNeeded;	// IMP=0x00000000003610cd
- (void)_invalidateActiveSuggestionsWindow;	// IMP=0x00000000003610b7
- (void)_updateFocusedLongEnoughIfNeeded;	// IMP=0x0000000000361010
- (void)_invalidateFocusedLongEnough;	// IMP=0x0000000000360ffa
- (void)_updateFocusedAssetReferenceIfNeeded;	// IMP=0x0000000000360f31
- (void)_invalidateFocusedAssetReference;	// IMP=0x0000000000360efd
- (void)_updateIfNeeded;	// IMP=0x0000000000360e1a
- (_Bool)_needsUpdate;	// IMP=0x0000000000360dff
- (void)_setNeedsUpdate;	// IMP=0x0000000000360d59
- (void)_handleSuggestionForAssetReference:(id)arg1;	// IMP=0x0000000000360ba1
- (void)_requestSuggestionForAssetReference:(id)arg1;	// IMP=0x0000000000360abd
- (_Bool)_canKeepDisplayingSuggestionsForAssetReference:(id)arg1;	// IMP=0x00000000003609b0
- (_Bool)_canBeginDisplayingSuggestionsForAssetReference:(id)arg1;	// IMP=0x00000000003608e8
- (void)_handleDataSourceChange:(id)arg1;	// IMP=0x0000000000360639
- (void)_removeSuggestionInfoForAssetReference:(id)arg1;	// IMP=0x000000000036056e
- (id)_suggestionInfoForAssetReference:(id)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x000000000036048a
- (void)invalidateLayoutForAssetReference:(id)arg1;	// IMP=0x000000000036041e
- (void)invalidateLayout;	// IMP=0x00000000003603da
- (void)_updateSuggestions;	// IMP=0x000000000036031e
- (void)invalidateSuggestions;	// IMP=0x000000000036030c
- (id)initWithSuggestionsProvider:(id)arg1 browsingViewModel:(id)arg2;	// IMP=0x0000000000360011
- (id)init;	// IMP=0x000000000035ff97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

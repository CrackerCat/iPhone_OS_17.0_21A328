//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files21DOCGoToViewController
{
    MISSING_TYPE *delegate;	// 8 = 0x8
    MISSING_TYPE *suggestionsTableViewWidthConstraint;	// 24 = 0x18
    MISSING_TYPE *contentView;	// 32 = 0x20
    MISSING_TYPE *initialSuggestionsToken;	// 40 = 0x28
    MISSING_TYPE *initialCandidateSource;	// 48 = 0x30
    MISSING_TYPE *filteringSource;	// 88 = 0x58
    MISSING_TYPE *scrollViewDidScrollObservation;	// 128 = 0x80
    MISSING_TYPE *currentGoToLocation;	// 136 = 0x88
    MISSING_TYPE *requestID;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_inputField;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_goButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_separatorView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_noResultsView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_suggestionsTableViewController;	// 0 = 0x0
    MISSING_TYPE *metrics;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000001e5060
- (id)init;	// IMP=0x00100000001e4f00
- (void)didReturn;	// IMP=0x00100000001e3ad0
- (void)didTab;	// IMP=0x00100000001e3940
- (void)didHitDirectionalArrow;	// IMP=0x00100000001e38d0
- (void)goToLocation;	// IMP=0x00100000001e38a0
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00100000001e3740
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000001e36c0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000001e3650
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000001e3610
- (void)viewDidLoad;	// IMP=0x00100000001e34f0
- (void)loadView;	// IMP=0x00100000001e2850
- (void)performDismiss:(id)arg1;	// IMP=0x00100000003605b0

@end

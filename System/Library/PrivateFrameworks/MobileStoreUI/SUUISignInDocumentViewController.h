//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUIViewController.h"

@class NSString, SUUILayoutCache, SUUISignInTemplateView, SUUISignInTemplateViewElement, SUUIViewElementLayoutContext, UIScrollView;

__attribute__((visibility("hidden")))
@interface SUUISignInDocumentViewController : SUUIViewController
{
    struct CGRect _keyboardFrame;	// 8 = 0x8
    SUUIViewElementLayoutContext *_layoutContext;	// 40 = 0x28
    SUUISignInTemplateView *_loginView;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    SUUISignInTemplateViewElement *_templateElement;	// 64 = 0x40
    SUUILayoutCache *_textLayoutCache;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000009a9e1
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;	// IMP=0x000000000009a839
- (void)_reloadContentSize;	// IMP=0x000000000009a626
- (void)_layoutScrollView;	// IMP=0x000000000009a4de
- (void)_signInSuccess:(id)arg1;	// IMP=0x000000000009a3e6
- (void)_signInFailed:(id)arg1 error:(id)arg2;	// IMP=0x000000000009a12f
- (id)_layoutContext;	// IMP=0x0000000000099f57
- (id)_backgroundColor;	// IMP=0x0000000000099e9d
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000099df7
- (void)_keyboardWillChangeFrame:(id)arg1;	// IMP=0x0000000000099cd3
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x0000000000099baf
- (void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3;	// IMP=0x00000000000994f8
- (void)layoutCacheDidFinishBatch:(id)arg1;	// IMP=0x0000000000099444
- (void)documentDidUpdate:(id)arg1;	// IMP=0x000000000009935a
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000000992c4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000099242
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000991e6
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000099195
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000990ea
- (void)loadView;	// IMP=0x0000000000098f73
- (void)dealloc;	// IMP=0x0000000000098e7a
- (id)initWithTemplateElement:(id)arg1;	// IMP=0x0000000000098d6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

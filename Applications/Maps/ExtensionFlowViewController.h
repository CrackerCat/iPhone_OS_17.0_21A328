//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ExtensionFlowHeaderView, NSLayoutConstraint, NSMutableArray, NSString, UINavigationController, UIScrollView, UIView, UIViewController;
@protocol ExtensionFlowDelegate;

@interface ExtensionFlowViewController
{
    _Bool _keyboardDisplayed;	// 8 = 0x8
    id <ExtensionFlowDelegate> _contentUpdateDelegate;	// 16 = 0x10
    ExtensionFlowHeaderView *_headerView;	// 24 = 0x18
    UIViewController *_topViewController;	// 32 = 0x20
    UIViewController *_pendingViewController;	// 40 = 0x28
    NSMutableArray *_controllers;	// 48 = 0x30
    UIScrollView *_containerScrollView;	// 56 = 0x38
    UIView *_contentContainerView;	// 64 = 0x40
    NSLayoutConstraint *_contentContainerViewSpacerConstraint;	// 72 = 0x48
    NSLayoutConstraint *_bottomToBottomConstraint;	// 80 = 0x50
    UINavigationController *_navigationController;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000711fb8
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSLayoutConstraint *bottomToBottomConstraint; // @synthesize bottomToBottomConstraint=_bottomToBottomConstraint;
@property(nonatomic) _Bool keyboardDisplayed; // @synthesize keyboardDisplayed=_keyboardDisplayed;
@property(retain, nonatomic) NSLayoutConstraint *contentContainerViewSpacerConstraint; // @synthesize contentContainerViewSpacerConstraint=_contentContainerViewSpacerConstraint;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
- (id);	// IMP=0x0010000000711edf
@property(retain, nonatomic) NSMutableArray *controllers; // @synthesize controllers=_controllers;
@property(retain, nonatomic) UIViewController *pendingViewController; // @synthesize pendingViewController=_pendingViewController;
@property(retain, nonatomic) UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(retain, nonatomic) ExtensionFlowHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <ExtensionFlowDelegate> contentUpdateDelegate; // @synthesize contentUpdateDelegate=_contentUpdateDelegate;
- (void)setupHeaderView;	// IMP=0x0010000000711d3b
- (void)_setMaskOnNavigationBar:(id)arg1;	// IMP=0x0010000000711b29
- (void)setupContainerViewWithRootViewController:(id)arg1;	// IMP=0x001000000071161e
- (void)setScrollContentOffset:(struct CGPoint)arg1;	// IMP=0x00100000007115c0
- (void)popViewController;	// IMP=0x0010000000711576
- (_Bool)viewControllerUseExtensionFlowHeader:(id)arg1;	// IMP=0x001000000071150d
- (void)pushViewController:(id)arg1;	// IMP=0x0010000000711226
- (void)handleDismissAction:(id)arg1;	// IMP=0x001000000071108d
- (void)viewDidLoad;	// IMP=0x0010000000710fb5
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000710ea6
- (id)init;	// IMP=0x0010000000710e90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

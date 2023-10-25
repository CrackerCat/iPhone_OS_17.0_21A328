//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableArray, NSString, SUUIDividerView, SUUIMenuPopoverController, UIControl;

__attribute__((visibility("hidden")))
@interface SUUIFilterBarView
{
    SUUIDividerView *_bottomDividerView;	// 8 = 0x8
    NSMutableArray *_centerElementViews;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    NSMutableArray *_elementControllers;	// 56 = 0x38
    UIControl *_focusedMenuButton;	// 64 = 0x40
    NSMutableArray *_leftElementViews;	// 72 = 0x48
    SUUIMenuPopoverController *_popoverController;	// 80 = 0x50
    NSMutableArray *_rightElementViews;	// 88 = 0x58
    NSMapTable *_viewElementViews;	// 96 = 0x60
}

+ (id)_attributedStringForMenuItem:(id)arg1 context:(id)arg2;	// IMP=0x001000000037680e
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;	// IMP=0x001000000037669a
+ (id)_attributedStringForButtonText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x0010000000376559
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;	// IMP=0x0010000000376468
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x0010000000374445
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000003741bc
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000003741a6
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000374059
- (void).cxx_destruct;	// IMP=0x000000000037692a
- (void)_destroyMenuPopover;	// IMP=0x00000000003768d1
- (void)_showConfirmationAction:(id)arg1;	// IMP=0x000000000037640c
- (void)_menuButtonAction:(id)arg1;	// IMP=0x0000000000376212
- (void)_imageTapAction:(id)arg1;	// IMP=0x0000000000376175
- (void)_cancelConfirmationAction:(id)arg1;	// IMP=0x000000000037611c
- (void)_buttonAction:(id)arg1;	// IMP=0x0000000000375ea2
- (void)menuPopover:(id)arg1 willRepositionToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;	// IMP=0x0000000000375e53
- (void)menuPopover:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2;	// IMP=0x0000000000375db3
- (void)menuPopoverDidCancel:(id)arg1;	// IMP=0x0000000000375da1
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;	// IMP=0x0000000000375c53
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000375aaa
- (void)layoutSubviews;	// IMP=0x0000000000375236
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x000000000037522e
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000375226
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x000000000037521e
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000003751c6
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000003745c6
- (void)dealloc;	// IMP=0x000000000037400e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000373f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

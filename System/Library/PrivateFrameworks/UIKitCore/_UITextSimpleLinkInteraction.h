//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIContextMenuInteraction, UILongPressGestureRecognizer, UITapGestureRecognizer, _UITextInteractableItem;

__attribute__((visibility("hidden")))
@interface _UITextSimpleLinkInteraction
{
    UITapGestureRecognizer *_linkTap;	// 8 = 0x8
    UILongPressGestureRecognizer *_highlighter;	// 16 = 0x10
    _UITextInteractableItem *_highlightedItem;	// 24 = 0x18
    _Bool _presentingFromSimpleTap;	// 32 = 0x20
    _Bool _shouldProxyContextMenuDelegate;	// 33 = 0x21
    UIContextMenuInteraction *_contextMenuInteraction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000137e2e2
@property(retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // @synthesize contextMenuInteraction=_contextMenuInteraction;
@property(readonly, nonatomic) _Bool shouldProxyContextMenuDelegate; // @synthesize shouldProxyContextMenuDelegate=_shouldProxyContextMenuDelegate;
- (_Bool)_allowItemInteractions;	// IMP=0x000000000137e109
- (_Bool)_beginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x000000000137dfcf
- (_Bool)_canBeginInteractionSessionForLinkAtPoint:(struct CGPoint)arg1 asTap:(_Bool)arg2 precision:(unsigned long long)arg3;	// IMP=0x000000000137deb9
- (void)_gestureRecognizerFailed:(id)arg1;	// IMP=0x000000000137dddd
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000137dd16
- (_Bool)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000137dbfd
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000137daff
- (void)highlight:(id)arg1;	// IMP=0x000000000137d69f
- (void)linkTapped:(id)arg1;	// IMP=0x000000000137d4c5
- (void)_removeInteractableItemFromCache:(id)arg1;	// IMP=0x000000000137d43e
- (id)textLinkInteractableView;	// IMP=0x000000000137d3dd
- (id)itemInteractableView;	// IMP=0x000000000137d37c
- (id)gesturesForFailureRequirements;	// IMP=0x000000000137d311
- (id)contextMenuDelegateProxy;	// IMP=0x000000000137d309
- (id)initWithShouldProxyContextMenuDelegate:(_Bool)arg1;	// IMP=0x000000000137d20d

@end

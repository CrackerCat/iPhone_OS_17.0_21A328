//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextRefinementCursorBehavior : NSObject
{
    _UIKeyboardTextSelectionController *_activeSelectionController;	// 8 = 0x8
    id _grabberHandleSuppressionAssertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000016c6eb4
- (void)textLoupeInteraction:(id)arg1 gestureChangedWithState:(long long)arg2 location:(CDUnknownBlockType)arg3 translation:(CDUnknownBlockType)arg4 velocity:(CDUnknownBlockType)arg5 modifierFlags:(long long)arg6 shouldCancel:(_Bool *)arg7;	// IMP=0x00000000016c6913
- (struct CGPoint)velocityInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000016c68fe
- (struct CGPoint)translationInView:(id)arg1 forLoupeGesture:(id)arg2;	// IMP=0x00000000016c68e9
- (struct CGPoint)startPointForLoupeGesture:(id)arg1;	// IMP=0x00000000016c68d4
- (_Bool)triggeredByLongPressGesture:(id)arg1;	// IMP=0x00000000016c68cc
- (_Bool)usesTouchAlignment;	// IMP=0x00000000016c68c4
- (_Bool)loupeGestureRecognizerShouldBegin:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000016c68bc
- (_Bool)shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2;	// IMP=0x00000000016c68a7
- (void)configureLoupeGestureRecognizer:(id)arg1 forTextLoupeInteraction:(id)arg2;	// IMP=0x00000000016c682d
- (void)configureGestureExclusionRequirementsForTextLoupeInteraction:(id)arg1;	// IMP=0x00000000016c6767
- (void)adjustVariableDelaySettingsForLoupeInteraction:(id)arg1;	// IMP=0x00000000016c6761
- (Class)gestureRecognizerClassForLoupeInteraction:(id)arg1;	// IMP=0x00000000016c6750

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLTextInteractiveCanvasControllerAccessibility, CRLTextRepAccessibility, CRLWPSelectionAccessibility, CRLWPStorageAccessibility, NSString, _TtC8Freeform11CRLWPEditor;

@interface CRLTextEditorAccessibility
{
    _Bool _crlaxCurrentSelectionContainsComment;	// 8 = 0x8
}

+ (void)crlaxSetCommittingRemoteCommand:(_Bool)arg1;	// IMP=0x00200000002bf72b
+ (_Bool)crlaxCommittingRemoteCommand;	// IMP=0x00100000002bf71f
+ (Class)crlaxBaseSafeCategoryClass;	// IMP=0x00100000002bf6ec
+ (id)crlaxTargetClassName;	// IMP=0x00100000002bf6df
@property(readonly, nonatomic) _Bool crlaxCurrentSelectionContainsComment; // @synthesize crlaxCurrentSelectionContainsComment=_crlaxCurrentSelectionContainsComment;
@property(readonly, nonatomic) _TtC8Freeform11CRLWPEditor *crlaxTarget;
- (id)_crlaxSelectionWithRange:(struct _NSRange)arg1;	// IMP=0x00100000002c03d7
@property(readonly, nonatomic) Class _crlaxWPSelectionClass;
- (void)p_deleteBackwardsOnEmptyListWithRange:(struct _NSRange)arg1 ignoreLevel:(_Bool)arg2;	// IMP=0x00100000002c02be
- (void)selectionDidChangeFromSelection:(id)arg1 toSelection:(id)arg2 withFlags:(unsigned long long)arg3;	// IMP=0x00100000002c013f
- (void)replace:(id)arg1 with:(id)arg2;	// IMP=0x00100000002c00fe
- (struct _NSRange)crlaxStorageRangeOfLineFragmentAtCharIndex:(unsigned long long)arg1;	// IMP=0x00100000002c0001
@property(readonly, nonatomic) _Bool crlaxCurrentSelectionContainsVisibleTrackedChanges;
- (void)crlaxPerformBlockAffectingTextSelection:(CDUnknownBlockType)arg1;	// IMP=0x00100000002bff19
- (void)crlaxEditingRepContentsChanged;	// IMP=0x00100000002bfed8
- (unsigned long long)crlaxInsertionPoint;	// IMP=0x00100000002bfe4a
@property(readonly, nonatomic) NSString *crlaxEditorLabel;
@property(readonly, nonatomic) CRLTextInteractiveCanvasControllerAccessibility *crlaxInteractiveCanvasController;
@property(readonly, nonatomic) CRLWPStorageAccessibility *crlaxStorage;
- (id)crlaxEditingRepWithSelection;	// IMP=0x00100000002bfaa9
@property(readonly, nonatomic) CRLTextRepAccessibility *crlaxEditingRepWithCaret;
@property(nonatomic, setter=crlaxSetSelectedTextRange:) struct _NSRange crlaxSelectedTextRange;
@property(readonly, nonatomic) CRLWPSelectionAccessibility *crlaxSelection;
@property(nonatomic, setter=_crlaxSetShouldSkipSelectionChangedNotification:) _Bool _crlaxShouldSkipSelectionChangedNotification;
- (_Bool)_crlaxIsDictating;	// IMP=0x001000000005e34c
- (void)crlaxHandleStorageRangeChanged;	// IMP=0x001000000005e33a
- (void)crlaxHandleSelectionChangedWithFlags:(unsigned long long)arg1;	// IMP=0x001000000005e275
- (void)crlaxHandleEditingRepContentsChanged;	// IMP=0x001000000005e147
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;	// IMP=0x001000000005e132
- (id)accessibilityValue;	// IMP=0x001000000005e0b8
- (void)didBecomeTextInputRespondersEditor;	// IMP=0x001000000005e079
- (void)replaceAction:(id)arg1;	// IMP=0x001000000005e04a
- (void)deleteForward:(id)arg1;	// IMP=0x001000000005dfab
- (void)deleteBackward:(id)arg1;	// IMP=0x001000000005df0c
- (void)insertText:(id)arg1;	// IMP=0x001000000005de6d
- (void)selectAll:(id)arg1;	// IMP=0x001000000005de02
- (void)paste:(id)arg1;	// IMP=0x001000000005dd2b
- (void)copy:(id)arg1;	// IMP=0x001000000005dc54
- (void)cut:(id)arg1;	// IMP=0x001000000005db7d
- (void)crlaxInsertText:(id)arg1;	// IMP=0x001000000005dad5
- (void)crlaxSetSelectedTextRange:(struct _NSRange)arg1 skipSelectionChangedNotification:(_Bool)arg2;	// IMP=0x001000000005d7a6
@property(nonatomic, setter=crlaxSetShouldSuppressSpeechForNextSelectionChangedNotification:) _Bool crlaxShouldSuppressSpeechForNextSelectionChangedNotification;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

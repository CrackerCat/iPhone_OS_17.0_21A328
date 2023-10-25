//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKitLegacy/DOMNode.h>

@class NSDictionary, NSIndexSet, NSString, RTIInputSystemSourceSession, UIColor, UIImage, UIInputContextHistory, UIResponder, UITextInputPasswordRules, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, _UISupplementalLexicon;
@protocol UITextInput, UITextInputDelegate, UITextInputPrivate, UITextInputSuggestionDelegate, UITextInputTokenizer;

@interface DOMNode (UIWebFormPeripheral)
- (id)createPeripheral;	// IMP=0x00200000008724ee
- (id)itemTitle;	// IMP=0x0020000000879d78
- (void)populateCell:(id)arg1;	// IMP=0x0020000000879d72
- (id)createPickerCell;	// IMP=0x0020000000879d6a
- (id)createSelectedItem;	// IMP=0x0020000000879d62
- (id)_responderWindow;	// IMP=0x0020000000e7aa14
- (id)inputAssistantItem;	// IMP=0x0020000000e7a9c4
- (id)_textInteraction;	// IMP=0x0020000000e7a974
- (id)_selectableText;	// IMP=0x0020000000e7a96b
- (_Bool)_shouldPerformUICalloutBarButtonReplaceAction:(SEL)arg1 forText:(id)arg2 checkAutocorrection:(_Bool)arg3;	// IMP=0x0020000000e7a849
- (void)_unmarkText;	// IMP=0x0020000000e7a660
- (void)_setAttributedMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0020000000e7a2b3
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0020000000e7a22e
- (_Bool)_hasMarkedText;	// IMP=0x0020000000e7a1ac
- (_Bool)_usesAsynchronousProtocol;	// IMP=0x0020000000e7a161
- (void)_setGestureRecognizers;	// IMP=0x0020000000e79dec
- (long long)_selectionAffinity;	// IMP=0x0020000000e79c43
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0020000000e79bb2
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0020000000e79b26
- (id)_moveRight:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e79951
- (id)_moveLeft:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e7977c
- (id)_moveDown:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e79452
- (id)_moveUp:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e79128
- (id)_moveToEndOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e78f3f
- (id)_moveToStartOfDocument:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e78ddc
- (id)_moveToEndOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e78b79
- (id)_moveToStartOfParagraph:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e7890a
- (id)_moveToEndOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e785f1
- (id)_moveToStartOfLine:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e782c1
- (id)_moveToEndOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e77f87
- (id)_moveToStartOfWord:(_Bool)arg1 withHistory:(id)arg2;	// IMP=0x0020000000e779b4
- (id)_setHistory:(id)arg1 withExtending:(_Bool)arg2 withAnchor:(int)arg3 withAffinityDownstream:(_Bool)arg4;	// IMP=0x0020000000e77725
- (id)_setSelectionRangeWithHistory:(id)arg1;	// IMP=0x0020000000e773ba
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0020000000e77345
- (id)_fontForCaretSelection;	// IMP=0x0020000000e77187
- (id)_textColorForCaretSelection;	// IMP=0x0020000000e76fc9
- (id)_rangeFromCurrentRangeWithDelta:(struct _NSRange)arg1;	// IMP=0x0020000000e76dda
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;	// IMP=0x0020000000e76cfb
- (id)_rangeOfSmartSelectionIncludingRange:(id)arg1;	// IMP=0x0020000000e76492
- (id)_findDocumentBoundaryFromPosition:(id)arg1;	// IMP=0x0020000000e763a0
- (id)_findPleasingWordBoundaryFromPosition:(id)arg1;	// IMP=0x0020000000e7616a
- (id)_findBoundaryPositionClosestToPosition:(id)arg1 withGranularity:(long long)arg2;	// IMP=0x0020000000e760f2
- (_Bool)_range:(id)arg1 isEqualToRange:(id)arg2;	// IMP=0x0020000000e75f8c
- (id)_intersectionOfRange:(id)arg1 andRange:(id)arg2;	// IMP=0x0020000000e75dd1
- (_Bool)_range:(id)arg1 intersectsRange:(id)arg2;	// IMP=0x0020000000e75d4c
- (_Bool)_range:(id)arg1 containsRange:(id)arg2;	// IMP=0x0020000000e75ca9
- (id)_rangeSpanningTextUnit:(long long)arg1 andPosition:(id)arg2;	// IMP=0x0020000000e75a4f
- (id)_fullRange;	// IMP=0x0020000000e759a8
- (id)_rangeOfParagraphEnclosingPosition:(id)arg1;	// IMP=0x0020000000e7598e
- (id)_rangeOfSentenceEnclosingPosition:(id)arg1;	// IMP=0x0020000000e75974
- (id)_rangeOfLineEnclosingPosition:(id)arg1;	// IMP=0x0020000000e7595a
- (id)_rangeOfEnclosingWord:(id)arg1;	// IMP=0x0020000000e75940
- (id)_rangeOfTextUnit:(long long)arg1 enclosingPosition:(id)arg2;	// IMP=0x0020000000e75838
- (id)_rangeOfText:(id)arg1 endingAtPosition:(id)arg2;	// IMP=0x0020000000e75424
- (id)_normalizedStringForRangeComparison:(id)arg1;	// IMP=0x0020000000e75385
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x0020000000e7527f
- (void)_replaceDocumentWithText:(id)arg1;	// IMP=0x0020000000e751c5
- (void)_replaceCurrentWordWithText:(id)arg1;	// IMP=0x0020000000e750e8
- (void)_transpose;	// IMP=0x0020000000e74d72
- (void)_deleteForwardAndNotify:(_Bool)arg1;	// IMP=0x0020000000e74b57
- (void)_deleteBackwardAndNotify:(_Bool)arg1;	// IMP=0x0020000000e74b1a
- (void)_deleteTextRange:(id)arg1;	// IMP=0x0020000000e749dd
- (void)_deleteToEndOfParagraph;	// IMP=0x0020000000e747bf
- (void)_deleteToEndOfLine;	// IMP=0x0020000000e745a1
- (void)_deleteToStartOfLine;	// IMP=0x0020000000e74380
- (void)_deleteForwardByWord;	// IMP=0x0020000000e74078
- (void)_deleteByWord;	// IMP=0x0020000000e73ed9
- (void)_setCaretSelectionAtEndOfSelection;	// IMP=0x0020000000e73df4
- (id)_positionAtStartOfWords:(unsigned long long)arg1 beforePosition:(id)arg2;	// IMP=0x0020000000e73b1c
- (id)_positionFromPosition:(id)arg1 pastTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0020000000e73944
- (long long)_opposingDirectionFromDirection:(long long)arg1;	// IMP=0x0020000000e7392a
- (id)_positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0020000000e73876
- (void)_expandSelectionToStartOfWordsBeforeCaretSelection:(int)arg1;	// IMP=0x0020000000e73751
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;	// IMP=0x0020000000e7373a
- (void)_expandSelectionToBackwardDeletionClusterWithReinsertionOut:(id *)arg1;	// IMP=0x0020000000e73353
- (void)_moveCurrentSelection:(int)arg1;	// IMP=0x0020000000e731a1
- (void)_extendCurrentSelection:(int)arg1;	// IMP=0x0020000000e7300d
- (_Bool)_hasMarkedTextOrRangedSelection;	// IMP=0x0020000000e72f3a
- (_Bool)_isEmptySelection;	// IMP=0x0020000000e72e7d
- (struct CGRect)_selectionClipRect;	// IMP=0x0020000000e72e5f
- (_Bool)_selectionAtDocumentEnd;	// IMP=0x0020000000e72d92
- (_Bool)_selectionAtDocumentStart;	// IMP=0x0020000000e72cc5
- (_Bool)_selectionAtWordStart;	// IMP=0x0020000000e72b86
- (void)_setSelectionToPosition:(id)arg1;	// IMP=0x0020000000e72ae4
- (id)_fullText;	// IMP=0x0020000000e72a16
- (id)_wordContainingCaretSelection;	// IMP=0x0020000000e728d6
- (unsigned int)_characterInRelationToPosition:(id)arg1 amount:(int)arg2;	// IMP=0x0020000000e72725
- (unsigned int)_characterInRelationToRangedSelection:(int)arg1;	// IMP=0x0020000000e72442
- (unsigned int)_characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0020000000e7237a
- (unsigned int)_characterBeforeCaretSelection;	// IMP=0x0020000000e72363
- (unsigned int)_characterAfterCaretSelection;	// IMP=0x0020000000e7234f
- (id)_textRangeFromNSRange:(struct _NSRange)arg1;	// IMP=0x0020000000e7220e
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;	// IMP=0x0020000000e7211b
- (int)_indexForTextPosition:(id)arg1;	// IMP=0x0020000000e72083
- (void)_selectAll;	// IMP=0x0020000000e72016
- (struct _NSRange)_selectedRangeWithinMarkedText;	// IMP=0x0020000000e71e67
- (struct _NSRange)_selectedNSRange;	// IMP=0x0020000000e71dce
@property(nonatomic) long long _textInputSource;
@property(readonly, nonatomic) id <UITextInputSuggestionDelegate> textInputSuggestionDelegate;
- (id)_keyInput;	// IMP=0x0020000000e71b87
@property(readonly, nonatomic, getter=_proxyTextInput) UIResponder<UITextInput> *__content;
@property(readonly, nonatomic) UIView *textInputView;
- (id)urlScheme;	// IMP=0x00200000016fc04b
- (id)tagName;	// IMP=0x00200000016fbffd
- (id)_realNode;	// IMP=0x00200000016fe69d
- (id)_textFormElement;	// IMP=0x00200000016fe818
- (id)_previousAssistedNode;	// IMP=0x00200000016fe7ba
- (id)_nextAssistedNode;	// IMP=0x00200000016fe75c
- (void)_accessoryClear;	// IMP=0x00200000016fe756
- (_Bool)_supportsAccessoryClear;	// IMP=0x00200000016fe74e
- (_Bool)_supportsAutoFill;	// IMP=0x00200000016fe746
- (_Bool)_requiresInputView;	// IMP=0x00200000016fe734
- (_Bool)_requiresAccessoryView;	// IMP=0x00200000016fe722
- (void)_stopAssistingDocumentView:(id)arg1;	// IMP=0x00200000016fe6eb
- (void)_startAssistingDocumentView:(id)arg1;	// IMP=0x00200000016fe6b4
- (_Bool)nodeCanBecomeFirstResponder;	// IMP=0x002000000170fe4e
- (_Bool)isLikelyToBeginPageLoad;	// IMP=0x002000000170fe46
- (id)absoluteQuadsAtPoint:(struct CGPoint)arg1;	// IMP=0x002000000170fe34
- (_Bool)touchCalloutEnabled;	// IMP=0x002000000170fe2c
- (id)tapHighlightColor;	// IMP=0x002000000170fdfd
- (_Bool)alwaysAttemptToShowTapHighlight;	// IMP=0x002000000170fdeb
- (_Bool)showsTapHighlight;	// IMP=0x002000000170fde3
@property(nonatomic) long long keyboardType;
- (_Bool)isSecure;	// IMP=0x00200000017203a2
- (_Bool)isTextControl;	// IMP=0x002000000172039a
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;	// IMP=0x0020000001720257
- (id)textDocument;	// IMP=0x00200000017231b6
@property(nonatomic) long long selectionAffinity;
- (_Bool)editing;	// IMP=0x0020000001723159
- (_Bool)editable;	// IMP=0x0020000001723151
- (id)selectionRectsForRange:(id)arg1;	// IMP=0x0020000001722eda
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;	// IMP=0x0020000001722ed4
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0020000001722ecc
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0020000001722e3a
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;	// IMP=0x0020000001722dc3
- (id)characterRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x0020000001722d2e
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;	// IMP=0x0020000001722cab
- (id)closestPositionToPoint:(struct CGPoint)arg1;	// IMP=0x0020000001722c32
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;	// IMP=0x0020000001722ab0
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x002000000172293c
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00200000017228f3
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x0020000001722885
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x002000000172283c
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;	// IMP=0x00200000017227d3
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0020000001722756
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x002000000172270a
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x00200000017226bf
@property(readonly, nonatomic) _Bool hasText;
- (void)unmarkText;	// IMP=0x0020000001722634
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)moveDown;	// IMP=0x0020000001722554
- (void)moveUp;	// IMP=0x00200000017224e7
- (void)moveLeft;	// IMP=0x002000000172247a
- (void)moveRight;	// IMP=0x002000000172240d
- (struct CGRect)_lastRectForRange:(id)arg1;	// IMP=0x00200000017222ea
- (struct CGRect)firstRectForRange:(id)arg1;	// IMP=0x00200000017221d2
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;	// IMP=0x00200000017221bd
- (void)replaceRange:(id)arg1 withText:(id)arg2;	// IMP=0x00200000017221a5
- (void)replaceRange:(id)arg1 withText:(id)arg2 closeTyping:(_Bool)arg3;	// IMP=0x00200000017220ad
- (id)rangeOfEnclosingWord:(id)arg1;	// IMP=0x0020000001722059
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0020000001721fbd
- (id)textInRange:(id)arg1;	// IMP=0x0020000001721f44
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(copy) UITextRange *selectedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;	// IMP=0x0020000001721d4a
@property(readonly, nonatomic) UIView<UITextInputPrivate> *_textSelectingContainer;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;	// IMP=0x0020000001721c74
- (_Bool)becomesEditableWithGestures;	// IMP=0x0020000001721c6c
- (_Bool)isEditing;	// IMP=0x0020000001721c64
- (_Bool)isEditable;	// IMP=0x0020000001721c5c
- (id)content;	// IMP=0x0020000001721c54
- (void)updateSelection;	// IMP=0x0020000001721c4e
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (_Bool)isAutoFillMode;	// IMP=0x0020000001721bb0
- (void)acceptedAutoFillWord:(id)arg1;	// IMP=0x0020000001721b58
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;	// IMP=0x0020000001721b3e
- (void)updateAutoscroll:(id)arg1;	// IMP=0x002000000172179f
- (id)automaticallySelectedOverlay;	// IMP=0x002000000172175c
- (void)setInitialSelectionBehavior:(int)arg1;	// IMP=0x0020000001721756
- (int)initialSelectionBehavior;	// IMP=0x002000000172174e
@property(nonatomic) long long returnKeyType;
@property(nonatomic) int textLoupeVisibility;
@property(nonatomic) _Bool contentsIsSingleValue;
@property(nonatomic) id textSuggestionDelegate;
- (_Bool)isShowingPlaceholder;	// IMP=0x002000000172170e
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;	// IMP=0x0020000001721680
- (struct CGRect)caretRect;	// IMP=0x0020000001721574
- (void)setSelectionWithPoint:(struct CGPoint)arg1;	// IMP=0x002000000172155a
- (void)setSelectionWithPoint:(struct CGPoint)arg1 inset:(double)arg2;	// IMP=0x00200000017214d7
- (id)text;	// IMP=0x0020000001721481
- (void)setText:(id)arg1;	// IMP=0x00200000017213ea
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1 withInset:(double)arg2;	// IMP=0x0020000001721264
- (int)selectionState;	// IMP=0x0020000001721221
- (void)selectAll;	// IMP=0x00200000017211c4
- (_Bool)selectionAtWordStart;	// IMP=0x0020000001721181
- (_Bool)selectionAtDocumentStart;	// IMP=0x002000000172113e
- (_Bool)hasSelection;	// IMP=0x00200000017210fb
- (void)extendCurrentSelection:(int)arg1;	// IMP=0x0020000001721072
- (id)rangeByExtendingCurrentSelection:(int)arg1;	// IMP=0x0020000001721022
- (id)rangeByMovingCurrentSelection:(int)arg1;	// IMP=0x0020000001720fd2
- (struct _NSRange)selectionRange;	// IMP=0x0020000001720f8f
- (int)wordOffsetInRange:(id)arg1;	// IMP=0x0020000001720f3d
- (id)textColorForCaretSelection;	// IMP=0x0020000001720f24
- (id)fontForCaretSelection;	// IMP=0x0020000001720e16
- (unsigned short)characterAfterCaretSelection;	// IMP=0x0020000001720dd3
- (void)replaceCurrentWordWithText:(id)arg1;	// IMP=0x0020000001720cfc
- (void)clearMarkedText;	// IMP=0x0020000001720cdb
- (id)rectsForNSRange:(struct _NSRange)arg1;	// IMP=0x0020000001720c5f
- (void)confirmMarkedText:(id)arg1;	// IMP=0x0020000001720b74
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;	// IMP=0x0020000001720aaa
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;	// IMP=0x0020000001720a5a
- (void)removeTextPlaceholder:(id)arg1;	// IMP=0x0020000001720a29
- (id)insertTextPlaceholderWithSize:(struct CGSize)arg1;	// IMP=0x00200000017209e7
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;	// IMP=0x0020000001720975
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;	// IMP=0x0020000001720937
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
- (id)metadataDictionariesForDictationResults;	// IMP=0x00200000017208e1
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;	// IMP=0x00200000017208a1
- (void)endFloatingCursor;	// IMP=0x0020000001720876
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x002000000172082b
- (void)updateFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x00200000017207e9
- (void)beginFloatingCursorAtPoint:(struct CGPoint)arg1;	// IMP=0x00200000017207a7
- (id)uiWebDocumentView;	// IMP=0x0020000001720764
- (void)insertText:(id)arg1;	// IMP=0x00200000017206e3
- (void)deleteBackward;	// IMP=0x0020000001720665
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet;
- (void)endSelectionChange;	// IMP=0x0020000001720626
- (void)beginSelectionChange;	// IMP=0x00200000017205f5
- (void)handleKeyWebEvent:(id)arg1;	// IMP=0x00200000017205a3
- (_Bool)requiresKeyEvents;	// IMP=0x002000000172059b
- (id)delegate;	// IMP=0x0020000001720593
- (void)setSecure:(_Bool)arg1;	// IMP=0x002000000172058d
- (id)textInputTraits;	// IMP=0x0020000001720441
- (void)setupPlaceholderTextIfNeeded;	// IMP=0x002000000172043b
@property(nonatomic) _Bool isSingleLineDocument;
- (_Bool)hasContent;	// IMP=0x00200000017203e3
- (void)takeTraitsFrom:(id)arg1;	// IMP=0x00200000017203b2

// Remaining properties
@property(copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property(readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property(nonatomic) _Bool _systemCursorAccessoriesDisabled;
@property(nonatomic) _Bool acceptsDictationSearchResults;
@property(nonatomic) _Bool acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsInitialEmojiKeyboard;
@property(nonatomic) _Bool acceptsPayloads;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) long long cursorBehavior;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) _Bool deferBecomingResponder;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDevicePasscodeEntry) _Bool devicePasscodeEntry;
@property(nonatomic) _Bool disableHandwritingKeyboard;
@property(nonatomic) _Bool disableInputBars;
@property(nonatomic) _Bool disablePrediction;
@property(nonatomic) _Bool displaySecureEditsUsingPlainText;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) struct UIEdgeInsets floatingKeyboardEdgeInsets;
@property(nonatomic) _Bool forceDefaultDictationInfo;
@property(nonatomic) long long forceDictationKeyboardType;
@property(nonatomic) _Bool forceDisableDictation;
@property(nonatomic) _Bool forceEnableDictation;
@property(nonatomic) _Bool forceFloatingKeyboard;
@property(nonatomic) _Bool forceSpellingDictation;
@property(nonatomic) _Bool hasDefaultContents;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hidePrediction;
@property(nonatomic) long long inlineCompletionType;
@property(nonatomic) long long inlinePredictionType;
@property(retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property(retain, nonatomic) UIColor *insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth;
@property(nonatomic) _Bool isCarPlayIdiom;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) _Bool learnsCorrections;
@property(nonatomic) _Bool loadKeyboardsForSiriLanguage;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) _Bool preferOnlineDictation;
@property(nonatomic) long long preferredKeyboardStyle;
@property(copy, nonatomic) NSString *recentInputIdentifier;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIColor *selectionBorderColor;
@property(nonatomic) double selectionBorderWidth;
@property(nonatomic) double selectionCornerRadius;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(nonatomic) struct UIEdgeInsets selectionEdgeInsets;
@property(nonatomic) long long selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(nonatomic) int shortcutConversionType;
@property(nonatomic) _Bool showDictationButton;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property(retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property(readonly, nonatomic) _Bool supportsImagePaste;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property(nonatomic) long long textScriptType;
@property(nonatomic) int textSelectionBehavior;
@property(retain, nonatomic) UIColor *underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property(nonatomic) _Bool useAutomaticEndpointing;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;
@property(nonatomic) struct _NSRange validTextRange;
@end

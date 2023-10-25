//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIInlineTextCompletionPrompt, UIKeyboardScheduledTask, UIResponder, _UIInlineTextCompletion;
@protocol UIInlineTextCompletionControllerDelegate, UITextInput;

__attribute__((visibility("hidden")))
@interface UIInlineTextCompletionController : NSObject
{
    UIInlineTextCompletionPrompt *m_textCompletionPrompt;	// 8 = 0x8
    _Bool _currentlyAcceptingInlineCompletionByDirectTap;	// 16 = 0x10
    _Bool _deleting;	// 17 = 0x11
    id <UIInlineTextCompletionControllerDelegate> _delegate;	// 24 = 0x18
    NSString *_presentingTextCompletionAsMarkedText;	// 32 = 0x20
    _UIInlineTextCompletion *_textCompletion;	// 40 = 0x28
    UIKeyboardScheduledTask *_textCompletionPromptTask;	// 48 = 0x30
    _UIInlineTextCompletion *_candidateRemovedOnWillPerformOutput;	// 56 = 0x38
    _UIInlineTextCompletion *_acceptingTextCompletion;	// 64 = 0x40
    _UIInlineTextCompletion *_lastAcceptedTextCompletion;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000014ac528
@property(nonatomic, getter=isDeleting) _Bool deleting; // @synthesize deleting=_deleting;
@property(retain, nonatomic) _UIInlineTextCompletion *lastAcceptedTextCompletion; // @synthesize lastAcceptedTextCompletion=_lastAcceptedTextCompletion;
@property(retain, nonatomic) _UIInlineTextCompletion *acceptingTextCompletion; // @synthesize acceptingTextCompletion=_acceptingTextCompletion;
@property(retain, nonatomic) _UIInlineTextCompletion *candidateRemovedOnWillPerformOutput; // @synthesize candidateRemovedOnWillPerformOutput=_candidateRemovedOnWillPerformOutput;
@property(retain, nonatomic) UIKeyboardScheduledTask *textCompletionPromptTask; // @synthesize textCompletionPromptTask=_textCompletionPromptTask;
@property(readonly, nonatomic) _UIInlineTextCompletion *textCompletion; // @synthesize textCompletion=_textCompletion;
@property(nonatomic) _Bool currentlyAcceptingInlineCompletionByDirectTap; // @synthesize currentlyAcceptingInlineCompletionByDirectTap=_currentlyAcceptingInlineCompletionByDirectTap;
@property(copy, nonatomic) NSString *presentingTextCompletionAsMarkedText; // @synthesize presentingTextCompletionAsMarkedText=_presentingTextCompletionAsMarkedText;
@property(nonatomic) __weak id <UIInlineTextCompletionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_registerLearningForInlineCompletion:(id)arg1 learningMode:(id)arg2;	// IMP=0x00000000014ac18c
- (void)undoAcceptedTextCompletionExecutionContext:(id)arg1;	// IMP=0x00000000014abe69
- (_Bool)canUndoAcceptedTextCompletion;	// IMP=0x00000000014abe1b
- (id)_candidateToUndoAcceptedTextCompletion;	// IMP=0x00000000014abae7
- (id)acceptTextCompletionWithInteraction:(long long)arg1 wordTerminator:(id)arg2 outputHandledByCaller:(_Bool)arg3;	// IMP=0x00000000014ab6e8
- (id)_acceptTextCompletionWithInteraction:(long long)arg1 wordTerminator:(id)arg2;	// IMP=0x00000000014ab45c
- (void)acceptTextCompletionWithInteraction:(long long)arg1 wordTerminator:(id)arg2;	// IMP=0x00000000014ab441
- (void)acceptTextCompletion:(id)arg1;	// IMP=0x00000000014ab428
- (long long)_acceptTypeForInteraction:(long long)arg1 wordTerminator:(id)arg2;	// IMP=0x00000000014ab3bf
- (long long)_acceptTypeForTypeWordTerminator:(id)arg1;	// IMP=0x00000000014ab29f
- (_Bool)_shouldAcceptUpToNextWordOfCandidateOnWordBoundaryForInteraction:(long long)arg1;	// IMP=0x00000000014ab289
- (_Bool)_shouldAcceptFirstWordOfCandidateForWordTerminator:(unsigned int)arg1;	// IMP=0x00000000014ab1e9
- (void)_acceptTextCompletion:(id)arg1 learningMode:(id)arg2;	// IMP=0x00000000014ab02c
- (void)_updateTextCompletionPromptWithTextCompletion:(id)arg1 parentView:(id)arg2 inputRects:(id)arg3;	// IMP=0x00000000014aac3f
- (void)_updateTextCompletionPrompt:(id)arg1 inputRects:(id)arg2;	// IMP=0x00000000014aa962
- (id)_textCompletionPromptRectsForInput:(id)arg1;	// IMP=0x00000000014aa6ac
- (void)_updateTextCompletionPrompt:(id)arg1 executionContext:(id)arg2;	// IMP=0x00000000014a9735
- (void)updateTextCompletionPromptExecutionContext:(id)arg1;	// IMP=0x00000000014a9566
- (void)updateTextCompletionPrompt;	// IMP=0x00000000014a94a9
- (void)_clearTextCompletionPromptTimer;	// IMP=0x00000000014a944f
- (void)_touchTextCompletionPromptTimer;	// IMP=0x00000000014a91de
- (void)_removeTextCompletionPromptForReason:(long long)arg1;	// IMP=0x00000000014a8f32
- (_Bool)_isRejectionWhenRemovingPromptForReason:(long long)arg1;	// IMP=0x00000000014a8f1c
- (void)willAcceptPredictiveInput:(id)arg1;	// IMP=0x00000000014a8b99
- (void)didPerformKeyboardOutput:(id)arg1;	// IMP=0x00000000014a8542
- (void)willPerformKeyboardOutput:(id)arg1;	// IMP=0x00000000014a80ac
- (void)removeTextCompletionPrompt;	// IMP=0x00000000014a8095
- (_Bool)_isCompletion:(id)arg1 continuingLastCompletion:(id)arg2;	// IMP=0x00000000014a7d4a
- (id)textCompletionPrompt;	// IMP=0x00000000014a7d3c
- (void)updateTextCompletionDisplay;	// IMP=0x00000000014a7beb
- (id)_bestTextCompletion;	// IMP=0x00000000014a7214
- (id)_textCompletions;	// IMP=0x00000000014a7116
@property(readonly, nonatomic) _UIInlineTextCompletion *oneWordTextCompletion;
- (id)_upToNextWordTextCompletionFromTextCompletion:(id)arg1;	// IMP=0x00000000014a6de7
- (id)_oneWordTextCompletionFromTextCompletion:(id)arg1;	// IMP=0x00000000014a6aef
- (unsigned long long)_inlineCompletionModeForTraitsWithCurrentPreference:(_Bool)arg1;	// IMP=0x00000000014a68c7
@property(readonly, nonatomic) unsigned long long inlineTextCompletionModeForTraits;
- (_Bool)_deleteToUndoEnabled;	// IMP=0x00000000014a688e
- (_Bool)_inlineCompletionPreference;	// IMP=0x00000000014a680f
@property(readonly, nonatomic) _Bool hasPrompt;
@property(readonly, nonatomic) UIResponder<UITextInput> *inputDelegate;
- (_Bool)_doesFirstPredictedCharacterEndWord:(id)arg1;	// IMP=0x00000000014a6504
- (id)_markedTextAttributes;	// IMP=0x00000000014a6416

@end

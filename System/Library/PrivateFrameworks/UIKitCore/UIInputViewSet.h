//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    _Bool _isSplit;	// 8 = 0x8
    double _splitHeightDelta;	// 16 = 0x10
    UIResponder *_restorableResponder;	// 24 = 0x18
    UIKBRenderConfig *_restorableRenderConfig;	// 32 = 0x20
    UIResponder *_accessoryViewNextResponder;	// 40 = 0x28
    _Bool _restoreUsingBecomeFirstResponder;	// 48 = 0x30
    UIView *_inputView;	// 56 = 0x38
    UIView *_inputAccessoryView;	// 64 = 0x40
    UIView *_inputAssistantView;	// 72 = 0x48
    UIInputViewController *_inputViewController;	// 80 = 0x50
    UIInputViewController *_accessoryViewController;	// 88 = 0x58
    UIInputViewController *_assistantViewController;	// 96 = 0x60
    _Bool _isNullInputView;	// 104 = 0x68
    _Bool _isCustomInputView;	// 105 = 0x69
    _Bool _shouldShowDockView;	// 106 = 0x6a
    _Bool _isRemoteKeyboard;	// 107 = 0x6b
    UIView *_hostedCustomInputView;	// 112 = 0x70
    struct CGRect _inputAssistantViewBounds;	// 120 = 0x78
}

+ (id)emptyInputSet;	// IMP=0x0060000000120dd3
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;	// IMP=0x0060000000120c50
+ (id)inputSetWithPlaceholderAndCustomInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x00600000001209fd
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x00600000001209e3
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;	// IMP=0x00600000001209cf
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;	// IMP=0x00600000001209bb
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;	// IMP=0x00600000001208ac
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;	// IMP=0x0060000000120897
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;	// IMP=0x0060000000120804
- (void).cxx_destruct;	// IMP=0x00000000001246f9
@property(nonatomic) _Bool isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property(nonatomic) _Bool shouldShowDockView; // @synthesize shouldShowDockView=_shouldShowDockView;
@property(nonatomic) _Bool isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property(readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property(retain, nonatomic) UIView *hostedCustomInputView; // @synthesize hostedCustomInputView=_hostedCustomInputView;
@property(readonly, nonatomic) _Bool isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property(nonatomic) __weak UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) __weak UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(retain, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(retain, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;	// IMP=0x00000000001244a0
- (void)_endSplitTransitionIfNeeded;	// IMP=0x00000000001243c1
- (void)_beginSplitTransitionIfNeeded;	// IMP=0x0000000000124243
- (_Bool)_accessorySuppressesShadow;	// IMP=0x0000000000124154
- (id)_splittableInputAccessoryView;	// IMP=0x0000000000124110
- (id)_themableInputAccessoryView;	// IMP=0x00000000001240cd
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;	// IMP=0x0000000000123ea1
- (_Bool)hierarchyContainsView:(id)arg1;	// IMP=0x0000000000123cd2
- (void)refreshPresentation;	// IMP=0x0000000000123719
- (struct CGRect)_rightInputViewSetFrame;	// IMP=0x00000000001233eb
- (struct CGRect)_leftInputViewSetFrame;	// IMP=0x000000000012311a
- (double)inputViewSplitHeight;	// IMP=0x000000000012303d
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
@property(readonly, nonatomic) _Bool _inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool supportsSplit;
@property(readonly, nonatomic) _Bool isLocalMinimumHeightInputView;
@property(readonly, nonatomic) _Bool isInputAccessoryViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputAssistantViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputViewPlaceholder;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;	// IMP=0x0000000000122c43
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;	// IMP=0x0000000000122c0c
- (_Bool)_inputAccessoryViewSupportsSplit;	// IMP=0x0000000000122b79
- (_Bool)_inputViewSupportsSplit;	// IMP=0x0000000000122aee
- (_Bool)_isFullscreen;	// IMP=0x0000000000122951
- (_Bool)__isCKAccessoryView;	// IMP=0x00000000001228c5
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;	// IMP=0x00000000001227c5
- (long long)keyboardOrientation:(id)arg1;	// IMP=0x0000000000122720
- (id)description;	// IMP=0x0000000000122396
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;	// IMP=0x0000000000122238
- (_Bool)containsResponder:(id)arg1;	// IMP=0x000000000012218c
@property(readonly, nonatomic) _Bool visible;
- (_Bool)_inputViewIsVisible;	// IMP=0x00000000001220b4
@property(readonly, nonatomic) _Bool usesKeyClicks;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000121cd5
- (_Bool)containsView:(id)arg1;	// IMP=0x0000000000121c21
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(readonly, nonatomic) _Bool hasNonPlaceholderViews;
@property(nonatomic) _Bool restoreUsingBecomeFirstResponder;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;	// IMP=0x0000000000121a5f
@property(readonly, nonatomic) UIView *splitExemptSubview;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;	// IMP=0x000000000012187b
- (id)normalizePlaceholders;	// IMP=0x000000000012146f
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;	// IMP=0x0000000000121313
- (id)inputSetWithInputAccessoryViewOnly;	// IMP=0x00000000001212ae
- (void)setKeyboardAssistantBar:(id)arg1;	// IMP=0x000000000012119e
- (void)inheritNullState:(id)arg1;	// IMP=0x00000000001207e1
- (void)dealloc;	// IMP=0x000000000012077d
- (id)initWithInputView:(id)arg1 customInputView:(id)arg2 accessoryView:(id)arg3 assistantView:(id)arg4 isKeyboard:(_Bool)arg5;	// IMP=0x0000000000120591
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;	// IMP=0x0000000000120567
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)_isKeyboard;	// IMP=0x00000000001204e4
- (_Bool)canAnimateToInputViewSet:(id)arg1;	// IMP=0x000000000012039a

@end

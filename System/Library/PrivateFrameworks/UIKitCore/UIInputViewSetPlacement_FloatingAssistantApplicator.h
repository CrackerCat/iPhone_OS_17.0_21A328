//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TUIInputAssistantHostView;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_FloatingAssistantApplicator
{
    TUIInputAssistantHostView *_hostView;	// 40 = 0x28
}

+ (struct UIEdgeInsets)inputAccessoryPaddingForTraitCollection:(id)arg1;	// IMP=0x0060000000ca3a3a
- (void).cxx_destruct;	// IMP=0x0000000000ca3ae3
@property(retain, nonatomic) TUIInputAssistantHostView *hostView; // @synthesize hostView=_hostView;
- (struct UIEdgeInsets)inputAccessoryPadding;	// IMP=0x0000000000ca38df
- (struct CGRect)popoverFrame;	// IMP=0x0000000000ca36d2
- (void)invalidate;	// IMP=0x0000000000ca3610
- (_Bool)shouldApplyOriginChange;	// IMP=0x0000000000ca3608
- (void)applyChanges:(id)arg1;	// IMP=0x0000000000ca2e1d
- (void)setupHostViewIfNeeded;	// IMP=0x0000000000ca29e5
- (void)prepare;	// IMP=0x0000000000ca29a4

@end

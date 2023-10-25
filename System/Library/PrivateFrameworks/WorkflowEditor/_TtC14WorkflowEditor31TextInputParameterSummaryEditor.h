//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "WFModuleSummaryEditor.h"

@class MISSING_TYPE;
@protocol WFVariableProvider;

@interface _TtC14WorkflowEditor31TextInputParameterSummaryEditor : WFModuleSummaryEditor
{
    MISSING_TYPE *autocompleteDataSource;	// 8 = 0x8
    MISSING_TYPE *textAttachmentToEdit;	// 16 = 0x10
    MISSING_TYPE *isPickingActionOutput;	// 24 = 0x18
    MISSING_TYPE *commitState;	// 32 = 0x20
    MISSING_TYPE *timerSubscription;	// 40 = 0x28
    MISSING_TYPE *autocompleteCoordinator;	// 48 = 0x30
}

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;	// IMP=0x006000000020df40
- (void).cxx_destruct;	// IMP=0x000000000020e3d0
- (id)initWithParameter:(id)arg1 arrayIndex:(long long)arg2 processing:(_Bool)arg3;	// IMP=0x000000000020e340
- (void)textEntryDidPasteWithOriginalBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000020e120
- (void)textEntryDidCopyWithOriginalBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000020e030
- (void)textEntryDidCutWithOriginalBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000020df90
- (void)textEntryDidFinish;	// IMP=0x000000000020df10
- (void)textEntryTextDidChange:(id)arg1;	// IMP=0x000000000020ddc0
- (void)textEntryWillBegin:(id)arg1 allowMultipleLines:(_Bool *)arg2;	// IMP=0x000000000020dc10
@property(nonatomic) __weak id <WFVariableProvider> variableProvider;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x000000000020d060
- (void)beginEditingSlotWithIdentifier:(id)arg1 presentationAnchor:(id)arg2;	// IMP=0x000000000020ce10

@end

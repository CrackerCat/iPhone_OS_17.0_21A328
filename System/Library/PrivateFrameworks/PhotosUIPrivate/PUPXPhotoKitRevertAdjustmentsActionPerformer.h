//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitRevertAdjustmentsActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00800000003b516b
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00800000003b515a
+ (_Bool)_canRevertOnAsset:(id)arg1 fast:(_Bool)arg2;	// IMP=0x00800000003b509f
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00800000003b508b
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00800000003b4f0d
- (void)performUserInteractionTask;	// IMP=0x00000000003b48fb
- (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x00000000003b48f3

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitCopyAdjustmentsActionPerformer : PXPhotoKitAssetActionPerformer
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00800000003b3a78
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x00800000003b3a67
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00800000003b3a48
+ (_Bool)_canPerformOnAsset:(id)arg1;	// IMP=0x00800000003b3986
+ (_Bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;	// IMP=0x00800000003b3974
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x00800000003b3861
- (void)performBackgroundTask;	// IMP=0x00000000003b373f

@end

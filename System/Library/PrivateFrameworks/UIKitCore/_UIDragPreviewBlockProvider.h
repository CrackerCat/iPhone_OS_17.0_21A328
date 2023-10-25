//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIDragPreview, _UIDraggingImageComponent;
@protocol _UIDragPreviewProvider;

__attribute__((visibility("hidden")))
@interface _UIDragPreviewBlockProvider : NSObject
{
    CDUnknownBlockType _previewProviderBlock;	// 8 = 0x8
    _UIDraggingImageComponent *_imageComponent;	// 16 = 0x10
    UIDragPreview *_preview;	// 24 = 0x18
}

+ (id)previewProviderWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000016c5427
- (void).cxx_destruct;	// IMP=0x00000000016c5a05
- (id)_createImageComponent;	// IMP=0x00000000016c55fa
- (id)imageComponent;	// IMP=0x00000000016c55b3
- (id)_duiPreview;	// IMP=0x00000000016c5563
@property(readonly, nonatomic) id <_UIDragPreviewProvider> _dragPreviewProvider;
@property(readonly, nonatomic) UIDragPreview *preview; // @synthesize preview=_preview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

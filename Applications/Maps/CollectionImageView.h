//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIButton, UIImageView, UIVisualEffectView;
@protocol CollectionHandlerInfo, CollectionImageViewDelegate;

@interface CollectionImageView : UIView
{
    UIImageView *_mainImageView;	// 8 = 0x8
    UIImageView *_glyphImageView;	// 16 = 0x10
    UIButton *_editButton;	// 24 = 0x18
    UIVisualEffectView *_visualEffectView;	// 32 = 0x20
    _Bool _editing;	// 40 = 0x28
    id <CollectionHandlerInfo> _collectionInfo;	// 48 = 0x30
    id <CollectionImageViewDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000092e51d
@property(nonatomic) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) __weak id <CollectionImageViewDelegate> delegate; // @synthesize delegate=_delegate;
// Error: Property attributes should begin with the type ('T') attribute, property name: collectionInfo
// Property attributes: (null)

- (void)layoutSubviews;	// IMP=0x001000000092e367
- (void)_createViews;	// IMP=0x001000000092e127
- (void)didMoveToWindow;	// IMP=0x001000000092e01f
- (void)_addVibrancyIfNeeded;	// IMP=0x001000000092de3f
- (void)_updateGlyph;	// IMP=0x001000000092db4d
- (void)_updateImages;	// IMP=0x001000000092da72
- (void)_enableShadow:(_Bool)arg1 imageView:(id)arg2;	// IMP=0x001000000092d842
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x001000000092d73b
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x001000000092d729
- (void)imageAction:(id)arg1;	// IMP=0x001000000092d6ed
- (id)init;	// IMP=0x001000000092d6bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000092d644

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

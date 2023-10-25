//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, UIPointerShape, UITargetedPreview, _UILumaTrackingBackdropView, _UIPointerEffectTintView, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPointerEffectPlatterView : UIView
{
    _Bool _tintDisabled;	// 128 = 0x80
    _Bool _useSoftShadow;	// 129 = 0x81
    _Bool _geometryFrozen;	// 130 = 0x82
    _Bool _pressed;	// 131 = 0x83
    UITargetedPreview *_targetedPreview;	// 136 = 0x88
    double _shadowAlpha;	// 144 = 0x90
    long long _tintMode;	// 152 = 0x98
    double _tintViewScale;	// 160 = 0xa0
    UIPointerShape *_tintViewShape;	// 168 = 0xa8
    UIView *_specularHighlight;	// 176 = 0xb0
    unsigned long long _specularOptions;	// 184 = 0xb8
    CDUnknownBlockType _tintColorMatrixProvider;	// 192 = 0xc0
    UIView *_contentSourceView;	// 200 = 0xc8
    UIView *_shadowView;	// 208 = 0xd0
    _UIPortalView *_contentPortalView;	// 216 = 0xd8
    _UIPointerEffectTintView *_tintView;	// 224 = 0xe0
    _UILumaTrackingBackdropView *_lumaTrackingView;	// 232 = 0xe8
    UIView *_specularOverlayView;	// 240 = 0xf0
    NSMutableArray *_accessoryPortals;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000014c6eea
@property(retain, nonatomic) NSMutableArray *accessoryPortals; // @synthesize accessoryPortals=_accessoryPortals;
@property(retain, nonatomic) UIView *specularOverlayView; // @synthesize specularOverlayView=_specularOverlayView;
@property(retain, nonatomic) _UILumaTrackingBackdropView *lumaTrackingView; // @synthesize lumaTrackingView=_lumaTrackingView;
@property(retain, nonatomic) _UIPointerEffectTintView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) _UIPortalView *contentPortalView; // @synthesize contentPortalView=_contentPortalView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *contentSourceView; // @synthesize contentSourceView=_contentSourceView;
@property(copy, nonatomic) CDUnknownBlockType tintColorMatrixProvider; // @synthesize tintColorMatrixProvider=_tintColorMatrixProvider;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool geometryFrozen; // @synthesize geometryFrozen=_geometryFrozen;
@property(nonatomic) _Bool useSoftShadow; // @synthesize useSoftShadow=_useSoftShadow;
@property(nonatomic) unsigned long long specularOptions; // @synthesize specularOptions=_specularOptions;
@property(retain, nonatomic) UIView *specularHighlight; // @synthesize specularHighlight=_specularHighlight;
@property(retain, nonatomic) UIPointerShape *tintViewShape; // @synthesize tintViewShape=_tintViewShape;
@property(nonatomic) double tintViewScale; // @synthesize tintViewScale=_tintViewScale;
@property(nonatomic) long long tintMode; // @synthesize tintMode=_tintMode;
@property(nonatomic, getter=isTintDisabled) _Bool tintDisabled; // @synthesize tintDisabled=_tintDisabled;
@property(nonatomic) double shadowAlpha; // @synthesize shadowAlpha=_shadowAlpha;
@property(copy, nonatomic) UITargetedPreview *targetedPreview; // @synthesize targetedPreview=_targetedPreview;
- (_Bool)_isEligibleForFocusOcclusion;	// IMP=0x00000000014c6cd3
- (id)_specularOverlayWithHighlightPortal:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000014c6a1a
- (id)_newLumaTrackingViewForTintView:(id)arg1;	// IMP=0x00000000014c6983
- (void)_layoutTintView;	// IMP=0x00000000014c6487
- (id)_newTintView;	// IMP=0x00000000014c63f4
- (id)_newShadowView;	// IMP=0x00000000014c60a4
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x00000000014c604e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000014c5ff8
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000014c5fa2
- (void)setHidden:(_Bool)arg1;	// IMP=0x00000000014c5f57
- (void)layoutSubviews;	// IMP=0x00000000014c5719
- (void)_updateContentMask;	// IMP=0x00000000014c4c5f
- (_Bool)_ignoreRemoveAllAnimations;	// IMP=0x00000000014c4b73
- (void)_installAccessoryView:(id)arg1;	// IMP=0x00000000014c49e1
- (id)initWithTargetedPreview:(id)arg1;	// IMP=0x00000000014c4169

@end

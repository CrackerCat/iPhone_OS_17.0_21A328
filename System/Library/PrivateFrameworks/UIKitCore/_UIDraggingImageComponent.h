//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageComponent : NSObject
{
    _Bool _ignoresAccessibilityFilters;	// 8 = 0x8
    _Bool _hidesImage;	// 9 = 0x9
    UIView *_view;	// 16 = 0x10
    UIImage *_image;	// 24 = 0x18
    struct CGRect _frame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007315f2
@property(readonly, nonatomic) _Bool hidesImage; // @synthesize hidesImage=_hidesImage;
@property(readonly, nonatomic) _Bool ignoresAccessibilityFilters; // @synthesize ignoresAccessibilityFilters=_ignoresAccessibilityFilters;
@property(readonly, nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)description;	// IMP=0x0000000000731504
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000007314f9
- (id)_initWithNoImageAndFrame:(struct CGRect)arg1;	// IMP=0x00000000007314b2
- (id)initHidingDragImage;	// IMP=0x0000000000731477
- (id)initWithView:(id)arg1;	// IMP=0x00000000007313a6
- (id)initWithImage:(id)arg1 frame:(struct CGRect)arg2 ignoreAccessibilityFilters:(_Bool)arg3;	// IMP=0x00000000007312e0

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, SCATCursorLayer;
@protocol SCATCursorControllerDelegate;

@interface SCATCursorController : NSObject
{
    id <SCATCursorControllerDelegate> _delegate;	// 8 = 0x8
    SCATCursorLayer *_cursorBackgroundLayer;	// 16 = 0x10
    SCATCursorLayer *_cursorForegroundLayer;	// 24 = 0x18
    CALayer *_cursorContainerLayer;	// 32 = 0x20
    SCATCursorLayer *_cursorCompositingLayer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000f42d8
@property(retain, nonatomic) SCATCursorLayer *cursorCompositingLayer; // @synthesize cursorCompositingLayer=_cursorCompositingLayer;
@property(retain, nonatomic) CALayer *cursorContainerLayer; // @synthesize cursorContainerLayer=_cursorContainerLayer;
@property(retain, nonatomic) SCATCursorLayer *cursorForegroundLayer; // @synthesize cursorForegroundLayer=_cursorForegroundLayer;
@property(retain, nonatomic) SCATCursorLayer *cursorBackgroundLayer; // @synthesize cursorBackgroundLayer=_cursorBackgroundLayer;
@property(nonatomic) __weak id <SCATCursorControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)hide:(_Bool)arg1 animate:(_Bool)arg2;	// IMP=0x00100000000f4181
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4 options:(int)arg5;	// IMP=0x00100000000f3f6c
- (void)updateLevel:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x00100000000f3e83
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x00100000000f3d9a
- (void)updateTheme:(int)arg1 level:(int)arg2 path:(id)arg3 frame:(struct CGRect)arg4 isSimpleRect:(_Bool)arg5 animated:(_Bool)arg6 options:(int)arg7;	// IMP=0x00100000000f3cf1
- (id)description;	// IMP=0x00100000000f3c52
- (id)init;	// IMP=0x00100000000f3977

@end

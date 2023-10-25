//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface UIPDFHighlighter : NSObject
{
    NSMutableArray *_highLightLayers;	// 8 = 0x8
    struct CGColor *_highlightColor;	// 16 = 0x10
    struct CGColor *_borderColor;	// 24 = 0x18
    struct CGColor *_whiteColor;	// 32 = 0x20
    struct CGPDFPage *_page;	// 40 = 0x28
    double _enlargeFactor;	// 48 = 0x30
    double _pdfToViewScale;	// 56 = 0x38
    double inset;	// 64 = 0x40
}

@property(nonatomic) double inset; // @synthesize inset;
- (void)clear;	// IMP=0x000000000111244e
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x0000000001112254
- (void)setNeedsDisplay;	// IMP=0x0000000001112149
- (void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000111203d
- (void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000111185c
- (void)addAnimation:(id)arg1;	// IMP=0x0000000001111707
- (void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_f9662865)arg3 upright:(_Bool)arg4;	// IMP=0x0000000001111679
- (void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(CDStruct_f9662865)arg3 upright:(_Bool)arg4;	// IMP=0x00000000011115eb
- (void)addRectPath:(struct CGPath *)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(CDStruct_f9662865)arg4 upright:(_Bool)arg5;	// IMP=0x000000000111127a
- (void)unhide;	// IMP=0x0000000001111169
- (void)dealloc;	// IMP=0x0000000001111114
- (id)init;	// IMP=0x0000000001110fd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

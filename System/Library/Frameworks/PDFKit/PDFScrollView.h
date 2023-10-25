//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

@class NSString, PDFScrollViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFScrollView : UIScrollView
{
    PDFScrollViewPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006462d
- (void)centerAlign;	// IMP=0x0000000000064497
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x0000000000064357
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x000000000006420e
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x00000000000641ac
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000000640f9
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x000000000006408d
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000063fa4
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000063f47
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x0000000000063f26
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000063d03
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000063c72
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000063be2
- (void)setForcesTopAlignment:(_Bool)arg1;	// IMP=0x0000000000063bce
- (void)updateLayout;	// IMP=0x0000000000063a7f
- (id)pdfDocumentView;	// IMP=0x0000000000063a5e
- (void)dealloc;	// IMP=0x00000000000639e9
- (void)setDocument:(id)arg1;	// IMP=0x0000000000063749
- (void)setPDFView:(id)arg1;	// IMP=0x000000000006372d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000636b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

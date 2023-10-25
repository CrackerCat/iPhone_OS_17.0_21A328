//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PDFViewControllerPrivate;

__attribute__((visibility("hidden")))
@interface PDFViewController : NSObject
{
    PDFViewControllerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000008b0c9
- (_Bool)_handleFormFillingEventAtLocation:(struct CGPoint)arg1;	// IMP=0x000000000008affe
- (id)_getPagePoint:(struct CGPoint *)arg1 forGestureLocation:(struct CGPoint)arg2;	// IMP=0x000000000008af62
- (id)_annotationsForSelection:(id)arg1;	// IMP=0x000000000008addd
- (id)_annotationAtGestureLocation:(struct CGPoint)arg1;	// IMP=0x000000000008ad3e
- (void)_annotationHitLongPress:(id)arg1 gestureState:(long long)arg2 location:(struct CGPoint)arg3;	// IMP=0x000000000008aadd
- (void)deleteAnnotation;	// IMP=0x000000000008a449
- (void)setMarkupStyle:(unsigned long long)arg1;	// IMP=0x000000000008a37f
- (void)_closeTextEditingMenu;	// IMP=0x000000000008a239
- (id)editMenuInteraction:(id)arg1 menuForConfiguration:(id)arg2 suggestedActions:(id)arg3;	// IMP=0x0000000000089ca5
- (id)additionalEditMenuElementsForMarkupAnnotation:(id)arg1;	// IMP=0x00000000000894e4
- (id)additionalEditMenuElementsForSelection:(id)arg1;	// IMP=0x0000000000088d30
- (void)highlight:(id)arg1;	// IMP=0x0000000000088b5a
- (void)showMenuForMarkupAnnotation:(id)arg1;	// IMP=0x00000000000888f1
- (void)showMarkupStyleMenuForMarkupAnnotation;	// IMP=0x00000000000886b4
- (void)_hidePDFMarkupMenuView;	// IMP=0x000000000008869a
- (void)showActiveMenus;	// IMP=0x0000000000088694
- (void)hideActiveMenus;	// IMP=0x00000000000884d1
- (void)_hideTextSelectionMenu;	// IMP=0x00000000000884b7
- (unsigned long long)textSelectionMenu;	// IMP=0x00000000000884a9
- (void)_performDoubleTapAtLocation:(struct CGPoint)arg1;	// IMP=0x0000000000088433
- (void)handleGesture:(unsigned long long)arg1 state:(long long)arg2 location:(struct CGPoint)arg3;	// IMP=0x0000000000088320
- (void)handleGesture:(id)arg1;	// IMP=0x0000000000088220
- (void)_annotationHit:(id)arg1 atLocation:(struct CGPoint)arg2;	// IMP=0x0000000000087a8f
- (void)_doButtonHit:(id)arg1;	// IMP=0x00000000000875ba
- (void)_handleButtonHit:(id)arg1;	// IMP=0x00000000000874a5
- (void)_postAnnotationHitNotification:(id)arg1;	// IMP=0x000000000008739b
- (void)_postAnnotationWillHitNotification:(id)arg1;	// IMP=0x0000000000087291
- (id)_pageViewForAnnotation:(id)arg1;	// IMP=0x00000000000871cd
- (_Bool)isUpdatingSelectionMarkups;	// IMP=0x00000000000871c5
- (void)removeNoteForAnnotation:(id)arg1;	// IMP=0x0000000000087158
- (void)editNoteForAnnotation:(id)arg1;	// IMP=0x0000000000087093
- (void)setMarkupStyle:(unsigned long long)arg1 forAnnotation:(id)arg2;	// IMP=0x0000000000086fa3
- (void)setMarkupStyle:(unsigned long long)arg1 forSelection:(id)arg2 clearSelection:(_Bool)arg3;	// IMP=0x0000000000086c73
- (_Bool)_shouldUpdateMarkupWithStyle:(unsigned long long)arg1 onPage:(id)arg2 forIndexSet:(id)arg3;	// IMP=0x0000000000086adc
- (id)addAnnotationForDetectedFormField:(id)arg1 onPage:(id)arg2 activate:(_Bool)arg3;	// IMP=0x000000000008631e
- (void)populateAnnotationsFromDetectedAnnotationsOnPage:(id)arg1;	// IMP=0x0000000000085ace
- (void)handleTextSuggestion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085a24
- (void)removeControlForAnnotation:(id)arg1;	// IMP=0x0000000000085969
- (void)_addControlForAnnotation:(id)arg1;	// IMP=0x00000000000858b4
- (void)_activateAnotation:(id)arg1;	// IMP=0x0000000000085673
- (void)activateNextAnnotation:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085331
- (void)interactWithAnnotation:(id)arg1;	// IMP=0x000000000008531c
- (void)setActiveAnnotation:(id)arg1;	// IMP=0x0000000000085167
- (id)_findNextActivatableAnnotationOnPage:(id)arg1 fromAnnotation:(id)arg2 direction:(unsigned long long)arg3;	// IMP=0x0000000000084e03
- (void)findNextActivatableAnnotationFromPage:(id)arg1 fromAnnotation:(id)arg2 direction:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000008496d
- (id)activeAnnotation;	// IMP=0x0000000000084953
- (void)dealloc;	// IMP=0x00000000000848de
- (id)initWithView:(id)arg1;	// IMP=0x0000000000084707
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toPageView:(id)arg2;	// IMP=0x00000000000844f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableSet, NSString, UIScrollView;

__attribute__((visibility("hidden")))
@interface ASCMetricsScrollObserver : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSMutableSet *_appearedModelIDs;	// 24 = 0x18
    NSMutableSet *_renderedModelIDs;	// 32 = 0x20
}

+ (id)observerForScrollView:(id)arg1;	// IMP=0x001000000003d7d6
- (void).cxx_destruct;	// IMP=0x000000000003e18d
@property(readonly, nonatomic) NSMutableSet *renderedModelIDs; // @synthesize renderedModelIDs=_renderedModelIDs;
@property(readonly, nonatomic) NSMutableSet *appearedModelIDs; // @synthesize appearedModelIDs=_appearedModelIDs;
@property(readonly, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(readonly, nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x000000000003e10d
- (_Bool)hasModelRendered:(id)arg1;	// IMP=0x000000000003e078
- (void)modelDidRender:(id)arg1;	// IMP=0x000000000003dfe8
- (_Bool)hasModelAppeared:(id)arg1;	// IMP=0x000000000003df53
- (void)modelDidDisappear:(id)arg1;	// IMP=0x000000000003dec3
- (void)modelDidAppear:(id)arg1;	// IMP=0x000000000003de33
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000003dcbf
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003dc56
- (void)addDelegate:(id)arg1;	// IMP=0x000000000003dbed
- (_Bool)isDelegateAdded:(id)arg1;	// IMP=0x000000000003db7f
- (struct CGPoint)centerOfView:(id)arg1;	// IMP=0x000000000003da81
@property(readonly, nonatomic) struct CGRect visibleRect;
@property(readonly, nonatomic) struct CGSize contentSize;
- (void)dealloc;	// IMP=0x000000000003d96e
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000003d876

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

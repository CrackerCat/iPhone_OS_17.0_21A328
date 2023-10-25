//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UIViewControllerNullAnimationTransitionCoordinator : NSObject
{
    _Bool _transitionIsInFlight;	// 8 = 0x8
    NSMutableArray *_alongsideAnimations;	// 16 = 0x10
    NSMutableArray *_alongsideCompletions;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000662f19
@property(nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)_applyBlocks:(id)arg1 releaseBlocks:(CDUnknownBlockType)arg2;	// IMP=0x0000000000662d49
- (void)_runAlongsideCompletionsAfterCommit;	// IMP=0x0000000000662cda
- (void)_runAlongsideCompletionsAndClearAlongsideAnimations;	// IMP=0x0000000000662ca9
- (void)_runAlongsideCompletions;	// IMP=0x0000000000662c0b
- (void)_runAlongsideAnimations;	// IMP=0x0000000000662b28
- (void)notifyWhenInteractionChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000662b22
- (void)notifyWhenInteractionEndsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000662b1c
- (_Bool)animateAlongsideTransitionInView:(id)arg1 animation:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000662af5
- (id)_alongsideCompletions:(_Bool)arg1;	// IMP=0x0000000000662ab6
- (id)_alongsideAnimations:(_Bool)arg1;	// IMP=0x0000000000662a77
- (_Bool)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000662a4e
- (_Bool)_animateAlongsideTransitionInView:(id)arg1 systemAnimation:(_Bool)arg2 systemCompletion:(_Bool)arg3 animation:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000066291a
@property(readonly, nonatomic) struct CGAffineTransform targetTransform;
- (_Bool)isRotating;	// IMP=0x00000000006628ec
- (id)viewForKey:(id)arg1;	// IMP=0x00000000006628e4
- (id)viewControllerForKey:(id)arg1;	// IMP=0x00000000006628dc
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionVelocity;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) _Bool isInterruptible;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) _Bool initiallyInteractive;
@property(readonly, nonatomic) long long presentationStyle;
- (id)_mainContext;	// IMP=0x000000000066287f
@property(readonly, nonatomic, getter=isAnimated) _Bool animated;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

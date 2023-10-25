//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SBUISystemApertureElementContext, SBUISystemApertureElementContextPrivate, SBUISystemApertureHostedElementContext;

@interface NSObject (SBUIPresentableHomeGestureContext)
- (id)presentableHomeGestureContext;	// IMP=0x002000000001b4b8
- (id)presentableGestureRecognizerPriorityContext;	// IMP=0x002000000001b52a
- (id)presentableDismissalPreventionContext;	// IMP=0x002000000001b59c
- (id)presentableButtonEventsContext;	// IMP=0x002000000001b60e
@property(readonly, nonatomic) id <SBUISystemApertureElementContext> systemApertureElementContext;
@property(readonly, nonatomic) id <SBUISystemApertureHostedElementContext> systemApertureHostedElementContext;
@property(readonly, nonatomic) id <SBUISystemApertureElementContextPrivate> systemApertureElementContextPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface PXViewControllerDismissalInteractionController : NSObject
{
    MISSING_TYPE *viewControllerCanBeDismissed;	// 8 = 0x8
    MISSING_TYPE *viewController;	// 16 = 0x10
    MISSING_TYPE *transitioningViewController;	// 24 = 0x18
    MISSING_TYPE *viewControllerTransition;	// 32 = 0x20
    MISSING_TYPE *grabber;	// 40 = 0x28
    MISSING_TYPE *swipeDownGestureRecognizer;	// 48 = 0x30
    MISSING_TYPE *grabberSwipeDownGestureRecognizer;	// 56 = 0x38
    MISSING_TYPE *grabberTapGestureRecognizer;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_proxy;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_logger;	// 3850979413 = 0xe5894855
    MISSING_TYPE *isConfigured;	// 1106544961 = 0x41f48941
    MISSING_TYPE *wantsInteractiveDismissal;	// 2370596989 = 0x8d4c707d
    MISSING_TYPE *currentSwipeDownDismissalController;	// 1413567809 = 0x54415541
    MISSING_TYPE *currentBasicSwipeDownTransition;	// 1962313000 = 0x74f68528
}

- (void).cxx_destruct;	// IMP=0x000000000011d1a0
- (id)init;	// IMP=0x000000000011e640
- (void)handleTapOnGrabAffordance:(id)arg1;	// IMP=0x000000000011dc90
- (void)handleSwipeDown:(id)arg1;	// IMP=0x000000000011dc40
- (void)dealloc;	// IMP=0x000000000011d180
@property(nonatomic) _Bool viewControllerCanBeDismissed; // @synthesize viewControllerCanBeDismissed;
- (void)viewControllerViewWillLayoutSubviews;	// IMP=0x000000000011cb20
- (id)initWithViewController:(id)arg1;	// IMP=0x000000000011cad0

@end

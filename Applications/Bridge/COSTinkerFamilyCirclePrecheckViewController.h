//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString;
@protocol COSBuddyControllerDelegate;

@interface COSTinkerFamilyCirclePrecheckViewController : UIViewController
{
    id <COSBuddyControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000012af62
@property(nonatomic) __weak id <COSBuddyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)holdActivityIdentifier;	// IMP=0x001000000012af3c
- (_Bool)controllerAllowsNavigatingBackTo;	// IMP=0x001000000012af34
- (void)_fetchFamilyCircle;	// IMP=0x001000000012a551
- (void)didPushWaitScreen;	// IMP=0x0010000000129fd7
- (void)handleRepairFailureWithError:(id)arg1;	// IMP=0x0010000000129d7a
- (void)failPrecheckWithTitle:(id)arg1 body:(id)arg2 withPresentingController:(id)arg3;	// IMP=0x0010000000129c2f
- (id)localizedWaitScreenDescription;	// IMP=0x0010000000129bc3
- (double)waitScreenPushGracePeriod;	// IMP=0x0010000000129bba
- (_Bool)holdWithWaitScreen;	// IMP=0x0010000000129bb2
- (_Bool)holdBeforeDisplaying;	// IMP=0x0010000000129baa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

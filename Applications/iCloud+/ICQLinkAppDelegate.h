//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface ICQLinkAppDelegate : UIResponder
{
}

- (void)launchURL:(id)arg1;	// IMP=0x0020000000002a18
- (void)launchSettingsDeeplink;	// IMP=0x00100000000029d7
- (void)launchFlowWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000002996
- (void)performActionForLink:(id)arg1;	// IMP=0x0010000000002981
- (void)handleUpsellUIResultWithContext:(id)arg1 offerManager:(id)arg2;	// IMP=0x0010000000002571
- (_Bool)handleICQLinkResult:(long long)arg1 url:(id)arg2;	// IMP=0x00100000000024af
- (_Bool)handleUniversalLinkWithUserActivity:(id)arg1;	// IMP=0x0010000000002440

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

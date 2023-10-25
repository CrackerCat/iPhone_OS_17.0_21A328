//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString, UIWindow;

@interface SafariViewServiceApplication : UIApplication
{
    long long _currentKeyboardModifierFlags;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0020000000001bf8
@property(readonly, nonatomic) long long currentKeyboardModifierFlags;
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x001000000000202a
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001f96
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001f02
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001e6e
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000001dda
- (id)newSharedSiteMetadataManager;	// IMP=0x0010000000001d16
- (void)applicationDidFinishLaunching:(id)arg1;	// IMP=0x0010000000001cb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

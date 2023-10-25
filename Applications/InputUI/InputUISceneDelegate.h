//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class IUIInputSourceViewController, NSString, UIWindow, UIWindowScene;

@interface InputUISceneDelegate : UIResponder
{
    UIWindowScene *_windowScene;	// 8 = 0x8
    UIWindow *_keyboardWindow;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
    IUIInputSourceViewController *_keyboardContainerVC;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000d2bf
@property(retain, nonatomic) IUIInputSourceViewController *keyboardContainerVC; // @synthesize keyboardContainerVC=_keyboardContainerVC;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x001000000000d189
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x001000000000d09d
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x001000000000cff8
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x001000000000cf53
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000000ceae
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000000cbe6
- (id)sessionCoordinator;	// IMP=0x001000000000cb8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, NSString;

@protocol SBDeviceApplicationSceneStatusBarStateObserver <NSObject>

@optional
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(NSString *)arg1;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeSceneInterfaceOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeBackgroundActivitiesToSuppressTo:(NSSet *)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarOrientationTo:(long long)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(NSString *)arg3;
- (void)sceneWithIdentifier:(NSString *)arg1 didChangeStatusBarStyleTo:(long long)arg2;
@end

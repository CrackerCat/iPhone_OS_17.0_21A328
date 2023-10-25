//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAutoRotatingWindow.h"

@protocol _UIRemoteInputViewHostWindowDelegate;

__attribute__((visibility("hidden")))
@interface _UIRemoteInputViewHostWindow : UIAutoRotatingWindow
{
    id <_UIRemoteInputViewHostWindowDelegate> _hostWindowDelegate;	// 184 = 0xb8
}

+ (_Bool)_isSecure;	// IMP=0x00600000001877b6
- (void).cxx_destruct;	// IMP=0x0000000000187921
@property(nonatomic) __weak id <_UIRemoteInputViewHostWindowDelegate> hostWindowDelegate; // @synthesize hostWindowDelegate=_hostWindowDelegate;
- (_Bool)inhibitSetupOrientation;	// IMP=0x000000000018787f
- (long long)_orientationForSceneTransform;	// IMP=0x0000000000187874
- (long long)_orientationForRootTransform;	// IMP=0x0000000000187869
- (long long)_orientationForViewTransform;	// IMP=0x000000000018785e
- (_Bool)_wantsSceneAssociation;	// IMP=0x0000000000187856
- (_Bool)_isRemoteInputHostWindow;	// IMP=0x000000000018784e
- (_Bool)_alwaysGetsContexts;	// IMP=0x0000000000187846
- (_Bool)_isWindowServerHostingManaged;	// IMP=0x000000000018783e
- (_Bool)_isHostedInAnotherProcess;	// IMP=0x0000000000187836
- (_Bool)_usesWindowServerHitTesting;	// IMP=0x000000000018782e
- (double)_adjustedWindowLevelFromLevel:(double)arg1;	// IMP=0x0000000000187828
- (id)firstResponder;	// IMP=0x00000000001877ce
- (_Bool)canBecomeKeyWindow;	// IMP=0x00000000001877c6
- (_Bool)isInternalWindow;	// IMP=0x00000000001877be
- (void)_didChangeKeyplaneWithContext:(id)arg1;	// IMP=0x0000000000187779
- (id)initWithWindowScene:(id)arg1;	// IMP=0x00000000001876ed

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIWindowScene.h>

@interface UIWindowScene (AVAdditions)
+ (_Bool)avkit_supportsInteractiveCounterRotationDismissals;	// IMP=0x0060000000060592
- (void)avkit_disableTouchCancellation:(_Bool)arg1 forRotationActions:(CDUnknownBlockType)arg2;	// IMP=0x0010000000060461
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;	// IMP=0x001000000011e31f
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;	// IMP=0x001000000011e20f
- (long long)avkit_screenType;	// IMP=0x001000000011dfd6
- (id)avkit_asWindowScene;	// IMP=0x001000000011dfcd
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKSAnimationFenceHandle;

@protocol _UIViewService_FencingControlInterface

@optional
- (void)__finishParticipatingInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;
- (void)__participateInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1 timing:(struct _UIUpdateTiming)arg2;
- (void)__participateInSystemAnimationFence:(BKSAnimationFenceHandle *)arg1;
@end

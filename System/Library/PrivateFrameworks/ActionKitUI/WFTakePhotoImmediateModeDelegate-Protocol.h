//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class AVCapturePhoto, NSError, WFTakePhotoImmediateModeManager;

@protocol WFTakePhotoImmediateModeDelegate <NSObject>
- (void)managerDidBecomeReady:(WFTakePhotoImmediateModeManager *)arg1;
- (void)manager:(WFTakePhotoImmediateModeManager *)arg1 didFinishWithPhoto:(AVCapturePhoto *)arg2 error:(NSError *)arg3;
@end

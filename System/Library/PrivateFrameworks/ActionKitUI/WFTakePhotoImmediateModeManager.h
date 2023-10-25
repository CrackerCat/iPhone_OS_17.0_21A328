//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCapturePhotoOutput, AVCaptureSession, NSString;
@protocol WFTakePhotoImmediateModeDelegate;

__attribute__((visibility("hidden")))
@interface WFTakePhotoImmediateModeManager : NSObject
{
    id <WFTakePhotoImmediateModeDelegate> _delegate;	// 8 = 0x8
    long long _position;	// 16 = 0x10
    AVCaptureSession *_session;	// 24 = 0x18
    AVCapturePhotoOutput *_output;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000047543
@property(retain, nonatomic) AVCapturePhotoOutput *output; // @synthesize output=_output;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) __weak id <WFTakePhotoImmediateModeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;	// IMP=0x0000000000047408
- (void)dealloc;	// IMP=0x0000000000047386
- (void)cameraIsReady:(id)arg1;	// IMP=0x00000000000472e9
- (id)captureSessionWithDevice:(id)arg1 output:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000046fc6
- (id)configuredCaptureDeviceWithError:(id *)arg1;	// IMP=0x00000000000468c7
- (void)stop;	// IMP=0x000000000004685e
- (void)takePhotoWithError:(id *)arg1;	// IMP=0x0000000000046746
- (void)startSessionWithError:(id *)arg1;	// IMP=0x000000000004656f
- (id)initWithCameraPosition:(long long)arg1 delegate:(id)arg2;	// IMP=0x000000000004645a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

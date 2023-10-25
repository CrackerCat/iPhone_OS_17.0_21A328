//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, RPSiriAudioSession;
@protocol OS_dispatch_queue, RPMessageable;

@interface RPSiriDaemon : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    RPSiriAudioSession *_siriAudioSession;	// 16 = 0x10
    NSString *_siriSenderIDS;	// 24 = 0x18
    id <RPMessageable> _messenger;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000009983e
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
- (void)siriAudioSessionDidReceiveStopRecordingWithDeviceId:(id)arg1;	// IMP=0x001000000009981d
- (void)_handleSiriStartWhileRecording:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099741
- (void)_handleSiriStop:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009968e
- (void)_handleSiriStart:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009962c
- (void)_handleSiriAudio:(id)arg1;	// IMP=0x00100000000995a6
- (void)invalidate;	// IMP=0x00100000000994ca
- (_Bool)activateAndReturnError:(id *)arg1;	// IMP=0x00100000000990a3
- (id)init;	// IMP=0x0010000000099042

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

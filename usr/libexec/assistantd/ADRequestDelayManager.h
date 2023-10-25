//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFQueue, AFWatchdogTimer, NSString;
@protocol ADRequestDelayManagerDelegate, OS_dispatch_queue;

@interface ADRequestDelayManager : NSObject
{
    AFQueue *_delayedCommandHandlers;	// 8 = 0x8
    AFQueue *_delayedcontextCommandHandlers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    AFWatchdogTimer *_currentContextCommandsTimer;	// 32 = 0x20
    _Bool _isDelaying;	// 40 = 0x28
    id <ADRequestDelayManagerDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000104da5
@property _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(nonatomic) __weak id <ADRequestDelayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interceptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000104ada
- (_Bool)isInterceptingCommands;	// IMP=0x0010000000104ac8
- (void)_beginTimerForContextCommands;	// IMP=0x00100000001048d7
- (void)beginTimerForContextCommands;	// IMP=0x001000000010488c
- (void)releaseStoredContextCommandsAndSendCommands:(_Bool)arg1;	// IMP=0x001000000010469b
- (void)dequeueDelayedCommandsAndSend:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000010457d
- (void)stopDelayingAndSendCommands:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001044de
- (void)startDelaying;	// IMP=0x0010000000104493
- (id)_delayedcontextCommandHandlers;	// IMP=0x0010000000104458
- (id)_delayedCommandHandlers;	// IMP=0x001000000010441d
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000001043b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

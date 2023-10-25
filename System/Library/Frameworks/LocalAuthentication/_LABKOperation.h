//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKOperation, NSString, _LABKDevice;
@protocol BKOperationDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LABKOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isUserPresent;	// 16 = 0x10
    BKOperation *__BKOperation;	// 24 = 0x18
    _LABKDevice *_device;	// 32 = 0x20
    id <BKOperationDelegate> _delegate;	// 40 = 0x28
    long long _state;	// 48 = 0x30
}

+ (id)_wrapperForBKOperation:(id)arg1 device:(id)arg2;	// IMP=0x001000000002943d
- (void).cxx_destruct;	// IMP=0x000000000002a635
@property(nonatomic) _Bool isUserPresent; // @synthesize isUserPresent=_isUserPresent;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _LABKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) BKOperation *_BKOperation; // @synthesize _BKOperation=__BKOperation;
- (void)dealloc;	// IMP=0x000000000002a4df
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000002a488
- (void)operation:(id)arg1 presenceStateChanged:(_Bool)arg2;	// IMP=0x000000000002a370
- (void)operation:(id)arg1 stateChanged:(long long)arg2;	// IMP=0x000000000002a27d
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;	// IMP=0x000000000002a18a
- (void)startWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029fe1
- (_Bool)startWithError:(id *)arg1;	// IMP=0x0000000000029ec7
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000029bc6
- (void)dispatchDelegateSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000029aa3
- (id)shim;	// IMP=0x00000000000299dd
- (id)_initWithBKOperation:(id)arg1 device:(id)arg2;	// IMP=0x000000000002980a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

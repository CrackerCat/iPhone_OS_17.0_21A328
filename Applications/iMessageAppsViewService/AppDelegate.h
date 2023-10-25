//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AppDelegate : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 8 = 0x8
    NSXPCListener *_sourceListener;	// 16 = 0x10
    int _lockToken;	// 24 = 0x18
    _Bool _isLocked;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00200000000064de
- (void)_didBecomeLocked;	// IMP=0x00100000000064d3
- (oneway void)warmUp;	// IMP=0x0010000000006405
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000601d
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000005ef0
- (id)init;	// IMP=0x0010000000005cc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

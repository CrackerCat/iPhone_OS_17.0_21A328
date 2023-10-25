//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject
{
    int _listenSocket;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serverQueue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_serverSource;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    id <_RWITCPServerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000005f94
@property(readonly, nonatomic) __weak id <_RWITCPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connectionClosed:(id)arg1;	// IMP=0x0000000000005de5
- (_Bool)_createListenDispatchSource;	// IMP=0x0000000000005aff
- (_Bool)_listenOnLaunchdProvidedSocket:(const char *)arg1;	// IMP=0x00000000000059ef
- (_Bool)_listenOnPort:(unsigned short)arg1;	// IMP=0x000000000000587b
- (void)dealloc;	// IMP=0x000000000000583e
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;	// IMP=0x00000000000057e3
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;	// IMP=0x0000000000005787
- (id)_initWithDelegate:(id)arg1;	// IMP=0x00000000000056ea

@end

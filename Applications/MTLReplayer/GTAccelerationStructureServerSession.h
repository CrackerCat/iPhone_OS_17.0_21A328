//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, MTLCommandBufferDescriptor;

@interface GTAccelerationStructureServerSession : NSObject
{
    struct GTMTLReplayClient *_clientContext;	// 8 = 0x8
    unsigned long long _functionIndex;	// 16 = 0x10
    GTTransport_replayer *_transport;	// 24 = 0x18
    CDUnknownBlockType _dataHandler;	// 32 = 0x20
    MTLCommandBufferDescriptor *_commandBufferDescriptor;	// 40 = 0x28
    struct Server *_server;	// 48 = 0x30
    struct Sampler *_sampler;	// 56 = 0x38
    struct Transport *_htransport;	// 64 = 0x40
    void *_dataSource;	// 72 = 0x48
    unsigned long long sessionID;	// 80 = 0x50
    unsigned long long requestID;	// 88 = 0x58
}

+ (void)sessionWithReplayClient:(struct GTMTLReplayClient *)arg1 functionIndex:(unsigned long long)arg2 requestID:(id)arg3 transport:(id)arg4 dataHandler:(CDUnknownBlockType)arg5 accelerationStructureKey:(unsigned long long)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x004000000005a8a2
- (void).cxx_destruct;	// IMP=0x0020000000059ff1
@property unsigned long long requestID; // @synthesize requestID;
@property unsigned long long sessionID; // @synthesize sessionID;
- (void)nextSample:(unsigned long long)arg1;	// IMP=0x0010000000059ed2
- (void)receiveData:(id)arg1;	// IMP=0x0010000000059e4d
- (void)dealloc;	// IMP=0x0010000000059d5a

@end

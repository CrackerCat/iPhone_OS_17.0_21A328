//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EncoreEvent, NSString, NSXPCListenerEndpoint;

@protocol _TtP16EncoreXPCService12Receptionist_
- (void)broadcastWithEvent:(EncoreEvent *)arg1;
- (void)registerWithClient:(NSXPCListenerEndpoint *)arg1 name:(NSString *)arg2 with:(void (^)(_Bool))arg3;
@end
